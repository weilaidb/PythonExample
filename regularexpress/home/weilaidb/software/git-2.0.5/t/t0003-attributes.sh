#!/bin/sh
test_description=gitattributes
. ./test-lib.sh
attr_check ()
test_expect_success 'setup' '
mkdir -p a/b/d a/c b &&
(
echo "[attr]notest !test"
echo "f	test=f"
echo "a/i test=a/i"
echo "onoff test -test"
echo "offon -test test"
echo "no notest"
echo "A/e/F test=A/e/F"
) >.gitattributes &&
(
echo "g test=a/g" &&
echo "b/g test=a/b/g"
) >a/.gitattributes &&
(
echo "h test=a/b/h" &&
echo "df foo=bar" >.gitattributes &&
cat <<\EOF >expect &&
f: foo: bar
a/f: foo: bar
a/b/f: foo: bar
a/b/c/f: foo: bar
EOF
git check-attr foo -- "f" >actual 2>err &&
git check-attr foo -- "a/f" >>actual 2>>err &&
git check-attr foo -- "a/b/f" >>actual 2>>err &&
git check-attr foo -- "a/b/c/f" >>actual 2>>err &&
test_cmp expect actual &&
test_line_count = 0 err
'
test_expect_success '"**" with no slashes test' '
echo "a**f foo=bar" >.gitattributes &&
git check-attr foo -- "f" >actual &&
cat <<\EOF >expect &&
f: foo: unspecified
af: foo: bar
axf: foo: bar
a/f: foo: unspecified
a/b/f: foo: unspecified
a/b/c/f: foo: unspecified
EOF
git check-attr foo -- "f" >actual 2>err &&
git check-attr foo -- "af" >>actual 2>err &&
git check-attr foo -- "axf" >>actual 2>err &&
git check-attr foo -- "a/f" >>actual 2>>err &&
git check-attr foo -- "a/b/f" >>actual 2>>err &&
git check-attr foo -- "a/b/c/f" >>actual 2>>err &&
test_cmp expect actual &&
test_line_count = 0 err
'
test_expect_success 'using --git-dir and --work-tree' '
mkdir unreal real &&
git init real &&
echo "file test=in-real" >real/.gitattributes &&
(
cd unreal &&
attr_check file in-real "--git-dir ../real/.git --work-tree ../real"
)
'
test_expect_success 'setup bare' '
git clone --bare . bare.git
'
test_expect_success 'bare repository: check that .gitattribute is ignored' '
(
cd bare.git &&
(
echo "f	test=f"
echo "a/i test=a/i"
) >.gitattributes &&
attr_check f unspecified &&
attr_check a/f unspecified &&
attr_check a/c/f unspecified &&
attr_check a/i unspecified &&
attr_check subdir/a/i unspecified
)
'
test_expect_success 'bare repository: check that --cached honors index' '
(
cd bare.git &&
GIT_INDEX_FILE=../.git/index \
git check-attr --cached --stdin --all <../stdin-all |
sort >actual &&
test_cmp ../specified-all actual
)
'
test_expect_success 'bare repository: test info/attributes' '
(
cd bare.git &&
(
echo "f	test=f"
echo "a/i test=a/i"
) >info/attributes &&
attr_check f f &&
attr_check a/f f &&
attr_check a/c/f f &&
attr_check a/i a/i &&
attr_check subdir/a/i unspecified
)
'
test_done
