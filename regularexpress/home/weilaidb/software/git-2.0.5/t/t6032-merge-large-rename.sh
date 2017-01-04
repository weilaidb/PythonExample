#!/bin/sh
test_description='merging with large rename matrix'
. ./test-lib.sh
count()
test_expect_success 'setup (initial)' '
touch file &&
git add . &&
git commit -m initial &&
git tag initial
'
make_text()
test_rename()
test_rename 5 ok
test_expect_success 'set diff.renamelimit to 4' '
git config diff.renamelimit 4
'
test_rename 4 ok
test_rename 5 fail
test_expect_success 'set merge.renamelimit to 5' '
git config merge.renamelimit 5
'
test_rename 5 ok
test_rename 6 fail
test_expect_success 'setup large simple rename' '
git config --unset merge.renamelimit &&
git config --unset diff.renamelimit &&
git reset --hard initial &&
for i in $(count 200); do
make_text foo bar baz >$i
done &&
git add . &&
git commit -m create-files &&
git branch simple-change &&
git checkout -b simple-rename &&
mkdir builtin &&
git mv [0-9]* builtin/ &&
git commit -m renamed &&
git checkout simple-change &&
>unrelated-change &&
git add unrelated-change &&
git commit -m unrelated-change
'
test_expect_success 'massive simple rename does not spam added files' '
sane_unset GIT_MERGE_VERBOSITY &&
git merge --no-stat simple-rename | grep -v Removing >output &&
test_line_count -lt 5 output
'
test_done
