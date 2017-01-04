#!/bin/sh
test_description='urlmatch URL normalization'
. ./test-lib.sh
# The base name of the test url files
tu="$TEST_DIRECTORY/t0110/url"
# Note that only file: URLs should be allowed without a host
test_expect_success 'url scheme' '
! test-urlmatch-normalization "" &&
! test-urlmatch-normalization "_" &&
! test-urlmatch-normalization "scheme" &&
! test-urlmatch-normalization "scheme:" &&
! test-urlmatch-normalization "scheme:/" &&
! test-urlmatch-normalization "scheme:
! test-urlmatch-normalization "file" &&
! test-urlmatch-normalization "file:" &&
! test-urlmatch-normalization "file:/" &&
test-urlmatch-normalization "file:
! test-urlmatch-normalization ":
! test-urlmatch-normalization "x_test:
! test-urlmatch-normalization "-test:
! test-urlmatch-normalization "0test:
! test-urlmatch-normalization "+test:
! test-urlmatch-normalization ".test:
! test-urlmatch-normalization "schem%6e:
test-urlmatch-normalization "x-Test+v1.0:
test "$(test-urlmatch-normalization -p "AbCdeF:
'
test_expect_success 'url authority' '
! test-urlmatch-normalization "scheme:
! test-urlmatch-normalization "scheme:
! test-urlmatch-normalization "scheme:
! test-urlmatch-normalization "scheme:
! test-urlmatch-normalization "scheme:
! test-urlmatch-normalization "scheme:
test-urlmatch-normalization "file:
test-urlmatch-normalization "file:
test-urlmatch-normalization "file:
test-urlmatch-normalization "file:
test-urlmatch-normalization "file:
! test-urlmatch-normalization "file:
test-urlmatch-normalization "scheme:
test-urlmatch-normalization "scheme:
test-urlmatch-normalization "scheme:
! test-urlmatch-normalization "scheme:
! test-urlmatch-normalization "scheme:
test-urlmatch-normalization "scheme:
test-urlmatch-normalization "scheme:
test-urlmatch-normalization "scheme:
test-urlmatch-normalization "scheme:
test-urlmatch-normalization "scheme:
test-urlmatch-normalization "scheme:
test-urlmatch-normalization "scheme:
test-urlmatch-normalization "scheme:
test-urlmatch-normalization "scheme:
test-urlmatch-normalization "scheme:
! test-urlmatch-normalization "scheme:
test-urlmatch-normalization "scheme:
test-urlmatch-normalization "scheme:
! test-urlmatch-normalization "scheme:
! test-urlmatch-normalization "scheme:
'
test_expect_success 'url port checks' '
test-urlmatch-normalization "xyz:
test-urlmatch-normalization "xyz:
! test-urlmatch-normalization "xyz:
! test-urlmatch-normalization "xyz:
test-urlmatch-normalization "xyz:
test-urlmatch-normalization "xyz:
test-urlmatch-normalization "xyz:
! test-urlmatch-normalization "xyz:
! test-urlmatch-normalization "xyz:
! test-urlmatch-normalization "xyz:
! test-urlmatch-normalization "xyz:
test-urlmatch-normalization "http:
test-urlmatch-normalization "https:
test-urlmatch-normalization "http:
test-urlmatch-normalization "https:
! test-urlmatch-normalization "http:
! test-urlmatch-normalization "http:
! test-urlmatch-normalization "http:
test-urlmatch-normalization "xyz:
test-urlmatch-normalization "xyz:
test-urlmatch-normalization "xyz:
! test-urlmatch-normalization "xyz:
! test-urlmatch-normalization "xyz:
! test-urlmatch-normalization "xyz:
! test-urlmatch-normalization "xyz:
! test-urlmatch-normalization "xyz:
'
test_expect_success 'url port normalization' '
test "$(test-urlmatch-normalization -p "http:
test "$(test-urlmatch-normalization -p "http:
test "$(test-urlmatch-normalization -p "http:
test "$(test-urlmatch-normalization -p "http:
test "$(test-urlmatch-normalization -p "http:
test "$(test-urlmatch-normalization -p "http:
test "$(test-urlmatch-normalization -p "http:
test "$(test-urlmatch-normalization -p "http:
test "$(test-urlmatch-normalization -p "https:
test "$(test-urlmatch-normalization -p "https:
test "$(test-urlmatch-normalization -p "https:
'
test_expect_success 'url general escapes' '
! test-urlmatch-normalization "http:
test "$(test-urlmatch-normalization -p "X:
test "$(test-urlmatch-normalization -p "X:
test "$(test-urlmatch-normalization -p "X:
test "$(test-urlmatch-normalization -p "X:
test "$(test-urlmatch-normalization -p "X:
'
test_expect_success 'url high-bit escapes' '
test "$(test-urlmatch-normalization -p "$(cat "$tu-1")")" = "x:
test "$(test-urlmatch-normalization -p "$(cat "$tu-2")")" = "x:
test "$(test-urlmatch-normalization -p "$(cat "$tu-3")")" = "x:
test "$(test-urlmatch-normalization -p "$(cat "$tu-4")")" = "x:
test "$(test-urlmatch-normalization -p "$(cat "$tu-5")")" = "x:
test "$(test-urlmatch-normalization -p "$(cat "$tu-6")")" = "x:
test "$(test-urlmatch-normalization -p "$(cat "$tu-7")")" = "x:
test "$(test-urlmatch-normalization -p "$(cat "$tu-8")")" = "x:
test "$(test-urlmatch-normalization -p "$(cat "$tu-9")")" = "x:
test "$(test-urlmatch-normalization -p "$(cat "$tu-10")")" = "x:
test "$(test-urlmatch-normalization -p "$(cat "$tu-11")")" = "x:
'
test_expect_success 'url username/password escapes' '
test "$(test-urlmatch-normalization -p "x:
'
test_expect_success 'url normalized lengths' '
test "$(test-urlmatch-normalization -l "Http:
test "$(test-urlmatch-normalization -l "http:
test "$(test-urlmatch-normalization -l "http:
'
test_expect_success 'url . and .. segments' '
test "$(test-urlmatch-normalization -p "x:
test "$(test-urlmatch-normalization -p "x:
test "$(test-urlmatch-normalization -p "x:
test "$(test-urlmatch-normalization -p "x:
test "$(test-urlmatch-normalization -p "x:
test "$(test-urlmatch-normalization -p "x:
test "$(test-urlmatch-normalization -p "x:
test "$(test-urlmatch-normalization -p "x:
test "$(test-urlmatch-normalization -p "x:
test "$(test-urlmatch-normalization -p "x:
test "$(test-urlmatch-normalization -p "x:
! test-urlmatch-normalization "x:
test "$(test-urlmatch-normalization -p "x:
test "$(test-urlmatch-normalization -p "x:
test "$(test-urlmatch-normalization -p "x:
test "$(test-urlmatch-normalization -p "x:
test "$(test-urlmatch-normalization -p "x:
test "$(test-urlmatch-normalization -p "x:
'
# http:
# http:
# So they should not be equivalent
test_expect_success 'url equivalents' '
test-urlmatch-normalization "httP:
test-urlmatch-normalization "Http:
! test-urlmatch-normalization "https:
test-urlmatch-normalization "https:
test-urlmatch-normalization "https:
test-urlmatch-normalization "https:
'
test_done
