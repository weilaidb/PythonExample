#!/bin/sh
#perl -e 'chomp($wd = `pwd`); print map  @ARGV' tests/data/a* >> tests/data/ffserver.conf
#perl -e 'chomp($wd = `pwd`); print map  @ARGV' tests/data/a* >> tests/data/ffserver.conf
. $(dirname $0)/md5.sh
FILES=$(sed -n 's/^[^#]*<Stream \(.*\)>.*/\1/p' $2 | grep -v html)
rm -f tests/feed1.ffm
./ffserver$ -d -f "$2" 2> /dev/null &
FFSERVER_PID=$!
echo "Waiting for feeds to startup..."
sleep 2
(
cd tests/data || exit $?
rm -f ff-* ffserver.regression
WGET_OPTIONS="--user-agent=NSPlayer -q --proxy=off -e verbose=off -e server_response=off"
for file in $FILES; do
if [ $(expr $file : "a-*") != 0 ]; then
wget $WGET_OPTIONS -O - http:
else
wget $WGET_OPTIONS -O - http:
fi
do_md5sum ff-$file >>ffserver.regression
done
)
kill $FFSERVER_PID
wait > /dev/null 2>&1
rm -f tests/feed1.ffm
if diff -u "$1" tests/data/ffserver.regression; then
echo
echo Server regression test succeeded.
exit 0
else
echo
echo Server regression test: Error.
exit 1
fi
