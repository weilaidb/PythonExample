#!/bin/bash
#
# test_failchk --
#	Test failchk in a simple threaded application of some numbers of readers
#	and writers competing to read and update a set of words.
#	A typical test scenario runs this programs several times concurrently,
#	with different options:
#		first with the -I option to clear out any home directory
#		one or more instances with -f to activate the failchk thread
#		one or more instance with neither -I nor -f, as minimally
#			involved workers.
#
# If no arguments are given, it selects a default mix of processes:
#	run_failchk.sh 100 2 '-r1 -w2' -w2
#
# This does 100 iterations of this failchk group of applications:
#	2 copies of test_failchk with 1 reader and 2 writer threads
#	a solo test_failchk the default # of readers (4) and 2 writers
#	a copy of the last test_failchk adding a failchk thread
#	wait a few seconds
#	randomly kill one of the non-failchk process
#
# This shell script initializes the env with the default number of readers and
# writers, then starts one "worker" process with each listed argument. The last
# worker started also uses -f, to ensure that at least one process will be
# running failchk. It is okay for -f to also be passed to one or more of the
# other processes. One of the processes  is selected at random to be killed.
if test $# -eq 0 ; then
set -- 100 2 '-r1 -w2' -w2
echo Running $0 $@
fi
repeat=$1
dup_procs=$2
shift; shift
nprocs=0
victim=-1
function timestamp
function dofork
make test_failchk
home=TESTDIR
rm $home/*
test -d $home || mkdir $home
initargs=$1
shift
function main
main $* 2>&1 | timestamp
