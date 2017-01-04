#!/bin/sh
#
# This program resolves merge conflicts in git
#
# Copyright (c) 2006 Theodore Y. Ts'o
#
# This file is licensed under the GPL v2, or a later version
# at the discretion of Junio C Hamano.
#
USAGE='[--tool=tool] [--tool-help] [-y|--no-prompt|--prompt] [file to merge] ...'
SUBDIRECTORY_OK=Yes
OPTIONS_SPEC=
TOOL_MODE=merge
. git-sh-setup
. git-mergetool--lib
require_work_tree
# Returns true if the mode reflects a symlink
is_symlink ()
is_submodule ()
local_present ()
remote_present ()
base_present ()
cleanup_temp_files ()
describe_file ()
resolve_symlink_merge ()
resolve_deleted_merge ()
resolve_submodule_merge ()
stage_submodule ()
checkout_staged_file ()
merge_file ()
prompt=$(git config --bool mergetool.prompt || echo true)
while test $# != 0
do
case "$1" in
--tool-help)
show_tool_help
;;
-t|--tool*)
case "$#,$1" in
*,*=*)
merge_tool=$(expr "z$1" : 'z-[^=]*=\(.*\)')
;;
1,*)
usage ;;
*)
merge_tool="$2"
shift ;;
esac
;;
-y|--no-prompt)
prompt=false
;;
--prompt)
prompt=true
;;
--)
shift
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
prompt_after_failed_merge ()
if test -z "$merge_tool"
then
merge_tool=$(get_merge_tool "$merge_tool") || exit
fi
merge_keep_backup="$(git config --bool mergetool.keepBackup || echo true)"
merge_keep_temporaries="$(git config --bool mergetool.keepTemporaries || echo false)"
last_status=0
rollup_status=0
files=
if test $# -eq 0
then
cd_to_toplevel
if test -e "$GIT_DIR/MERGE_RR"
then
files=$(git rerere remaining)
else
files=$(git ls-files -u | sed -e 's/^[^	]*
fi
else
files=$(git ls-files -u -- "$@" | sed -e 's/^[^	]*
fi
if test -z "$files"
then
echo "No files need merging"
exit 0
fi
printf "Merging:\n"
printf "%s\n" "$files"
IFS='
'
for i in $files
do
if test $last_status -ne 0
then
prompt_after_failed_merge || exit 1
fi
printf "\n"
merge_file "$i"
last_status=$?
if test $last_status -ne 0
then
rollup_status=1
fi
done
exit $rollup_status
