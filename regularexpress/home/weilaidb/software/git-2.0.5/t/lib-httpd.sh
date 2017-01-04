# Shell library to run an HTTP server for use in tests.
# Ends the test early if httpd tests should not be run,
# for example because the user has not enabled them.
#
# Usage:
#
#	. ./test-lib.sh
#	. "$TEST_DIRECTORY"/lib-httpd.sh
#	start_httpd
#
#	test_expect_success '...' '
#		...
#	'
#
#	test_expect_success ...
#
#	stop_httpd
#	test_done
#
# Can be configured using the following variables.
#
#    GIT_TEST_HTTPD              enable HTTPD tests
#    LIB_HTTPD_PATH              web server path
#    LIB_HTTPD_MODULE_PATH       web server modules path
#    LIB_HTTPD_PORT              listening port
#    LIB_HTTPD_DAV               enable DAV
#    LIB_HTTPD_SVN               enable SVN
#    LIB_HTTPD_SSL               enable SSL
#
# Copyright (c) 2008 Clemens Buchacher <drizzd@aon.at>
#
test_tristate GIT_TEST_HTTPD
if test "$GIT_TEST_HTTPD" = false
then
skip_all="Network testing disabled (unset GIT_TEST_HTTPD to enable)"
test_done
fi
HTTPD_PARA=""
for DEFAULT_HTTPD_PATH in '/usr/sbin/httpd' '/usr/sbin/apache2'
do
if test -x "$DEFAULT_HTTPD_PATH"
then
break
fi
done
for DEFAULT_HTTPD_MODULE_PATH in '/usr/libexec/apache2' \
'/usr/lib/apache2/modules' \
'/usr/lib64/httpd/modules' \
'/usr/lib/httpd/modules'
do
if test -d "$DEFAULT_HTTPD_MODULE_PATH"
then
break
fi
done
case $(uname) in
Darwin)
HTTPD_PARA="$HTTPD_PARA -DDarwin"
;;
esac
LIB_HTTPD_PATH=$
LIB_HTTPD_PORT=$
TEST_PATH="$TEST_DIRECTORY"/lib-httpd
HTTPD_ROOT_PATH="$PWD"/httpd
HTTPD_DOCUMENT_ROOT_PATH=$HTTPD_ROOT_PATH/www
# hack to suppress apache PassEnv warnings
GIT_VALGRIND=$GIT_VALGRIND; export GIT_VALGRIND
GIT_VALGRIND_OPTIONS=$GIT_VALGRIND_OPTIONS; export GIT_VALGRIND_OPTIONS
if ! test -x "$LIB_HTTPD_PATH"
then
test_skip_or_die $GIT_TEST_HTTPD "no web server found at '$LIB_HTTPD_PATH'"
fi
HTTPD_VERSION=`$LIB_HTTPD_PATH -v | \
sed -n 's/^Server version: Apache\/\([0-9]*\)\..*$/\1/p; q'`
if test -n "$HTTPD_VERSION"
then
if test -z "$LIB_HTTPD_MODULE_PATH"
then
if ! test $HTTPD_VERSION -ge 2
then
test_skip_or_die $GIT_TEST_HTTPD \
"at least Apache version 2 is required"
fi
if ! test -d "$DEFAULT_HTTPD_MODULE_PATH"
then
test_skip_or_die $GIT_TEST_HTTPD \
"Apache module directory not found"
fi
LIB_HTTPD_MODULE_PATH="$DEFAULT_HTTPD_MODULE_PATH"
fi
else
test_skip_or_die $GIT_TEST_HTTPD \
"Could not identify web server at '$LIB_HTTPD_PATH'"
fi
prepare_httpd()
start_httpd()
stop_httpd()
test_http_push_nonff ()
setup_askpass_helper()
set_askpass()
expect_askpass()
