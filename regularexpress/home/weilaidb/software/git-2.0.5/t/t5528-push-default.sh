#!/bin/sh
test_description='check various push.default settings'
. ./test-lib.sh
test_expect_success 'setup bare remotes' '
git init --bare repo1 &&
git remote add parent1 repo1 &&
git init --bare repo2 &&
git remote add parent2 repo2 &&
test_commit one &&
git push parent1 HEAD &&
git push parent2 HEAD
'
# $1 = local revision
# $2 = remote revision (tested to be equal to the local one)
# $3 = [optional] repo to check for actual output (repo1 by default)
check_pushed_commit ()
# $1 = push.default value
# $2 = expected target branch for the push
# $3 = [optional] repo to check for actual output (repo1 by default)
test_push_success ()
# $1 = push.default value
# check that push fails and does not modify any remote branch
test_push_failure ()
# $1 = success or failure
# $2 = push.default value
# $3 = branch to check for actual output (master or foo)
# $4 = [optional] switch to triangular workflow
test_pushdefault_workflow ()
test_expect_success '"upstream" pushes to configured upstream' '
git checkout master &&
test_config branch.master.remote parent1 &&
test_config branch.master.merge refs/heads/foo &&
test_commit two &&
test_push_success upstream foo
'
test_expect_success '"upstream" does not push on unconfigured remote' '
git checkout master &&
test_unconfig branch.master.remote &&
test_commit three &&
test_push_failure upstream
'
test_expect_success '"upstream" does not push on unconfigured branch' '
git checkout master &&
test_config branch.master.remote parent1 &&
test_unconfig branch.master.merge &&
test_commit four &&
test_push_failure upstream
'
test_expect_success '"upstream" does not push when remotes do not match' '
git checkout master &&
test_config branch.master.remote parent1 &&
test_config branch.master.merge refs/heads/foo &&
test_config push.default upstream &&
test_commit five &&
test_must_fail git push parent2
'
test_expect_success 'push from/to new branch with upstream, matching and simple' '
git checkout -b new-branch &&
test_push_failure simple &&
test_push_failure matching &&
test_push_failure upstream
'
test_expect_success 'push from/to new branch with current creates remote branch' '
test_config branch.new-branch.remote repo1 &&
git checkout new-branch &&
test_push_success current new-branch
'
test_expect_success 'push to existing branch, with no upstream configured' '
test_config branch.master.remote repo1 &&
git checkout master &&
test_push_failure simple &&
test_push_failure upstream
'
test_expect_success 'push to existing branch, upstream configured with same name' '
test_config branch.master.remote repo1 &&
test_config branch.master.merge refs/heads/master &&
git checkout master &&
test_commit six &&
test_push_success upstream master &&
test_commit seven &&
test_push_success simple master
'
test_expect_success 'push to existing branch, upstream configured with different name' '
test_config branch.master.remote repo1 &&
test_config branch.master.merge refs/heads/other-name &&
git checkout master &&
test_commit eight &&
test_push_success upstream other-name &&
test_commit nine &&
test_push_failure simple &&
git --git-dir=repo1 log -1 --format="%h %s" "other-name" >expect-other-name &&
test_push_success current master &&
git --git-dir=repo1 log -1 --format="%h %s" "other-name" >actual-other-name &&
test_cmp expect-other-name actual-other-name
'
# We are on 'master', which integrates with 'foo' from parent1
# remote (set in test_pushdefault_workflow helper).  Push to
# parent1 in centralized, and push to parent2 in triangular workflow.
# The parent1 repository has 'master' and 'foo' branches, while
# the parent2 repository has only 'master' branch.
#
# test_pushdefault_workflow() arguments:
# $1 = success or failure
# $2 = push.default value
# $3 = branch to check for actual output (master or foo)
# $4 = [optional] switch to triangular workflow
# update parent1's master (which is not our upstream)
test_pushdefault_workflow success current master
# update parent1's foo (which is our upstream)
test_pushdefault_workflow success upstream foo
# upsream is foo which is not the name of the current branch
test_pushdefault_workflow failure simple master
# master and foo are updated
test_pushdefault_workflow success matching master
# master is updated
test_pushdefault_workflow success current master triangular
# upstream mode cannot be used in triangular
test_pushdefault_workflow failure upstream foo triangular
# in triangular, 'simple' works as 'current' and update the branch
# with the same name.
test_pushdefault_workflow success simple master triangular
# master is updated (parent2 does not have foo)
test_pushdefault_workflow success matching master triangular
test_done
