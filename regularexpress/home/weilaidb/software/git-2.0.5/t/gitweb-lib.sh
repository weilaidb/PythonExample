# Initialization and helpers for Gitweb tests, which source this
# shell library instead of test-lib.sh.
#
# Copyright (c) 2007 Jakub Narebski
#
gitweb_init ()
gitweb_run ()
. ./test-lib.sh
if ! test_have_prereq PERL; then
skip_all='skipping gitweb tests, perl not available'
test_done
fi
perl -MEncode -e '$e="";decode_utf8($e, Encode::FB_CROAK)' >/dev/null 2>&1 ||
perl -MCGI -MCGI::Util -MCGI::Carp -e 0 >/dev/null 2>&1 ||
gitweb_init
