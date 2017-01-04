#!/bin/sh
OUT_DIR="$"
DOXYFILE="$"
DOXYGEN="$"
shift 3
if [ -e "VERSION" ]; then
VERSION=`cat "VERSION"`
else
VERSION=`git describe`
fi
$DOXYGEN - <<EOF
@INCLUDE        = $
INPUT           = $@
HTML_TIMESTAMP  = NO
PROJECT_NUMBER  = $VERSION
OUTPUT_DIRECTORY = $OUT_DIR
EOF
