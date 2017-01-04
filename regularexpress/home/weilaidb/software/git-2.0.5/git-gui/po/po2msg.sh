#!/bin/sh
# Tcl ignores the next line -*- tcl -*- \
exec tclsh "$0" -- "$@"
# This is a really stupid program, which serves as an alternative to
# msgfmt.  It _only_ translates to Tcl mode, does _not_ validate the
# input, and does _not_ output any statistics.
proc u2a
set output_directory "."
set lang "dummy"
set files [list]
set show_statistics 0
# parse options
for
proc flush_msg
set fuzzy 0
set translated_count 0
set fuzzy_count 0
set not_translated_count 0
foreach file $files
if
