#!/bin/sh
test_description='previous branch syntax @'
. ./test-lib.sh
test_expect_success 'branch -d @' '
test_commit A &&
git checkout -b junk &&
git checkout - &&
test "$(git symbolic-ref HEAD)" = refs/heads/master &&
git branch -d @ &&
test_must_fail git rev-parse --verify refs/heads/junk
'
test_expect_success 'branch -d @ when there is not enough switches yet' '
git reflog expire --expire=now &&
git checkout -b junk2 &&
git checkout - &&
test "$(git symbolic-ref HEAD)" = refs/heads/master &&
test_must_fail git branch -d @ &&
git rev-parse --verify refs/heads/master
'
test_expect_success 'merge @' '
git checkout A &&
test_commit B &&
git checkout A &&
test_commit C &&
test_commit D &&
git branch -f master B &&
git branch -f other &&
git checkout other &&
git checkout master &&
git merge @ &&
git cat-file commit HEAD | grep "Merge branch '\''other'\''"
'
test_expect_success 'merge @~1' '
git checkout master &&
git reset --hard B &&
git checkout other &&
git checkout master &&
git merge @~1 &&
git cat-file commit HEAD >actual &&
grep "Merge branch '\''other'\''" actual
'
test_expect_success 'merge @ before checking out that many branches yet' '
git reflog expire --expire=now &&
git checkout -f master &&
git reset --hard B &&
git branch -f other C &&
git checkout other &&
git checkout master &&
test_must_fail git merge @
'
test_done
