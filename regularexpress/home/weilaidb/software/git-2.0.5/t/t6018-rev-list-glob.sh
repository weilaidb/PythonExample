#!/bin/sh
test_description='rev-list/rev-parse --glob'
. ./test-lib.sh
commit ()
compare ()
test_expect_success 'setup' '
commit master &&
git checkout -b subspace/one master &&
commit one &&
git checkout -b subspace/two master &&
commit two &&
git checkout -b subspace-x master &&
commit subspace-x &&
git checkout -b other/three master &&
commit three &&
git checkout -b someref master &&
commit some &&
git checkout master &&
commit master2 &&
git tag foo/bar master &&
commit master3 &&
git update-ref refs/remotes/foo/baz master &&
commit master4
'
test_expect_success 'rev-parse --glob=refs/heads/subspace* --branches" "master someref subspace-x"
'
test_expect_success 'rev-parse --exclude with --all' '
compare rev-parse "--exclude=refs/remotes* --branches" "master someref subspace-x"
'
test_expect_success 'rev-list --exclude with --all' '
compare rev-list "--exclude=refs/remotes/* --all" "--branches --tags"
'
test_expect_success 'rev-list accumulates multiple --exclude' '
compare rev-list "--exclude=refs/remotes/* --exclude=refs/tags/* --all" --branches
'
# "git rev-list<ENTER>" is likely to be a bug in the calling script and may
# deserve an error message, but do cases where set of refs programatically
# given using globbing and/or --stdin need to fail with the same error, or
# are we better off reporting a success with no output?  The following few
# tests document the current behaviour to remind us that we might want to
# think about this issue.
test_expect_failure 'rev-list may want to succeed with empty output on no input (1)' '
>expect &&
git rev-list --stdin <expect >actual &&
test_cmp expect actual
'
test_expect_failure 'rev-list may want to succeed with empty output on no input (2)' '
>expect &&
git rev-list --exclude=* --all >actual &&
test_cmp expect actual
'
test_expect_failure 'rev-list may want to succeed with empty output on no input (3)' '
(
test_create_repo empty &&
cd empty &&
>expect &&
git rev-list --all >actual &&
test_cmp expect actual
)
'
test_expect_success 'shortlog accepts --glob/--tags/--remotes' '
compare shortlog "subspace/one subspace/two" --branches=subspace &&
compare shortlog \
"master subspace-x someref other/three subspace/one subspace/two" \
--branches &&
compare shortlog master "--glob=heads/someref/* master" &&
compare shortlog "subspace/one subspace/two other/three" \
"--glob=heads/subspace/* --glob=heads/other/*" &&
compare shortlog \
"master other/three someref subspace-x subspace/one subspace/two" \
"--glob=heads/*" &&
compare shortlog foo/bar --tags=foo &&
compare shortlog foo/bar --tags &&
compare shortlog foo/baz --remotes=foo
'
test_expect_failure 'shortlog accepts --glob as detached option' '
compare shortlog \
"master other/three someref subspace-x subspace/one subspace/two" \
"--glob heads/*"
'
test_expect_failure 'shortlog --glob is not confused by option-like argument' '
compare shortlog master "--glob -e master"
'
test_done
