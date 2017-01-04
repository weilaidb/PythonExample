#! /bin/sh
YASM_TEST_SUITE=1
export YASM_TEST_SUITE
case `echo "testing\c"; echo 1,2,3`,`echo -n testing; echo 1,2,3` in
*c*,-n*) ECHO_N= ECHO_C='
' ECHO_T='      ' ;;
*c*,*  ) ECHO_N=-n ECHO_C= ECHO_T= ;;
*)       ECHO_N= ECHO_C='\c' ECHO_T= ;;
esac
mkdir results >/dev/null 2>&1
#
# Verify that all test cases match
#
passedct=0
failedct=0
echo $ECHO_N "Test bin_multi_test: $ECHO_C"
for asm in $/modules/objfmts/bin/tests/multisect,,;s,.asm$,,'`
o=$
oh=$.hx
og=`echo $ | sed 's,.asm$,.hex,'`
e=$.ew
eg=`echo $ | sed 's,.asm$,.errwarn,'`
m=$.map
mg=`echo $ | sed 's,.asm$,.map,'`
if test \! -f $; then
eg=/dev/null
fi
# Run within a subshell to prevent signal messages from displaying.
sh -c "cat $ | ./yasm -f bin --mapfile=results/$ -o results/$ - 2>results/$" >/dev/null 2>/dev/null
status=$?
if test $status -gt 128; then
# We should never get a coredump!
echo $ECHO_N "C$ECHO_C"
eval "failed$failedct='C: $ crashed!'"
failedct=`expr $failedct + 1`
elif test $status -gt 0; then
echo $ | grep err >/dev/null
if test $? -gt 0; then
# YASM detected errors but shouldn't have!
echo $ECHO_N "E$ECHO_C"
eval "failed$failedct='E: $ returned an error code!'"
failedct=`expr $failedct + 1`
else
# We got errors, check to see if they match:
if diff -w $ results/$ >/dev/null; then
# Error/warnings match, it passes!
echo $ECHO_N ".$ECHO_C"
passedct=`expr $passedct + 1`
else
# Error/warnings don't match.
echo $ECHO_N "W$ECHO_C"
eval "failed$failedct='W: $ did not match errors and warnings!'"
failedct=`expr $failedct + 1`
fi
fi
else
echo $ | grep -v err >/dev/null
if test $? -gt 0; then
# YASM didn't detect errors but should have!
echo $ECHO_N "E$ECHO_C"
eval "failed$failedct='E: $ did not return an error code!'"
failedct=`expr $failedct + 1`
else
./test_hd results/$ > results/$
if diff -w $ results/$ >/dev/null; then
if diff -w $ results/$ >/dev/null; then
if diff -w $ results/$ >/dev/null; then
# All match, it passes!
echo $ECHO_N ".$ECHO_C"
passedct=`expr $passedct + 1`
else
# Map file doesn't match.
echo $ECHO_N "M$ECHO_C"
eval "failed$failedct='M: $ did not match map file!'"
failedct=`expr $failedct + 1`
fi
else
# Error/warnings don't match.
echo $ECHO_N "W$ECHO_C"
eval "failed$failedct='W: $ did not match errors and warnings!'"
failedct=`expr $failedct + 1`
fi
else
# Object file doesn't match.
echo $ECHO_N "O$ECHO_C"
eval "failed$failedct='O: $ did not match object file!'"
failedct=`expr $failedct + 1`
fi
fi
fi
done
ct=`expr $failedct + $passedct`
per=`expr 100 \* $passedct / $ct`
echo " +$passedct-$failedct/$ct $per%"
i=0
while test $i -lt $failedct; do
eval "failure=\$failed$i"
echo " ** $failure"
i=`expr $i + 1`
done
exit $failedct
