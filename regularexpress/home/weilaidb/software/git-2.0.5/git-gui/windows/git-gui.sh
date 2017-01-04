#!/bin/sh
# Tcl ignores the next line -*- tcl -*- \
exec wish "$0" -- "$@"
if
set basedir [file dirname \
[file dirname \
[file dirname [info script]]]]
set bindir [file join $basedir bin]
set bindir "$bindir;[file join $basedir mingw bin]"
regsub -all ";" $bindir "\\;" bindir
set env(PATH) "$bindir;$env(PATH)"
unset bindir
source [file join [file dirname [info script]] git-gui.tcl]
