#!/bin/sh
# Check ncurses compatibility
# What library to link
ldflags()
# Where is ncurses.h?
ccflags()
# Temp file, try to clean up after us
tmp=.lxdialog.tmp
trap "rm -f $tmp" 0 1 2 3 15
# Check if we can link to ncurses
check()
usage()
if [ $# -eq 0 ]; then
usage
exit 1
fi
cc=""
case "$1" in
"-check")
shift
cc="$@"
check
;;
"-ccflags")
ccflags
;;
"-ldflags")
shift
cc="$@"
ldflags
;;
"*")
usage
exit 1
;;
esac
