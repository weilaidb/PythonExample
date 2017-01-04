#!/bin/sh
test_description='various @ syntax tests'
. ./test-lib.sh
test_expect_success 'setup' '
test_commit one &&
test_commit two
'
check_at()
test_expect_success '@ shows current' '
check_at @ two
'
test_expect_success '@ shows old' '
check_at @ one
'
test_expect_success '@ shows current' '
check_at @ two
'
test_expect_success '@ (before the first commit) shows old' '
check_at @ one
'
test_expect_success 'silly approxidates work' '
check_at @ one
'
test_expect_success 'notice misspelled upstream' '
test_must_fail git log -1 --format=%s @
'
test_expect_success 'complain about total nonsense' '
test_must_fail git log -1 --format=%s @
'
test_done
