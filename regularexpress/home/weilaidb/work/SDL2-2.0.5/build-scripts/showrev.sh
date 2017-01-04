#!/bin/sh
#
# Print the current source revision, if available
hg parents --template 'hg-:' || (echo "hg-0:baadf00d"; exit 1)
