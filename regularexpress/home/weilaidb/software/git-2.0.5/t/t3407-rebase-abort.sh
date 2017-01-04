#!/bin/sh
test_description='git rebase --abort tests'
. ./test-lib.sh
### Test that we handle space characters properly
work_dir="$(pwd)/test dir"
test_expect_success setup '
mkdir -p "$work_dir" &&
cd "$work_dir" &&
git init &&
echo a > a &&
git add a &&
git commit -m a &&
git branch to-rebase &&
echo b > a &&
git commit -a -m b &&
echo c > a &&
git commit -a -m c &&
git checkout to-rebase &&
echo d > a &&
git commit -a -m "merge should fail on this" &&
echo e > a &&
git commit -a -m "merge should fail on this, too" &&
git branch pre-rebase
'
testrebase()
testrebase "" .git/rebase-apply
testrebase " --merge" .git/rebase-merge
test_done
