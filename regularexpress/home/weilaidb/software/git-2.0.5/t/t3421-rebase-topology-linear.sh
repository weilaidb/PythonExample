#!/bin/sh
test_description='basic rebase topology tests'
. ./test-lib.sh
. "$TEST_DIRECTORY"/lib-rebase.sh
# a---b---c
#      \
#       d---e
test_expect_success 'setup' '
test_commit a &&
test_commit b &&
test_commit c &&
git checkout b &&
test_commit d &&
test_commit e
'
test_run_rebase ()
test_run_rebase success ''
test_run_rebase success -m
test_run_rebase success -i
test_run_rebase success -p
test_run_rebase ()
test_run_rebase success ''
test_run_rebase success -m
test_run_rebase success -i
test_run_rebase success -p
test_run_rebase ()
test_run_rebase success ''
test_run_rebase success -m
test_run_rebase success -i
test_run_rebase failure -p
test_run_rebase ()
test_run_rebase success ''
test_run_rebase success -m
test_run_rebase success -i
test_run_rebase success -p
#       f
#      /
# a---b---c---g---h
#      \
#       d---gp--i
#
# gp = cherry-picked g
# h = reverted g
#
# Reverted patches are there for tests to be able to check if a commit
# that introduced the same change as another commit is
# dropped. Without reverted commits, we could get false positives
# because applying the patch succeeds, but simply results in no
# changes.
test_expect_success 'setup of linear history for range selection tests' '
git checkout c &&
test_commit g &&
revert h g &&
git checkout d &&
cherry_pick gp g &&
test_commit i &&
git checkout b &&
test_commit f
'
test_run_rebase ()
test_run_rebase success ''
test_run_rebase failure -m
test_run_rebase success -i
test_run_rebase success -p
test_run_rebase ()
test_run_rebase success ''
test_run_rebase failure -m
test_run_rebase success -i
test_run_rebase success -p
test_run_rebase ()
test_run_rebase success ''
test_run_rebase failure -m
test_run_rebase success -i
test_run_rebase success -p
test_run_rebase ()
test_run_rebase success ''
test_run_rebase success -m
test_run_rebase success -i
test_run_rebase success -p
# a---b---c---j!
#      \
#       d---k!--l
#
# ! = empty
test_expect_success 'setup of linear history for empty commit tests' '
git checkout c &&
make_empty j &&
git checkout d &&
make_empty k &&
test_commit l
'
test_run_rebase ()
test_run_rebase success ''
test_run_rebase success -m
test_run_rebase success -i
test_run_rebase success -p
test_run_rebase ()
test_run_rebase success ''
test_run_rebase failure -m
test_run_rebase success -i
test_run_rebase failure -p
test_run_rebase ()
test_run_rebase success ''
test_run_rebase failure -m
test_run_rebase failure -i
test_run_rebase failure -p
#       m
#      /
# a---b---c---g
#
# x---y---bp
#
# bp = cherry-picked b
# m = reverted b
#
# Reverted patches are there for tests to be able to check if a commit
# that introduced the same change as another commit is
# dropped. Without reverted commits, we could get false positives
# because applying the patch succeeds, but simply results in no
# changes.
test_expect_success 'setup of linear history for test involving root' '
git checkout b &&
revert m b &&
git checkout --orphan disjoint &&
git rm -rf . &&
test_commit x &&
test_commit y &&
cherry_pick bp b
'
test_run_rebase ()
test_run_rebase success ''
test_run_rebase failure -m
test_run_rebase success -i
test_run_rebase success -p
test_run_rebase ()
test_run_rebase success ''
test_run_rebase failure -m
test_run_rebase success -i
test_run_rebase failure -p
test_run_rebase ()
test_run_rebase success ''
test_run_rebase failure -m
test_run_rebase success -i
test_run_rebase success -p
test_run_rebase ()
test_run_rebase success ''
test_run_rebase success -m
test_run_rebase success -i
test_run_rebase failure -p
test_run_rebase ()
test_run_rebase success ''
test_run_rebase failure -m
test_run_rebase success -i
test_run_rebase failure -p
test_run_rebase ()
test_run_rebase failure ''
test_run_rebase failure -m
test_run_rebase failure -i
test_run_rebase failure -p
test_run_rebase ()
test_run_rebase success ''
test_run_rebase success -m
test_run_rebase success -i
test_run_rebase success -p
test_done
