# This shell scriplet is meant to be included by other shell scripts
# to set up some variables pointing at the normal git directories and
# a few helper shell functions.
# Having this variable in your environment would break scripts because
# you would cause "cd" to be taken to unexpected places.  If you
# like CDPATH, define it for your interactive shell sessions without
# exporting it.
# But we protect ourselves from such a user mistake nevertheless.
unset CDPATH
# Similarly for IFS, but some shells (e.g. FreeBSD 7.2) are buggy and
# do not equate an unset IFS with IFS with the default, so here is
# an explicit SP HT LF.
IFS='
'
git_broken_path_fix ()
# @@BROKEN_PATH_FIX@@
die ()
die_with_status ()
GIT_QUIET=
say ()
if test -n "$OPTIONS_SPEC"; then
usage()
parseopt_extra=
[ -n "$OPTIONS_KEEPDASHDASH" ] &&
parseopt_extra="--keep-dashdash"
[ -n "$OPTIONS_STUCKLONG" ] &&
parseopt_extra="$parseopt_extra --stuck-long"
eval "$(
echo "$OPTIONS_SPEC" |
git rev-parse --parseopt $parseopt_extra -- "$@" ||
echo exit $?
)"
else
dashless=$(basename "$0" | sed -e 's/-/ /')
usage()
if [ -z "$LONG_USAGE" ]
then
LONG_USAGE="usage: $dashless $USAGE"
else
LONG_USAGE="usage: $dashless $USAGE
$LONG_USAGE"
fi
case "$1" in
-h)
echo "$LONG_USAGE"
exit
esac
fi
# Set the name of the end-user facing command in the reflog when the
# script may update refs.  When GIT_REFLOG_ACTION is already set, this
# will not overwrite it, so that a scripted Porcelain (e.g. "git
# rebase") can set it to its own name (e.g. "rebase") and then call
# another scripted Porcelain (e.g. "git am") and a call to this
# function in the latter will keep the name of the end-user facing
# program (e.g. "rebase") in GIT_REFLOG_ACTION, ensuring whatever it
# does will be record as actions done as part of the end-user facing
# operation (e.g. "rebase").
#
# NOTE NOTE NOTE: consequently, after assigning a specific message to
# GIT_REFLOG_ACTION when calling a "git" command to record a custom
# reflog message, do not leave that custom value in GIT_REFLOG_ACTION,
# after you are done.  Other callers of "git" commands that rely on
# writing the default "program name" in reflog expect the variable to
# contain the value set by this function.
#
# To use a custom reflog message, do either one of these three:
#
# (a) use a single-shot export form:
#     GIT_REFLOG_ACTION="$GIT_REFLOG_ACTION: preparing frotz" \
#         git command-that-updates-a-ref
#
# (b) save the original away and restore:
#     SAVED_ACTION=$GIT_REFLOG_ACTION
#     GIT_REFLOG_ACTION="$GIT_REFLOG_ACTION: preparing frotz"
#     git command-that-updates-a-ref
#     GIT_REFLOG_ACITON=$SAVED_ACTION
#
# (c) assign the variable in a subshell:
#     (
#         GIT_REFLOG_ACTION="$GIT_REFLOG_ACTION: preparing frotz"
#         git command-that-updates-a-ref
#     )
set_reflog_action()
git_editor()
git_pager()
sane_grep ()
sane_egrep ()
is_bare_repository ()
cd_to_toplevel ()
require_work_tree_exists ()
require_work_tree ()
require_clean_work_tree ()
# Generate a sed script to parse identities from a commit.
#
# Reads the commit from stdin, which should be in raw format (e.g., from
# cat-file or "--pretty=raw").
#
# The first argument specifies the ident line to parse (e.g., "author"), and
# the second specifies the environment variable to put it in (e.g., "AUTHOR"
# for "GIT_AUTHOR_*"). Multiple pairs can be given to parse author and
# committer.
pick_ident_script ()
# Create a pick-script as above and feed it to sed. Stdout is suitable for
# feeding to eval.
parse_ident_from_commit ()
# Parse the author from a commit given as an argument. Stdout is suitable for
# feeding to eval to set the usual GIT_* ident variables.
get_author_ident_from_commit ()
# Clear repo-local GIT_* environment variables. Useful when switching to
# another repository (e.g. when entering a submodule). See also the env
# list in git_connect()
clear_local_git_env()
# Generate a virtual base file for a two-file merge. Uses git apply to
# remove lines from $1 that are not in $2, leaving only common lines.
create_virtual_base()
# Platform specific tweaks to work around some commands
case $(uname -s) in
*MINGW*)
# Windows has its own (incompatible) sort and find
sort ()
find ()
# git sees Windows-style pwd
pwd ()
is_absolute_path ()
;;
*)
is_absolute_path ()
esac
# Make sure we are in a valid repository of a vintage we understand,
# if we require to be in a git repository.
if test -z "$NONGIT_OK"
then
GIT_DIR=$(git rev-parse --git-dir) || exit
if [ -z "$SUBDIRECTORY_OK" ]
then
test -z "$(git rev-parse --show-cdup)" ||
fi
test -n "$GIT_DIR" && GIT_DIR=$(cd "$GIT_DIR" && pwd) ||
: $
fi
peel_committish ()
