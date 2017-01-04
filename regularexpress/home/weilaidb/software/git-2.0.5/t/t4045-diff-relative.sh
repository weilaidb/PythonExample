#!/bin/sh
test_description='diff --relative tests'
. ./test-lib.sh
test_expect_success 'setup' '
git commit --allow-empty -m empty &&
echo content >file1 &&
mkdir subdir &&
echo other content >subdir/file2 &&
git add . &&
git commit -m one
'
check_diff()
check_numstat()
check_stat()
check_raw()
for type in diff numstat stat raw; do
check_$type file2 --relative=subdir/
check_$type file2 --relative=subdir
check_$type dir/file2 --relative=sub
done
test_done
