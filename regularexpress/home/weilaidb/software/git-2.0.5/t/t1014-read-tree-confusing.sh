#!/bin/sh
test_description='check that read-tree rejects confusing paths'
. ./test-lib.sh
test_expect_success 'create base tree' '
echo content >file &&
git add file &&
git commit -m base &&
blob=$(git rev-parse HEAD:file) &&
tree=$(git rev-parse HEAD^)
'
test_expect_success 'enable core.protectHFS for rejection tests' '
git config core.protectHFS true
'
test_expect_success 'enable core.protectNTFS for rejection tests' '
git config core.protectNTFS true
'
while read path pretty; do
: $
case "$path" in
*SPACE)
path="$ "
;;
esac
test_expect_success "reject $pretty at end of path" '
printf "100644 blob %s\t%s" "$blob" "$path" >tree &&
bogus=$(git mktree <tree) &&
test_must_fail git read-tree $bogus
'
test_expect_success "reject $pretty as subtree" '
printf "040000 tree %s\t%s" "$tree" "$path" >tree &&
bogus=$(git mktree <tree) &&
test_must_fail git read-tree $bogus
'
done <<-EOF
.
..
.git
.GIT
$.Git .Git
.gI$T .gIT
.GiT$ .GiT
git~1
.git.SPACE .git.
.\\\\.GIT\\\\foobar backslashes
.git\\\\foobar backslashes2
EOF
test_expect_success 'utf-8 paths allowed with core.protectHFS off' '
test_when_finished "git read-tree HEAD" &&
test_config core.protectHFS false &&
printf "100644 blob %s\t%s" "$blob" ".gi$t" >tree &&
ok=$(git mktree <tree) &&
git read-tree $ok
'
test_done
