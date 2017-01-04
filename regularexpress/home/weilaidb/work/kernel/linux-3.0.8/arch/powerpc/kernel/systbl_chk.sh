#!/bin/sh
#
# Just process the CPP output from systbl_chk.c and complain
# if anything is out of order.
#
# Copyright © 2008 IBM Corporation
#
# This program is free software; you can redistribute it and/or
# modify it under the terms of the GNU General Public License
# as published by the Free Software Foundation; either version
# 2 of the License, or (at your option) any later version.
awk	'BEGIN 	# Ignore the beginning of the file
/^#/
/^[ \t]*$/
/^START_TABLE/
/^END_TABLE/
' "$1"
