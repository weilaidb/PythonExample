#! /bin/sh
#
# Run test 1.
msg()
init_tmadmin()
mkdir $RUN/data2
# Everything else is done in run/bin.
cd $RUN/bin
# The CFLAGS variable defines the pre-processor defines -- start with
# whatever the user set, and add our own stuff.
#
# For debugging output, add -DDVERBOSE
test "$DVERBOSE" == 1 &&
COMPILE_FLAGS="$CFLAGS $COMPILE_FLAGS -g -I../../.."
UTILITY_FILES="-f ../../src1/htimestampxa.c -f ../../utilities/bdb_xa_util.c"
msg "BUILDING CLIENT"
CFLAGS="$COMPILE_FLAGS"; export CFLAGS
buildclient -r BERKELEY-DB $DVERBOSE_FLAG -o client \
$UTILITY_FILES -f ../../src1/client.c
test "$?" -eq 0 ||
msg "BUILDING SERVER #1"
CFLAGS="$COMPILE_FLAGS -DSERVER1"; export CFLAGS
buildserver -r BERKELEY-DB $DVERBOSE_FLAG -o server1 \
-s TestTxn1:TestTxn1 \
$UTILITY_FILES -f ../../src1/server.c
test "$?" -eq 0 ||
msg "BUILDING SERVER #2"
CFLAGS="$COMPILE_FLAGS -DSERVER2"; export CFLAGS
buildserver $DVERBOSE_FLAG -r BERKELEY-DB -o server2 \
-s TestTxn2:TestTxn2 \
$UTILITY_FILES -f ../../src1/server.c
test "$?" -eq 0 ||
msg "BUILDING THE RESOURCE MANAGER."
buildtms -o DBRM -r BERKELEY-DB
init_tmadmin
# Boot Tuxedo.
# You should see something like:
#
# Booting admin processes ...
#
# exec BBL -A :
#         process id=13845 ... Started.
#
# Booting server processes ...
#
# exec DBRM -A :
#         process id=13846 ... Started.
# exec DBRM -A :
#         process id=13847 ... Started.
# exec server1 -A :
#         process id=13848 ... Started.
# exec server2 -A :
#         process id=13849 ... Started.
# 5 processes started.
msg "BOOTING TUXEDO."
tmboot -y
# Run the client with 10, 100 and 1000 transactions.
exitval=0
for i in 10 100 1000; do
msg "RUN THE CLIENT WITH $i TRANSACTIONS."
./client $DVERBOSE_FLAG -n $i
test "$?" -ne 0 &&
done
msg "SHUTTING DOWN THE TRANSACTION MANAGER."
echo 'y' | tmshutdown
# Copy out any server output.
echo "STDOUT:"
cat stdout
# Copy out any server errors.echo "STDERR:"
cat stderr
test -s stderr &&
# We never checkpointed, run recovery to make sure it all works.
msg "RECOVERY:"
db_recover -h ../data -v
test "$?" -ne 0 &&
exit $exitval
