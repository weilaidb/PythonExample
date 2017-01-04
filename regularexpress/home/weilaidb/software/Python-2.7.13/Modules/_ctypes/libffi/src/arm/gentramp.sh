#!/bin/sh
# -----------------------------------------------------------------------
#  gentramp.sh - Copyright (c) 2010, Plausible Labs Cooperative, Inc.
#
#  ARM Trampoline Page Generator
#
#  Permission is hereby granted, free of charge, to any person obtaining
#  a copy of this software and associated documentation files (the
#  ``Software''), to deal in the Software without restriction, including
#  without limitation the rights to use, copy, modify, merge, publish,
#  distribute, sublicense, and/or sell copies of the Software, and to
#  permit persons to whom the Software is furnished to do so, subject to
#  the following conditions:
#
#  The above copyright notice and this permission notice shall be included
#  in all copies or substantial portions of the Software.
#
#  THE SOFTWARE IS PROVIDED ``AS IS'', WITHOUT WARRANTY OF ANY KIND,
#  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
#  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
#  NONINFRINGEMENT.  IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
#  HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
#  WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
#  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
#  DEALINGS IN THE SOFTWARE.
#  -----------------------------------------------------------------------
PROGNAME=$0
# Each trampoline is exactly 3 instructions, or 12 bytes. If any of these values change,
# the entire arm trampoline implementation must be updated to match, too.
# Size of an individual trampoline, in bytes
TRAMPOLINE_SIZE=12
# Page size, in bytes
PAGE_SIZE=4096
# Compute the size of the reachable config page; The first 16 bytes of the config page
# are unreachable due to our maximum pc-relative ldr offset.
PAGE_AVAIL=`expr $PAGE_SIZE - 16`
# Compute the number of of available trampolines.
TRAMPOLINE_COUNT=`expr $PAGE_AVAIL / $TRAMPOLINE_SIZE`
header ()
# WARNING - Don't modify the trampoline code size without also updating the relevant libffi code
trampoline ()
main ()
main
