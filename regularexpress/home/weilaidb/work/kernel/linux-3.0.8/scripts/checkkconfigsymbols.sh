#!/bin/sh
# Find Kconfig variables used in source code but never defined in Kconfig
# Copyright (C) 2007, Paolo 'Blaisorblade' Giarrusso <blaisorblade@yahoo.it>
# Tested with dash.
paths="$@"
[ -z "$paths" ] && paths=.
# Doing this once at the beginning saves a lot of time, on a cache-hot tree.
Kconfigs="`find . -name 'Kconfig' -o -name 'Kconfig*[^~]'`"
/bin/echo -e "File list \tundefined symbol used"
find $paths -name '*.[chS]' -o -name 'Makefile' -o -name 'Makefile*[^~]'| while read i
do
# Output the bare Kconfig variable and the filename; the _MODULE part at
# the end is not removed here (would need perl an not-hungry regexp for that).
sed -ne 's!^.*\<\(UML_\)\?CONFIG_\([0-9A-Za-z_]\+\).*!\2 '$i'!p' < $i
done | \
# Smart "sort|uniq" implemented in awk and tuned to collect the names of all
# files which use a given symbol
awk '
END ' |
while read symb files; do
# Remove the _MODULE suffix when checking the variable name. This should
# be done only on tristate symbols, actually, but Kconfig parsing is
# beyond the purpose of this script.
symb_bare=`echo $symb | sed -e 's/_MODULE
if ! grep -q "\<$symb_bare\>" $Kconfigs; then
/bin/echo -e "$files: \t$symb"
fi
done|sort
