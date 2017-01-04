# Test framework for git.  See t/README for usage.
#
# Copyright (c) 2005 Junio C Hamano
#
# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 2 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program.  If not, see http:
# Keep the original TERM for say_color
ORIGINAL_TERM=$TERM
# Test the binaries we have just built.  The tests are kept in
# t/ subdirectory and are run in 'trash directory' subdirectory.
if test -z "$TEST_DIRECTORY"
then
# We allow tests to override this, in case they want to run tests
# outside of t/, e.g. for running tests on the test library
# itself.
TEST_DIRECTORY=$(pwd)
else
# ensure that TEST_DIRECTORY is an absolute path so that it
# is valid even if the current working directory is changed
TEST_DIRECTORY=$(cd "$TEST_DIRECTORY" && pwd) || exit 1
fi
if test -z "$TEST_OUTPUT_DIRECTORY"
then
# Similarly, override this to store the test-results subdir
# elsewhere
TEST_OUTPUT_DIRECTORY=$TEST_DIRECTORY
fi
GIT_BUILD_DIR="$TEST_DIRECTORY"/..
################################################################
# It appears that people try to run tests without building...
"$GIT_BUILD_DIR/git" >/dev/null
if test $? != 1
then
echo >&2 'error: you do not seem to have built git yet.'
exit 1
fi
. "$GIT_BUILD_DIR"/GIT-BUILD-OPTIONS
export PERL_PATH SHELL_PATH
# if --tee was passed, write the output not only to the terminal, but
# additionally to the file test-results/$BASENAME.out, too.
case "$GIT_TEST_TEE_STARTED, $* " in
done,*)
# do not redirect again
;;
*' --tee '*|*' --va'*)
mkdir -p "$TEST_OUTPUT_DIRECTORY/test-results"
BASE="$TEST_OUTPUT_DIRECTORY/test-results/$(basename "$0" .sh)"
(GIT_TEST_TEE_STARTED=done $ "$0" "$@" 2>&1;
echo $? > $BASE.exit) | tee $BASE.out
test "$(cat $BASE.exit)" = 0
exit
;;
esac
# For repeatability, reset the environment to known value.
LANG=C
LC_ALL=C
PAGER=cat
TZ=UTC
TERM=dumb
export LANG LC_ALL PAGER TERM TZ
EDITOR=:
# A call to "unset" with no arguments causes at least Solaris 10
# /usr/xpg4/bin/sh and /bin/ksh to bail out.  So keep the unsets
# deriving from the command substitution clustered with the other
# ones.
unset VISUAL EMAIL LANGUAGE COLUMNS $("$PERL_PATH" -e '
my @env = keys %ENV;
my $ok = join("|", qw(
TRACE
DEBUG
USE_LOOKUP
TEST
.*_TEST
PROVE
VALGRIND
UNZIP
PERF_
));
my @vars = grep(/^GIT_/ && !/^GIT_($ok)/o, @env);
print join("\n", @vars);
')
unset XDG_CONFIG_HOME
unset GITPERLLIB
GIT_AUTHOR_EMAIL=author@example.com
GIT_AUTHOR_NAME='A U Thor'
GIT_COMMITTER_EMAIL=committer@example.com
GIT_COMMITTER_NAME='C O Mitter'
GIT_MERGE_VERBOSITY=5
GIT_MERGE_AUTOEDIT=no
export GIT_MERGE_VERBOSITY GIT_MERGE_AUTOEDIT
export GIT_AUTHOR_EMAIL GIT_AUTHOR_NAME
export GIT_COMMITTER_EMAIL GIT_COMMITTER_NAME
export EDITOR
if test -n "$"
then
GIT_INDEX_VERSION="$TEST_GIT_INDEX_VERSION"
export GIT_INDEX_VERSION
fi
# Add libc MALLOC and MALLOC_PERTURB test
# only if we are not executing the test with valgrind
if expr " $GIT_TEST_OPTS " : ".* --valgrind " >/dev/null ||
test -n "$TEST_NO_MALLOC_CHECK"
then
setup_malloc_check ()
teardown_malloc_check ()
else
setup_malloc_check ()
teardown_malloc_check ()
fi
# Protect ourselves from common misconfiguration to export
# CDPATH into the environment
unset CDPATH
unset GREP_OPTIONS
unset UNZIP
case $(echo $GIT_TRACE |tr "[A-Z]" "[a-z]") in
1|2|true)
echo "* warning: Some tests will not work if GIT_TRACE" \
"is set as to trace on STDERR ! *"
echo "* warning: Please set GIT_TRACE to something" \
"other than 1, 2 or true ! *"
;;
esac
# Convenience
#
# A regexp to match 5 and 40 hexdigits
_x05='[0-9a-f][0-9a-f][0-9a-f][0-9a-f][0-9a-f]'
_x40="$_x05$_x05$_x05$_x05$_x05$_x05$_x05$_x05"
# Zero SHA-1
_z40=0000000000000000000000000000000000000000
# Line feed
LF='
'
# UTF-8 ZERO WIDTH NON-JOINER, which HFS+ ignores
# when case-folding filenames
u200c=$(printf '\342\200\214')
export _x05 _x40 _z40 LF u200c
# Each test should start with something like this, after copyright notices:
#
# test_description='Description of this test...
# This test checks if command xyzzy does the right thing...
# '
# . ./test-lib.sh
[ "x$ORIGINAL_TERM" != "xdumb" ] && (
TERM=$ORIGINAL_TERM &&
export TERM &&
[ -t 1 ] &&
tput bold >/dev/null 2>&1 &&
tput setaf 1 >/dev/null 2>&1 &&
tput sgr0 >/dev/null 2>&1
) &&
color=t
while test "$#" -ne 0
do
case "$1" in
-d|--d|--de|--deb|--debu|--debug)
debug=t; shift ;;
-i|--i|--im|--imm|--imme|--immed|--immedi|--immedia|--immediat|--immediate)
immediate=t; shift ;;
-l|--l|--lo|--lon|--long|--long-|--long-t|--long-te|--long-tes|--long-test|--long-tests)
GIT_TEST_LONG=t; export GIT_TEST_LONG; shift ;;
-h|--h|--he|--hel|--help)
help=t; shift ;;
-v|--v|--ve|--ver|--verb|--verbo|--verbos|--verbose)
verbose=t; shift ;;
--verbose-only=*)
verbose_only=$(expr "z$1" : 'z[^=]*=\(.*\)')
shift ;;
-q|--q|--qu|--qui|--quie|--quiet)
# Ignore --quiet under a TAP::Harness. Saying how many tests
# passed without the ok/not ok details is always an error.
test -z "$HARNESS_ACTIVE" && quiet=t; shift ;;
--with-dashes)
with_dashes=t; shift ;;
--no-color)
color=; shift ;;
--va|--val|--valg|--valgr|--valgri|--valgrin|--valgrind)
valgrind=memcheck
shift ;;
--valgrind=*)
valgrind=$(expr "z$1" : 'z[^=]*=\(.*\)')
shift ;;
--valgrind-only=*)
valgrind_only=$(expr "z$1" : 'z[^=]*=\(.*\)')
shift ;;
--tee)
shift ;; # was handled already
--root=*)
root=$(expr "z$1" : 'z[^=]*=\(.*\)')
shift ;;
*)
echo "error: unknown test option '$1'" >&2; exit 1 ;;
esac
done
if test -n "$valgrind_only"
then
test -z "$valgrind" && valgrind=memcheck
test -z "$verbose" && verbose_only="$valgrind_only"
elif test -n "$valgrind"
then
verbose=t
fi
if test -n "$color"
then
say_color ()
else
say_color()
fi
error ()
say ()
test "$" != "" ||
error "Test script did not set test_description."
if test "$help" = "t"
then
printf '%s\n' "$test_description"
exit 0
fi
exec 5>&1
exec 6<&0
if test "$verbose" = "t"
then
exec 4>&2 3>&1
else
exec 4>/dev/null 3>/dev/null
fi
test_failure=0
test_count=0
test_fixed=0
test_broken=0
test_success=0
test_external_has_tap=0
die ()
GIT_EXIT_OK=
trap 'die' EXIT
# The user-facing functions are loaded from a separate file so that
# test_perf subshells can have them too
. "$TEST_DIRECTORY/test-lib-functions.sh"
# You are not expected to call test_ok_ and test_failure_ directly, use
# the test_expect_* functions instead.
test_ok_ ()
test_failure_ ()
test_known_broken_ok_ ()
test_known_broken_failure_ ()
test_debug ()
match_pattern_list ()
maybe_teardown_verbose ()
last_verbose=t
maybe_setup_verbose ()
maybe_teardown_valgrind ()
maybe_setup_valgrind ()
test_eval_ ()
test_run_ ()
test_start_ ()
test_finish_ ()
test_skip ()
# stub; perf-lib overrides it
test_at_end_hook_ ()
test_done ()
if test -n "$valgrind"
then
make_symlink ()
make_valgrind_symlink ()
# override all git executables in TEST_DIRECTORY/..
GIT_VALGRIND=$TEST_DIRECTORY/valgrind
mkdir -p "$GIT_VALGRIND"/bin
for file in $GIT_BUILD_DIR/git* $GIT_BUILD_DIR/test-*
do
make_valgrind_symlink $file
done
# special-case the mergetools loadables
make_symlink "$GIT_BUILD_DIR"/mergetools "$GIT_VALGRIND/bin/mergetools"
OLDIFS=$IFS
IFS=:
for path in $PATH
do
ls "$path"/git-* 2> /dev/null |
while read file
do
make_valgrind_symlink "$file"
done
done
IFS=$OLDIFS
PATH=$GIT_VALGRIND/bin:$PATH
GIT_EXEC_PATH=$GIT_VALGRIND/bin
export GIT_VALGRIND
GIT_VALGRIND_MODE="$valgrind"
export GIT_VALGRIND_MODE
GIT_VALGRIND_ENABLED=t
test -n "$valgrind_only" && GIT_VALGRIND_ENABLED=
export GIT_VALGRIND_ENABLED
elif test -n "$GIT_TEST_INSTALLED"
then
GIT_EXEC_PATH=$($GIT_TEST_INSTALLED/git --exec-path)  ||
error "Cannot run git from $GIT_TEST_INSTALLED."
PATH=$GIT_TEST_INSTALLED:$GIT_BUILD_DIR:$PATH
GIT_EXEC_PATH=$
else # normal case, use ../bin-wrappers only unless $with_dashes:
git_bin_dir="$GIT_BUILD_DIR/bin-wrappers"
if ! test -x "$git_bin_dir/git"
then
if test -z "$with_dashes"
then
say "$git_bin_dir/git is not executable; using GIT_EXEC_PATH"
fi
with_dashes=t
fi
PATH="$git_bin_dir:$PATH"
GIT_EXEC_PATH=$GIT_BUILD_DIR
if test -n "$with_dashes"
then
PATH="$GIT_BUILD_DIR:$PATH"
fi
fi
GIT_TEMPLATE_DIR="$GIT_BUILD_DIR"/templates/blt
GIT_CONFIG_NOSYSTEM=1
GIT_ATTR_NOSYSTEM=1
export PATH GIT_EXEC_PATH GIT_TEMPLATE_DIR GIT_CONFIG_NOSYSTEM GIT_ATTR_NOSYSTEM
if test -z "$GIT_TEST_CMP"
then
if test -n "$GIT_TEST_CMP_USE_COPIED_CONTEXT"
then
GIT_TEST_CMP="$DIFF -c"
else
GIT_TEST_CMP="$DIFF -u"
fi
fi
GITPERLLIB="$GIT_BUILD_DIR"/perl/blib/lib:"$GIT_BUILD_DIR"/perl/blib/arch/auto/Git
export GITPERLLIB
test -d "$GIT_BUILD_DIR"/templates/blt ||
if ! test -x "$GIT_BUILD_DIR"/test-chmtime
then
echo >&2 'You need to build test-chmtime:'
echo >&2 'Run "make test-chmtime" in the source (toplevel) directory'
exit 1
fi
# Test repository
TRASH_DIRECTORY="trash directory.$(basename "$0" .sh)"
test -n "$root" && TRASH_DIRECTORY="$root/$TRASH_DIRECTORY"
case "$TRASH_DIRECTORY" in}
this_test=$
if match_pattern_list "$this_test" $GIT_SKIP_TESTS
then
say_color info >&3 "skipping test $this_test altogether"
skip_all="skip all tests in $this_test"
test_done
fi
# Provide an implementation of the 'yes' utility
yes ()
# Fix some commands on Windows
case $(uname -s) in
*MINGW*)
# Windows has its own (incompatible) sort and find
sort ()
find ()
sum ()
# git sees Windows-style pwd
pwd ()
# no POSIX permissions
# backslashes in pathspec are converted to '/'
# exec does not inherit the PID
test_set_prereq MINGW
test_set_prereq NOT_CYGWIN
test_set_prereq SED_STRIPS_CR
test_set_prereq GREP_STRIPS_CR
GIT_TEST_CMP=mingw_test_cmp
;;
*CYGWIN*)
test_set_prereq POSIXPERM
test_set_prereq EXECKEEPSPID
test_set_prereq NOT_MINGW
test_set_prereq CYGWIN
test_set_prereq SED_STRIPS_CR
test_set_prereq GREP_STRIPS_CR
;;
*)
test_set_prereq POSIXPERM
test_set_prereq BSLASHPSPEC
test_set_prereq EXECKEEPSPID
test_set_prereq NOT_MINGW
test_set_prereq NOT_CYGWIN
;;
esac
( COLUMNS=1 && test $COLUMNS = 1 ) && test_set_prereq COLUMNS_CAN_BE_1
test -z "$NO_PERL" && test_set_prereq PERL
test -z "$NO_PYTHON" && test_set_prereq PYTHON
test -n "$USE_LIBPCRE" && test_set_prereq LIBPCRE
test -z "$NO_GETTEXT" && test_set_prereq GETTEXT
# Can we rely on git's output in the C locale?
if test -n "$GETTEXT_POISON"
then
GIT_GETTEXT_POISON=YesPlease
export GIT_GETTEXT_POISON
test_set_prereq GETTEXT_POISON
else
test_set_prereq C_LOCALE_OUTPUT
fi
# Use this instead of test_cmp to compare files that contain expected and
# actual output from git commands that can be translated.  When running
# under GETTEXT_POISON this pretends that the command produced expected
# results.
test_i18ncmp ()
# Use this instead of "grep expected-string actual" to see if the
# output from a git command that can be translated either contains an
# expected string, or does not contain an unwanted one.  When running
# under GETTEXT_POISON this pretends that the command produced expected
# results.
test_i18ngrep ()
test_lazy_prereq PIPE '
# test whether the filesystem supports FIFOs
case $(uname -s) in
CYGWIN*)
false
;;
*)
rm -f testfifo && mkfifo testfifo
;;
esac
'
test_lazy_prereq SYMLINKS '
# test whether the filesystem supports symbolic links
ln -s x y && test -h y
'
test_lazy_prereq FILEMODE '
test "$(git config --bool core.filemode)" = true
'
test_lazy_prereq CASE_INSENSITIVE_FS '
echo good >CamelCase &&
echo bad >camelcase &&
test "$(cat CamelCase)" != good
'
test_lazy_prereq UTF8_NFD_TO_NFC '
# check whether FS converts nfd unicode to nfc
auml=$(printf "\303\244")
aumlcdiar=$(printf "\141\314\210")
>"$auml" &&
case "$(echo *)" in
"$aumlcdiar")
true ;;
*)
false ;;
esac
'
test_lazy_prereq AUTOIDENT '
sane_unset GIT_AUTHOR_NAME &&
sane_unset GIT_AUTHOR_EMAIL &&
git var GIT_AUTHOR_IDENT
'
# When the tests are run as root, permission tests will report that
# things are writable when they shouldn't be.
test -w / || test_set_prereq SANITY
GIT_UNZIP=$
test_lazy_prereq UNZIP '
"$GIT_UNZIP" -v
test $? -ne 127
'
