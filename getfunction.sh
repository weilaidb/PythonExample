#!/bin/sh
##getfunction.sh 获取函数列表

export LC_ALL="en_US.UTF-8"
export JAVA_HOME=/opt/jdk-1-6.0.11
PATH=$PATH:$JAVA_HOME/bin/

PARAM_LIST=$*
PARAM_NUM=$#

usage()
{
echo "usage: ./getfunction.sh testpath"
}

judgeinputpara()
{
	REQNUM=1
	if [ $1 -lt $REQNUM ];then
		echo "argc less than $REQNUM"
		usage
		exit
	fi
	echo "argc num: $REQNUM"
}

judgeinputpara $PARAM_NUM

CHECKPATH=$1


GETFUNCTIONS()
{
	echo "parse dir : $1"
	SAVEFILELIST=filelist
	find $1 -type f | grep ".c$\|.cpp$\|.h$\|.java$"> $SAVEFILELIST
	
	while read line
	do
		./re.py $line
	done < $SAVEFILELIST
}

#shift 1

for((i=0; i < PARAM_NUM; i++))
do
	echo "paralist : $1"
	DIRPATH=$1
	echo "parase is : $DIRPATH"
	GETFUNCTIONS $DIRPATH
	shift
done


echo "all at over !!!"
echo "all done!!!"
