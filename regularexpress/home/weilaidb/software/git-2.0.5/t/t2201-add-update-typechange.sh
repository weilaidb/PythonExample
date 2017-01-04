#!/bin/sh
test_description='more git add -u'
. ./test-lib.sh
test_expect_success setup '
>xyzzy &&
_empty=$(git hash-object --stdin <xyzzy) &&
>yomin &&
>caskly &&
if test_have_prereq SYMLINKS; then
ln -s frotz nitfol &&
T_letter=T
else
printf %s frotz > nitfol &&
T_letter=M
fi &&
mkdir rezrov &&
>rezrov/bozbar &&
git add caskly xyzzy yomin nitfol rezrov/bozbar &&
test_tick &&
git commit -m initial
'
test_expect_success modify '
rm -f xyzzy yomin nitfol caskly &&
# caskly disappears (not a submodule)
mkdir caskly &&
# nitfol changes from symlink to regular
>nitfol &&
# rezrov/bozbar disappears
rm -fr rezrov &&
if test_have_prereq SYMLINKS; then
ln -s xyzzy rezrov
else
printf %s xyzzy > rezrov
fi &&
# xyzzy disappears (not a submodule)
mkdir xyzzy &&
echo gnusto >xyzzy/bozbar &&
# yomin gets replaced with a submodule
mkdir yomin &&
>yomin/yomin &&
(
cd yomin &&
git init &&
git add yomin &&
git commit -m "sub initial"
) &&
yomin=$(GIT_DIR=yomin/.git git rev-parse HEAD) &&
# yonk is added and then turned into a submodule
# this should appear as T in diff-files and as A in diff-index
>yonk &&
git add yonk &&
rm -f yonk &&
mkdir yonk &&
>yonk/yonk &&
(
cd yonk &&
git init &&
git add yonk &&
git commit -m "sub initial"
) &&
yonk=$(GIT_DIR=yonk/.git git rev-parse HEAD) &&
# zifmia is added and then removed
# this should appear in diff-files but not in diff-index.
>zifmia &&
git add zifmia &&
rm -f zifmia &&
mkdir zifmia &&
>expect &&
>expect-files &&
>expect-index &&
>expect-final
'
test_expect_success diff-files '
git diff-files --raw >actual &&
test_cmp expect-files actual
'
test_expect_success diff-index '
git diff-index --raw HEAD -- >actual &&
test_cmp expect-index actual
'
test_expect_success 'add -u' '
rm -f ".git/saved-index" &&
cp -p ".git/index" ".git/saved-index" &&
git add -u &&
git ls-files -s >actual &&
test_cmp expect-final actual
'
test_expect_success 'commit -a' '
if test -f ".git/saved-index"
then
rm -f ".git/index" &&
mv ".git/saved-index" ".git/index"
fi &&
git commit -m "second" -a &&
git ls-files -s >actual &&
test_cmp expect-final actual &&
rm -f .git/index &&
git read-tree HEAD &&
git ls-files -s >actual &&
test_cmp expect-final actual
'
test_done
