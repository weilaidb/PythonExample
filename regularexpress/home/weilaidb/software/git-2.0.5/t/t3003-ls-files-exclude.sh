#!/bin/sh
test_description='ls-files --exclude does not affect index files'
. ./test-lib.sh
test_expect_success 'create repo with file' '
echo content >file &&
git add file &&
git commit -m file &&
echo modification >file
'
check_output()
check_all_output()
check_all_output
test_expect_success 'add file to gitignore' '
echo file >.gitignore
'
check_all_output
test_expect_success 'ls-files -i lists only tracked-but-ignored files' '
echo content >other-file &&
git add other-file &&
echo file >expect &&
git ls-files -i --exclude-standard >output &&
test_cmp expect output
'
test_done
