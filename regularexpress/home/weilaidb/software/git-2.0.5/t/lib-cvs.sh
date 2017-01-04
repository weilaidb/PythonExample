# Shell library sourced instead of ./test-lib.sh by cvsimport tests.
. ./test-lib.sh
unset CVS_SERVER
if ! type cvs >/dev/null 2>&1
then
skip_all='skipping cvsimport tests, cvs not found'
test_done
fi
CVS="cvs -f"
export CVS
cvsps_version=`cvsps -h 2>&1 | sed -ne 's/cvsps version
case "$cvsps_version" in
2.1 | 2.2*)
;;
'')
skip_all='skipping cvsimport tests, cvsps not found'
test_done
;;
*)
skip_all='skipping cvsimport tests, unsupported cvsps version'
test_done
;;
esac
setup_cvs_test_repository ()
test_cvs_co ()
test_git_co ()
test_cmp_branch_file ()
test_cmp_branch_tree ()
