#!/bin/sh
#
# arch/blackfin/boot/install.sh
#
# This file is subject to the terms and conditions of the GNU General Public
# License.  See the file "COPYING" in the main directory of this archive
# for more details.
#
# Copyright (C) 1995 by Linus Torvalds
#
# Adapted from code in arch/i386/boot/Makefile by H. Peter Anvin
# Adapted from code in arch/i386/boot/install.sh by Mike Frysinger
#
# "make install" script for Blackfin architecture
#
# Arguments:
#   $1 - kernel version
#   $2 - kernel image file
#   $3 - kernel map file
#   $4 - default install path (blank if root directory)
#
verify ()
# Make sure the files actually exist
verify "$2"
verify "$3"
# User may have a custom install script
if [ -x ~/bin/$ ]; then exec ~/bin/$ "$@"; fi
if which $ >/dev/null 2>&1; then
exec $ "$@"
fi
# Default install - same as make zlilo
back_it_up()
back_it_up $4/uImage
back_it_up $4/System.map
cat $2 > $4/uImage
cp $3 $4/System.map
