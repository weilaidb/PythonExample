#!/bin/sh
#
# Copyright (c) 2007 Lars Hjemli
#
test_description='Basic porcelain support for submodules
This test tries to verify basic sanity of the init, update and status
subcommands of git submodule.
'
. ./test-lib.sh
test_expect_success 'setup - initial commit' '
>t &&
git add t &&
git commit -m "initial commit" &&
git branch initial
'
test_expect_success 'configuration parsing' '
test_when_finished "rm -f .gitmodules" &&
cat >.gitmodules <<-\EOF &&
[submodule "s"]
path
ignore
EOF
test_must_fail git status
'
test_expect_success 'setup - repository in init subdirectory' '
mkdir init &&
(
cd init &&
git init &&
echo a >a &&
git add a &&
git commit -m "submodule commit 1" &&
git tag -a -m "rev-1" rev-1
)
'
test_expect_success 'setup - commit with gitlink' '
echo a >a &&
echo z >z &&
git add a init z &&
git commit -m "super commit 1"
'
test_expect_success 'setup - hide init subdirectory' '
mv init .subrepo
'
test_expect_success 'setup - repository to add submodules to' '
git init addtest &&
git init addtest-ignore
'
# The 'submodule add' tests need some repository to add as a submodule.
# The trash directory is a good one as any. We need to canonicalize
# the name, though, as some tests compare it to the absolute path git
# generates, which will expand symbolic links.
submodurl=$(pwd -P)
listbranches() {
git for-each-ref --format='%(refname)' 'refs/heads\1/p") &&
git reset init/ &&
git diff --exit-code --cached init
'
test_expect_success 'ls-files gracefully handles trailing slash' '
test "init" = "$(git ls-files init/)"
'
test_expect_success 'moving to a commit without submodule does not leave empty dir' '
rm -rf init &&
mkdir init &&
git reset --hard &&
git checkout initial &&
test ! -d init &&
git checkout second
'
test_expect_success 'submodule <invalid-subcommand> fails' '
test_must_fail git submodule no-such-subcommand
'
test_expect_success 'add submodules without specifying an explicit path' '
mkdir repo &&
(
cd repo &&
git init &&
echo r >r &&
git add r &&
git commit -m "repo commit 1"
) &&
git clone --bare repo/ bare.git &&
(
cd addtest &&
git submodule add "$submodurl/repo" &&
git config -f .gitmodules submodule.repo.path repo &&
git submodule add "$submodurl/bare.git" &&
git config -f .gitmodules submodule.bare.path bare
)
'
test_expect_success 'add should fail when path is used by a file' '
(
cd addtest &&
touch file &&
test_must_fail	git submodule add "$submodurl/repo" file
)
'
test_expect_success 'add should fail when path is used by an existing directory' '
(
cd addtest &&
mkdir empty-dir &&
test_must_fail git submodule add "$submodurl/repo" empty-dir
)
'
test_expect_success 'use superproject as upstream when path is relative and no url is set there' '
(
cd addtest &&
git submodule add ../repo relative &&
test "$(git config -f .gitmodules submodule.relative.url)" = ../repo &&
git submodule sync relative &&
test "$(git config submodule.relative.url)" = "$submodurl/repo"
)
'
test_expect_success 'set up for relative path tests' '
mkdir reltest &&
(
cd reltest &&
git init &&
mkdir sub &&
(
cd sub &&
git init &&
test_commit foo
) &&
git add sub &&
git config -f .gitmodules submodule.sub.path sub &&
git config -f .gitmodules submodule.sub.url ../subrepo &&
cp .git/config pristine-.git-config &&
cp .gitmodules pristine-.gitmodules
)
'
test_expect_success '../subrepo works with URL - ssh:
(
cd reltest &&
cp pristine-.git-config .git/config &&
cp pristine-.gitmodules .gitmodules &&
git config remote.origin.url ssh:
git submodule init &&
test "$(git config submodule.sub.url)" = ssh:
)
'
test_expect_success '../subrepo works with port-qualified URL - ssh:
(
cd reltest &&
cp pristine-.git-config .git/config &&
cp pristine-.gitmodules .gitmodules &&
git config remote.origin.url ssh:
git submodule init &&
test "$(git config submodule.sub.url)" = ssh:
)
'
# About the choice of the path in the next test:
# - double-slash side-steps path mangling issues on Windows
# - it is still an absolute local path
# - there cannot be a server with a blank in its name just in case the
#   path is used erroneously to access a
test_expect_success '../subrepo path works with local path -
(
cd reltest &&
cp pristine-.git-config .git/config &&
cp pristine-.gitmodules .gitmodules &&
git config remote.origin.url "
git submodule init &&
test "$(git config submodule.sub.url)" = "
)
'
test_expect_success '../subrepo works with file URL - file:
(
cd reltest &&
cp pristine-.git-config .git/config &&
cp pristine-.gitmodules .gitmodules &&
git config remote.origin.url file:
git submodule init &&
test "$(git config submodule.sub.url)" = file:
)
'
test_expect_success '../subrepo works with helper URL- helper::
(
cd reltest &&
cp pristine-.git-config .git/config &&
cp pristine-.gitmodules .gitmodules &&
git config remote.origin.url helper::
git submodule init &&
test "$(git config submodule.sub.url)" = helper::
)
'
test_expect_success '../subrepo works with scp-style URL - user@host:repo' '
(
cd reltest &&
cp pristine-.git-config .git/config &&
git config remote.origin.url user@host:repo &&
git submodule init &&
test "$(git config submodule.sub.url)" = user@host:subrepo
)
'
test_expect_success '../subrepo works with scp-style URL - user@host:path/to/repo' '
(
cd reltest &&
cp pristine-.git-config .git/config &&
cp pristine-.gitmodules .gitmodules &&
git config remote.origin.url user@host:path/to/repo &&
git submodule init &&
test "$(git config submodule.sub.url)" = user@host:path/to/subrepo
)
'
test_expect_success '../subrepo works with relative local path - foo' '
(
cd reltest &&
cp pristine-.git-config .git/config &&
cp pristine-.gitmodules .gitmodules &&
git config remote.origin.url foo &&
# actual: fails with an error
git submodule init &&
test "$(git config submodule.sub.url)" = subrepo
)
'
test_expect_success '../subrepo works with relative local path - foo/bar' '
(
cd reltest &&
cp pristine-.git-config .git/config &&
cp pristine-.gitmodules .gitmodules &&
git config remote.origin.url foo/bar &&
git submodule init &&
test "$(git config submodule.sub.url)" = foo/subrepo
)
'
test_expect_success '../subrepo works with relative local path - ./foo' '
(
cd reltest &&
cp pristine-.git-config .git/config &&
cp pristine-.gitmodules .gitmodules &&
git config remote.origin.url ./foo &&
git submodule init &&
test "$(git config submodule.sub.url)" = subrepo
)
'
test_expect_success '../subrepo works with relative local path - ./foo/bar' '
(
cd reltest &&
cp pristine-.git-config .git/config &&
cp pristine-.gitmodules .gitmodules &&
git config remote.origin.url ./foo/bar &&
git submodule init &&
test "$(git config submodule.sub.url)" = foo/subrepo
)
'
test_expect_success '../subrepo works with relative local path - ../foo' '
(
cd reltest &&
cp pristine-.git-config .git/config &&
cp pristine-.gitmodules .gitmodules &&
git config remote.origin.url ../foo &&
git submodule init &&
test "$(git config submodule.sub.url)" = ../subrepo
)
'
test_expect_success '../subrepo works with relative local path - ../foo/bar' '
(
cd reltest &&
cp pristine-.git-config .git/config &&
cp pristine-.gitmodules .gitmodules &&
git config remote.origin.url ../foo/bar &&
git submodule init &&
test "$(git config submodule.sub.url)" = ../foo/subrepo
)
'
test_expect_success '../bar/a/b/c works with relative local path - ../foo/bar.git' '
(
cd reltest &&
cp pristine-.git-config .git/config &&
cp pristine-.gitmodules .gitmodules &&
mkdir -p a/b/c &&
(cd a/b/c; git init) &&
git config remote.origin.url ../foo/bar.git &&
git submodule add ../bar/a/b/c ./a/b/c &&
git submodule init &&
test "$(git config submodule.a/b/c.url)" = ../foo/bar/a/b/c
)
'
test_expect_success 'moving the superproject does not break submodules' '
(
cd addtest &&
git submodule status >expect
)
mv addtest addtest2 &&
(
cd addtest2 &&
git submodule status >actual &&
test_cmp expect actual
)
'
test_expect_success 'submodule add --name allows to replace a submodule with another at the same path' '
(
cd addtest2 &&
(
cd repo &&
echo "$submodurl/repo" >expect &&
git config remote.origin.url >actual &&
test_cmp expect actual &&
echo "gitdir: ../.git/modules/repo" >expect &&
test_cmp expect .git
) &&
rm -rf repo &&
git rm repo &&
git submodule add -q --name repo_new "$submodurl/bare.git" repo >actual &&
test_must_be_empty actual &&
echo "gitdir: ../.git/modules/submod" >expect &&
test_cmp expect submod/.git &&
(
cd repo &&
echo "$submodurl/bare.git" >expect &&
git config remote.origin.url >actual &&
test_cmp expect actual &&
echo "gitdir: ../.git/modules/repo_new" >expect &&
test_cmp expect .git
) &&
echo "repo" >expect &&
test_must_fail git config -f .gitmodules submodule.repo.path &&
git config -f .gitmodules submodule.repo_new.path >actual &&
test_cmp expect actual&&
echo "$submodurl/repo" >expect &&
test_must_fail git config -f .gitmodules submodule.repo.url &&
echo "$submodurl/bare.git" >expect &&
git config -f .gitmodules submodule.repo_new.url >actual &&
test_cmp expect actual &&
echo "$submodurl/repo" >expect &&
git config submodule.repo.url >actual &&
test_cmp expect actual &&
echo "$submodurl/bare.git" >expect &&
git config submodule.repo_new.url >actual &&
test_cmp expect actual
)
'
test_expect_success 'submodule add with an existing name fails unless forced' '
(
cd addtest2 &&
rm -rf repo &&
git rm repo &&
test_must_fail git submodule add -q --name repo_new "$submodurl/repo.git" repo &&
test ! -d repo &&
test_must_fail git config -f .gitmodules submodule.repo_new.path &&
test_must_fail git config -f .gitmodules submodule.repo_new.url &&
echo "$submodurl/bare.git" >expect &&
git config submodule.repo_new.url >actual &&
test_cmp expect actual &&
git submodule add -f -q --name repo_new "$submodurl/repo.git" repo &&
test -d repo &&
echo "repo" >expect &&
git config -f .gitmodules submodule.repo_new.path >actual &&
test_cmp expect actual&&
echo "$submodurl/repo.git" >expect &&
git config -f .gitmodules submodule.repo_new.url >actual &&
test_cmp expect actual &&
echo "$submodurl/repo.git" >expect &&
git config submodule.repo_new.url >actual &&
test_cmp expect actual
)
'
test_expect_success 'set up a second submodule' '
git submodule add ./init2 example2 &&
git commit -m "submodule example2 added"
'
test_expect_success 'submodule deinit should remove the whole submodule section from .git/config' '
git config submodule.example.foo bar &&
git config submodule.example2.frotz nitfol &&
git submodule deinit init &&
test -z "$(git config --get-regexp "submodule\.example\.")" &&
test -n "$(git config --get-regexp "submodule\.example2\.")" &&
test -f example2/.git &&
rmdir init
'
test_expect_success 'submodule deinit from subdirectory' '
git submodule update --init &&
git config submodule.example.foo bar &&
mkdir -p sub &&
(
cd sub &&
git submodule deinit ../init >../output
) &&
grep "\\.\\./init" output &&
test -z "$(git config --get-regexp "submodule\.example\.")" &&
test -n "$(git config --get-regexp "submodule\.example2\.")" &&
test -f example2/.git &&
rmdir init
'
test_expect_success 'submodule deinit . deinits all initialized submodules' '
git submodule update --init &&
git config submodule.example.foo bar &&
git config submodule.example2.frotz nitfol &&
test_must_fail git submodule deinit &&
git submodule deinit . >actual &&
test -z "$(git config --get-regexp "submodule\.example\.")" &&
test -z "$(git config --get-regexp "submodule\.example2\.")" &&
test_i18ngrep "Cleared directory .init" actual &&
test_i18ngrep "Cleared directory .example2" actual &&
rmdir init example2
'
test_expect_success 'submodule deinit deinits a submodule when its work tree is missing or empty' '
git submodule update --init &&
rm -rf init example2/* example2/.git &&
git submodule deinit init example2 >actual &&
test -z "$(git config --get-regexp "submodule\.example\.")" &&
test -z "$(git config --get-regexp "submodule\.example2\.")" &&
test_i18ngrep ! "Cleared directory .init" actual &&
test_i18ngrep "Cleared directory .example2" actual &&
rmdir init
'
test_expect_success 'submodule deinit fails when the submodule contains modifications unless forced' '
git submodule update --init &&
echo X >>init/s &&
test_must_fail git submodule deinit init &&
test -n "$(git config --get-regexp "submodule\.example\.")" &&
test -f example2/.git &&
git submodule deinit -f init >actual &&
test -z "$(git config --get-regexp "submodule\.example\.")" &&
test_i18ngrep "Cleared directory .init" actual &&
rmdir init
'
test_expect_success 'submodule deinit fails when the submodule contains untracked files unless forced' '
git submodule update --init &&
echo X >>init/untracked &&
test_must_fail git submodule deinit init &&
test -n "$(git config --get-regexp "submodule\.example\.")" &&
test -f example2/.git &&
git submodule deinit -f init >actual &&
test -z "$(git config --get-regexp "submodule\.example\.")" &&
test_i18ngrep "Cleared directory .init" actual &&
rmdir init
'
test_expect_success 'submodule deinit fails when the submodule HEAD does not match unless forced' '
git submodule update --init &&
(
cd init &&
git checkout HEAD^
) &&
test_must_fail git submodule deinit init &&
test -n "$(git config --get-regexp "submodule\.example\.")" &&
test -f example2/.git &&
git submodule deinit -f init >actual &&
test -z "$(git config --get-regexp "submodule\.example\.")" &&
test_i18ngrep "Cleared directory .init" actual &&
rmdir init
'
test_expect_success 'submodule deinit is silent when used on an uninitialized submodule' '
git submodule update --init &&
git submodule deinit init >actual &&
test_i18ngrep "Submodule .example. (.*) unregistered for path .init" actual &&
test_i18ngrep "Cleared directory .init" actual &&
git submodule deinit init >actual &&
test_i18ngrep ! "Submodule .example. (.*) unregistered for path .init" actual &&
test_i18ngrep "Cleared directory .init" actual &&
git submodule deinit . >actual &&
test_i18ngrep ! "Submodule .example. (.*) unregistered for path .init" actual &&
test_i18ngrep "Submodule .example2. (.*) unregistered for path .example2" actual &&
test_i18ngrep "Cleared directory .init" actual &&
git submodule deinit . >actual &&
test_i18ngrep ! "Submodule .example. (.*) unregistered for path .init" actual &&
test_i18ngrep ! "Submodule .example2. (.*) unregistered for path .example2" actual &&
test_i18ngrep "Cleared directory .init" actual &&
rmdir init example2
'
test_expect_success 'submodule deinit fails when submodule has a .git directory even when forced' '
git submodule update --init &&
(
cd init &&
rm .git &&
cp -R ../.git/modules/example .git &&
GIT_WORK_TREE=. git config --unset core.worktree
) &&
test_must_fail git submodule deinit init &&
test_must_fail git submodule deinit -f init &&
test -d init/.git &&
test -n "$(git config --get-regexp "submodule\.example\.")"
'
test_expect_success 'submodule with UTF-8 name' '
svname=$(printf "\303\245 \303\244\303\266") &&
mkdir "$svname" &&
(
cd "$svname" &&
git init &&
>sub &&
git add sub &&
git commit -m "init sub"
) &&
git submodule add ./"$svname" &&
git submodule >&2 &&
test -n "$(git submodule | grep "$svname")"
'
test_expect_success 'submodule add clone shallow submodule' '
mkdir super &&
pwd=$(pwd)
(
cd super &&
git init &&
git submodule add --depth=1 file:
(
cd submodule &&
test 1 = $(git log --oneline | wc -l)
)
)
'
test_done
