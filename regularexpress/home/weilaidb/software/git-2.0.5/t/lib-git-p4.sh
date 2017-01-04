#
# Library code for git p4 tests
#
# p4 tests never use the top-level repo; always build/clone into
# a subdirectory called "$git"
TEST_NO_CREATE_REPO=NoThanks
. ./test-lib.sh
if ! test_have_prereq PYTHON
then
skip_all='skipping git p4 tests; python not available'
test_done
fi
( p4 -h && p4d -h ) >/dev/null 2>&1 ||
# On cygwin, the NT version of Perforce can be used.  When giving
# it paths, either on the command-line or in client specifications,
# be sure to use the native windows form.
#
# Older versions of perforce were available compiled natively for
# cygwin.  Those do not accept native windows paths, so make sure
# not to convert for them.
native_path()
# Try to pick a unique port: guess a large number, then hope
# no more than one of each test is running.
#
# This does not handle the case where somebody else is running the
# same tests and has chosen the same ports.
testid=$
git_p4_test_start=9800
P4DPORT=$((10669 + ($testid - $git_p4_test_start)))
P4PORT=localhost:$P4DPORT
P4CLIENT=client
P4USER=author
P4EDITOR=true
unset P4CHARSET
export P4PORT P4CLIENT P4USER P4EDITOR P4CHARSET
db="$TRASH_DIRECTORY/db"
cli="$TRASH_DIRECTORY/cli"
git="$TRASH_DIRECTORY/git"
pidfile="$TRASH_DIRECTORY/p4d.pid"
# git p4 submit generates a temp file, which will
# not get cleaned up if the submission fails.  Don't
# clutter up /tmp on the test machine.
TMPDIR="$TRASH_DIRECTORY"
export TMPDIR
start_p4d()
p4_add_user()
kill_p4d()
cleanup_git()
marshal_dump()
#
# Construct a client with this list of View lines
#
client_view()
is_cli_file_writeable()
