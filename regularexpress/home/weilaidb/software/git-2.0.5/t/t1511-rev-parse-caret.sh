#!/bin/sh
test_description='tests for ref^'
. ./test-lib.sh
test_expect_success 'setup' '
echo blob >a-blob &&
git tag -a -m blob blob-tag `git hash-object -w a-blob` &&
mkdir a-tree &&
echo moreblobs >a-tree/another-blob &&
git add . &&
TREE_SHA1=`git write-tree` &&
git tag -a -m tree tree-tag "$TREE_SHA1" &&
git commit -m Initial &&
git tag -a -m commit commit-tag &&
git branch ref &&
git checkout master &&
echo modified >>a-blob &&
git add -u &&
git commit -m Modified
'
test_expect_success 'ref^' '
test_must_fail git rev-parse ref^
'
test_expect_success 'ref^' '
git rev-parse ref >expected &&
git rev-parse ref^ >actual &&
test_cmp expected actual &&
git rev-parse commit-tag^ >actual &&
test_cmp expected actual
'
test_expect_success 'ref^' '
git rev-parse ref >expected &&
git rev-parse ref^ >actual &&
test_cmp expected actual &&
git rev-parse commit-tag^ >actual &&
test_cmp expected actual &&
test_must_fail git rev-parse tree-tag^ &&
test_must_fail git rev-parse blob-tag^
'
test_expect_success 'ref^' '
echo $TREE_SHA1 >expected &&
git rev-parse ref^ >actual &&
test_cmp expected actual &&
git rev-parse commit-tag^ >actual &&
test_cmp expected actual &&
git rev-parse tree-tag^ >actual &&
test_cmp expected actual &&
test_must_fail git rev-parse blob-tag^
'
test_expect_success 'ref^' '
test_must_fail git rev-parse HEAD^ &&
git rev-parse commit-tag >expected &&
git rev-parse commit-tag^ >actual &&
test_cmp expected actual
'
test_expect_success 'ref^' '
git rev-parse master >expected &&
git rev-parse master^ >actual &&
test_cmp expected actual
'
test_expect_success 'ref^' '
test_must_fail git rev-parse master^
'
test_expect_success 'ref^' '
git rev-parse ref >expected &&
git rev-parse master^ >actual &&
test_cmp expected actual
'
test_done
