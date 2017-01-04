#!/bin/sh
#
# Copyright (c) 2010 Nazri Ramliy
#
test_description='Test for "git log --decorate" colors'
. ./test-lib.sh
get_color ()
test_expect_success setup '
git config diff.color.commit yellow &&
git config color.decorate.branch green &&
git config color.decorate.remoteBranch red &&
git config color.decorate.tag "reverse bold yellow" &&
git config color.decorate.stash magenta &&
git config color.decorate.HEAD cyan &&
c_reset=$(get_color reset) &&
c_commit=$(get_color yellow) &&
c_branch=$(get_color green) &&
c_remoteBranch=$(get_color red) &&
c_tag=$(get_color "reverse bold yellow") &&
c_stash=$(get_color magenta) &&
c_HEAD=$(get_color cyan) &&
test_commit A &&
git clone . other &&
(
cd other &&
test_commit A1
) &&
git remote add -f other ./other &&
test_commit B &&
git tag v1.0 &&
echo >>A.t &&
git stash save Changes to A.t
'
cat >expected <<EOF
$COMMIT_ID$$ ($HEAD$$,\
$tag: v1.0$$,\
$tag: B$$,\
$master$$)$ B
$COMMIT_ID$$ ($tag: A1$$,\
$other/master$$)$ A1
$COMMIT_ID$$ ($refs/stash$$)$\
On master: Changes to A.t
$COMMIT_ID$$ ($tag: A$$)$ A
EOF
# We want log to show all, but the second parent to refs/stash is irrelevant
# to this test since it does not contain any decoration, hence --first-parent
test_expect_success 'Commit Decorations Colored Correctly' '
git log --first-parent --abbrev=10 --all --decorate --oneline --color=always |
sed "s/[0-9a-f]\/COMMIT_ID/" >out &&
test_cmp expected out
'
test_done
