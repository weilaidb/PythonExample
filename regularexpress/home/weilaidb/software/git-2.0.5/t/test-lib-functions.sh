# Library of functions shared by all tests scripts, included by
# test-lib.sh.
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
# The semantics of the editor variables are that of invoking
# sh -c "$EDITOR \"$@\"" files ...
#
# If our trash directory contains shell metacharacters, they will be
# interpreted if we just set $EDITOR directly, so do a little dance with
# environment variables to work around this.
#
# In particular, quoting isn't enough, as the path may contain the same quote
# that we're using.
test_set_editor ()
test_set_index_version ()
test_decode_color ()
nul_to_q ()
q_to_nul ()
q_to_cr ()
q_to_tab ()
qz_to_tab_space ()
append_cr ()
remove_cr ()
# In some bourne shell implementations, the "unset" builtin returns
# nonzero status when a variable to be unset was not set in the first
# place.
#
# Use sane_unset when that should not be considered an error.
sane_unset ()
test_tick ()
# Stop execution and start a shell. This is useful for debugging tests and
# only makes sense together with "-v".
#
# Be sure to remove all invocations of this command before submitting.
test_pause ()
# Call test_commit with the arguments "<message> [<file> [<contents> [<tag>]]]"
#
# This will commit a file with the given contents and the given commit
# message, and tag the resulting commit with the given tag name.
#
# <file>, <contents>, and <tag> all default to <message>.
test_commit ()
# Call test_merge with the arguments "<message> <commit>", where <commit>
# can be a tag pointing to the commit-to-merge.
test_merge ()
# This function helps systems where core.filemode=false is set.
# Use it instead of plain 'chmod +x' to set or unset the executable bit
# of a file in the working directory and add it to the index.
test_chmod ()
# Unset a configuration variable, but don't fail if it doesn't exist.
test_unconfig ()
# Set git config, automatically unsetting it after the test is over.
test_config ()
test_config_global ()
write_script ()
# Use test_set_prereq to tell that a particular prerequisite is available.
# The prerequisite can later be checked for in two ways:
#
# - Explicitly using test_have_prereq.
#
# - Implicitly by specifying the prerequisite tag in the calls to
#   test_expect_.
#
# The single parameter is the prerequisite tag (a simple word, in all
# capital letters by convention).
test_set_prereq ()
satisfied_prereq=" "
lazily_testable_prereq= lazily_tested_prereq=
# Usage: test_lazy_prereq PREREQ 'script'
test_lazy_prereq ()
test_run_lazy_prereq_ ()
test_have_prereq ()
test_declared_prereq ()
test_expect_failure ()
test_expect_success ()
# test_external runs external test scripts that provide continuous
# test output about their progress, and succeeds/fails on
# zero/non-zero exit code.  It outputs the test output on stdout even
# in non-verbose mode, and announces the external script with "# run
# <n>: ..." before running it.  When providing relative paths, keep in
# mind that all scripts run in "trash directory".
# Usage: test_external description command arguments...
# Example: test_external 'Perl API' perl ../path/to/test.pl
test_external ()
# Like test_external, but in addition tests that the command generated
# no output on stderr.
test_external_without_stderr ()
# debugging-friendly alternatives to "test [-f|-d|-e]"
# The commands test the existence or non-existence of $1. $2 can be
# given to provide a more precise diagnosis.
test_path_is_file ()
test_path_is_dir ()
test_path_is_missing ()
# test_line_count checks that a file has the number of lines it
# ought to. For example:
#
#	test_expect_success 'produce exactly one line of output' '
#		do something >output &&
#		test_line_count = 1 output
#	'
#
# is like "test $(wc -l <output) = 1" except that it passes the
# output through when the number of lines is wrong.
test_line_count ()
# This is not among top-level (test_expect_success | test_expect_failure)
# but is a prefix that can be used in the test script, like:
#
#	test_expect_success 'complain and die' '
#           do something &&
#           do something else &&
#	    test_must_fail git checkout ../outerspace
#	'
#
# Writing this as "! git checkout ../outerspace" is wrong, because
# the failure could be due to a segv.  We want a controlled failure.
test_must_fail ()
# Similar to test_must_fail, but tolerates success, too.  This is
# meant to be used in contexts like:
#
#	test_expect_success 'some command works without configuration' '
#		test_might_fail git config --unset all.configuration &&
#		do something
#	'
#
# Writing "git config --unset all.configuration || :" would be wrong,
# because we want to notice if it fails due to segv.
test_might_fail ()
# Similar to test_must_fail and test_might_fail, but check that a
# given command exited with a given exit code. Meant to be used as:
#
#	test_expect_success 'Merge with d/f conflicts' '
#		test_expect_code 1 git merge "merge msg" B master
#	'
test_expect_code ()
# test_cmp is a helper function to compare actual and expected output.
# You can use it like:
#
#	test_expect_success 'foo works' '
#		echo expected >expected &&
#		foo >actual &&
#		test_cmp expected actual
#	'
#
# This could be written as either "cmp" or "diff -u", but:
# - cmp's output is not nearly as easy to read as diff -u
# - not all diff versions understand "-u"
test_cmp()
# test_cmp_bin - helper to compare binary files
test_cmp_bin()
# Check if the file expected to be empty is indeed empty, and barfs
# otherwise.
test_must_be_empty ()
# Tests that its two parameters refer to the same revision
test_cmp_rev ()
# Print a sequence of numbers or letters in increasing order.  This is
# similar to GNU seq(1), but the latter might not be available
# everywhere (and does not do letters).  It may be used like:
#
#	for i in `test_seq 100`; do
#		for j in `test_seq 10 20`; do
#			for k in `test_seq a z`; do
#				echo $i-$j-$k
#			done
#		done
#	done
test_seq ()
# This function can be used to schedule some commands to be run
# unconditionally at the end of the test to restore sanity:
#
#	test_expect_success 'test core.capslock' '
#		git config core.capslock true &&
#		test_when_finished "git config --unset core.capslock" &&
#		hello world
#	'
#
# That would be roughly equivalent to
#
#	test_expect_success 'test core.capslock' '
#		git config core.capslock true &&
#		hello world
#		git config --unset core.capslock
#	'
#
# except that the greeting and config --unset must both succeed for
# the test to pass.
#
# Note that under --immediate mode, no clean-up is done to help diagnose
# what went wrong.
test_when_finished ()
# Most tests can use the created repository, but some may need to create more.
# Usage: test_create_repo <directory>
test_create_repo ()
# This function helps on symlink challenged file systems when it is not
# important that the file system entry is a symbolic link.
# Use test_ln_s_add instead of "ln -s x y && git add y" to add a
# symbolic link entry y to the index.
test_ln_s_add ()
perl ()
# Is the value one of the various ways to spell a boolean true/false?
test_normalize_bool ()
# Given a variable $1, normalize the value of it to one of "true",
# "false", or "auto" and store the result to it.
#
#     test_tristate GIT_TEST_HTTPD
#
# A variable set to an empty string is set to 'false'.
# A variable set to 'false' or 'auto' keeps its value.
# Anything else is set to 'true'.
# An unset variable defaults to 'auto'.
#
# The last rule is to allow people to set the variable to an empty
# string and export it to decline testing the particular feature
# for versions both before and after this change.  We used to treat
# both unset and empty variable as a signal for "do not test" and
# took any non-empty string as "please test".
test_tristate ()
# Exit the test suite, either by skipping all remaining tests or by
# exiting with an error. If "$1" is "auto", we then we assume we were
# opportunistically trying to set up some tests and we skip. If it is
# "true", then we report a failure.
#
# The error/skip message should be given by $2.
#
test_skip_or_die ()
# The following mingw_* functions obey POSIX shell syntax, but are actually
# bash scripts, and are meant to be used only with bash on Windows.
# A test_cmp function that treats LF and CRLF equal and avoids to fork
# diff when possible.
mingw_test_cmp ()
# $1 is the name of the shell variable to fill in
mingw_read_file_strip_cr_ ()
