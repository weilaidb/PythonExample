# Performance testing framework.  Each perf script starts much like
# a normal test script, except it sources this library instead of
# test-lib.sh.  See t/perf/README for documentation.
#
# Copyright (c) 2011 Thomas Rast
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
# do the --tee work early; it otherwise confuses our careful
# GIT_BUILD_DIR mangling
case "$GIT_TEST_TEE_STARTED, $* " in
done,*)
# do not redirect again
;;
*' --tee '*|*' --va'*)
mkdir -p test-results
BASE=test-results/$(basename "$0" .sh)
(GIT_TEST_TEE_STARTED=done $ "$0" "$@" 2>&1;
echo $? > $BASE.exit) | tee $BASE.out
test "$(cat $BASE.exit)" = 0
exit
;;
esac
TEST_DIRECTORY=$(pwd)/..
TEST_OUTPUT_DIRECTORY=$(pwd)
if test -z "$GIT_TEST_INSTALLED"; then
perf_results_prefix=
else
perf_results_prefix=$(printf "%s" "$" | tr -c "[a-zA-Z0-9]" "[_*]")"."
# make the tested dir absolute
GIT_TEST_INSTALLED=$(cd "$GIT_TEST_INSTALLED" && pwd)
fi
TEST_NO_CREATE_REPO=t
TEST_NO_MALLOC_CHECK=t
. ../test-lib.sh
# Variables from test-lib that are normally internal to the tests; we
# need to export them for test_perf subshells
export TEST_DIRECTORY TRASH_DIRECTORY GIT_BUILD_DIR GIT_TEST_CMP
perf_results_dir=$TEST_OUTPUT_DIRECTORY/test-results
mkdir -p "$perf_results_dir"
rm -f "$perf_results_dir"/$(basename "$0" .sh).subtests
if test -z "$GIT_PERF_REPEAT_COUNT"; then
GIT_PERF_REPEAT_COUNT=3
fi
die_if_build_dir_not_repo ()
if test -z "$GIT_PERF_REPO"; then
die_if_build_dir_not_repo '$GIT_PERF_REPO'
GIT_PERF_REPO=$TEST_DIRECTORY/..
fi
if test -z "$GIT_PERF_LARGE_REPO"; then
die_if_build_dir_not_repo '$GIT_PERF_LARGE_REPO'
GIT_PERF_LARGE_REPO=$TEST_DIRECTORY/..
fi
test_perf_create_repo_from ()
# call at least one of these to establish an appropriately-sized repository
test_perf_default_repo ()
test_perf_large_repo ()
test_checkout_worktree ()
# Performance tests should never fail.  If they do, stop immediately
immediate=t
test_run_perf_ ()
test_perf ()
# We extend test_done to print timings at the end (./run disables this
# and does it after running everything)
test_at_end_hook_ ()
test_export ()
