#!/bin/sh
test_description='prepare-commit-msg hook'
. ./test-lib.sh
test_expect_success 'with no hook' '
echo "foo" > file &&
git add file &&
git commit -m "first"
'
# set up fake editor for interactive editing
cat > fake-editor <<'EOF'
#!/bin/sh
exit 0
EOF
chmod +x fake-editor
## Not using test_set_editor here so we can easily ensure the editor variable
## is only set for the editor tests
FAKE_EDITOR="$(pwd)/fake-editor"
export FAKE_EDITOR
# now install hook that always succeeds and adds a message
HOOKDIR="$(git rev-parse --git-dir)/hooks"
HOOK="$HOOKDIR/prepare-commit-msg"
mkdir -p "$HOOKDIR"
echo "#!$SHELL_PATH" > "$HOOK"
cat >> "$HOOK" <<'EOF'
if test "$2" = commit; then
source=$(git rev-parse "$3")
else
source=$
fi
if test "$GIT_EDITOR" = :; then
sed -e "1s/.*/$source (no editor)/" "$1" > msg.tmp
else
sed -e "1s/.*/$source/" "$1" > msg.tmp
fi
mv msg.tmp "$1"
exit 0
EOF
chmod +x "$HOOK"
echo dummy template > "$(git rev-parse --git-dir)/template"
test_expect_success 'with hook (-m)' '
echo "more" >> file &&
git add file &&
git commit -m "more" &&
test "`git log -1 --pretty=format:%s`" = "message (no editor)"
'
test_expect_success 'with hook (-m editor)' '
echo "more" >> file &&
git add file &&
GIT_EDITOR="\"\$FAKE_EDITOR\"" git commit -e -m "more more" &&
test "`git log -1 --pretty=format:%s`" = message
'
test_expect_success 'with hook (-t)' '
echo "more" >> file &&
git add file &&
git commit -t "$(git rev-parse --git-dir)/template" &&
test "`git log -1 --pretty=format:%s`" = template
'
test_expect_success 'with hook (-F)' '
echo "more" >> file &&
git add file &&
(echo more | git commit -F -) &&
test "`git log -1 --pretty=format:%s`" = "message (no editor)"
'
test_expect_success 'with hook (-F editor)' '
echo "more" >> file &&
git add file &&
(echo more more | GIT_EDITOR="\"\$FAKE_EDITOR\"" git commit -e -F -) &&
test "`git log -1 --pretty=format:%s`" = message
'
test_expect_success 'with hook (-C)' '
head=`git rev-parse HEAD` &&
echo "more" >> file &&
git add file &&
git commit -C $head &&
test "`git log -1 --pretty=format:%s`" = "$head (no editor)"
'
test_expect_success 'with hook (editor)' '
echo "more more" >> file &&
git add file &&
GIT_EDITOR="\"\$FAKE_EDITOR\"" git commit &&
test "`git log -1 --pretty=format:%s`" = default
'
test_expect_success 'with hook (--amend)' '
head=`git rev-parse HEAD` &&
echo "more" >> file &&
git add file &&
GIT_EDITOR="\"\$FAKE_EDITOR\"" git commit --amend &&
test "`git log -1 --pretty=format:%s`" = "$head"
'
test_expect_success 'with hook (-c)' '
head=`git rev-parse HEAD` &&
echo "more" >> file &&
git add file &&
GIT_EDITOR="\"\$FAKE_EDITOR\"" git commit -c $head &&
test "`git log -1 --pretty=format:%s`" = "$head"
'
test_expect_success 'with hook (merge)' '
test_when_finished "git checkout -f master" &&
git checkout -B other HEAD@ &&
echo "more" >>file &&
git add file &&
git commit -m other &&
git checkout - &&
git merge --no-ff other &&
test "`git log -1 --pretty=format:%s`" = "merge (no editor)"
'
test_expect_success 'with hook and editor (merge)' '
test_when_finished "git checkout -f master" &&
git checkout -B other HEAD@ &&
echo "more" >>file &&
git add file &&
git commit -m other &&
git checkout - &&
env GIT_EDITOR="\"\$FAKE_EDITOR\"" git merge --no-ff -e other &&
test "`git log -1 --pretty=format:%s`" = "merge"
'
cat > "$HOOK" <<'EOF'
#!/bin/sh
exit 1
EOF
test_expect_success 'with failing hook' '
test_when_finished "git checkout -f master" &&
head=`git rev-parse HEAD` &&
echo "more" >> file &&
git add file &&
test_must_fail env GIT_EDITOR="\"\$FAKE_EDITOR\"" git commit -c $head
'
test_expect_success 'with failing hook (--no-verify)' '
test_when_finished "git checkout -f master" &&
head=`git rev-parse HEAD` &&
echo "more" >> file &&
git add file &&
test_must_fail env GIT_EDITOR="\"\$FAKE_EDITOR\"" git commit --no-verify -c $head
'
test_expect_success 'with failing hook (merge)' '
test_when_finished "git checkout -f master" &&
git checkout -B other HEAD@ &&
echo "more" >> file &&
git add file &&
rm -f "$HOOK" &&
git commit -m other &&
write_script "$HOOK" <<-EOF &&
exit 1
EOF
git checkout - &&
test_must_fail git merge --no-ff other
'
test_done
