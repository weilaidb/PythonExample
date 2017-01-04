#!/bin/sh
test_description='test @ syntax'
. ./test-lib.sh
make_commit ()
test_expect_success 'setup' '
make_commit 1 &&
git branch side &&
make_commit 2 &&
make_commit 3 &&
git checkout side &&
make_commit 4 &&
git merge master &&
git checkout master
'
# 1 -- 2 -- 3 master
#  \         \
#   \         \
#    --- 4 --- 5 side
#
# and 'side' should be the last branch
test_expect_success '@ works' '
test_cmp_rev side @
'
test_expect_success '@~2 works' '
test_cmp_rev side~2 @~2
'
test_expect_success '@^2 works' '
test_cmp_rev side^2 @^2
'
test_expect_success '@@ works' '
test_cmp_rev side@ @@
'
test_expect_success '@ works' '
test_cmp_rev master @
'
test_expect_success '@ fails' '
test_must_fail git rev-parse @
'
test_done
