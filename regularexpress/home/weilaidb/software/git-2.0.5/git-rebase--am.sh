# This shell script fragment is sourced by git-rebase to implement
# its default, fast, patch-based, non-interactive mode.
#
# Copyright (c) 2010 Junio C Hamano.
#
# The whole contents of this file is run by dot-sourcing it from
# inside a shell function.  It used to be that "return"s we see
# below were not inside any function, and expected to return
# to the function that dot-sourced us.
#
# However, FreeBSD /bin/sh misbehaves on such a construct and
# continues to run the statements that follow such a "return".
# As a work-around, we introduce an extra layer of a function
# here, and immediately call it after defining it.
git_rebase__am ()
# ... and then we call the whole thing.
git_rebase__am
