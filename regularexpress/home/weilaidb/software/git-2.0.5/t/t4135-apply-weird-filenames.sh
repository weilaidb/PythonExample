#!/bin/sh
test_description='git apply with weird postimage filenames'
. ./test-lib.sh
test_expect_success 'setup' '
vector=$TEST_DIRECTORY/t4135 &&
test_tick &&
git commit --allow-empty -m preimage &&
git tag preimage &&
reset_preimage()  &&
test_when_finished "rm -f \"tab	embedded.txt\"" &&
test_when_finished "rm -f '\''\"quoteembedded\".txt'\''" &&
if touch -- "tab	embedded.txt" '\''"quoteembedded".txt'\''
then
test_set_prereq FUNNYNAMES
fi
'
try_filename()
try_filename 'plain'            'postimage.txt'
try_filename 'with spaces'      'post image.txt'
try_filename 'with tab'         'post	image.txt' FUNNYNAMES
try_filename 'with backslash'   'post\image.txt' BSLASHPSPEC
try_filename 'with quote'       '"postimage".txt' FUNNYNAMES success failure success
test_expect_success 'whitespace-damaged traditional patch' '
echo postimage >expected &&
reset_preimage &&
rm -f postimage.txt &&
git apply -v "$vector/damaged.diff" &&
test_cmp expected postimage.txt
'
test_expect_success 'traditional patch with colon in timezone' '
echo postimage >expected &&
reset_preimage &&
rm -f "post image.txt" &&
git apply "$vector/funny-tz.diff" &&
test_cmp expected "post image.txt"
'
test_expect_success 'traditional, whitespace-damaged, colon in timezone' '
echo postimage >expected &&
reset_preimage &&
rm -f "post image.txt" &&
git apply "$vector/damaged-tz.diff" &&
test_cmp expected "post image.txt"
'
test_done
