#!/bin/sh
# Needed for systems without gettext
$* -xc -o /dev/null - > /dev/null 2>&1 << EOF
int main()
EOF
if [ ! "$?" -eq "0"  ]; then
echo -DKBUILD_NO_NLS;
fi
