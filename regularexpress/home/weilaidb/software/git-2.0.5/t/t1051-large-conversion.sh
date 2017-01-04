#!/bin/sh
test_description='test conversion filters on large files'
. ./test-lib.sh
set_attr()
check_input()
check_output()
test_expect_success 'setup input tests' '
printf "\$Id: foo\$\\r\\n" >small &&
cat small small >large &&
git config core.bigfilethreshold 20 &&
git config filter.test.clean "sed s/.*/CLEAN/"
'
test_expect_success 'autocrlf=true converts on input' '
test_config core.autocrlf true &&
check_input
'
test_expect_success 'eol=crlf converts on input' '
set_attr eol=crlf &&
check_input
'
test_expect_success 'ident converts on input' '
set_attr ident &&
check_input
'
test_expect_success 'user-defined filters convert on input' '
set_attr filter=test &&
check_input
'
test_expect_success 'setup output tests' '
echo "\$Id\$" >small &&
cat small small >large &&
git add small large &&
git config core.bigfilethreshold 7 &&
git config filter.test.smudge "sed s/.*/SMUDGE/"
'
test_expect_success 'autocrlf=true converts on output' '
test_config core.autocrlf true &&
check_output
'
test_expect_success 'eol=crlf converts on output' '
set_attr eol=crlf &&
check_output
'
test_expect_success 'user-defined filters convert on output' '
set_attr filter=test &&
check_output
'
test_expect_success 'ident converts on output' '
set_attr ident &&
rm -f small large &&
git checkout small large &&
sed -n "s/Id: .*/Id: SHA/p" <small >small.clean &&
head -n 1 large >large.head &&
sed -n "s/Id: .*/Id: SHA/p" <large.head >large.clean &&
test_cmp small.clean large.clean
'
test_done
