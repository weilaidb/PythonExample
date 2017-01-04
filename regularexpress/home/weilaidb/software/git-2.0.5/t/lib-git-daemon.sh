# Shell library to run git-daemon in tests.  Ends the test early if
# GIT_TEST_GIT_DAEMON is not set.
#
# Usage:
#
#	. ./test-lib.sh
#	. "$TEST_DIRECTORY"/lib-git-daemon.sh
#	start_git_daemon
#
#	test_expect_success '...' '
#		...
#	'
#
#	test_expect_success ...
#
#	stop_git_daemon
#	test_done
test_tristate GIT_TEST_GIT_DAEMON
if test "$GIT_TEST_GIT_DAEMON" = false
then
skip_all="git-daemon testing disabled (unset GIT_TEST_GIT_DAEMON to enable)"
test_done
fi
LIB_GIT_DAEMON_PORT=$
GIT_DAEMON_PID=
GIT_DAEMON_DOCUMENT_ROOT_PATH="$PWD"/repo
GIT_DAEMON_URL=git:
start_git_daemon()
stop_git_daemon()
