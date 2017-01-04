# This file isn't used as a test script directly, instead it is
# sourced from t8001-annotate.sh and t8002-blame.sh.
check_count () / " <hello.orig |
tr Q "\\t" >hello.c &&
GIT_AUTHOR_NAME="G" GIT_AUTHOR_EMAIL="G@test.git" \
git commit -a -m "goodbye" &&
mv hello.c hello.orig &&
echo "
cat hello.orig >>hello.c &&
tr Q "\\t" >>hello.c <<-\EOF
void mail()
EOF
GIT_AUTHOR_NAME="H" GIT_AUTHOR_EMAIL="H@test.git" \
git commit -a -m "mail"
'
test_expect_success 'blame -L :literal' '
check_count -f hello.c -L:main F 4 G 1
'
test_expect_success 'blame -L :regex' '
check_count -f hello.c "-L:m[a-z][a-z]l" H 4
'
test_expect_success 'blame -L :nomatch' '
test_must_fail $PROG -L:nomatch hello.c
'
test_expect_success 'blame -L :RE (relative)' '
check_count -f hello.c -L3,3 -L:ma.. F 1 H 4
'
test_expect_success 'blame -L :RE (relative: no preceding range)' '
check_count -f hello.c -L:ma.. F 4 G 1
'
test_expect_success 'blame -L :RE (relative: not found)' '
test_must_fail $PROG -L3,3 -L:tambourine hello.c
'
test_expect_success 'blame -L :RE (relative: end-of-file)' '
test_must_fail $PROG -L, -L:main hello.c
'
test_expect_success 'blame -L ^:RE (absolute)' '
check_count -f hello.c -L3,3 -L^:ma.. F 4 G 1
'
test_expect_success 'blame -L ^:RE (absolute: no preceding range)' '
check_count -f hello.c -L^:ma.. F 4 G 1
'
test_expect_success 'blame -L ^:RE (absolute: not found)' '
test_must_fail $PROG -L4,4 -L^:tambourine hello.c
'
test_expect_success 'blame -L ^:RE (absolute: end-of-file)' '
n=$(printf "%d" $(wc -l <hello.c)) &&
check_count -f hello.c -L$n -L^:ma.. F 4 G 1 H 1
'
test_expect_success 'setup incremental' '
(
GIT_AUTHOR_NAME=I &&
export GIT_AUTHOR_NAME &&
GIT_AUTHOR_EMAIL=I@test.git &&
export GIT_AUTHOR_EMAIL &&
>incremental &&
git add incremental &&
git commit -m "step 0" &&
printf "partial" >>incremental &&
git commit -a -m "step 0.5" &&
echo >>incremental &&
git commit -a -m "step 1"
)
'
test_expect_success 'blame empty' '
check_count -h HEAD^^ -f incremental
'
test_expect_success 'blame -L 0 empty' '
test_must_fail $PROG -L0 incremental HEAD^^
'
test_expect_success 'blame -L 1 empty' '
test_must_fail $PROG -L1 incremental HEAD^^
'
test_expect_success 'blame -L 2 empty' '
test_must_fail $PROG -L2 incremental HEAD^^
'
test_expect_success 'blame half' '
check_count -h HEAD^ -f incremental I 1
'
test_expect_success 'blame -L 0 half' '
test_must_fail $PROG -L0 incremental HEAD^
'
test_expect_success 'blame -L 1 half' '
check_count -h HEAD^ -f incremental -L1 I 1
'
test_expect_success 'blame -L 2 half' '
test_must_fail $PROG -L2 incremental HEAD^
'
test_expect_success 'blame -L 3 half' '
test_must_fail $PROG -L3 incremental HEAD^
'
test_expect_success 'blame full' '
check_count -f incremental I 1
'
test_expect_success 'blame -L 0 full' '
test_must_fail $PROG -L0 incremental
'
test_expect_success 'blame -L 1 full' '
check_count -f incremental -L1 I 1
'
test_expect_success 'blame -L 2 full' '
test_must_fail $PROG -L2 incremental
'
test_expect_success 'blame -L 3 full' '
test_must_fail $PROG -L3 incremental
'
test_expect_success 'blame -L' '
test_must_fail $PROG -L file
'
test_expect_success 'blame -L X,+' '
test_must_fail $PROG -L1,+ file
'
test_expect_success 'blame -L X,-' '
test_must_fail $PROG -L1,- file
'
test_expect_success 'blame -L X (non-numeric X)' '
test_must_fail $PROG -LX file
'
test_expect_success 'blame -L X,Y (non-numeric Y)' '
test_must_fail $PROG -L1,Y file
'
test_expect_success 'blame -L X,+N (non-numeric N)' '
test_must_fail $PROG -L1,+N file
'
test_expect_success 'blame -L X,-N (non-numeric N)' '
test_must_fail $PROG -L1,-N file
'
test_expect_success 'blame -L ,^/RE/' '
test_must_fail $PROG -L1,^/99/ file
'
