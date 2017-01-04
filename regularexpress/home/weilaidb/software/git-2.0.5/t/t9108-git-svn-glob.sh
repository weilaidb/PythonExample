#!/bin/sh
# Copyright (c) 2007 Eric Wong
test_description='git svn globbing refspecs'
. ./lib-git-svn.sh
cat > expect.end <<EOF
the end
hi
start a new branch
initial
EOF
test_expect_success 'test refspec globbing' '
mkdir -p trunk/src/a trunk/src/b trunk/doc &&
echo "hello world" > trunk/src/a/readme &&
echo "goodbye world" > trunk/src/b/readme &&
svn_cmd import -m "initial" trunk "$svnrepo"/trunk &&
svn_cmd co "$svnrepo" tmp &&
(
cd tmp &&
mkdir branches tags &&
svn_cmd add branches tags &&
svn_cmd cp trunk branches/start &&
svn_cmd commit -m "start a new branch" &&
svn_cmd up &&
echo "hi" >> branches/start/src/b/readme &&
poke branches/start/src/b/readme &&
echo "hey" >> branches/start/src/a/readme &&
poke branches/start/src/a/readme &&
svn_cmd commit -m "hi" &&
svn_cmd up &&
svn_cmd cp branches/start tags/end &&
echo "bye" >> tags/end/src/b/readme &&
poke tags/end/src/b/readme &&
echo "aye" >> tags/end/src/a/readme &&
poke tags/end/src/a/readme &&
svn_cmd commit -m "the end" &&
echo "byebye" >> tags/end/src/b/readme &&
poke tags/end/src/b/readme &&
svn_cmd commit -m "nothing to see here"
) &&
git config --add svn-remote.svn.url "$svnrepo" &&
git config --add svn-remote.svn.fetch \
"trunk/src/a:refs/remotes/trunk" &&
git config --add svn-remote.svn.branches \
"branchessrc/a:refs/remotes/tags*tt*:refs/remotes/three/tags/*" &&
(
cd tmp &&
echo "try try" >> tags/end/src/b/readme &&
poke tags/end/src/b/readme &&
svn_cmd commit -m "try to try"
) &&
test_must_fail git svn fetch three 2> stderr.three &&
test_cmp expect.three stderr.three
'
test_done
