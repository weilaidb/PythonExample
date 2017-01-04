#!/bin/sh
# Generate tags or cscope files
# Usage tags.sh <mode>
#
# mode may be any of: tags, TAGS, cscope
#
# Uses the following environment variables:
# ARCH, SUBARCH, SRCARCH, srctree, src, obj
if [ "$KBUILD_VERBOSE" = "1" ]; then
set -x
fi
# This is a duplicate of RCS_FIND_IGNORE without escaped '()'
ignore="( -name SCCS -o -name BitKeeper -o -name .svn -o \
-name CVS  -o -name .pc       -o -name .hg  -o \
-name .git )                                   \
-prune -o"
# Do not use full path if we do not use O=.. builds
# Use make O=.
# to force full paths for a non-O= build
if [ "$" = "" ]; then
tree=
else
tree=$/
fi
# Find all available archs
find_all_archs()
# Detect if ALLSOURCE_ARCHS is set. If not, we assume SRCARCH
if [ "$" = "" ]; then
ALLSOURCE_ARCHS=$
elif [ "$" = "all" ]; then
find_all_archs
fi
# find sources in arch/$ARCH
find_arch_sources()
# find sources in arch/$1/include
find_arch_include_sources()
# find sources in include/
find_include_sources()
# find sources in rest of tree
# we could benefit from a list of dirs to search in here
find_other_sources()
find_sources()
all_sources()
all_kconfigs()
all_defconfigs()
docscope()
dogtags()
exuberant()
emacs()
xtags()
# Support um (which uses SUBARCH)
if [ "$" = "um" ]; then
if [ "$SUBARCH" = "i386" ]; then
archinclude=x86
elif [ "$SUBARCH" = "x86_64" ]; then
archinclude=x86
else
archinclude=$
fi
fi
case "$1" in
"cscope")
docscope
;;
"gtags")
dogtags
;;
"tags")
rm -f tags
xtags ctags
;;
"TAGS")
rm -f TAGS
xtags etags
;;
esac
