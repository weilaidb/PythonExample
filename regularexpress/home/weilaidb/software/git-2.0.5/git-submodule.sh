#!/bin/sh
#
# git-submodule.sh: add, init, update or list git submodules
#
# Copyright (c) 2007 Lars Hjemli
dashless=$(basename "$0" | sed -e 's/-/ /')
USAGE="[--quiet] add [-b <branch>] [-f|--force] [--name <name>] [--reference <repository>] [--] <repository> [<path>]
or: $dashless [--quiet] status [--cached] [--recursive] [--] [<path>...]
or: $dashless [--quiet] init [--] [<path>...]
or: $dashless [--quiet] deinit [-f|--force] [--] <path>...
or: $dashless [--quiet] update [--init] [--remote] [-N|--no-fetch] [-f|--force] [--checkout|--merge|--rebase] [--reference <repository>] [--recursive] [--] [<path>...]
or: $dashless [--quiet] summary [--cached|--files] [--summary-limit <n>] [commit] [--] [<path>...]
or: $dashless [--quiet] foreach [--recursive] <command>
or: $dashless [--quiet] sync [--recursive] [--] [<path>...]"
OPTIONS_SPEC=
SUBDIRECTORY_OK=Yes
. git-sh-setup
. git-sh-i18n
. git-parse-remote
require_work_tree
wt_prefix=$(git rev-parse --show-prefix)
cd_to_toplevel
command=
branch=
force=
reference=
cached=
recursive=
init=
files=
remote=
nofetch=
update=
prefix=
custom_name=
depth=
# The function takes at most 2 arguments. The first argument is the
# URL that navigates to the submodule origin repo. When relative, this URL
# is relative to the superproject origin URL repo. The second up_path
# argument, if specified, is the relative path that navigates
# from the submodule working tree to the superproject working tree.
#
# The output of the function is the origin URL of the submodule.
#
# The output will either be an absolute URL or filesystem path (if the
# superproject origin URL is an absolute URL or filesystem path,
# respectively) or a relative file system path (if the superproject
# origin URL is a relative file system path).
#
# When the output is a relative file system path, the path is either
# relative to the submodule working tree, if up_path is specified, or to
# the superproject working tree otherwise.
resolve_relative_url ()
isnumber()
#
# Add a new submodule to the working tree, .gitmodules and the index
#
# $@ = repo path
#
# optional branch is stored in global branch variable
#
cmd_add()
# This loop parses the command line arguments to find the
# subcommand name to dispatch.  Parsing of the subcommand specific
# options are primarily done by the subcommand implementations.
# Subcommand specific options such as --branch and --cached are
# parsed here as well, for backward compatibility.
while test $# != 0 && test -z "$command"
do
case "$1" in
add | foreach | init | deinit | update | status | summary | sync)
command=$1
;;
-q|--quiet)
GIT_QUIET=1
;;
-b|--branch)
case "$2" in
'')
usage
;;
esac
branch="$2"; shift
;;
--cached)
cached="$1"
;;
--)
break
;;
-*)
usage
;;
*)
break
;;
esac
shift
done
# No command word defaults to "status"
if test -z "$command"
then
if test $# = 0
then
command=status
else
usage
fi
fi
# "-b branch" is accepted only by "add"
if test -n "$branch" && test "$command" != add
then
usage
fi
# "--cached" is accepted only by "status" and "summary"
if test -n "$cached" && test "$command" != status -a "$command" != summary
then
usage
fi
"cmd_$command" "$@"
