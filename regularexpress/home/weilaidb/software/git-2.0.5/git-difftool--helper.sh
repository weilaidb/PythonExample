#!/bin/sh
# git-difftool--helper is a GIT_EXTERNAL_DIFF-compatible diff tool launcher.
# This script is typically launched by using the 'git difftool'
# convenience command.
#
# Copyright (c) 2009, 2010 David Aguilar
TOOL_MODE=diff
. git-mergetool--lib
# difftool.prompt controls the default prompt/no-prompt behavior
# and is overridden with $GIT_DIFFTOOL*_PROMPT.
should_prompt ()
# Indicates that --extcmd=... was specified
use_ext_cmd ()
launch_merge_tool ()
if ! use_ext_cmd
then
if test -n "$GIT_DIFF_TOOL"
then
merge_tool="$GIT_DIFF_TOOL"
else
merge_tool="$(get_merge_tool)" || exit
fi
fi
if test -n "$GIT_DIFFTOOL_DIRDIFF"
then
LOCAL="$1"
REMOTE="$2"
run_merge_tool "$merge_tool" false
else
# Launch the merge tool on each path provided by 'git diff'
while test $# -gt 6
do
launch_merge_tool "$1" "$2" "$5"
shift 7
done
fi
