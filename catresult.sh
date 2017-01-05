#!/bin/sh

if [ -z $1 ];then
	echo "./usage.sh abspath"
	exit
	
fi
CURPATH=`pwd`
echo "current path:$CURPATH"
echo "to path     :$CURPATH/$1"
cd $CURPATH/$1
find . -type f  > filelist
savefile=cat.result.txt
rm -rf $savefile
i=0
totalnum=`cat filelist | wc -l`
while read line
do
	((i++))
	((per=$i*100/$totalnum))
	# echo "no: $((i)), totalnum: $totalnum, %$((per))"
	echo "%$((per))"
	echo "========================"$line"========================" >> $savefile
	cat $line >> $savefile
done < filelist

echo "all over!!"
echo "all done!!"