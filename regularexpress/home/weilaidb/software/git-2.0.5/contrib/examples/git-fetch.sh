#!/bin/sh
#
USAGE='<fetch-options> <repository> <refspec>...'
SUBDIRECTORY_OK=Yes
. git-sh-setup
set_reflog_action "fetch $*"
cd_to_toplevel ;# probably unnecessary...
. git-parse-remote
_x40='[0-9a-f][0-9a-f][0-9a-f][0-9a-f][0-9a-f]'
_x40="$_x40$_x40$_x40$_x40$_x40$_x40$_x40$_x40"
LF='
'
IFS="$LF"
no_tags=
tags=
append=
force=
verbose=
update_head_ok=
exec=
keep=
shallow_depth=
no_progress=
test -t 1 || no_progress=--no-progress
quiet=
while test $# != 0
do
case "$1" in
-a|--a|--ap|--app|--appe|--appen|--append)
append=t
;;
--upl|--uplo|--uploa|--upload|--upload-|--upload-p|\
--upload-pa|--upload-pac|--upload-pack)
shift
exec="--upload-pack=$1"
;;
--upl=*|--uplo=*|--uploa=*|--upload=*|\
--upload-=*|--upload-p=*|--upload-pa=*|--upload-pac=*|--upload-pack=*)
exec=--upload-pack=$(expr "z$1" : 'z-[^=]*=\(.*\)')
shift
;;
-f|--f|--fo|--for|--forc|--force)
force=t
;;
-t|--t|--ta|--tag|--tags)
tags=t
;;
-n|--n|--no|--no-|--no-t|--no-ta|--no-tag|--no-tags)
no_tags=t
;;
-u|--u|--up|--upd|--upda|--updat|--update|--update-|--update-h|\
--update-he|--update-hea|--update-head|--update-head-|\
--update-head-o|--update-head-ok)
update_head_ok=t
;;
-q|--q|--qu|--qui|--quie|--quiet)
quiet=--quiet
;;
-v|--verbose)
verbose="$verbose"Yes
;;
-k|--k|--ke|--kee|--keep)
keep='-k -k'
;;
--depth=*)
shallow_depth="--depth=$(expr "z$1" : 'z-[^=]*=\(.*\)')"
;;
--depth)
shift
shallow_depth="--depth=$1"
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
case "$#" in
0)
origin=$(get_default_remote)
test -n "$(get_remote_url $)" ||
die "Where do you want to fetch from today?"
set x $origin ; shift ;;
esac
if test -z "$exec"
then
# No command line override and we have configuration for the remote.
exec="--upload-pack=$(get_uploadpack $1)"
fi
remote_nick="$1"
remote=$(get_remote_url "$@")
refs=
rref=
rsync_slurped_objects=
if test "" = "$append"
then
: >"$GIT_DIR/FETCH_HEAD"
fi
# Global that is reused later
ls_remote_result=$(git ls-remote $exec "$remote") ||
die "Cannot get the repository state from $remote"
append_fetch_head ()
# updating the current HEAD with git-fetch in a bare
# repository is always fine.
if test -z "$update_head_ok" && test $(is_bare_repository) = false
then
orig_head=$(git rev-parse --verify HEAD 2>/dev/null)
fi
# Allow --tags/--notags from remote.$1.tagopt
case "$tags$no_tags" in
'')
case "$(git config --get "remote.$1.tagopt")" in
--tags)
tags=t ;;
--no-tags)
no_tags=t ;;
esac
esac
# If --tags (and later --heads or --all) is specified, then we are
# not talking about defaults stored in Pull: line of remotes or
# branches file, and just fetch those and refspecs explicitly given.
# Otherwise we do what we always did.
reflist=$(get_remote_refs_for_fetch "$@")
if test "$tags"
then
taglist=`IFS='	' &&
echo "$ls_remote_result" |
git show-ref --exclude-existing=refs/tags/ |
while read sha1 name
do
echo ".$:$"
done` || exit
if test "$#" -gt 1
then
# remote URL plus explicit refspecs; we need to merge them.
reflist="$reflist$LF$taglist"
else
# No explicit refspecs; fetch tags only.
reflist=$taglist
fi
fi
fetch_all_at_once ()
fetch_per_ref ()
fetch_main ()
fetch_main "$reflist" || exit
# automated tag following
case "$no_tags$tags" in
'')
case "$reflist" in
*:refs/*)
# effective only when we are following remote branch
# using local tracking branch.
taglist=$(IFS='	' &&
echo "$ls_remote_result" |
git show-ref --exclude-existing=refs/tags/ |
while read sha1 name
do
git cat-file -t "$sha1" >/dev/null 2>&1 || continue
echo >&2 "Auto-following $name"
echo ".$:$"
done)
esac
case "$taglist" in
'') ;;
?*)
# do not deepen a shallow tree when following tags
shallow_depth=
fetch_main "$taglist" || exit ;;
esac
esac
# If the original head was empty (i.e. no "master" yet), or
# if we were told not to worry, we do not have to check.
case "$orig_head" in
'')
;;
?*)
curr_head=$(git rev-parse --verify HEAD 2>/dev/null)
if test "$curr_head" != "$orig_head"
then
git update-ref \
-m "$GIT_REFLOG_ACTION: Undoing incorrectly fetched HEAD." \
HEAD "$orig_head"
die "Cannot fetch into the current branch."
fi
;;
esac
