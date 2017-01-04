#!/bin/sh
# Try a set of credential helpers; the expected stdin,
# stdout and stderr should be provided on stdin,
# separated by "--".
check()
read_chunk()
# Clear any residual data from previous tests. We only
# need this when testing third-party helpers which read and
# write outside of our trash-directory sandbox.
#
# Don't bother checking for success here, as it is
# outside the scope of tests and represents a best effort to
# clean up after ourselves.
helper_test_clean()
reject()
helper_test()
helper_test_timeout()
cat >askpass <<\EOF
#!/bin/sh
echo >&2 askpass: $*
what=`echo $1 | cut -d" " -f1 | tr A-Z a-z | tr -cd a-z`
echo "askpass-$what"
EOF
chmod +x askpass
GIT_ASKPASS="$PWD/askpass"
export GIT_ASKPASS
