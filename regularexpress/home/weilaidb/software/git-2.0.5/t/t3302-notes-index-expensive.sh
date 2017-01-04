#!/bin/sh
#
# Copyright (c) 2007 Johannes E. Schindelin
#
test_description='Test commit notes index (expensive!)'
. ./test-lib.sh
test_set_prereq NOT_EXPENSIVE
test -n "$GIT_NOTES_TIMING_TESTS" && test_set_prereq EXPENSIVE
test -x /usr/bin/time && test_set_prereq USR_BIN_TIME
create_repo ()
test_notes ()
cat > time_notes << \EOF
mode=$1
i=1
while [ $i -lt $2 ]; do
case $1 in
no-notes)
GIT_NOTES_REF=non-existing; export GIT_NOTES_REF
;;
notes)
unset GIT_NOTES_REF
;;
esac
git log >/dev/null
i=$(($i+1))
done
EOF
time_notes ()
do_tests ()
do_tests NOT_EXPENSIVE 10
for count in 100 1000 10000; do
do_tests EXPENSIVE $count
done
test_done
