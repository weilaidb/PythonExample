#!/bin/sh
test_description='test various @ syntax combinations together'
. ./test-lib.sh
check()
nonsense()
fail()
test_expect_success 'setup' '
test_commit master-one &&
test_commit master-two &&
git checkout -b upstream-branch &&
test_commit upstream-one &&
test_commit upstream-two &&
git checkout -b @/at-test &&
git checkout -b @@/at-test &&
git checkout -b @at-test &&
git checkout -b old-branch &&
test_commit old-one &&
test_commit old-two &&
git checkout -b new-branch &&
test_commit new-one &&
test_commit new-two &&
git branch -u master old-branch &&
git branch -u upstream-branch new-branch
'
check HEAD ref refs/heads/new-branch
check "@" commit new-one
check "HEAD@" commit new-one
check "@" commit new-two
check "HEAD@" commit new-two
check "@" ref refs/heads/old-branch
check "@@" commit old-two
check "@@" commit old-one
check "@" ref refs/heads/upstream-branch
check "HEAD@" ref refs/heads/upstream-branch
check "@@" commit upstream-one
check "@@" ref refs/heads/master
check "@@@" commit master-one
check "@" commit new-two
check "@@" ref refs/heads/upstream-branch
check "@@/at-test" ref refs/heads/@@/at-test
check "@/at-test" ref refs/heads/@/at-test
check "@at-test" ref refs/heads/@at-test
nonsense "@@"
nonsense "@@"
nonsense "@@"
nonsense "HEAD@"
nonsense "@@"
# @ versus HEAD@
check "HEAD@" commit old-two
nonsense "@"
test_expect_success 'switch to old-branch' '
git checkout old-branch
'
check HEAD ref refs/heads/old-branch
check "HEAD@" commit new-two
check "@" commit old-one
test_expect_success 'create path with @' '
echo content >normal &&
echo content >fun@ny &&
git add normal fun@ny &&
git commit -m "funny path"
'
check "@:normal" blob content
check "@:fun@ny" blob content
test_done
