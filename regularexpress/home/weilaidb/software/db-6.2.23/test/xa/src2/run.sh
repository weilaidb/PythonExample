#!/bin/ksh
#      Copyright (c) 1997 BEA Systems, Inc.
#       All Rights Reserved
#
#       THIS IS UNPUBLISHED PROPRIETARY SOURCE CODE OF
#       BEA Systems, Inc.
#       The copyright notice above does not evidence any
#       actual or intended publication of such source code.
# ident "@(#) qa/sanity_tests/apps/tranapp/runme.sh	$Revision: 1.3 $"
#
#set -x
#* Script that will be executed for SDK on specified machine
# Run test 2.
msg()
init_tmadmin()
machnm=`uname -n`
# Everything else is done in run/bin.
cd $RUN/bin
msg "Building the application server and client ..."
test "$DVERBOSE" == 1 &&
CFLAGS="$COMPILE_FLAGS -I$DB_INSTALL/include -L$DB_INSTALL/lib"; export CFLAGS
UTILITY_FILES="-f ../../utilities/bdb_xa_util.c"
buildserver $DVERBOSE_FLAG $UTILITY_FILES \
-f ../../src2/bdb1.c -o bdb1 -r "BERKELEY-DB" -s WRITE  -s CURSOR
test "$?" -eq 0 ||
buildserver $DVERBOSE_FLAG $UTILITY_FILES \
-f ../../src2/bdb2.c -o bdb2 -r "BERKELEY-DB" -s WRITE2
test "$?" -eq 0 ||
buildclient $DVERBOSE_FLAG $UTILITY_FILES \
-r "BERKELEY-DB" -f ../../src2/client.c -o client
test "$?" -eq 0 ||
msg "BUILDING THE RESOURCE MANAGER."
buildtms -o TMS_BDB -r "BERKELEY-DB"
init_tmadmin
msg "BOOTING TUXEDO"
tmboot -y  || exit 1
msg "STARTING SECOND TEST"
exitval=0
msg "RUN CLIENTS"
# Test that multiple processes can execute without error
./client -s WRITE  -m hello -t 800 2>> stderr
#./client -s WRITE  -m hello2 -t 1000 2>> stderr
msg "SHUTTING DOWN THE TRANSACTION MANAGER."
echo 'y' | tmshutdown
# Copy out any server output.
echo "STDOUT:"
cat stdout
# Copy out any server errors.
test -s stderr &&
exit $exitval
