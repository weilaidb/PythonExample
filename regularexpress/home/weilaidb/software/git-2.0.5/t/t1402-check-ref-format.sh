#!/bin/sh
test_description='Test git check-ref-format'
. ./test-lib.sh
valid_ref()
invalid_ref()
invalid_ref ''
invalid_ref NOT_MINGW '/'
invalid_ref NOT_MINGW '/' --allow-onelevel
invalid_ref NOT_MINGW '/' --normalize
invalid_ref NOT_MINGW '/' '--allow-onelevel --normalize'
valid_ref 'foo/bar/baz'
valid_ref 'foo/bar/baz' --normalize
invalid_ref 'refs
valid_ref 'refs
invalid_ref 'heads/foo/'
invalid_ref NOT_MINGW '/heads/foo'
valid_ref NOT_MINGW '/heads/foo' --normalize
invalid_ref '
valid_ref '
invalid_ref './foo'
invalid_ref './foo/bar'
invalid_ref 'foo/./bar'
invalid_ref 'foo/bar/.'
invalid_ref '.refs/foo'
invalid_ref 'heads/foo..bar'
invalid_ref 'heads/foo?bar'
valid_ref 'foo./bar'
invalid_ref 'heads/foo.lock'
invalid_ref 'heads
invalid_ref 'foo.lock/bar'
invalid_ref 'foo.lock
valid_ref 'heads/foo@bar'
invalid_ref 'heads/v@{ation'
invalid_ref 'heads/foo\bar'
invalid_ref "$(printf 'heads/foo\t')"
invalid_ref "$(printf 'heads/foo\177')"
valid_ref "$(printf 'heads/fu\303\237')"
invalid_ref 'headsbar' --refspec-pattern
invalid_ref 'heads/f*o/bar' --refspec-pattern
ref='foo'
invalid_ref "$ref"
valid_ref "$ref" --allow-onelevel
invalid_ref "$ref" --refspec-pattern
valid_ref "$ref" '--refspec-pattern --allow-onelevel'
invalid_ref "$ref" --normalize
valid_ref "$ref" '--allow-onelevel --normalize'
ref='foo/bar'
valid_ref "$ref"
valid_ref "$ref" --allow-onelevel
valid_ref "$ref" --refspec-pattern
valid_ref "$ref" '--refspec-pattern --allow-onelevel'
valid_ref "$ref" --normalize
ref='foofoo'
invalid_ref "$ref"
invalid_ref "$ref" --allow-onelevel
valid_ref "$ref" --refspec-pattern
valid_ref "$ref" '--refspec-pattern --allow-onelevel'
invalid_ref "$ref" --normalize
valid_ref "$ref" '--refspec-pattern --normalize'
ref='foo*'
invalid_ref "$ref" --refspec-pattern
invalid_ref "$ref" '--refspec-pattern --allow-onelevel'
ref='*/foo*/foo'
invalid_ref "$ref" --refspec-pattern
invalid_ref "$ref" '--refspec-pattern --allow-onelevel'
ref='/foo'
invalid_ref NOT_MINGW "$ref"
invalid_ref NOT_MINGW "$ref" --allow-onelevel
invalid_ref NOT_MINGW "$ref" --refspec-pattern
invalid_ref NOT_MINGW "$ref" '--refspec-pattern --allow-onelevel'
invalid_ref NOT_MINGW "$ref" --normalize
valid_ref NOT_MINGW "$ref" '--allow-onelevel --normalize'
invalid_ref NOT_MINGW "$ref" '--refspec-pattern --normalize'
valid_ref NOT_MINGW "$ref" '--refspec-pattern --allow-onelevel --normalize'
test_expect_success "check-ref-format --branch @" '
T=$(git write-tree) &&
sha1=$(echo A | git commit-tree $T) &&
git update-ref refs/heads/master $sha1 &&
git update-ref refs/remotes/origin/master $sha1 &&
git checkout master &&
git checkout origin/master &&
git checkout master &&
refname=$(git check-ref-format --branch @) &&
test "$refname" = "$sha1" &&
refname2=$(git check-ref-format --branch @) &&
test "$refname2" = master'
test_expect_success 'check-ref-format --branch from subdir' '
mkdir subdir &&
T=$(git write-tree) &&
sha1=$(echo A | git commit-tree $T) &&
git update-ref refs/heads/master $sha1 &&
git update-ref refs/remotes/origin/master $sha1 &&
git checkout master &&
git checkout origin/master &&
git checkout master &&
refname=$(
cd subdir &&
git check-ref-format --branch @
) &&
test "$refname" = "$sha1"
'
valid_ref_normalized()
invalid_ref_normalized()
valid_ref_normalized 'heads/foo' 'heads/foo'
valid_ref_normalized 'refs
valid_ref_normalized NOT_MINGW '/heads/foo' 'heads/foo'
valid_ref_normalized '
invalid_ref_normalized 'foo'
invalid_ref_normalized NOT_MINGW '/foo'
invalid_ref_normalized 'heads/foo/../bar'
invalid_ref_normalized 'heads/./foo'
invalid_ref_normalized 'heads\foo'
invalid_ref_normalized 'heads/foo.lock'
invalid_ref_normalized 'heads
invalid_ref_normalized 'foo.lock/bar'
invalid_ref_normalized 'foo.lock
test_done
