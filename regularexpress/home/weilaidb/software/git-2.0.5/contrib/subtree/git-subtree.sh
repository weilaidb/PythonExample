#!/bin/sh
#
# git-subtree.sh: split/join git repositories in subdirectories of this one
#
# Copyright (C) 2009 Avery Pennarun <apenwarr@gmail.com>
#
if [ $# -eq 0 ]; then
set -- -h
fi
OPTS_SPEC="\
git subtree add   --prefix=<prefix> <commit>
git subtree add   --prefix=<prefix> <repository> <ref>
git subtree merge --prefix=<prefix> <commit>
git subtree pull  --prefix=<prefix> <repository> <ref>
git subtree push  --prefix=<prefix> <repository> <ref>
git subtree split --prefix=<prefix> <commit...>
--
h,help        show the help
q             quiet
d             show debug messages
P,prefix=     the name of the subdir to split out
m,message=    use the given message as the commit message for the merge commit
options for 'split'
annotate=     add a prefix to commit message of new commits
b,branch=     create a new branch from the split subtree
ignore-joins  ignore prior --rejoin commits
onto=         try connecting new tree to an existing one
rejoin        merge the new branch back into HEAD
options for 'add', 'merge', 'pull' and 'push'
squash        merge subtree changes as a single commit
"
eval "$(echo "$OPTS_SPEC" | git rev-parse --parseopt -- "$@" || echo exit $?)"
PATH=$PATH:$(git --exec-path)
. git-sh-setup
require_work_tree
quiet=
branch=
debug=
command=
onto=
rejoin=
ignore_joins=
annotate=
squash=
message=
prefix=
debug()
say()
assert()
#echo "Options: $*"
while [ $# -gt 0 ]; do
opt="$1"
shift
case "$opt" in
-q) quiet=1 ;;
-d) debug=1 ;;
--annotate) annotate="$1"; shift ;;
--no-annotate) annotate= ;;
-b) branch="$1"; shift ;;
-P) prefix="$1"; shift ;;
-m) message="$1"; shift ;;
--no-prefix) prefix= ;;
--onto) onto="$1"; shift ;;
--no-onto) onto= ;;
--rejoin) rejoin=1 ;;
--no-rejoin) rejoin= ;;
--ignore-joins) ignore_joins=1 ;;
--no-ignore-joins) ignore_joins= ;;
--squash) squash=1 ;;
--no-squash) squash= ;;
--) break ;;
*) die "Unexpected option: $opt" ;;
esac
done
command="$1"
shift
case "$command" in
add|merge|pull) default= ;;
split|push) default="--default HEAD" ;;
*) die "Unknown command '$command'" ;;
esac
if [ -z "$prefix" ]; then
die "You must provide the --prefix option."
fi
case "$command" in
add) [ -e "$prefix" ] &&
die "prefix '$prefix' already exists." ;;
*)   [ -e "$prefix" ] ||
die "'$prefix' does not exist; use 'git subtree add'" ;;
esac
dir="$(dirname "$prefix/.")"
if [ "$command" != "pull" -a "$command" != "add" -a "$command" != "push" ]; then
revs=$(git rev-parse $default --revs-only "$@") || exit $?
dirs="$(git rev-parse --no-revs --no-flags "$@")" || exit $?
if [ -n "$dirs" ]; then
die "Error: Use --prefix instead of bare filenames."
fi
fi
debug "command: "
debug "quiet: "
debug "revs: "
debug "dir: "
debug "opts: "
debug
cache_setup()
cache_get()
cache_miss()
check_parents()
set_notree()
cache_set()
rev_exists()
rev_is_descendant_of_branch()
# if a commit doesn't have a parent, this might not work.  But we only want
# to remove the parent from the rev-list, and since it doesn't exist, it won't
# be there anyway, so do nothing in that case.
try_remove_previous()
find_latest_squash()
find_existing_splits()
copy_commit()
add_msg()
add_squashed_msg()
rejoin_msg()
squash_msg()
toptree_for_commit()
subtree_for_commit()
tree_changed()
new_squash_commit()
copy_or_skip()
ensure_clean()
ensure_valid_ref_format()
cmd_add()
cmd_add_repository()
cmd_add_commit()
cmd_split()
cmd_merge()
cmd_pull()
cmd_push()
"cmd_$command" "$@"
