#!/bin/sh
#
# This script extracts the 0MQ version from include/zmq.h, which is the master
# location for this information.
#
if [ ! -f include/zmq.h ]; then
echo "version.sh: error: include/zmq.h does not exist" 1>&2
exit 1
fi
MAJOR=`egrep '^#define +ZMQ_VERSION_MAJOR +[0-9]+$' include/zmq.h`
MINOR=`egrep '^#define +ZMQ_VERSION_MINOR +[0-9]+$' include/zmq.h`
PATCH=`egrep '^#define +ZMQ_VERSION_PATCH +[0-9]+$' include/zmq.h`
if [ -z "$MAJOR" -o -z "$MINOR" -o -z "$PATCH" ]; then
echo "version.sh: error: could not extract version from include/zmq.h" 1>&2
exit 1
fi
MAJOR=`echo $MAJOR | awk ''`
MINOR=`echo $MINOR | awk ''`
PATCH=`echo $PATCH | awk ''`
echo $MAJOR.$MINOR.$PATCH | tr -d '\n'
