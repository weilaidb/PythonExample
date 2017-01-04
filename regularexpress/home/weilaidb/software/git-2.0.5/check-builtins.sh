#!/bin/sh
|
make -f - sayIt 2>/dev/null |
sed -n -e 's/.*XXX \(.*\) YYY.*/\1/p' |
sort |
{
bad=0
while read builtin
do
base=$(expr "$builtin" : 'git-\(.*\)')
x=$(sed -ne 's/.*
