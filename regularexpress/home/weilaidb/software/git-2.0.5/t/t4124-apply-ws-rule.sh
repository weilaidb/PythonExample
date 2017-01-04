#!/bin/sh
test_description='core.whitespace rules and git apply'
. ./test-lib.sh
prepare_test_file ()
apply_patch ()
test_fix ()
test_expect_success setup '
>file &&
git add file &&
prepare_test_file >file &&
git diff-files -p >patch &&
>target &&
git add target
'
test_expect_success 'whitespace=nowarn, default rule' '
apply_patch --whitespace=nowarn &&
test_cmp file target
'
test_expect_success 'whitespace=warn, default rule' '
apply_patch --whitespace=warn &&
test_cmp file target
'
test_expect_success 'whitespace=error-all, default rule' '
apply_patch --whitespace=error-all && return 1
test -s target && return 1
: happy
'
test_expect_success 'whitespace=error-all, no rule' '
git config core.whitespace -trailing,-space-before,-indent &&
apply_patch --whitespace=error-all &&
test_cmp file target
'
test_expect_success 'whitespace=error-all, no rule (attribute)' '
git config --unset core.whitespace &&
echo "target -whitespace" >.gitattributes &&
apply_patch --whitespace=error-all &&
test_cmp file target
'
test_expect_success 'spaces inserted by tab-in-indent' '
git config core.whitespace -trailing,-space,-indent,tab &&
rm -f .gitattributes &&
test_fix % &&
sed -e "s/_/ /g" -e "s/>/	/" <<-\EOF >expect &&
An_SP in an ordinary line>and a HT.
________A HT (%).
________A SP and a HT (@%).
_________A SP, a HT and a SP (@%).
_______Seven SP.
________Eight SP (#).
________Seven SP and a HT (@%).
________________Eight SP and a HT (@#%).
_________Seven SP, a HT and a SP (@%).
_________________Eight SP, a HT and a SP (@#%).
_______________Fifteen SP (#).
________________Fifteen SP and a HT (@#%).
________________Sixteen SP (#=).
________________________Sixteen SP and a HT (@#%=).
_____a__Five SP, a non WS, two SP.
A line with a (!) trailing SP_
A line with a (!) trailing HT>
EOF
test_cmp expect target
'
for t in - ''
do
case "$t" in '') tt='!' ;; *) tt= ;; esac
for s in - ''
do
case "$s" in '') ts='@' ;; *) ts= ;; esac
for i in - ''
do
case "$i" in '') ti='#' ti16='=';; *) ti= ti16= ;; esac
for h in - ''
do
[ -z "$h$i" ] && continue
case "$h" in '') th='%' ;; *) th= ;; esac
rule=$trailing,$space,$indent,$tab
rm -f .gitattributes
test_expect_success "rule=$rule" '
git config core.whitespace "$rule" &&
test_fix "$tt$ts$ti$th"
'
test_expect_success "rule=$rule,tabwidth=16" '
git config core.whitespace "$rule,tabwidth=16" &&
test_fix "$tt$ts$ti16$th"
'
test_expect_success "rule=$rule (attributes)" '
git config --unset core.whitespace &&
echo "target whitespace=$rule" >.gitattributes &&
test_fix "$tt$ts$ti$th"
'
test_expect_success "rule=$rule,tabwidth=16 (attributes)" '
echo "target whitespace=$rule,tabwidth=16" >.gitattributes &&
test_fix "$tt$ts$ti16$th"
'
done
done
done
done
create_patch ()
test_expect_success 'trailing whitespace & no newline at the end of file' '
>target &&
create_patch >patch-file &&
git apply --whitespace=fix patch-file &&
grep "newline$" target &&
grep "^$" target
'
test_expect_success 'blank at EOF with --whitespace=fix (1)' '
test_might_fail git config --unset core.whitespace &&
rm -f .gitattributes &&
>one &&
git add one &&
>expect &&
>one &&
git diff -- one >patch &&
git checkout one &&
git apply --whitespace=fix patch &&
test_cmp expect one
'
test_expect_success 'blank at EOF with --whitespace=fix (2)' '
>one &&
git add one &&
>expect &&
>one &&
git diff -- one >patch &&
git checkout one &&
git apply --whitespace=fix patch &&
test_cmp expect one
'
test_expect_success 'blank at EOF with --whitespace=fix (3)' '
>one &&
git add one &&
>expect &&
>one &&
git diff -- one >patch &&
git checkout one &&
git apply --whitespace=fix patch &&
test_cmp expect one
'
test_expect_success 'blank at end of hunk, not at EOF with --whitespace=fix' '
>one &&
git add one &&
>expect &&
cp expect one &&
git diff -- one >patch &&
git checkout one &&
git apply --whitespace=fix patch &&
test_cmp expect one
'
test_expect_success 'blank at EOF with --whitespace=warn' '
>one &&
git add one &&
echo >>one &&
cat one >expect &&
git diff -- one >patch &&
git checkout one &&
git apply --whitespace=warn patch 2>error &&
test_cmp expect one &&
grep "new blank line at EOF" error
'
test_expect_success 'blank at EOF with --whitespace=error' '
>one &&
git add one &&
cat one >expect &&
echo >>one &&
git diff -- one >patch &&
git checkout one &&
test_must_fail git apply --whitespace=error patch 2>error &&
test_cmp expect one &&
grep "new blank line at EOF" error
'
test_expect_success 'blank but not empty at EOF' '
>one &&
git add one &&
echo "   " >>one &&
cat one >expect &&
git diff -- one >patch &&
git checkout one &&
git apply --whitespace=warn patch 2>error &&
test_cmp expect one &&
grep "new blank line at EOF" error
'
test_expect_success 'applying beyond EOF requires one non-blank context line' '
>one &&
git add one &&
>>one &&
git diff -- one >patch &&
git checkout one &&
>one &&
cp one expect &&
test_must_fail git apply --whitespace=fix patch &&
test_cmp one expect &&
test_must_fail git apply --ignore-space-change --whitespace=fix patch &&
test_cmp one expect
'
test_expect_success 'tons of blanks at EOF should not apply' '
for i in 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16; do
echo; echo; echo; echo;
done >one &&
git add one &&
echo a >>one &&
git diff -- one >patch &&
>one &&
test_must_fail git apply --whitespace=fix patch &&
test_must_fail git apply --ignore-space-change --whitespace=fix patch
'
test_expect_success 'missing blank line at end with --whitespace=fix' '
echo a >one &&
echo >>one &&
git add one &&
echo b >>one &&
cp one expect &&
git diff -- one >patch &&
echo a >one &&
cp one saved-one &&
test_must_fail git apply patch &&
git apply --whitespace=fix patch &&
test_cmp one expect &&
mv saved-one one &&
git apply --ignore-space-change --whitespace=fix patch &&
test_cmp one expect
'
test_expect_success 'two missing blank lines at end with --whitespace=fix' '
>one &&
cp one no-blank-lines &&
>>one &&
git add one &&
echo d >>one &&
cp one expect &&
echo >>one &&
git diff -- one >patch &&
cp no-blank-lines one &&
test_must_fail git apply patch &&
git apply --whitespace=fix patch &&
test_cmp one expect &&
mv no-blank-lines one &&
test_must_fail git apply patch &&
git apply --ignore-space-change --whitespace=fix patch &&
test_cmp one expect
'
test_expect_success 'missing blank line at end, insert before end, --whitespace=fix' '
>one &&
git add one &&
>one &&
cp one expect &&
git diff -- one >patch &&
echo a >one &&
test_must_fail git apply patch &&
git apply --whitespace=fix patch &&
test_cmp one expect
'
test_expect_success 'shrink file with tons of missing blanks at end of file' '
>one &&
cp one no-blank-lines &&
for i in 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16; do
echo; echo; echo; echo;
done >>one &&
git add one &&
echo a >one &&
cp one expect &&
git diff -- one >patch &&
cp no-blank-lines one &&
test_must_fail git apply patch &&
git apply --whitespace=fix patch &&
test_cmp one expect &&
mv no-blank-lines one &&
git apply --ignore-space-change --whitespace=fix patch &&
test_cmp one expect
'
test_expect_success 'missing blanks at EOF must only match blank lines' '
>one &&
git add one &&
>>one &&
git diff -- one >patch &&
echo a >one &&
test_must_fail git apply patch &&
test_must_fail git apply --whitespace=fix patch &&
test_must_fail git apply --ignore-space-change --whitespace=fix patch
'
sed -e's/Z
a
b
c
Z
EOF
test_expect_success 'missing blank line should match context line with spaces' '
git add one &&
echo d >>one &&
git diff -- one >patch &&
>one &&
cp one expect &&
>>expect &&
git add one &&
git apply --whitespace=fix patch &&
test_cmp one expect
'
sed -e's/Z
a
b
c
Z
EOF
test_expect_success 'same, but with the --ignore-space-option' '
git add one &&
echo d >>one &&
cp one expect &&
git diff -- one >patch &&
>one &&
git add one &&
git checkout-index -f one &&
git apply --ignore-space-change --whitespace=fix patch &&
test_cmp one expect
'
test_expect_success 'same, but with CR-LF line endings && cr-at-eol set' '
git config core.whitespace cr-at-eol &&
printf "a\r\n" >one &&
printf "b\r\n" >>one &&
printf "c\r\n" >>one &&
cp one save-one &&
printf "                 \r\n" >>one &&
git add one &&
printf "d\r\n" >>one &&
cp one expect &&
git diff -- one >patch &&
mv save-one one &&
git apply --ignore-space-change --whitespace=fix patch &&
test_cmp one expect
'
test_expect_success 'same, but with CR-LF line endings && cr-at-eol unset' '
git config --unset core.whitespace &&
printf "a\r\n" >one &&
printf "b\r\n" >>one &&
printf "c\r\n" >>one &&
cp one save-one &&
printf "                 \r\n" >>one &&
git add one &&
cp one expect &&
printf "d\r\n" >>one &&
git diff -- one >patch &&
mv save-one one &&
echo d >>expect &&
git apply --ignore-space-change --whitespace=fix patch &&
test_cmp one expect
'
test_expect_success 'whitespace=fix to expand' '
qz_to_tab_space >preimage <<-\EOF &&
QQa
QQb
QQc
ZZZZZZZZZZZZZZZZd
QQe
QQf
QQg
EOF
qz_to_tab_space >patch <<-\EOF &&
diff --git a/preimage b/preimage
--- a/preimage
+++ b/preimage
@@ -1,7 +1,6 @@
QQa
QQb
QQc
-QQd
QQe
QQf
QQg
EOF
git -c core.whitespace=tab-in-indent apply --whitespace=fix patch
'
test_done
