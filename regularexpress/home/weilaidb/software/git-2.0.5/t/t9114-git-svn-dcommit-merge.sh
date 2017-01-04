#!/bin/sh
#
# Copyright (c) 2007 Eric Wong
# Based on a script by Joakim Tjernlund <joakim.tjernlund@transmode.se>
test_description='git svn dcommit handles merges'
. ./lib-git-svn.sh
big_text_block ()
test_expect_success 'setup svn repository' '
svn_cmd co "$svnrepo" mysvnwork &&
mkdir -p mysvnwork/trunk &&
(
cd mysvnwork &&
big_text_block >>trunk/README &&
svn_cmd add trunk &&
svn_cmd ci -m "first commit" trunk
)
'
test_expect_success 'setup git mirror and merge' '
git svn init "$svnrepo" -t tags -T trunk -b branches &&
git svn fetch &&
git checkout -b svn remotes/origin/trunk &&
git checkout -b merge &&
echo new file > new_file &&
git add new_file &&
git commit -a -m "New file" &&
echo hello >> README &&
git commit -a -m "hello" &&
echo add some stuff >> new_file &&
git commit -a -m "add some stuff" &&
git checkout svn &&
mv -f README tmp &&
echo friend > README &&
cat tmp >> README &&
git commit -a -m "friend" &&
git merge merge
'
test_debug 'gitk --all & sleep 1'
test_expect_success 'verify pre-merge ancestry' "
test x\`git rev-parse --verify refs/heads/svn^2\` = \
x\`git rev-parse --verify refs/heads/merge\` &&
git cat-file commit refs/heads/svn^ | grep '^friend$'
"
test_expect_success 'git svn dcommit merges' "
git svn dcommit
"
test_debug 'gitk --all & sleep 1'
test_expect_success 'verify post-merge ancestry' "
test x\`git rev-parse --verify refs/heads/svn\` = \
x\`git rev-parse --verify refs/remotes/origin/trunk \` &&
test x\`git rev-parse --verify refs/heads/svn^2\` = \
x\`git rev-parse --verify refs/heads/merge\` &&
git cat-file commit refs/heads/svn^ | grep '^friend$'
"
test_expect_success 'verify merge commit message' "
git rev-list --pretty=raw -1 refs/heads/svn | \
grep \"    Merge branch 'merge' into svn\"
"
test_done
