#!/bin/sh
test_description='Test commit notes organized in subtrees'
. ./test-lib.sh
number_of_commits=100
start_note_commit ()
verify_notes ()
test_expect_success "setup: create $number_of_commits commits" '
(
nr=0 &&
while [ $nr -lt $number_of_commits ]; do
nr=$(($nr+1)) &&
test_tick &&
cat <<INPUT_END
commit refs/heads/master
committer $GIT_COMMITTER_NAME <$GIT_COMMITTER_EMAIL> $GIT_COMMITTER_DATE
data <<COMMIT
commit #$nr
COMMIT
M 644 inline file
data <<EOF
file in commit #$nr
EOF
INPUT_END
done &&
test_tick &&
cat <<INPUT_END
commit refs/notes/commits
committer $GIT_COMMITTER_NAME <$GIT_COMMITTER_EMAIL> $GIT_COMMITTER_DATE
data <<COMMIT
no notes
COMMIT
deleteall
INPUT_END
) |
git fast-import --quiet &&
git config core.notesRef refs/notes/commits
'
test_sha1_based ()
test_expect_success 'test notes in 2/38-fanout' 'test_sha1_based "s|^..|&/|"'
test_expect_success 'verify notes in 2/38-fanout' 'verify_notes'
test_expect_success 'test notes in 2/2/36-fanout' 'test_sha1_based "s|^\(..\)\(..\)|\1/\2/|"'
test_expect_success 'verify notes in 2/2/36-fanout' 'verify_notes'
test_expect_success 'test notes in 2/2/2/34-fanout' 'test_sha1_based "s|^\(..\)\(..\)\(..\)|\1/\2/\3/|"'
test_expect_success 'verify notes in 2/2/2/34-fanout' 'verify_notes'
test_same_notes ()
test_expect_success 'test same notes in no fanout and 2/38-fanout' 'test_same_notes "s|^..|&/|" ""'
test_expect_success 'verify same notes in no fanout and 2/38-fanout' 'verify_notes'
test_expect_success 'test same notes in no fanout and 2/2/36-fanout' 'test_same_notes "s|^\(..\)\(..\)|\1/\2/|" ""'
test_expect_success 'verify same notes in no fanout and 2/2/36-fanout' 'verify_notes'
test_expect_success 'test same notes in 2/38-fanout and 2/2/36-fanout' 'test_same_notes "s|^\(..\)\(..\)|\1/\2/|" "s|^..|&/|"'
test_expect_success 'verify same notes in 2/38-fanout and 2/2/36-fanout' 'verify_notes'
test_expect_success 'test same notes in 2/2/2/34-fanout and 2/2/36-fanout' 'test_same_notes "s|^\(..\)\(..\)|\1/\2/|" "s|^\(..\)\(..\)\(..\)|\1/\2/\3/|"'
test_expect_success 'verify same notes in 2/2/2/34-fanout and 2/2/36-fanout' 'verify_notes'
test_concatenated_notes ()
verify_concatenated_notes ()
test_expect_success 'test notes in no fanout concatenated with 2/38-fanout' 'test_concatenated_notes "s|^..|&/|" ""'
test_expect_success 'verify notes in no fanout concatenated with 2/38-fanout' 'verify_concatenated_notes'
test_expect_success 'test notes in no fanout concatenated with 2/2/36-fanout' 'test_concatenated_notes "s|^\(..\)\(..\)|\1/\2/|" ""'
test_expect_success 'verify notes in no fanout concatenated with 2/2/36-fanout' 'verify_concatenated_notes'
test_expect_success 'test notes in 2/38-fanout concatenated with 2/2/36-fanout' 'test_concatenated_notes "s|^\(..\)\(..\)|\1/\2/|" "s|^..|&/|"'
test_expect_success 'verify notes in 2/38-fanout concatenated with 2/2/36-fanout' 'verify_concatenated_notes'
test_expect_success 'test notes in 2/2/36-fanout concatenated with 2/2/2/34-fanout' 'test_concatenated_notes "s|^\(..\)\(..\)\(..\)|\1/\2/\3/|" "s|^\(..\)\(..\)|\1/\2/|"'
test_expect_success 'verify notes in 2/2/36-fanout concatenated with 2/2/2/34-fanout' 'verify_concatenated_notes'
test_done
