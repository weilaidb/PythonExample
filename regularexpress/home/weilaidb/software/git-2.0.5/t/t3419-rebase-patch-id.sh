#!/bin/sh
test_description='git rebase - test patch id computation'
. ./test-lib.sh
test_set_prereq NOT_EXPENSIVE
test -n "$GIT_PATCHID_TIMING_TESTS" && test_set_prereq EXPENSIVE
test -x /usr/bin/time && test_set_prereq USR_BIN_TIME
count()
scramble()
run()
test_expect_success 'setup' '
git commit --allow-empty -m initial &&
git tag root
'
do_tests()
do_tests NOT_EXPENSIVE 500
do_tests EXPENSIVE 50000
test_done
