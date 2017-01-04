#!/bin/sh
USAGE='[help|start|bad|good|skip|next|reset|visualize|replay|log|run]'
LONG_USAGE='git bisect help
print this long help message.
git bisect start [--no-checkout] [<bad> [<good>...]] [--] [<pathspec>...]
reset bisect state and start bisection.
git bisect bad [<rev>]
mark <rev> a known-bad revision.
git bisect good [<rev>...]
mark <rev>... known-good revisions.
git bisect skip [(<rev>|<range>)...]
mark <rev>... untestable revisions.
git bisect next
find next bisection to test and check it out.
git bisect reset [<commit>]
finish bisection search and go back to commit.
git bisect visualize
show bisect status in gitk.
git bisect replay <logfile>
replay bisection log.
git bisect log
show bisect log.
git bisect run <cmd>...
use <cmd>... to automatically bisect.
Please use "git help bisect" to get the full man page.'
OPTIONS_SPEC=
. git-sh-setup
. git-sh-i18n
_x40='[0-9a-f][0-9a-f][0-9a-f][0-9a-f][0-9a-f]'
_x40="$_x40$_x40$_x40$_x40$_x40$_x40$_x40$_x40"
bisect_head()
bisect_autostart()
bisect_start()
bisect_write()
is_expected_rev()
check_expected_revs()
bisect_skip()
bisect_state()
bisect_next_check()
bisect_auto_next()
bisect_next()
bisect_visualize()
bisect_reset()
bisect_clean_state()
bisect_replay ()
bisect_run ()
bisect_log ()
case "$#" in
0)
usage ;;
*)
cmd="$1"
shift
case "$cmd" in
help)
git bisect -h ;;
start)
bisect_start "$@" ;;
bad|good)
bisect_state "$cmd" "$@" ;;
skip)
bisect_skip "$@" ;;
next)
# Not sure we want "next" at the UI level anymore.
bisect_next "$@" ;;
visualize|view)
bisect_visualize "$@" ;;
reset)
bisect_reset "$@" ;;
replay)
bisect_replay "$@" ;;
log)
bisect_log ;;
run)
bisect_run "$@" ;;
*)
usage ;;
esac
esac
