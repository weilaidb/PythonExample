#!/bin/sh
test_description='test <branch>@ syntax'
. ./test-lib.sh
test_expect_success 'setup' '
test_commit 1 &&
git checkout -b side &&
test_commit 2 &&
git checkout master &&
git clone . clone &&
test_commit 3 &&
(cd clone &&
test_commit 4 &&
git branch --track my-side origin/side &&
git branch --track local-master master &&
git branch --track fun@ny origin/side &&
git branch --track @funny origin/side &&
git branch --track funny@ origin/side &&
git remote add -t master master-only .. &&
git fetch master-only &&
git branch bad-upstream &&
git config branch.bad-upstream.remote master-only &&
git config branch.bad-upstream.merge refs/heads/side
)
'
sq="'"
full_name ()
commit_subject ()
error_message ()
test_expect_success '@ resolves to correct full name' '
test refs/remotes/origin/master = "$(full_name @)"
'
test_expect_success '@ resolves to correct full name' '
test refs/remotes/origin/master = "$(full_name @)"
'
test_expect_success 'my-side@ resolves to correct full name' '
test refs/remotes/origin/side = "$(full_name my-side@)"
'
test_expect_success 'upstream of branch with @ in middle' '
full_name fun@ny@ >actual &&
echo refs/remotes/origin/side >expect &&
test_cmp expect actual
'
test_expect_success 'upstream of branch with @ at start' '
full_name @funny@ >actual &&
echo refs/remotes/origin/side >expect &&
test_cmp expect actual
'
test_expect_success 'upstream of branch with @ at end' '
full_name funny@@ >actual &&
echo refs/remotes/origin/side >expect &&
test_cmp expect actual
'
test_expect_success 'refs/heads/my-side@ does not resolve to my-side' '
test_must_fail full_name refs/heads/my-side@
'
test_expect_success 'my-side@ resolves to correct commit' '
git checkout side &&
test_commit 5 &&
(cd clone && git fetch) &&
test 2 = "$(commit_subject my-side)" &&
test 5 = "$(commit_subject my-side@)"
'
test_expect_success 'not-tracking@ fails' '
test_must_fail full_name non-tracking@ &&
(cd clone && git checkout --no-track -b non-tracking) &&
test_must_fail full_name non-tracking@
'
test_expect_success '<branch>@@ resolves correctly' '
test_commit 6 &&
(cd clone && git fetch) &&
test 5 = $(commit_subject my-side@@)
'
test_expect_success '@ without specifying branch fails on a detached HEAD' '
git checkout HEAD^0 &&
test_must_fail git rev-parse @
'
test_expect_success 'checkout -b new my-side@ forks from the same' '
(
cd clone &&
git checkout -b new my-side@ &&
git rev-parse --symbolic-full-name my-side@ >expect &&
git rev-parse --symbolic-full-name new@ >actual &&
test_cmp expect actual
)
'
test_expect_success 'merge my-side@ records the correct name' '
(
cd clone || exit
git checkout master || exit
git branch -D new ;# can fail but is ok
git branch -t new my-side@ &&
git merge -s ours new@ &&
git show -s --pretty=tformat:%s >actual &&
echo "Merge remote-tracking branch $origin/side$" >expect &&
test_cmp expect actual
)
'
test_expect_success 'branch -d other@' '
git checkout -t -b other master &&
git branch -d @ &&
git for-each-ref refs/heads/master >actual &&
>expect &&
test_cmp expect actual
'
test_expect_success 'checkout other@' '
git branch -f master HEAD &&
git checkout -t -b another master &&
git checkout @ &&
git symbolic-ref HEAD >actual &&
echo refs/heads/master >expect &&
test_cmp expect actual
'
test_expect_success 'branch@ works when tracking a local branch' '
test refs/heads/master = "$(full_name local-master@)"
'
test_expect_success 'branch@ error message when no upstream' '
cat >expect <<-EOF &&
fatal: No upstream configured for branch $non-tracking$
EOF
error_message non-tracking@ 2>actual &&
test_i18ncmp expect actual
'
test_expect_success '@ error message when no upstream' '
cat >expect <<-EOF &&
fatal: No upstream configured for branch $master$
EOF
test_must_fail git rev-parse --verify @ 2>actual &&
test_i18ncmp expect actual
'
test_expect_success 'branch@ error message with misspelt branch' '
cat >expect <<-EOF &&
fatal: No such branch: $no-such-branch$
EOF
error_message no-such-branch@ 2>actual &&
test_i18ncmp expect actual
'
test_expect_success '@ error message when not on a branch' '
cat >expect <<-EOF &&
fatal: HEAD does not point to a branch
EOF
git checkout HEAD^0 &&
test_must_fail git rev-parse --verify @ 2>actual &&
test_i18ncmp expect actual
'
test_expect_success 'branch@ error message if upstream branch not fetched' '
cat >expect <<-EOF &&
fatal: Upstream branch $refs/heads/side$ not stored as a remote-tracking branch
EOF
error_message bad-upstream@ 2>actual &&
test_i18ncmp expect actual
'
test_expect_success 'pull works when tracking a local branch' '
(
cd clone &&
git checkout local-master &&
git pull
)
'
# makes sense if the previous one succeeded
test_expect_success '@ works when tracking a local branch' '
test refs/heads/master = "$(full_name @)"
'
cat >expect <<EOF
commit 8f489d01d0cc65c3b0f09504ec50b5ed02a70bd5
Reflog: master@ (C O Mitter <committer@example.com>)
Reflog message: branch: Created from HEAD
Author: A U Thor <author@example.com>
Date:   Thu Apr 7 15:15:13 2005 -0700
3
EOF
test_expect_success 'log -g other@' '
git log -1 -g other@ >actual &&
test_cmp expect actual
'
cat >expect <<EOF
commit 8f489d01d0cc65c3b0f09504ec50b5ed02a70bd5
Reflog: master@ (C O Mitter <committer@example.com>)
Reflog message: branch: Created from HEAD
Author: A U Thor <author@example.com>
Date:   Thu Apr 7 15:15:13 2005 -0700
3
EOF
test_expect_success 'log -g other@@' '
git log -1 -g other@@ >actual &&
test_cmp expect actual
'
test_expect_success '@-parsing does not look beyond colon' '
echo content >@ &&
git add @ &&
git commit -m "funny reflog file" &&
git hash-object @ >expect &&
git rev-parse HEAD:@ >actual
'
test_expect_success '@-parsing does not look beyond colon' '
echo content >@ &&
git add @ &&
git commit -m "funny upstream file" &&
git hash-object @ >expect &&
git rev-parse HEAD:@ >actual
'
test_done
