#!/bin/sh
test_description='check svn dumpfile importer'
. ./test-lib.sh
reinit_git ()
try_dump ()
properties ()
text_no_props ()
>empty
test_expect_success PIPE 'empty dump' '
reinit_git &&
echo "SVN-fs-dump-format-version: 2" >input &&
try_dump input
'
test_expect_success PIPE 'v4 dumps not supported' '
reinit_git &&
echo "SVN-fs-dump-format-version: 4" >v4.dump &&
try_dump v4.dump must_fail
'
test_expect_failure PIPE 'empty revision' '
reinit_git &&
printf "rev <nobody, nobody@local>: %s\n" "" "" >expect &&
cat >emptyrev.dump <<-\EOF &&
SVN-fs-dump-format-version: 3
Revision-number: 1
Prop-content-length: 0
Content-length: 0
Revision-number: 2
Prop-content-length: 0
Content-length: 0
EOF
try_dump emptyrev.dump &&
git log -p --format="rev <%an, %ae>: %s" HEAD >actual &&
test_cmp expect actual
'
test_expect_success PIPE 'empty properties' '
reinit_git &&
printf "rev <nobody, nobody@local>: %s\n" "" "" >expect &&
cat >emptyprop.dump <<-\EOF &&
SVN-fs-dump-format-version: 3
Revision-number: 1
Prop-content-length: 10
Content-length: 10
PROPS-END
Revision-number: 2
Prop-content-length: 10
Content-length: 10
PROPS-END
EOF
try_dump emptyprop.dump &&
git log -p --format="rev <%an, %ae>: %s" HEAD >actual &&
test_cmp expect actual
'
test_expect_success PIPE 'author name and commit message' '
reinit_git &&
echo "<author@example.com, author@example.com@local>" >expect.author &&
cat >message <<-\EOF &&
A concise summary of the change
A detailed description of the change, why it is needed, what
was broken and why applying this is the best course of action.
* file.c
Details pertaining to an individual file.
EOF
>props &&
>log.dump &&
try_dump log.dump &&
git log -p --format="%B" HEAD >actual.log &&
git log --format="<%an, %ae>" >actual.author &&
test_cmp message actual.log &&
test_cmp expect.author actual.author
'
test_expect_success PIPE 'unsupported properties are ignored' '
reinit_git &&
echo author >expect &&
cat >extraprop.dump <<-\EOF &&
SVN-fs-dump-format-version: 3
Revision-number: 1
Prop-content-length: 56
Content-length: 56
K 8
nonsense
V 1
y
K 10
svn:author
V 6
author
PROPS-END
EOF
try_dump extraprop.dump &&
git log -p --format=%an HEAD >actual &&
test_cmp expect actual
'
test_expect_failure PIPE 'timestamp and empty file' '
echo author@example.com >expect.author &&
echo 1999-01-01 >expect.date &&
echo file >expect.files &&
reinit_git &&
>props &&
>emptyfile.dump &&
try_dump emptyfile.dump &&
git log --format=%an HEAD >actual.author &&
git log --date=short --format=%ad HEAD >actual.date &&
git ls-tree -r --name-only HEAD >actual.files &&
test_cmp expect.author actual.author &&
test_cmp expect.date actual.date &&
test_cmp expect.files actual.files &&
git checkout HEAD empty-file &&
test_cmp empty file
'
test_expect_success PIPE 'directory with files' '
reinit_git &&
printf "%s\n" directory/file1 directory/file2 >expect.files &&
echo hi >hi &&
echo hello >hello &&
>props &&
>directory.dump &&
try_dump directory.dump &&
git ls-tree -r --name-only HEAD >actual.files &&
git checkout HEAD directory &&
test_cmp expect.files actual.files &&
test_cmp hello directory/file1 &&
test_cmp hi directory/file2
'
test_expect_success PIPE 'branch name with backslash' '
reinit_git &&
sort <<-\EOF >expect.branch-files &&
trunk/file1
trunk/file2
"branches/UpdateFOPto094\\/file1"
"branches/UpdateFOPto094\\/file2"
EOF
echo hi >hi &&
echo hello >hello &&
>props.setup &&
>props.branch &&
>branch.dump &&
try_dump branch.dump &&
git ls-tree -r --name-only HEAD |
sort >actual.branch-files &&
test_cmp expect.branch-files actual.branch-files
'
test_expect_success PIPE 'node without action' '
reinit_git &&
cat >inaction.dump <<-\EOF &&
SVN-fs-dump-format-version: 3
Revision-number: 1
Prop-content-length: 10
Content-length: 10
PROPS-END
Node-path: directory
Node-kind: dir
Prop-content-length: 10
Content-length: 10
PROPS-END
EOF
try_dump inaction.dump must_fail
'
test_expect_success PIPE 'action: add node without text' '
reinit_git &&
cat >textless.dump <<-\EOF &&
SVN-fs-dump-format-version: 3
Revision-number: 1
Prop-content-length: 10
Content-length: 10
PROPS-END
Node-path: textless
Node-kind: file
Node-action: add
Prop-content-length: 10
Content-length: 10
PROPS-END
EOF
try_dump textless.dump must_fail
'
test_expect_failure PIPE 'change file mode but keep old content' '
reinit_git &&
cat >expect <<-\EOF &&
OBJID
:120000 100644 OBJID OBJID T	greeting
OBJID
:100644 120000 OBJID OBJID T	greeting
OBJID
:000000 100644 OBJID OBJID A	greeting
EOF
echo "link hello" >expect.blob &&
echo hello >hello &&
cat >filemode.dump <<-\EOF &&
SVN-fs-dump-format-version: 3
Revision-number: 1
Prop-content-length: 10
Content-length: 10
PROPS-END
Node-path: greeting
Node-kind: file
Node-action: add
Prop-content-length: 10
Text-content-length: 11
Content-length: 21
PROPS-END
link hello
Revision-number: 2
Prop-content-length: 10
Content-length: 10
PROPS-END
Node-path: greeting
Node-kind: file
Node-action: change
Prop-content-length: 33
Content-length: 33
K 11
svn:special
V 1
*
PROPS-END
Revision-number: 3
Prop-content-length: 10
Content-length: 10
PROPS-END
Node-path: greeting
Node-kind: file
Node-action: change
Prop-content-length: 10
Content-length: 10
PROPS-END
EOF
try_dump filemode.dump &&
>actual &&
git show HEAD:greeting >actual.blob &&
git show HEAD^:greeting >actual.target &&
test_cmp expect actual &&
test_cmp expect.blob actual.blob &&
test_cmp hello actual.target
'
test_expect_success PIPE 'NUL in property value' '
reinit_git &&
echo "commit message" >expect.message &&
|
q_to_nul >props &&
>nulprop.dump &&
try_dump nulprop.dump &&
git diff-tree --always -s --format=%s HEAD >actual.message &&
test_cmp expect.message actual.message
'
test_expect_success PIPE 'NUL in log message, file content, and property name' '
# Caveat: svnadmin 1.6.16 (r1073529) truncates at \0 in the
# svn:specialQnotreally example.
reinit_git &&
cat >expect <<-\EOF &&
OBJID
:100644 100644 OBJID OBJID M	greeting
OBJID
:000000 100644 OBJID OBJID A	greeting
EOF
printf "\n%s\n" "something with an ASCII NUL (Q)" >expect.message &&
printf "%s\n" "helQo" >expect.hello1 &&
printf "%s\n" "link hello" >expect.hello2 &&
|
q_to_nul >props &&
>8bitclean.dump &&
try_dump 8bitclean.dump &&
>actual &&
|
sed -ne "/^\$/,\$ p" >actual.message &&
git cat-file blob HEAD^:greeting | nul_to_q >actual.hello1 &&
git cat-file blob HEAD:greeting | nul_to_q >actual.hello2 &&
test_cmp expect actual &&
test_cmp expect.message actual.message &&
test_cmp expect.hello1 actual.hello1 &&
test_cmp expect.hello2 actual.hello2
'
test_expect_success PIPE 'change file mode and reiterate content' '
reinit_git &&
cat >expect <<-\EOF &&
OBJID
:120000 100644 OBJID OBJID T	greeting
OBJID
:100644 120000 OBJID OBJID T	greeting
OBJID
:000000 100644 OBJID OBJID A	greeting
EOF
echo "link hello" >expect.blob &&
echo hello >hello &&
cat >filemode2.dump <<-\EOF &&
SVN-fs-dump-format-version: 3
Revision-number: 1
Prop-content-length: 10
Content-length: 10
PROPS-END
Node-path: greeting
Node-kind: file
Node-action: add
Prop-content-length: 10
Text-content-length: 11
Content-length: 21
PROPS-END
link hello
Revision-number: 2
Prop-content-length: 10
Content-length: 10
PROPS-END
Node-path: greeting
Node-kind: file
Node-action: change
Prop-content-length: 33
Text-content-length: 11
Content-length: 44
K 11
svn:special
V 1
*
PROPS-END
link hello
Revision-number: 3
Prop-content-length: 10
Content-length: 10
PROPS-END
Node-path: greeting
Node-kind: file
Node-action: change
Prop-content-length: 10
Text-content-length: 11
Content-length: 21
PROPS-END
link hello
EOF
try_dump filemode2.dump &&
>actual &&
git show HEAD:greeting >actual.blob &&
git show HEAD^:greeting >actual.target &&
test_cmp expect actual &&
test_cmp expect.blob actual.blob &&
test_cmp hello actual.target
'
test_expect_success PIPE 'deltas supported' '
reinit_git &&
>delta &&
>props &&
>props2 &&
>delta.dump &&
try_dump delta.dump
'
test_expect_success PIPE 'property deltas supported' '
reinit_git &&
cat >expect <<-\EOF &&
OBJID
:100755 100644 OBJID OBJID M	script.sh
EOF
>revprops &&
>propdelta.dump &&
try_dump propdelta.dump &&
>actual &&
test_cmp expect actual
'
test_expect_success PIPE 'properties on /' '
reinit_git &&
cat <<-\EOF >expect &&
OBJID
OBJID
:000000 100644 OBJID OBJID A	greeting
EOF
sed -e "s/X$
SVN-fs-dump-format-version: 3
Revision-number: 1
Prop-content-length: 10
Content-length: 10
PROPS-END
Node-path: greeting
Node-kind: file
Node-action: add
Text-content-length: 0
Prop-content-length: 10
Content-length: 10
PROPS-END
Revision-number: 2
Prop-content-length: 10
Content-length: 10
PROPS-END
Node-path: X
Node-kind: dir
Node-action: change
Prop-delta: true
Prop-content-length: 43
Content-length: 43
K 10
svn:ignore
V 11
build-area
PROPS-END
EOF
try_dump changeroot.dump &&
>actual &&
test_cmp expect actual
'
test_expect_success PIPE 'deltas for typechange' '
reinit_git &&
cat >expect <<-\EOF &&
OBJID
:120000 100644 OBJID OBJID T	test-file
OBJID
:100755 120000 OBJID OBJID T	test-file
OBJID
:000000 100755 OBJID OBJID A	test-file
EOF
cat >deleteprop.dump <<-\EOF &&
SVN-fs-dump-format-version: 3
Revision-number: 1
Prop-content-length: 10
Content-length: 10
PROPS-END
Node-path: test-file
Node-kind: file
Node-action: add
Prop-delta: true
Prop-content-length: 35
Text-content-length: 17
Content-length: 52
K 14
svn:executable
V 0
PROPS-END
link testing 123
Revision-number: 2
Prop-content-length: 10
Content-length: 10
PROPS-END
Node-path: test-file
Node-kind: file
Node-action: change
Prop-delta: true
Prop-content-length: 53
Text-content-length: 17
Content-length: 70
K 11
svn:special
V 1
*
D 14
svn:executable
PROPS-END
link testing 231
Revision-number: 3
Prop-content-length: 10
Content-length: 10
PROPS-END
Node-path: test-file
Node-kind: file
Node-action: change
Prop-delta: true
Prop-content-length: 27
Text-content-length: 17
Content-length: 44
D 11
svn:special
PROPS-END
link testing 321
EOF
try_dump deleteprop.dump &&
>actual &&
test_cmp expect actual
'
test_expect_success PIPE 'deltas need not consume the whole preimage' '
reinit_git &&
cat >expect <<-\EOF &&
OBJID
:120000 100644 OBJID OBJID T	postimage
OBJID
:100644 120000 OBJID OBJID T	postimage
OBJID
:000000 100644 OBJID OBJID A	postimage
EOF
echo "first preimage" >expect.1 &&
printf target >expect.2 &&
printf lnk >expect.3 &&
>delta.1 &&
>symlink.props &&
>delta.2 &&
>delta.3 &&
>deltapartial.dump &&
try_dump deltapartial.dump &&
>actual &&
test_cmp expect actual &&
git show HEAD:postimage >actual.3 &&
git show HEAD^:postimage >actual.2 &&
git show HEAD^^:postimage >actual.1 &&
test_cmp expect.1 actual.1 &&
test_cmp expect.2 actual.2 &&
test_cmp expect.3 actual.3
'
test_expect_success PIPE 'no hang for delta trying to read past end of preimage' '
reinit_git &&
>greedy.delta &&
>greedydelta.dump &&
try_dump greedydelta.dump must_fail might_fail
'
test_expect_success 'set up svn repo' '
svnconf=$PWD/svnconf &&
mkdir -p "$svnconf" &&
if
svnadmin -h >/dev/null 2>&1 &&
svnadmin create simple-svn &&
svnadmin load simple-svn <"$TEST_DIRECTORY/t9135/svn.dump" &&
svn export --config-dir "$svnconf" "file:
then
test_set_prereq SVNREPO
fi
'
test_expect_success SVNREPO,PIPE 't9135/svn.dump' '
mkdir -p simple-git &&
(
cd simple-git &&
reinit_git &&
try_dump "$TEST_DIRECTORY/t9135/svn.dump"
) &&
(
cd simple-svnco &&
git init &&
git add . &&
git fetch ../simple-git master &&
git diff --exit-code FETCH_HEAD
)
'
test_done
