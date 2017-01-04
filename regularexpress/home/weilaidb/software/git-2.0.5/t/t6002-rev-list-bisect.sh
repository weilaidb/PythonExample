#!/bin/sh
#
# Copyright (c) 2005 Jon Seymour
#
test_description='Tests git rev-list --bisect functionality'
. ./test-lib.sh
. "$TEST_DIRECTORY"/lib-t6000.sh # t6xxx specific functions
# usage: test_bisection max-diff bisect-option head ^prune...
#
# e.g. test_bisection 1 --bisect l1 ^l0
#
test_bisection_diff()
date >path0
git update-index --add path0
save_tag tree git write-tree
on_committer_date "00:00" hide_error save_tag root unique_commit root tree
on_committer_date "00:01" save_tag l0 unique_commit l0 tree -p root
on_committer_date "00:02" save_tag l1 unique_commit l1 tree -p l0
on_committer_date "00:03" save_tag l2 unique_commit l2 tree -p l1
on_committer_date "00:04" save_tag a0 unique_commit a0 tree -p l2
on_committer_date "00:05" save_tag a1 unique_commit a1 tree -p a0
on_committer_date "00:06" save_tag b1 unique_commit b1 tree -p a0
on_committer_date "00:07" save_tag c1 unique_commit c1 tree -p b1
on_committer_date "00:08" save_tag b2 unique_commit b2 tree -p b1
on_committer_date "00:09" save_tag b3 unique_commit b2 tree -p b2
on_committer_date "00:10" save_tag c2 unique_commit c2 tree -p c1 -p b2
on_committer_date "00:11" save_tag c3 unique_commit c3 tree -p c2
on_committer_date "00:12" save_tag a2 unique_commit a2 tree -p a1
on_committer_date "00:13" save_tag a3 unique_commit a3 tree -p a2
on_committer_date "00:14" save_tag b4 unique_commit b4 tree -p b3 -p a3
on_committer_date "00:15" save_tag a4 unique_commit a4 tree -p a3 -p b4 -p c3
on_committer_date "00:16" save_tag l3 unique_commit l3 tree -p a4
on_committer_date "00:17" save_tag l4 unique_commit l4 tree -p l3
on_committer_date "00:18" save_tag l5 unique_commit l5 tree -p l4
git update-ref HEAD $(tag l5)
#     E
#    / \
#   e1  |
#   |   |
#   e2  |
#   |   |
#   e3  |
#   |   |
#   e4  |
#   |   |
#   |   f1
#   |   |
#   |   f2
#   |   |
#   |   f3
#   |   |
#   |   f4
#   |   |
#   e5  |
#   |   |
#   e6  |
#   |   |
#   e7  |
#   |   |
#   e8  |
#    \ /
#     F
on_committer_date "00:00" hide_error save_tag F unique_commit F tree
on_committer_date "00:01" save_tag e8 unique_commit e8 tree -p F
on_committer_date "00:02" save_tag e7 unique_commit e7 tree -p e8
on_committer_date "00:03" save_tag e6 unique_commit e6 tree -p e7
on_committer_date "00:04" save_tag e5 unique_commit e5 tree -p e6
on_committer_date "00:05" save_tag f4 unique_commit f4 tree -p F
on_committer_date "00:06" save_tag f3 unique_commit f3 tree -p f4
on_committer_date "00:07" save_tag f2 unique_commit f2 tree -p f3
on_committer_date "00:08" save_tag f1 unique_commit f1 tree -p f2
on_committer_date "00:09" save_tag e4 unique_commit e4 tree -p e5
on_committer_date "00:10" save_tag e3 unique_commit e3 tree -p e4
on_committer_date "00:11" save_tag e2 unique_commit e2 tree -p e3
on_committer_date "00:12" save_tag e1 unique_commit e1 tree -p e2
on_committer_date "00:13" save_tag E unique_commit E tree -p e1 -p f1
on_committer_date "00:00" hide_error save_tag U unique_commit U tree
on_committer_date "00:01" save_tag u0 unique_commit u0 tree -p U
on_committer_date "00:01" save_tag u1 unique_commit u1 tree -p u0
on_committer_date "00:02" save_tag u2 unique_commit u2 tree -p u0
on_committer_date "00:03" save_tag u3 unique_commit u3 tree -p u0
on_committer_date "00:04" save_tag u4 unique_commit u4 tree -p u0
on_committer_date "00:05" save_tag u5 unique_commit u5 tree -p u0
on_committer_date "00:06" save_tag V unique_commit V tree -p u1 -p u2 -p u3 -p u4 -p u5
test_sequence()
test_sequence "--bisect"
#
#
test_done
