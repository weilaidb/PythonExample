#!/bin/sh
test_description='refspec parsing'
. ./test-lib.sh
test_refspec ()
test_refspec push ''						invalid
test_refspec push ':'
test_refspec push '::'						invalid
test_refspec push '+:'
test_refspec fetch ''
test_refspec fetch ':'
test_refspec fetch '::'						invalid
test_refspec push 'refs/headsfor-linus:refs/remotes/minefor-linus:refs/remotes/minefor-linus:refs/remotes/minefor-linus:refs/remotes/mine*/for-linus:refs/remotes/mine*/for-linus:refs/remotes/minefor-linus:refs/remotes/minefor-linus:refs/remotes/mine/*'
test_done
