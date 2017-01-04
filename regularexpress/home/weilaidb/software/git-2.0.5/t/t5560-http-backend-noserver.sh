#!/bin/sh
test_description='test git-http-backend-noserver'
. ./test-lib.sh
HTTPD_DOCUMENT_ROOT_PATH="$TRASH_DIRECTORY"
if test_have_prereq GREP_STRIPS_CR
then
GREP_OPTIONS=-U
export GREP_OPTIONS
fi
run_backend()
GET()
POST()
log_div()
. "$TEST_DIRECTORY"/t556x_common
expect_aliased()
test_expect_success 'http-backend blocks bad PATH_INFO' '
config http.getanyfile true &&
expect_aliased 0 /repo.git/HEAD &&
expect_aliased 1 /repo.git/../HEAD &&
expect_aliased 1 /../etc/passwd &&
expect_aliased 1 ../etc/passwd &&
expect_aliased 1 /etc
expect_aliased 1 /etc/./passwd &&
expect_aliased 1
'
test_done
