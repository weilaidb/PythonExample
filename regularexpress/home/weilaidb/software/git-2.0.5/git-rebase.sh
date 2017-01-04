#!/bin/sh
#
# Copyright (c) 2005 Junio C Hamano.
#
SUBDIRECTORY_OK=Yes
OPTIONS_KEEPDASHDASH=
OPTIONS_STUCKLONG=t
OPTIONS_SPEC="\
git rebase [-i] [options] [--exec <cmd>] [--onto <newbase>] [<upstream>] [<branch>]
git rebase [-i] [options] [--exec <cmd>] [--onto <newbase>] --root [<branch>]
git-rebase --continue | --abort | --skip | --edit-todo
--
Available options are
v,verbose!         display a diffstat of what changed upstream
q,quiet!           be quiet. implies --no-stat
autostash!         automatically stash/stash pop before and after
fork-point         use 'merge-base --fork-point' to refine upstream
onto=!             rebase onto given branch instead of upstream
p,preserve-merges! try to recreate merges instead of ignoring them
s,strategy=!       use the given merge strategy
no-ff!             cherry-pick all commits, even if unchanged
m,merge!           use merging strategies to rebase
i,interactive!     let the user edit the list of commits to rebase
x,exec=!           add exec lines after each commit of the editable list
k,keep-empty	   preserve empty commits during rebase
f,force-rebase!    force rebase even if branch is up to date
X,strategy-option=! pass the argument through to the merge strategy
stat!              display a diffstat of what changed upstream
n,no-stat!         do not show diffstat of what changed upstream
verify             allow pre-rebase hook to run
rerere-autoupdate  allow rerere to update index with resolved conflicts
root!              rebase all reachable commits up to the root(s)
autosquash         move commits that begin with squash!/fixup! under -i
committer-date-is-author-date! passed to 'git am'
ignore-date!       passed to 'git am'
whitespace=!       passed to 'git apply'
ignore-whitespace! passed to 'git apply'
C=!                passed to 'git apply'
S,gpg-sign?        GPG-sign commits
Actions:
continue!          continue
abort!             abort and check out the original branch
skip!              skip current patch and continue
edit-todo!         edit the todo list during an interactive rebase
"
. git-sh-setup
. git-sh-i18n
set_reflog_action rebase
require_work_tree_exists
cd_to_toplevel
LF='
'
ok_to_skip_pre_rebase=
resolvemsg="
$(gettext 'When you have resolved this problem, run "git rebase --continue".
If you prefer to skip this patch, run "git rebase --skip" instead.
To check out the original branch and stop rebasing, run "git rebase --abort".')
"
unset onto
cmd=
strategy=
strategy_opts=
do_merge=
merge_dir="$GIT_DIR"/rebase-merge
apply_dir="$GIT_DIR"/rebase-apply
verbose=
diffstat=
test "$(git config --bool rebase.stat)" = true && diffstat=t
autostash="$(git config --bool rebase.autostash || echo false)"
fork_point=auto
git_am_opt=
rebase_root=
force_rebase=
allow_rerere_autoupdate=
# Non-empty if a rebase was in progress when 'git rebase' was invoked
in_progress=
# One of
type=
# One of
state_dir=
# One of , as parsed from command line
action=
preserve_merges=
autosquash=
keep_empty=
test "$(git config --bool rebase.autosquash)" = "true" && autosquash=t
gpg_sign_opt=
read_basic_state ()
write_basic_state ()
output ()
move_to_original_branch ()
cmd_live_rebase="git rebase (--continue | --abort | --skip)"
cmd_clear_stale_rebase="rm -fr \"$state_dir\""
die "
$(eval_gettext 'It seems that there is already a $state_dir_base directory, and
I wonder if you are in the middle of another rebase.  If that is the
case, please try
$cmd_live_rebase
If that is not the case, please
$cmd_clear_stale_rebase
and run me again.  I am stopping in case you still have something
valuable there.')"
fi
if test -n "$rebase_root" && test -z "$onto"
then
test -z "$interactive_rebase" && interactive_rebase=implied
fi
if test -n "$interactive_rebase"
then
type=interactive
state_dir="$merge_dir"
elif test -n "$do_merge"
then
type=merge
state_dir="$merge_dir"
else
type=am
state_dir="$apply_dir"
fi
if test -z "$rebase_root"
then
case "$#" in
0)
if ! upstream_name=$(git rev-parse --symbolic-full-name \
--verify -q @ 2>/dev/null)
then
. git-parse-remote
error_on_missing_default_upstream "rebase" "rebase" \
"against" "git rebase <branch>"
fi
test "$fork_point" = auto && fork_point=t
;;
*)	upstream_name="$1"
if test "$upstream_name" = "-"
then
upstream_name="@"
fi
shift
;;
esac
upstream=$(peel_committish "$") ||
die "$(eval_gettext "invalid upstream \$upstream_name")"
upstream_arg="$upstream_name"
else
if test -z "$onto"
then
empty_tree=`git hash-object -t tree /dev/null`
onto=`git commit-tree $empty_tree </dev/null`
squash_onto="$onto"
fi
unset upstream_name
unset upstream
test $# -gt 1 && usage
upstream_arg=--root
fi
# Make sure the branch to rebase onto is valid.
onto_name=$
case "$onto_name" in
*...*)
if	left=$ right=$ &&
onto=$(git merge-base --all $ $)
then
case "$onto" in
?*"$LF"?*)
die "$(eval_gettext "\$onto_name: there are more than one merge bases")"
;;
'')
die "$(eval_gettext "\$onto_name: there is no merge base")"
;;
esac
else
die "$(eval_gettext "\$onto_name: there is no merge base")"
fi
;;
*)
onto=$(peel_committish "$onto_name") ||
die "$(eval_gettext "Does not point to a valid commit: \$onto_name")"
;;
esac
# If the branch to rebase is given, that is the branch we will rebase
# $branch_name -- branch being rebased, or HEAD (already detached)
# $orig_head -- commit object name of tip of the branch before rebasing
# $head_name -- refs/heads/<that-branch> or "detached HEAD"
switch_to=
case "$#" in
1)
# Is it "rebase other $branchname" or "rebase other $commit"?
branch_name="$1"
switch_to="$1"
if git show-ref --verify --quiet -- "refs/heads/$1" &&
orig_head=$(git rev-parse -q --verify "refs/heads/$1")
then
head_name="refs/heads/$1"
elif orig_head=$(git rev-parse -q --verify "$1")
then
head_name="detached HEAD"
else
die "$(eval_gettext "fatal: no such branch: \$branch_name")"
fi
;;
0)
# Do not need to switch branches, we are already on it.
if branch_name=`git symbolic-ref -q HEAD`
then
head_name=$branch_name
branch_name=`expr "z$branch_name" : 'zrefs/heads/\(.*\)'`
else
head_name="detached HEAD"
branch_name=HEAD ;# detached
fi
orig_head=$(git rev-parse --verify HEAD) || exit
;;
*)
die "BUG: unexpected number of arguments left to parse"
;;
esac
if test "$fork_point" = t
then
new_upstream=$(git merge-base --fork-point "$upstream_name" \
"$")
if test -n "$new_upstream"
then
upstream=$new_upstream
fi
fi
if test "$autostash" = true && ! (require_clean_work_tree) 2>/dev/null
then
stash_sha1=$(git stash create "autostash") ||
die "$(gettext 'Cannot autostash')"
mkdir -p "$state_dir" &&
echo $stash_sha1 >"$state_dir/autostash" &&
stash_abbrev=$(git rev-parse --short $stash_sha1) &&
echo "$(eval_gettext 'Created autostash: $stash_abbrev')" &&
git reset --hard
fi
require_clean_work_tree "rebase" "$(gettext "Please commit or stash them.")"
# Now we are rebasing commits $upstream..$orig_head (or with --root,
# everything leading up to $orig_head) on top of $onto
# Check if we are already based on $onto with linear history,
# but this should be done only when upstream and onto are the same
# and if this is not an interactive rebase.
mb=$(git merge-base "$onto" "$orig_head")
if test "$type" != interactive && test "$upstream" = "$onto" &&
test "$mb" = "$onto" &&
# linear history?
! (git rev-list --parents "$onto".."$orig_head" | sane_grep " .* ") > /dev/null
then
if test -z "$force_rebase"
then
# Lazily switch to the target branch if needed...
test -z "$switch_to" ||
GIT_REFLOG_ACTION="$GIT_REFLOG_ACTION: checkout $switch_to" \
git checkout "$switch_to" --
say "$(eval_gettext "Current branch \$branch_name is up to date.")"
finish_rebase
exit 0
else
say "$(eval_gettext "Current branch \$branch_name is up to date, rebase forced.")"
fi
fi
# If a hook exists, give it a chance to interrupt
run_pre_rebase_hook "$upstream_arg" "$@"
if test -n "$diffstat"
then
if test -n "$verbose"
then
echo "$(eval_gettext "Changes from \$mb to \$onto:")"
fi
# We want color (if set), but no pager
GIT_PAGER='' git diff --stat --summary "$mb" "$onto"
fi
test "$type" = interactive && run_specific_rebase
# Detach HEAD and reset the tree
say "$(gettext "First, rewinding head to replay your work on top of it...")"
GIT_REFLOG_ACTION="$GIT_REFLOG_ACTION: checkout $onto_name" \
git checkout -q "$onto^0" || die "could not detach HEAD"
git update-ref ORIG_HEAD $orig_head
# If the $onto is a proper descendant of the tip of the branch, then
# we just fast-forwarded.
if test "$mb" = "$orig_head"
then
say "$(eval_gettext "Fast-forwarded \$branch_name to \$onto_name.")"
move_to_original_branch
finish_rebase
exit 0
fi
if test -n "$rebase_root"
then
revisions="$onto..$orig_head"
else
revisions="$upstream..$orig_head"
fi
run_specific_rebase
