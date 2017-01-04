#!/bin/sh
test_description='test subject preservation with format-patch | am'
. ./test-lib.sh
make_patches()
check_subject()
test_expect_success 'setup baseline commit' '
test_commit baseline file
'
SHORT_SUBJECT='short subject'
make_patches short "$SHORT_SUBJECT"
LONG_SUBJECT1='this is a long subject that is virtually guaranteed'
LONG_SUBJECT2='to require wrapping via format-patch if it is all'
LONG_SUBJECT3='going to appear on a single line'
LONG_SUBJECT="$LONG_SUBJECT1 $LONG_SUBJECT2 $LONG_SUBJECT3"
make_patches long "$LONG_SUBJECT"
MULTILINE_SUBJECT="$LONG_SUBJECT1
$LONG_SUBJECT2
$LONG_SUBJECT3"
make_patches multiline "$MULTILINE_SUBJECT"
echo "$SHORT_SUBJECT" >expect
test_expect_success 'short subject preserved (format-patch | am)' '
check_subject short
'
test_expect_success 'short subject preserved (format-patch -k | am)' '
check_subject short-k
'
test_expect_success 'short subject preserved (format-patch -k | am -k)' '
check_subject short-k -k
'
echo "$LONG_SUBJECT" >expect
test_expect_success 'long subject preserved (format-patch | am)' '
check_subject long
'
test_expect_success 'long subject preserved (format-patch -k | am)' '
check_subject long-k
'
test_expect_success 'long subject preserved (format-patch -k | am -k)' '
check_subject long-k -k
'
echo "$LONG_SUBJECT" >expect
test_expect_success 'multiline subject unwrapped (format-patch | am)' '
check_subject multiline
'
test_expect_success 'multiline subject unwrapped (format-patch -k | am)' '
check_subject multiline-k
'
echo "$MULTILINE_SUBJECT" >expect
test_expect_success 'multiline subject preserved (format-patch -k | am -k)' '
check_subject multiline-k -k
'
test_done
