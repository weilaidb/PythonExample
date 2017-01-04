#!/bin/sh
#
test_description='git web--browse basic tests
This test checks that git web--browse can handle various valid URLs.'
. ./test-lib.sh
test_web_browse ()
test_expect_success \
'URL with an ampersand in it' '
echo http:
git config browser.custom.cmd echo &&
test_web_browse custom http:
'
test_expect_success \
'URL with a semi-colon in it' '
echo http:
git config browser.custom.cmd echo &&
test_web_browse custom http:
'
test_expect_success \
'URL with a hash in it' '
echo http:
git config browser.custom.cmd echo &&
test_web_browse custom http:
'
test_expect_success \
'browser paths are properly quoted' '
echo fake: http:
cat >"fake browser" <<-\EOF &&
#!/bin/sh
echo fake: "$@"
EOF
chmod +x "fake browser" &&
git config browser.w3m.path "`pwd`/fake browser" &&
test_web_browse w3m http:
'
test_expect_success \
'browser command allows arbitrary shell code' '
echo "arg: http:
git config browser.custom.cmd "
f()
f" &&
test_web_browse custom http:
'
test_done
