#!/bin/sh
test_description='selecting remote repo in ambiguous cases'
. ./test-lib.sh
reset()
make_tree()
make_bare()
get()
check()
test_expect_success 'find .git dir in worktree' '
reset &&
make_tree foo &&
get foo &&
check foo
'
test_expect_success 'automagically add .git suffix' '
reset &&
make_bare foo.git &&
get foo &&
check foo.git
'
test_expect_success 'automagically add .git suffix to worktree' '
reset &&
make_tree foo.git &&
get foo &&
check foo.git
'
test_expect_success 'prefer worktree foo over bare foo.git' '
reset &&
make_tree foo &&
make_bare foo.git &&
get foo &&
check foo
'
test_expect_success 'prefer bare foo over bare foo.git' '
reset &&
make_bare foo &&
make_bare foo.git &&
get foo &&
check foo
'
test_expect_success 'disambiguate with full foo.git' '
reset &&
make_bare foo &&
make_bare foo.git &&
get foo.git &&
check foo.git
'
test_expect_success 'we are not fooled by non-git foo directory' '
reset &&
make_bare foo.git &&
mkdir foo &&
get foo &&
check foo.git
'
test_expect_success 'prefer inner .git over outer bare' '
reset &&
make_tree foo &&
make_bare foo.git &&
mv foo/.git foo.git &&
get foo.git &&
check foo
'
test_done
