#!/bin/sh
#
# Check if current architecture are missing any function calls compared
# to i386.
# i386 define a number of legacy system calls that are i386 specific
# and listed below so they are ignored.
#
# Usage:
# checksyscalls.sh gcc gcc-options
#
ignore_list()
syscall_list()
(ignore_list && syscall_list $(dirname $0)/../arch/x86/include/asm/unistd_32.h) | \
$* -E -x c - > /dev/null
