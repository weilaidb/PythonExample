#!/bin/sh
#
# Copyright (c) 2005 Junio C Hamano
#
# Fetch one or more remote refs and merge it/them into the current HEAD.
USAGE='[-n | --no-stat] [--[no-]commit] [--[no-]squash] [--[no-]ff|--ff-only] [--[no-]rebase|--rebase=preserve] [-s strategy]... [<fetch-options>] <repo> <head>...'
LONG_USAGE='Fetch one or more remote refs and integrate it/them with the current HEAD.'
SUBDIRECTORY_OK=Yes
OPTIONS_SPEC=
. git-sh-setup
. git-sh-i18n
set_reflog_action "pull$"
require_work_tree_exists
cd_to_toplevel
die_conflict ()
die_merge ()
test -z "$(git ls-files -u)" || die_conflict
test -f "$GIT_DIR/MERGE_HEAD" && die_merge
bool_or_string_config ()
strategy_args= diffstat= no_commit= squash= no_ff= ff_only=
log_arg= verbosity= progress= recurse_submodules= verify_signatures=
merge_args= edit= rebase_args=
curr_branch=$(git symbolic-ref -q HEAD)
curr_branch_short="$"
rebase=$(bool_or_string_config branch.$curr_branch_short.rebase)
if test -z "$rebase"
then
rebase=$(bool_or_string_config pull.rebase)
fi
# Setup default fast-forward options via `pull.ff`
pull_ff=$(git config pull.ff)
case "$pull_ff" in
false)
no_ff=--no-ff
;;
only)
ff_only=--ff-only
;;
esac
dry_run=
while :
do
case "$1" in
-q|--quiet)
verbosity="$verbosity -q" ;;
-v|--verbose)
verbosity="$verbosity -v" ;;
--progress)
progress=--progress ;;
--no-progress)
progress=--no-progress ;;
-n|--no-stat|--no-summary)
diffstat=--no-stat ;;
--stat|--summary)
diffstat=--stat ;;
--log|--no-log)
log_arg=$1 ;;
--no-c|--no-co|--no-com|--no-comm|--no-commi|--no-commit)
no_commit=--no-commit ;;
--c|--co|--com|--comm|--commi|--commit)
no_commit=--commit ;;
-e|--edit)
edit=--edit ;;
--no-edit)
edit=--no-edit ;;
--sq|--squ|--squa|--squas|--squash)
squash=--squash ;;
--no-sq|--no-squ|--no-squa|--no-squas|--no-squash)
squash=--no-squash ;;
--ff)
no_ff=--ff ;;
--no-ff)
no_ff=--no-ff ;;
--ff-only)
ff_only=--ff-only ;;
-s=*|--s=*|--st=*|--str=*|--stra=*|--strat=*|--strate=*|\
--strateg=*|--strategy=*|\
-s|--s|--st|--str|--stra|--strat|--strate|--strateg|--strategy)
case "$#,$1" in
*,*=*)
strategy=`expr "z$1" : 'z-[^=]*=\(.*\)'` ;;
1,*)
usage ;;
*)
strategy="$2"
shift ;;
esac
strategy_args="$-s $strategy "
;;
-X*)
case "$#,$1" in
1,-X)
usage ;;
*,-X)
xx="-X $(git rev-parse --sq-quote "$2")"
shift ;;
*,*)
xx=$(git rev-parse --sq-quote "$1") ;;
esac
merge_args="$merge_args$xx "
;;
-r=*|--r=*|--re=*|--reb=*|--reba=*|--rebas=*|--rebase=*)
rebase="$"
;;
-r|--r|--re|--reb|--reba|--rebas|--rebase)
rebase=true
;;
--no-r|--no-re|--no-reb|--no-reba|--no-rebas|--no-rebase)
rebase=false
;;
--recurse-submodules)
recurse_submodules=--recurse-submodules
;;
--recurse-submodules=*)
recurse_submodules="$1"
;;
--no-recurse-submodules)
recurse_submodules=--no-recurse-submodules
;;
--verify-signatures)
verify_signatures=--verify-signatures
;;
--no-verify-signatures)
verify_signatures=--no-verify-signatures
;;
--gpg-sign|-S)
gpg_sign_args=-S
;;
--gpg-sign=*)
gpg_sign_args=$(git rev-parse --sq-quote "-S$")
;;
-S*)
gpg_sign_args=$(git rev-parse --sq-quote "$1")
;;
--d|--dr|--dry|--dry-|--dry-r|--dry-ru|--dry-run)
dry_run=--dry-run
;;
-h|--help-all)
usage
;;
*)
# Pass thru anything that may be meant for fetch.
break
;;
esac
shift
done
case "$rebase" in
preserve)
rebase=true
rebase_args=--preserve-merges
;;
true|false|'')
;;
*)
echo "Invalid value for --rebase, should be true, false, or preserve"
usage
exit 1
;;
esac
error_on_no_merge_candidates ()
test true = "$rebase" &&
orig_head=$(git rev-parse -q --verify HEAD)
git fetch $verbosity $progress $dry_run $recurse_submodules --update-head-ok "$@" || exit 1
test -z "$dry_run" || exit 0
curr_head=$(git rev-parse -q --verify HEAD)
if test -n "$orig_head" && test "$curr_head" != "$orig_head"
then
# The fetch involved updating the current branch.
# The working tree and the index file is still based on the
# $orig_head commit, but we are merging into $curr_head.
# First update the working tree to match $curr_head.
eval_gettextln "Warning: fetch updated the current branch head.
Warning: fast-forwarding your working tree from
Warning: commit \$orig_head." >&2
git update-index -q --refresh
git read-tree -u -m "$orig_head" "$curr_head" ||
die "$(eval_gettext "Cannot fast-forward your working tree.
After making sure that you saved anything precious from
$ git diff \$orig_head
output, run
$ git reset --hard
to recover.")"
fi
merge_head=$(sed -e '/	not-for-merge	/d' \
-e 's/	.*
tr '\012' ' ')
case "$merge_head" in
'')
error_on_no_merge_candidates "$@"
;;
?*' '?*)
if test -z "$orig_head"
then
die "$(gettext "Cannot merge multiple branches into empty head")"
fi
if test true = "$rebase"
then
die "$(gettext "Cannot rebase onto multiple branches")"
fi
;;
esac
# Pulling into unborn branch: a shorthand for branching off
# FETCH_HEAD, for lazy typers.
if test -z "$orig_head"
then
# Two-way merge: we claim the index is based on an empty tree,
# and try to fast-forward to HEAD.  This ensures we will not
# lose index/worktree changes that the user already made on
# the unborn branch.
empty_tree=4b825dc642cb6eb9a060e54bf8d69288fbee4904
git read-tree -m -u $empty_tree $merge_head &&
git update-ref -m "initial pull" HEAD $merge_head "$curr_head"
exit
fi
if test true = "$rebase"
then
o=$(git show-branch --merge-base $curr_branch $merge_head $oldremoteref)
if test "$oldremoteref" = "$o"
then
unset oldremoteref
fi
fi
merge_name=$(git fmt-merge-msg $log_arg <"$GIT_DIR/FETCH_HEAD") || exit
case "$rebase" in
true)
eval="git-rebase $diffstat $strategy_args $merge_args $rebase_args $verbosity"
eval="$eval $gpg_sign_args"
eval="$eval --onto $merge_head $"
;;
*)
eval="git-merge $diffstat $no_commit $verify_signatures $edit $squash $no_ff $ff_only"
eval="$eval $log_arg $strategy_args $merge_args $verbosity $progress"
eval="$eval $gpg_sign_args"
eval="$eval \"\$merge_name\" HEAD $merge_head"
;;
esac
eval "exec $eval"
