#!/bin/sh
test_description='git cat-file'
. ./test-lib.sh
echo_without_newline ()
strlen ()
maybe_remove_timestamp ()
run_tests ()
hello_content="Hello World"
hello_size=$(strlen "$hello_content")
hello_sha1=$(echo_without_newline "$hello_content" | git hash-object --stdin)
test_expect_success "setup" '
echo_without_newline "$hello_content" > hello &&
git update-index --add hello
'
run_tests 'blob' $hello_sha1 $hello_size "$hello_content" "$hello_content"
test_expect_success '--batch-check without %(rest) considers whole line' '
echo "$hello_sha1 blob $hello_size" >expect &&
git update-index --add --cacheinfo 100644 $hello_sha1 "white space" &&
test_when_finished "git update-index --remove \"white space\"" &&
echo ":white space" | git cat-file --batch-check >actual &&
test_cmp expect actual
'
tree_sha1=$(git write-tree)
tree_size=33
tree_pretty_content="100644 blob $hello_sha1	hello"
run_tests 'tree' $tree_sha1 $tree_size "" "$tree_pretty_content"
commit_message="Initial commit"
commit_sha1=$(echo_without_newline "$commit_message" | git commit-tree $tree_sha1)
commit_size=177
commit_content="tree $tree_sha1
author $GIT_AUTHOR_NAME <$GIT_AUTHOR_EMAIL> 0000000000 +0000
committer $GIT_COMMITTER_NAME <$GIT_COMMITTER_EMAIL> 0000000000 +0000
$commit_message"
run_tests 'commit' $commit_sha1 $commit_size "$commit_content" "$commit_content" 1
tag_header_without_timestamp="object $hello_sha1
type blob
tag hellotag
tagger $GIT_COMMITTER_NAME <$GIT_COMMITTER_EMAIL>"
tag_description="This is a tag"
tag_content="$tag_header_without_timestamp 0000000000 +0000
$tag_description"
tag_sha1=$(echo_without_newline "$tag_content" | git mktag)
tag_size=$(strlen "$tag_content")
run_tests 'tag' $tag_sha1 $tag_size "$tag_content" "$tag_content" 1
test_expect_success \
"Reach a blob from a tag pointing to it" \
"test '$hello_content' = \"\$(git cat-file blob $tag_sha1)\""
for batch in batch batch-check
do
for opt in t s e p
do
test_expect_success "Passing -$opt with --$batch fails" '
test_must_fail git cat-file --$batch -$opt $hello_sha1
'
test_expect_success "Passing --$batch with -$opt fails" '
test_must_fail git cat-file -$opt --$batch $hello_sha1
'
done
test_expect_success "Passing <type> with --$batch fails" '
test_must_fail git cat-file --$batch blob $hello_sha1
'
test_expect_success "Passing --$batch with <type> fails" '
test_must_fail git cat-file blob --$batch $hello_sha1
'
test_expect_success "Passing sha1 with --$batch fails" '
test_must_fail git cat-file --$batch $hello_sha1
'
done
test_expect_success "--batch-check for a non-existent named object" '
test "foobar42 missing
foobar84 missing" = \
"$( ( echo foobar42; echo_without_newline foobar84; ) | git cat-file --batch-check)"
'
test_expect_success "--batch-check for a non-existent hash" '
test "0000000000000000000000000000000000000042 missing
0000000000000000000000000000000000000084 missing" = \
"$( ( echo 0000000000000000000000000000000000000042;
echo_without_newline 0000000000000000000000000000000000000084; ) \
| git cat-file --batch-check)"
'
test_expect_success "--batch for an existent and a non-existent hash" '
test "$tag_sha1 tag $tag_size
$tag_content
0000000000000000000000000000000000000000 missing" = \
"$( ( echo $tag_sha1;
echo_without_newline 0000000000000000000000000000000000000000; ) \
| git cat-file --batch)"
'
test_expect_success "--batch-check for an emtpy line" '
test " missing" = "$(echo | git cat-file --batch-check)"
'
test_expect_success 'empty --batch-check notices missing object' '
echo "$_z40 missing" >expect &&
echo "$_z40" | git cat-file --batch-check="" >actual &&
test_cmp expect actual
'
batch_input="$hello_sha1
$commit_sha1
$tag_sha1
deadbeef
"
batch_output="$hello_sha1 blob $hello_size
$hello_content
$commit_sha1 commit $commit_size
$commit_content
$tag_sha1 tag $tag_size
$tag_content
deadbeef missing
missing"
test_expect_success '--batch with multiple sha1s gives correct format' '
test "$(maybe_remove_timestamp "$batch_output" 1)" = "$(maybe_remove_timestamp "$(echo_without_newline "$batch_input" | git cat-file --batch)" 1)"
'
batch_check_input="$hello_sha1
$tree_sha1
$commit_sha1
$tag_sha1
deadbeef
"
batch_check_output="$hello_sha1 blob $hello_size
$tree_sha1 tree $tree_size
$commit_sha1 commit $commit_size
$tag_sha1 tag $tag_size
deadbeef missing
missing"
test_expect_success "--batch-check with multiple sha1s gives correct format" '
test "$batch_check_output" = \
"$(echo_without_newline "$batch_check_input" | git cat-file --batch-check)"
'
test_expect_success 'setup blobs which are likely to delta' '
test-genrandom foo 10240 >foo &&
>foo-plus &&
git add foo foo-plus &&
git commit -m foo &&
cat >blobs <<-\EOF
HEAD:foo
HEAD:foo-plus
EOF
'
test_expect_success 'confirm that neither loose blob is a delta' '
cat >expect <<-EOF
$_z40
$_z40
EOF
git cat-file --batch-check="%(deltabase)" <blobs >actual &&
test_cmp expect actual
'
# To avoid relying too much on the current delta heuristics,
# we will check only that one of the two objects is a delta
# against the other, but not the order. We can do so by just
# asking for the base of both, and checking whether either
# sha1 appears in the output.
test_expect_success '%(deltabase) reports packed delta bases' '
git repack -ad &&
git cat-file --batch-check="%(deltabase)" <blobs >actual &&
'
test_done
