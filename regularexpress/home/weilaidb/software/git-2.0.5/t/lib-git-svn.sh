. ./test-lib.sh
remotes_git_svn=remotes/git""-svn
git_svn_id=git""-svn-id
if test -n "$NO_SVN_TESTS"
then
skip_all='skipping git svn tests, NO_SVN_TESTS defined'
test_done
fi
if ! test_have_prereq PERL; then
skip_all='skipping git svn tests, perl not available'
test_done
fi
GIT_DIR=$PWD/.git
GIT_SVN_DIR=$GIT_DIR/svn/refs/remotes/git-svn
SVN_TREE=$GIT_SVN_DIR/svn-tree
svn >/dev/null 2>&1
if test $? -ne 1
then
skip_all='skipping git svn tests, svn not found'
test_done
fi
svnrepo=$PWD/svnrepo
export svnrepo
svnconf=$PWD/svnconf
export svnconf
perl -w -e "
use SVN::Core;
use SVN::Repos;
\$SVN::Core::VERSION gt '1.1.0' or exit(42);
system(qw/svnadmin create --fs-type fsfs/, \$ENV) == 0 or exit(41);
" >&3 2>&4
x=$?
if test $x -ne 0
then
if test $x -eq 42; then
skip_all='Perl SVN libraries must be >= 1.1.0'
elif test $x -eq 41; then
skip_all='svnadmin failed to create fsfs repository'
else
skip_all='Perl SVN libraries not found or unusable'
fi
test_done
fi
rawsvnrepo="$svnrepo"
svnrepo="file:
poke()
# We need this, because we should pass empty configuration directory to
# the 'svn commit' to avoid automated property changes and other stuff
# that could be set from user's configuration files in ~/.subversion.
svn_cmd ()
prepare_httpd ()
start_httpd ()
stop_httpd ()
convert_to_rev_db ()
require_svnserve ()
start_svnserve ()
