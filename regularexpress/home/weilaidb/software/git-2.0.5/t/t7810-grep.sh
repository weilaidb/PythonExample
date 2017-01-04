#!/bin/sh
#
# Copyright (c) 2006 Junio C Hamano
#
test_description='git grep various.
'
. ./test-lib.sh
cat >hello.c <<EOF
int main(int argc, const char **argv)
EOF
test_expect_success setup '
>file &&
>hello_world &&
>ab &&
echo vvv >v &&
echo ww w >w &&
echo x x xx x >x &&
echo y yy >y &&
echo zzz > z &&
mkdir t &&
echo test >t/t &&
echo vvv >t/v &&
mkdir t/a &&
echo vvv >t/a/v &&
>space &&
git add . &&
test_tick &&
git commit -m initial
'
test_expect_success 'grep should not segfault with a bad input' '
test_must_fail git grep "("
'
for H in HEAD ''
do
case "$H" in
HEAD)	HC='HEAD:' L='HEAD' ;;
'')	HC= L='in working tree' ;;
esac
test_expect_success "grep -w $L" '
>expected &&
git -c grep.linenumber=false grep -n -w -e mmap $H >actual &&
test_cmp expected actual
'
test_expect_success "grep -w $L" '
>expected &&
git -c grep.linenumber=true grep -w -e mmap $H >actual &&
test_cmp expected actual
'
test_expect_success "grep -w $L" '
>expected &&
git -c grep.linenumber=true grep --no-line-number -w -e mmap $H >actual &&
test_cmp expected actual
'
test_expect_success "grep -w $L (w)" '
: >expected &&
test_must_fail git grep -n -w -e "^w" $H >actual &&
test_cmp expected actual
'
test_expect_success "grep -w $L (x)" '
>expected &&
git grep -n -w -e "x xx* x" $H >actual &&
test_cmp expected actual
'
test_expect_success "grep -w $L (y-1)" '
>expected &&
git grep -n -w -e "^y" $H >actual &&
test_cmp expected actual
'
test_expect_success "grep -w $L (y-2)" '
: >expected &&
if git grep -n -w -e "^y y" $H >actual
then
echo should not have matched
cat actual
false
else
test_cmp expected actual
fi
'
test_expect_success "grep -w $L (z)" '
: >expected &&
if git grep -n -w -e "^z" $H >actual
then
echo should not have matched
cat actual
false
else
test_cmp expected actual
fi
'
test_expect_success "grep $L (t-1)" '
echo "$t/t:1:test" >expected &&
git grep -n -e test $H >actual &&
test_cmp expected actual
'
test_expect_success "grep $L (t-2)" '
echo "$t:1:test" >expected &&
(
cd t &&
git grep -n -e test $H
) >actual &&
test_cmp expected actual
'
test_expect_success "grep $L (t-3)" '
echo "$t/t:1:test" >expected &&
(
cd t &&
git grep --full-name -n -e test $H
) >actual &&
test_cmp expected actual
'
test_expect_success "grep -c $L (no /dev/null)" '
! git grep -c test $H | grep /dev/null
'
test_expect_success "grep --max-depth -1 $L" '
>expected &&
git grep --max-depth -1 -n -e vvv $H >actual &&
test_cmp expected actual
'
test_expect_success "grep --max-depth 0 $L" '
>expected &&
git grep --max-depth 0 -n -e vvv $H >actual &&
test_cmp expected actual
'
test_expect_success "grep --max-depth 0 -- '*' $L" '
>expected &&
git grep --max-depth 0 -n -e vvv $H -- "*" >actual &&
test_cmp expected actual
'
test_expect_success "grep --max-depth 1 $L" '
>expected &&
git grep --max-depth 1 -n -e vvv $H >actual &&
test_cmp expected actual
'
test_expect_success "grep --max-depth 0 -- t $L" '
>expected &&
git grep --max-depth 0 -n -e vvv $H -- t >actual &&
test_cmp expected actual
'
test_expect_success "grep --max-depth 0 -- . t $L" '
>expected &&
git grep --max-depth 0 -n -e vvv $H -- . t >actual &&
test_cmp expected actual
'
test_expect_success "grep --max-depth 0 -- t . $L" '
>expected &&
git grep --max-depth 0 -n -e vvv $H -- t . >actual &&
test_cmp expected actual
'
test_expect_success "grep $L with grep.extendedRegexp=false" '
echo "$ab:a+bc" >expected &&
git -c grep.extendedRegexp=false grep "a+b*c" $H ab >actual &&
test_cmp expected actual
'
test_expect_success "grep $L with grep.extendedRegexp=true" '
echo "$ab:abc" >expected &&
git -c grep.extendedRegexp=true grep "a+b*c" $H ab >actual &&
test_cmp expected actual
'
test_expect_success "grep $L with grep.patterntype=basic" '
echo "$ab:a+bc" >expected &&
git -c grep.patterntype=basic grep "a+b*c" $H ab >actual &&
test_cmp expected actual
'
test_expect_success "grep $L with grep.patterntype=extended" '
echo "$ab:abc" >expected &&
git -c grep.patterntype=extended grep "a+b*c" $H ab >actual &&
test_cmp expected actual
'
test_expect_success "grep $L with grep.patterntype=fixed" '
echo "$ab:a+b*c" >expected &&
git -c grep.patterntype=fixed grep "a+b*c" $H ab >actual &&
test_cmp expected actual
'
test_expect_success LIBPCRE "grep $L with grep.patterntype=perl" '
echo "$ab:a+b*c" >expected &&
git -c grep.patterntype=perl grep "a\xb\xc" $H ab >actual &&
test_cmp expected actual
'
test_expect_success "grep $L with grep.patternType=default and grep.extendedRegexp=true" '
echo "$ab:abc" >expected &&
git \
-c grep.patternType=default \
-c grep.extendedRegexp=true \
grep "a+b*c" $H ab >actual &&
test_cmp expected actual
'
test_expect_success "grep $L with grep.extendedRegexp=true and grep.patternType=default" '
echo "$ab:abc" >expected &&
git \
-c grep.extendedRegexp=true \
-c grep.patternType=default \
grep "a+b*c" $H ab >actual &&
test_cmp expected actual
'
test_expect_success "grep $L with grep.patternType=extended and grep.extendedRegexp=false" '
echo "$ab:abc" >expected &&
git \
-c grep.patternType=extended \
-c grep.extendedRegexp=false \
grep "a+b*c" $H ab >actual &&
test_cmp expected actual
'
test_expect_success "grep $L with grep.patternType=basic and grep.extendedRegexp=true" '
echo "$ab:a+bc" >expected &&
git \
-c grep.patternType=basic \
-c grep.extendedRegexp=true \
grep "a+b*c" $H ab >actual &&
test_cmp expected actual
'
test_expect_success "grep $L with grep.extendedRegexp=false and grep.patternType=extended" '
echo "$ab:abc" >expected &&
git \
-c grep.extendedRegexp=false \
-c grep.patternType=extended \
grep "a+b*c" $H ab >actual &&
test_cmp expected actual
'
test_expect_success "grep $L with grep.extendedRegexp=true and grep.patternType=basic" '
echo "$ab:a+bc" >expected &&
git \
-c grep.extendedRegexp=true \
-c grep.patternType=basic \
grep "a+b*c" $H ab >actual &&
test_cmp expected actual
'
test_expect_success "grep --count $L" '
echo $ab:3 >expected &&
git grep --count -e b $H -- ab >actual &&
test_cmp expected actual
'
test_expect_success "grep --count -h $L" '
echo 3 >expected &&
git grep --count -h -e b $H -- ab >actual &&
test_cmp expected actual
'
done
cat >expected <<EOF
file
EOF
test_expect_success 'grep -l -C' '
git grep -l -C1 foo >actual &&
test_cmp expected actual
'
cat >expected <<EOF
file:5
EOF
test_expect_success 'grep -l -C' '
git grep -c -C1 foo >actual &&
test_cmp expected actual
'
test_expect_success 'grep -L -C' '
git ls-files >expected &&
git grep -L -C1 nonexistent_string >actual &&
test_cmp expected actual
'
cat >expected <<EOF
file:foo mmap bar_mmap
EOF
test_expect_success 'grep -e A --and -e B' '
git grep -e "foo mmap" --and -e bar_mmap >actual &&
test_cmp expected actual
'
cat >expected <<EOF
file:foo_mmap bar mmap
file:foo_mmap bar mmap baz
EOF
test_expect_success 'grep ( -e A --or -e B ) --and -e B' '
git grep \( -e foo_ --or -e baz \) \
--and -e " mmap" >actual &&
test_cmp expected actual
'
cat >expected <<EOF
file:foo mmap bar
EOF
test_expect_success 'grep -e A --and --not -e B' '
git grep -e "foo mmap" --and --not -e bar_mmap >actual &&
test_cmp expected actual
'
test_expect_success 'grep should ignore GREP_OPTIONS' '
GREP_OPTIONS=-v git grep " mmap bar\$" >actual &&
test_cmp expected actual
'
test_expect_success 'grep -f, non-existent file' '
test_must_fail git grep -f patterns
'
cat >expected <<EOF
file:foo mmap bar
file:foo_mmap bar
file:foo_mmap bar mmap
file:foo mmap bar_mmap
file:foo_mmap bar mmap baz
EOF
cat >pattern <<EOF
mmap
EOF
test_expect_success 'grep -f, one pattern' '
git grep -f pattern >actual &&
test_cmp expected actual
'
cat >expected <<EOF
file:foo mmap bar
file:foo_mmap bar
file:foo_mmap bar mmap
file:foo mmap bar_mmap
file:foo_mmap bar mmap baz
t/a/v:vvv
t/v:vvv
v:vvv
EOF
cat >patterns <<EOF
mmap
vvv
EOF
test_expect_success 'grep -f, multiple patterns' '
git grep -f patterns >actual &&
test_cmp expected actual
'
test_expect_success 'grep, multiple patterns' '
git grep "$(cat patterns)" >actual &&
test_cmp expected actual
'
cat >expected <<EOF
file:foo mmap bar
file:foo_mmap bar
file:foo_mmap bar mmap
file:foo mmap bar_mmap
file:foo_mmap bar mmap baz
t/a/v:vvv
t/v:vvv
v:vvv
EOF
cat >patterns <<EOF
mmap
vvv
EOF
test_expect_success 'grep -f, ignore empty lines' '
git grep -f patterns >actual &&
test_cmp expected actual
'
test_expect_success 'grep -f, ignore empty lines, read patterns from stdin' '
git grep -f - <patterns >actual &&
test_cmp expected actual
'
cat >expected <<EOF
y:y yy
--
z:zzz
EOF
test_expect_success 'grep -q, silently report matches' '
>empty &&
git grep -q mmap >actual &&
test_cmp empty actual &&
test_must_fail git grep -q qfwfq >actual &&
test_cmp empty actual
'
test_expect_success 'grep -C1 hunk mark between files' '
git grep -C1 "^[yz]" >actual &&
test_cmp expected actual
'
test_expect_success 'log grep setup' '
echo a >>file &&
test_tick &&
GIT_AUTHOR_NAME="With * Asterisk" \
GIT_AUTHOR_EMAIL="xyzzy@frotz.com" \
git commit -a -m "second" &&
echo a >>file &&
test_tick &&
git commit -a -m "third" &&
echo a >>file &&
test_tick &&
GIT_AUTHOR_NAME="Night Fall" \
GIT_AUTHOR_EMAIL="nitfol@frobozz.com" \
git commit -a -m "fourth"
'
test_expect_success 'log grep (1)' '
git log --author=author --pretty=tformat:%s >actual &&
>expect &&
test_cmp expect actual
'
test_expect_success 'log grep (2)' '
git log --author=" * " -F --pretty=tformat:%s >actual &&
>expect &&
test_cmp expect actual
'
test_expect_success 'log grep (3)' '
git log --author="^A U" --pretty=tformat:%s >actual &&
>expect &&
test_cmp expect actual
'
test_expect_success 'log grep (4)' '
git log --author="frotz\.com>$" --pretty=tformat:%s >actual &&
>expect &&
test_cmp expect actual
'
test_expect_success 'log grep (5)' '
git log --author=Thor -F --pretty=tformat:%s >actual &&
>expect &&
test_cmp expect actual
'
test_expect_success 'log grep (6)' '
git log --author=-0700  --pretty=tformat:%s >actual &&
>expect &&
test_cmp expect actual
'
test_expect_success 'log grep (7)' '
git log -g --grep-reflog="commit: third" --pretty=tformat:%s >actual &&
echo third >expect &&
test_cmp expect actual
'
test_expect_success 'log grep (8)' '
git log -g --grep-reflog="commit: third" --grep-reflog="commit: second" --pretty=tformat:%s >actual &&
>expect &&
test_cmp expect actual
'
test_expect_success 'log grep (9)' '
git log -g --grep-reflog="commit: third" --author="Thor" --pretty=tformat:%s >actual &&
echo third >expect &&
test_cmp expect actual
'
test_expect_success 'log grep (9)' '
git log -g --grep-reflog="commit: third" --author="non-existant" --pretty=tformat:%s >actual &&
: >expect &&
test_cmp expect actual
'
test_expect_success 'log --grep-reflog can only be used under -g' '
test_must_fail git log --grep-reflog="commit: third"
'
test_expect_success 'log with multiple --grep uses union' '
git log --grep=i --grep=r --format=%s >actual &&
>expect &&
test_cmp expect actual
'
test_expect_success 'log --all-match with multiple --grep uses intersection' '
git log --all-match --grep=i --grep=r --format=%s >actual &&
>expect &&
test_cmp expect actual
'
test_expect_success 'log with multiple --author uses union' '
git log --author="Thor" --author="Aster" --format=%s >actual &&
>expect &&
test_cmp expect actual
'
test_expect_success 'log --all-match with multiple --author still uses union' '
git log --all-match --author="Thor" --author="Aster" --format=%s >actual &&
>expect &&
test_cmp expect actual
'
test_expect_success 'log --grep --author uses intersection' '
# grep matches only third and fourth
# author matches only initial and third
git log --author="A U Thor" --grep=r --format=%s >actual &&
>expect &&
test_cmp expect actual
'
test_expect_success 'log --grep --grep --author takes union of greps and intersects with author' '
# grep matches initial and second but not third
# author matches only initial and third
git log --author="A U Thor" --grep=s --grep=l --format=%s >actual &&
>expect &&
test_cmp expect actual
'
test_expect_success 'log ---all-match -grep --author --author still takes union of authors and intersects with grep' '
# grep matches only initial and third
# author matches all but second
git log --all-match --author="Thor" --author="Night" --grep=i --format=%s >actual &&
>expect &&
test_cmp expect actual
'
test_expect_success 'log --grep --author --author takes union of authors and intersects with grep' '
# grep matches only initial and third
# author matches all but second
git log --author="Thor" --author="Night" --grep=i --format=%s >actual &&
>expect &&
test_cmp expect actual
'
test_expect_success 'log --all-match --grep --grep --author takes intersection' '
# grep matches only third
# author matches only initial and third
git log --all-match --author="A U Thor" --grep=i --grep=r --format=%s >actual &&
>expect &&
test_cmp expect actual
'
test_expect_success 'log --author does not search in timestamp' '
: >expect &&
git log --author="$GIT_AUTHOR_DATE" >actual &&
test_cmp expect actual
'
test_expect_success 'log --committer does not search in timestamp' '
: >expect &&
git log --committer="$GIT_COMMITTER_DATE" >actual &&
test_cmp expect actual
'
test_expect_success 'grep with CE_VALID file' '
git update-index --assume-unchanged t/t &&
rm t/t &&
test "$(git grep test)" = "t/t:test" &&
git update-index --no-assume-unchanged t/t &&
git checkout t/t
'
cat >expected <<EOF
hello.c=
hello.c:	return 0;
EOF
test_expect_success 'grep -p with userdiff' '
git config diff.custom.funcname "^#" &&
echo "hello.c diff=custom" >.gitattributes &&
git grep -p return >actual &&
test_cmp expected actual
'
cat >expected <<EOF
hello.c=int main(int argc, const char **argv)
hello.c:	return 0;
EOF
test_expect_success 'grep -p' '
rm -f .gitattributes &&
git grep -p return >actual &&
test_cmp expected actual
'
cat >expected <<EOF
hello.c-
hello.c=int main(int argc, const char **argv)
hello.c-)$" &&
echo "hello.c diff=custom" >.gitattributes &&
git grep -W return >actual &&
test_cmp expected actual
'
test_expect_success 'grep from a subdirectory to search wider area (1)' '
mkdir -p s &&
(
cd s && git grep "x x x" ..
)
'
test_expect_success 'grep from a subdirectory to search wider area (2)' '
mkdir -p s &&
(
cd s || exit 1
( git grep xxyyzz .. >out ; echo $? >status )
! test -s out &&
test 1 = $(cat status)
)
'
cat >expected <<EOF
hello.c:int main(int argc, const char **argv)
EOF
test_expect_success 'grep -Fi' '
git grep -Fi "CHAR *" >actual &&
test_cmp expected actual
'
test_expect_success 'outside of git repository' '
rm -fr non &&
mkdir -p non/git/sub &&
echo hello >non/git/file1 &&
echo world >non/git/sub/file2 &&
>non/expect.full &&
echo file2:world >non/expect.sub &&
(
GIT_CEILING_DIRECTORIES="$(pwd)/non/git" &&
export GIT_CEILING_DIRECTORIES &&
cd non/git &&
test_must_fail git grep o &&
git grep --no-index o >../actual.full &&
test_cmp ../expect.full ../actual.full
cd sub &&
test_must_fail git grep o &&
git grep --no-index o >../../actual.sub &&
test_cmp ../../expect.sub ../../actual.sub
) &&
echo ".*o*" >non/git/.gitignore &&
(
GIT_CEILING_DIRECTORIES="$(pwd)/non/git" &&
export GIT_CEILING_DIRECTORIES &&
cd non/git &&
test_must_fail git grep o &&
git grep --no-index --exclude-standard o >../actual.full &&
test_cmp ../expect.full ../actual.full &&
>../expect.with.ignored &&
git grep --no-index --no-exclude o >../actual.full &&
test_cmp ../expect.with.ignored ../actual.full
)
'
test_expect_success 'inside git repository but with --no-index' '
rm -fr is &&
mkdir -p is/git/sub &&
echo hello >is/git/file1 &&
echo world >is/git/sub/file2 &&
echo ".*o*" >is/git/.gitignore &&
>is/expect.unignored &&
>is/expect.full &&
: >is/expect.empty &&
echo file2:world >is/expect.sub &&
(
cd is/git &&
git init &&
test_must_fail git grep o >../actual.full &&
test_cmp ../expect.empty ../actual.full &&
git grep --untracked o >../actual.unignored &&
test_cmp ../expect.unignored ../actual.unignored &&
git grep --no-index o >../actual.full &&
test_cmp ../expect.full ../actual.full &&
git grep --no-index --exclude-standard o >../actual.unignored &&
test_cmp ../expect.unignored ../actual.unignored &&
cd sub &&
test_must_fail git grep o >../../actual.sub &&
test_cmp ../../expect.empty ../../actual.sub &&
git grep --no-index o >../../actual.sub &&
test_cmp ../../expect.sub ../../actual.sub &&
git grep --untracked o >../../actual.sub &&
test_cmp ../../expect.sub ../../actual.sub
)
'
test_expect_success 'setup double-dash tests' '
cat >double-dash <<EOF &&
--
->
other
EOF
git add double-dash
'
cat >expected <<EOF
double-dash:->
EOF
test_expect_success 'grep -- pattern' '
git grep -- "->" >actual &&
test_cmp expected actual
'
test_expect_success 'grep -- pattern -- pathspec' '
git grep -- "->" -- double-dash >actual &&
test_cmp expected actual
'
test_expect_success 'grep -e pattern -- path' '
git grep -e "->" -- double-dash >actual &&
test_cmp expected actual
'
cat >expected <<EOF
double-dash:--
EOF
test_expect_success 'grep -e -- -- path' '
git grep -e -- -- double-dash >actual &&
test_cmp expected actual
'
cat >expected <<EOF
hello.c:int main(int argc, const char **argv)
hello.c:	printf("Hello world.\n");
EOF
test_expect_success LIBPCRE 'grep --perl-regexp pattern' '
git grep --perl-regexp "\p.*?\p" hello.c >actual &&
test_cmp expected actual
'
test_expect_success LIBPCRE 'grep -P pattern' '
git grep -P "\p.*?\p" hello.c >actual &&
test_cmp expected actual
'
test_expect_success 'grep pattern with grep.extendedRegexp=true' '
>empty &&
test_must_fail git -c grep.extendedregexp=true \
grep "\p.*?\p" hello.c >actual &&
test_cmp empty actual
'
test_expect_success LIBPCRE 'grep -P pattern with grep.extendedRegexp=true' '
git -c grep.extendedregexp=true \
grep -P "\p.*?\p" hello.c >actual &&
test_cmp expected actual
'
test_expect_success LIBPCRE 'grep -P -v pattern' '
>expected &&
git grep -P -v "abc" ab >actual &&
test_cmp expected actual
'
test_expect_success LIBPCRE 'grep -P -i pattern' '
cat >expected <<-EOF &&
hello.c:	printf("Hello world.\n");
EOF
git grep -P -i "PRINTF\([^\d]+\)" hello.c >actual &&
test_cmp expected actual
'
test_expect_success LIBPCRE 'grep -P -w pattern' '
>expected &&
git grep -P -w "He((?i)ll)o" hello_world >actual &&
test_cmp expected actual
'
test_expect_success 'grep -G invalidpattern properly dies ' '
test_must_fail git grep -G "a["
'
test_expect_success 'grep invalidpattern properly dies with grep.patternType=basic' '
test_must_fail git -c grep.patterntype=basic grep "a["
'
test_expect_success 'grep -E invalidpattern properly dies ' '
test_must_fail git grep -E "a["
'
test_expect_success 'grep invalidpattern properly dies with grep.patternType=extended' '
test_must_fail git -c grep.patterntype=extended grep "a["
'
test_expect_success LIBPCRE 'grep -P invalidpattern properly dies ' '
test_must_fail git grep -P "a["
'
test_expect_success LIBPCRE 'grep invalidpattern properly dies with grep.patternType=perl' '
test_must_fail git -c grep.patterntype=perl grep "a["
'
test_expect_success 'grep -G -E -F pattern' '
echo "ab:a+b*c" >expected &&
git grep -G -E -F "a+b*c" ab >actual &&
test_cmp expected actual
'
test_expect_success 'grep pattern with grep.patternType=basic, =extended, =fixed' '
echo "ab:a+b*c" >expected &&
git \
-c grep.patterntype=basic \
-c grep.patterntype=extended \
-c grep.patterntype=fixed \
grep "a+b*c" ab >actual &&
test_cmp expected actual
'
test_expect_success 'grep -E -F -G pattern' '
echo "ab:a+bc" >expected &&
git grep -E -F -G "a+b*c" ab >actual &&
test_cmp expected actual
'
test_expect_success 'grep pattern with grep.patternType=extended, =fixed, =basic' '
echo "ab:a+bc" >expected &&
git \
-c grep.patterntype=extended \
-c grep.patterntype=fixed \
-c grep.patterntype=basic \
grep "a+b*c" ab >actual &&
test_cmp expected actual
'
test_expect_success 'grep -F -G -E pattern' '
echo "ab:abc" >expected &&
git grep -F -G -E "a+b*c" ab >actual &&
test_cmp expected actual
'
test_expect_success 'grep pattern with grep.patternType=fixed, =basic, =extended' '
echo "ab:abc" >expected &&
git \
-c grep.patterntype=fixed \
-c grep.patterntype=basic \
-c grep.patterntype=extended \
grep "a+b*c" ab >actual &&
test_cmp expected actual
'
test_expect_success 'grep -G -F -P -E pattern' '
>empty &&
test_must_fail git grep -G -F -P -E "a\xb\xc" ab >actual &&
test_cmp empty actual
'
test_expect_success 'grep pattern with grep.patternType=fixed, =basic, =perl, =extended' '
>empty &&
test_must_fail git \
-c grep.patterntype=fixed \
-c grep.patterntype=basic \
-c grep.patterntype=perl \
-c grep.patterntype=extended \
grep "a\xb\xc" ab >actual &&
test_cmp empty actual
'
test_expect_success LIBPCRE 'grep -G -F -E -P pattern' '
echo "ab:a+b*c" >expected &&
git grep -G -F -E -P "a\xb\xc" ab >actual &&
test_cmp expected actual
'
test_expect_success LIBPCRE 'grep pattern with grep.patternType=fixed, =basic, =extended, =perl' '
echo "ab:a+b*c" >expected &&
git \
-c grep.patterntype=fixed \
-c grep.patterntype=basic \
-c grep.patterntype=extended \
-c grep.patterntype=perl \
grep "a\xb\xc" ab >actual &&
test_cmp expected actual
'
test_expect_success LIBPCRE 'grep -P pattern with grep.patternType=fixed' '
echo "ab:a+b*c" >expected &&
git \
-c grep.patterntype=fixed \
grep -P "a\xb\xc" ab >actual &&
test_cmp expected actual
'
test_expect_success 'grep -F pattern with grep.patternType=basic' '
echo "ab:a+b*c" >expected &&
git \
-c grep.patterntype=basic \
grep -F "*c" ab >actual &&
test_cmp expected actual
'
test_expect_success 'grep -G pattern with grep.patternType=fixed' '
>expected &&
git \
-c grep.patterntype=fixed \
grep -G "a+b" ab >actual &&
test_cmp expected actual
'
test_expect_success 'grep -E pattern with grep.patternType=fixed' '
>expected &&
git \
-c grep.patterntype=fixed \
grep -E "a+" ab >actual &&
test_cmp expected actual
'
cat >expected <<EOF
hello.c<RED>:<RESET>int main(int argc, const char **argv)
hello.c<RED>-<RESET>
<RED>--<RESET>
hello_world<RED>:<RESET>Hello_world
hello_world<RED>-<RESET>HeLLo_world
EOF
test_expect_success 'grep --color, separator' '
test_config color.grep.context		normal &&
test_config color.grep.filename		normal &&
test_config color.grep.function		normal &&
test_config color.grep.linenumber	normal &&
test_config color.grep.match		normal &&
test_config color.grep.selected		normal &&
test_config color.grep.separator	red &&
git grep --color=always -A1 -e char -e lo_w hello.c hello_world |
test_decode_color >actual &&
test_cmp expected actual
'
cat >expected <<EOF
hello.c:int main(int argc, const char **argv)
hello.c:
hello_world:Hello_world
EOF
test_expect_success 'grep --break' '
git grep --break -e char -e lo_w hello.c hello_world >actual &&
test_cmp expected actual
'
cat >expected <<EOF
hello.c:int main(int argc, const char **argv)
hello.c-
hello_world:Hello_world
hello_world-HeLLo_world
EOF
test_expect_success 'grep --break with context' '
git grep --break -A1 -e char -e lo_w hello.c hello_world >actual &&
test_cmp expected actual
'
cat >expected <<EOF
hello.c
int main(int argc, const char **argv)
hello_world
Hello_world
EOF
test_expect_success 'grep --heading' '
git grep --heading -e char -e lo_w hello.c hello_world >actual &&
test_cmp expected actual
'
cat >expected <<EOF
<BOLD;GREEN>hello.c<RESET>
2:int main(int argc, const <BLACK;BYELLOW>char<RESET> **argv)
6:
<BOLD;GREEN>hello_world<RESET>
3:Hel<BLACK;BYELLOW>lo_w<RESET>orld
EOF
test_expect_success 'mimic ack-grep --group' '
test_config color.grep.context		normal &&
test_config color.grep.filename		"bold green" &&
test_config color.grep.function		normal &&
test_config color.grep.linenumber	normal &&
test_config color.grep.match		"black yellow" &&
test_config color.grep.selected		normal &&
test_config color.grep.separator	normal &&
git grep --break --heading -n --color \
-e char -e lo_w hello.c hello_world |
test_decode_color >actual &&
test_cmp expected actual
'
cat >expected <<EOF
space: line with leading space1
space: line with leading space2
space: line with leading space3
EOF
test_expect_success LIBPCRE 'grep -E "^ "' '
git grep -E "^ " space >actual &&
test_cmp expected actual
'
test_expect_success LIBPCRE 'grep -P "^ "' '
git grep -P "^ " space >actual &&
test_cmp expected actual
'
test_done
