#!/bin/sh
#
# Copyright (c) 2008 Eric Wong
test_description='git svn honors i18n.commitEncoding in config'
. ./lib-git-svn.sh
compare_git_head_with ()
a_utf8_locale=$(locale -a | sed -n '/\.[uU][tT][fF]-*8$/')
if test -n "$a_utf8_locale"
then
test_set_prereq UTF8
else
say "# UTF-8 locale not available, some tests are skipped"
fi
compare_svn_head_with ()
for H in ISO8859-1 eucJP ISO-2022-JP
do
test_expect_success "$H setup" '
mkdir $H &&
svn_cmd import -m "$H test" $H "$svnrepo"/$H &&
git svn clone "$svnrepo"/$H $H
'
done
for H in ISO8859-1 eucJP ISO-2022-JP
do
test_expect_success "$H commit on git side" '
(
cd $H &&
git config i18n.commitencoding $H &&
git checkout -b t refs/remotes/git-svn &&
echo $H >F &&
git add F &&
git commit -a -F "$TEST_DIRECTORY"/t3900/$H.txt &&
E=$(git cat-file commit HEAD | sed -ne "s/^encoding
test "z$E" = "z$H"
compare_git_head_with "$TEST_DIRECTORY"/t3900/$H.txt
)
'
done
for H in ISO8859-1 eucJP ISO-2022-JP
do
test_expect_success "$H dcommit to svn" '
(
cd $H &&
git svn dcommit &&
git cat-file commit HEAD | grep git-svn-id: &&
E=$(git cat-file commit HEAD | sed -ne "s/^encoding
test "z$E" = "z$H" &&
compare_git_head_with "$TEST_DIRECTORY"/t3900/$H.txt
)
'
done
test_expect_success UTF8 'ISO-8859-1 should match UTF-8 in svn' '
(
cd ISO8859-1 &&
compare_svn_head_with "$TEST_DIRECTORY"/t3900/1-UTF-8.txt
)
'
for H in eucJP ISO-2022-JP
do
test_expect_success UTF8 "$H should match UTF-8 in svn" '
(
cd $H &&
compare_svn_head_with "$TEST_DIRECTORY"/t3900/2-UTF-8.txt
)
'
done
test_done
