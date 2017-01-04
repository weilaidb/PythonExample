#!/bin/sh
# Copyright (c) 2007, Nanako Shiraishi
dashless=$(basename "$0" | sed -e 's/-/ /')
USAGE="list [<options>]
or: $dashless show [<stash>]
or: $dashless drop [-q|--quiet] [<stash>]
or: $dashless ( pop | apply ) [--index] [-q|--quiet] [<stash>]
or: $dashless branch <branchname> [<stash>]
or: $dashless [save [--patch] [-k|--[no-]keep-index] [-q|--quiet]
[-u|--include-untracked] [-a|--all] [<message>]]
or: $dashless clear"
SUBDIRECTORY_OK=Yes
OPTIONS_SPEC=
START_DIR=`pwd`
. git-sh-setup
. git-sh-i18n
require_work_tree
cd_to_toplevel
TMP="$GIT_DIR/.git-stash.$$"
TMPindex=$.stash.$$
trap 'rm -f "$TMP-"* "$TMPindex"' 0
ref_stash=refs/stash
if git config --get-colorbool color.interactive; then
help_color="$(git config --get-color color.interactive.help 'red bold')"
reset_color="$(git config --get-color '' reset)"
else
help_color=
reset_color=
fi
no_changes ()
untracked_files ()
clear_stash ()
create_stash ()
store_stash ()
save_stash ()
have_stash ()
list_stash ()
show_stash ()
#
# Parses the remaining options looking for flags and
# at most one revision defaulting to $@
# if none found.
#
# Derives related tree and commit objects from the
# revision, if one is found.
#
# stash records the work tree, and is a merge between the
# base commit (first parent) and the index tree (second parent).
#
#   REV is set to the symbolic version of the specified stash-like commit
#   IS_STASH_LIKE is non-blank if $ looks like a stash
#   IS_STASH_REF is non-blank if the $ looks like a stash ref
#   s is set to the SHA1 of the stash commit
#   w_commit is set to the commit containing the working tree
#   b_commit is set to the base commit
#   i_commit is set to the commit containing the index tree
#   u_commit is set to the commit containing the untracked files tree
#   w_tree is set to the working tree
#   b_tree is set to the base tree
#   i_tree is set to the index tree
#   u_tree is set to the untracked files tree
#
#   GIT_QUIET is set to t if -q is specified
#   INDEX_OPTION is set to --index if --index is specified.
#   FLAGS is set to the remaining flags
#
# dies if:
#   * too many revisions specified
#   * no revision is specified and there is no stash stack
#   * a revision is specified which cannot be resolve to a SHA1
#   * a non-existent stash reference is specified
#
parse_flags_and_rev()
is_stash_like()
assert_stash_like()
is_stash_ref()
assert_stash_ref()
apply_stash ()
pop_stash()
drop_stash ()
apply_to_branch ()
PARSE_CACHE='--not-parsed'
# The default command is "save" if nothing but options are given
seen_non_option=
for opt
do
case "$opt" in
-*) ;;
*) seen_non_option=t; break ;;
esac
done
test -n "$seen_non_option" || set "save" "$@"
# Main command set
case "$1" in
list)
shift
list_stash "$@"
;;
show)
shift
show_stash "$@"
;;
save)
shift
save_stash "$@"
;;
apply)
shift
apply_stash "$@"
;;
clear)
shift
clear_stash "$@"
;;
create)
shift
create_stash "$*" && echo "$w_commit"
;;
store)
shift
store_stash "$@"
;;
drop)
shift
drop_stash "$@"
;;
pop)
shift
pop_stash "$@"
;;
branch)
shift
apply_to_branch "$@"
;;
*)
case $# in
0)
save_stash &&
say "$(gettext "(To restore them type \"git stash apply\")")"
;;
*)
usage
esac
;;
esac
