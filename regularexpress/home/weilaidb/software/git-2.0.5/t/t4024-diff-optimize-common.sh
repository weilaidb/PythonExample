#!/bin/sh
test_description='common tail optimization'
. ./test-lib.sh
z=zzzzzzzz ;# 8
z="$z$z$z$z$z$z$z$z" ;# 64
z="$z$z$z$z$z$z$z$z" ;# 512
z="$z$z$z$z" ;# 2048
z2047=$(expr "$z" : '.\(.*\)') ; #2047
x=zzzzzzzzzz			;# 10
y="$x$x$x$x$x$x$x$x$x$x"	;# 100
z="$y$y$y$y$y$y$y$y$y$y"	;# 1000
z1000=$z
z100=$y
z10=$x
zs()
zc ()
expect_pattern ()
sample='1023 1024 1025 2047 4095'
test_expect_success setup '
for n in $sample
do
( zs $n ; echo a ) >file-a$n &&
( echo b; zs $n; echo ) >file-b$n &&
( printf c; zs $n ) >file-c$n &&
( echo d; zs $n ) >file-d$n &&
git add file-a$n file-b$n file-c$n file-d$n &&
( zs $n ; echo A ) >file-a$n &&
( echo B; zs $n; echo ) >file-b$n &&
( printf C; zs $n ) >file-c$n &&
( echo D; zs $n ) >file-d$n &&
expect_pattern $n || break
done >expect
'
test_expect_success 'diff -U0' '
for n in $sample
do
git diff -U0 file-?$n
done | zc >actual &&
test_cmp expect actual
'
test_done
