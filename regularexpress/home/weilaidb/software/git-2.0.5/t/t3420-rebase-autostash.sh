#!/bin/sh
#
# Copyright (c) 2013 Ramkumar Ramachandra
#
test_description='git rebase --autostash tests'
. ./test-lib.sh
test_expect_success setup '
echo hello-world >file0 &&
git add . &&
test_tick &&
git commit -m "initial commit" &&
git checkout -b feature-branch &&
echo another-hello >file1 &&
echo goodbye >file2 &&
git add . &&
test_tick &&
git commit -m "second commit" &&
echo final-goodbye >file3 &&
git add . &&
test_tick &&
git commit -m "third commit" &&
git checkout -b unrelated-onto-branch master &&
echo unrelated >file4 &&
git add . &&
test_tick &&
git commit -m "unrelated commit" &&
git checkout -b related-onto-branch master &&
echo conflicting-change >file2 &&
git add . &&
test_tick &&
git commit -m "related commit"
'
testrebase()
test_expect_success "rebase: fast-forward rebase" '
test_config rebase.autostash true &&
git reset --hard &&
git checkout -b behind-feature-branch feature-branch~1 &&
test_when_finished git branch -D behind-feature-branch &&
echo dirty >>file1 &&
git rebase feature-branch &&
grep dirty file1 &&
git checkout feature-branch
'
test_expect_success "rebase: noop rebase" '
test_config rebase.autostash true &&
git reset --hard &&
git checkout -b same-feature-branch feature-branch &&
test_when_finished git branch -D same-feature-branch &&
echo dirty >>file1 &&
git rebase feature-branch &&
grep dirty file1 &&
git checkout feature-branch
'
testrebase "" .git/rebase-apply
testrebase " --merge" .git/rebase-merge
testrebase " --interactive" .git/rebase-merge
test_expect_success 'abort rebase -i with --autostash' '
test_when_finished "git reset --hard" &&
echo uncommited-content >file0 &&
(
write_script abort-editor.sh <<-\EOF &&
echo >"$1"
EOF
test_set_editor "$(pwd)/abort-editor.sh" &&
test_must_fail git rebase -i --autostash HEAD^ &&
rm -f abort-editor.sh
) &&
echo uncommited-content >expected &&
test_cmp expected file0
'
test_done
