#!/bin/sh
cat <<\EOF
Git Howto Index
===============
Here is a collection of mailing list postings made by various
people describing how they use Git in their workflow.
EOF
for txt
do
title=$(expr "$txt" : '.*/\(.*\)\.txt$')
from=$(sed -ne '
/^$/q
/^From:[ 	]/
' "$txt")
abstract=$(sed -ne '
/^Abstract:[ 	]/' "$txt")
if grep 'Content-type: text/asciidoc' >/dev/null $txt
then
file=$(expr "$txt" : '\(.*\)\.txt$').html
else
file="$txt"
fi
echo "* link:$file[$title] $from
$abstract
"
done
