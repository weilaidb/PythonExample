#!/bin/sh
test_description='--all includes detached HEADs'
. ./test-lib.sh
commit ()
test_expect_success 'setup' '
commit one &&
commit two &&
git checkout HEAD^ &&
commit detached
'
test_expect_success 'rev-list --all lists detached HEAD' '
test 3 = $(git rev-list --all | wc -l)
'
test_expect_success 'repack does not lose detached HEAD' '
git gc &&
git prune --expire=now &&
git show HEAD
'
test_done
