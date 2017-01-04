#!/bin/sh
test_description='Test wacky input to git config'
. ./test-lib.sh
# Leaving off the newline is intentional!
setup()
# 'check section.key value' verifies that the entry for section.key is
# 'value'
check()
# 'check section.key regex value' verifies that the entry for
# section.key *that matches 'regex'* is 'value'
check_regex()
test_expect_success 'modify same key' '
setup &&
git config section.key bar &&
check section.key bar
'
test_expect_success 'add key in same section' '
setup &&
git config section.other bar &&
check section.key foo &&
check section.other bar
'
test_expect_success 'add key in different section' '
setup &&
git config section2.key bar &&
check section.key foo &&
check section2.key bar
'
SECTION="test.q\"s\\sq'sp e.key"
test_expect_success 'make sure git config escapes section names properly' '
git config "$SECTION" bar &&
check "$SECTION" bar
'
LONG_VALUE=$(printf "x%01021dx a" 7)
test_expect_success 'do not crash on special long config line' '
setup &&
git config section.key "$LONG_VALUE" &&
check section.key "$LONG_VALUE"
'
setup_many()
test_expect_success 'get many entries' '
setup_many &&
git config --get-all section.key >actual &&
test_line_count = 3126 actual
'
test_expect_success 'get many entries by regex' '
setup_many &&
git config --get-regexp "sec.*ke." >actual &&
test_line_count = 3126 actual
'
test_expect_success 'add and replace one of many entries' '
setup_many &&
git config --add section.key bar &&
check_regex section.key "b.*r" bar &&
git config section.key beer "b.*r" &&
check_regex section.key "b.*r" beer
'
test_expect_success 'replace many entries' '
setup_many &&
git config --replace-all section.key bar &&
check section.key bar
'
test_expect_success 'unset many entries' '
setup_many &&
git config --unset-all section.key &&
test_must_fail git config section.key
'
test_done
