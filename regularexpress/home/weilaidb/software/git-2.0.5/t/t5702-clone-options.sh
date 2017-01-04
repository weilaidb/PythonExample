#!/bin/sh
test_description='basic clone options'
. ./test-lib.sh
test_expect_success 'setup' '
mkdir parent &&
(cd parent && git init &&
echo one >file && git add file &&
git commit -m one)
'
test_expect_success 'clone -o' '
git clone -o foo parent clone-o &&
(cd clone-o && git rev-parse --verify refs/remotes/foo/master)
'
test_expect_success 'redirected clone does not show progress' '
git clone "file:
! grep % err &&
test_i18ngrep ! "Checking connectivity" err
'
test_expect_success 'redirected clone -v does show progress' '
git clone --progress "file:
>out 2>err &&
grep % err
'
test_done
