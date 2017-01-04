# Copyright (C) 2012
#     Charles Roussel <charles.roussel@ensimag.imag.fr>
#     Simon Cathebras <simon.cathebras@ensimag.imag.fr>
#     Julien Khayat <julien.khayat@ensimag.imag.fr>
#     Guillaume Sasdy <guillaume.sasdy@ensimag.imag.fr>
#     Simon Perrat <simon.perrat@ensimag.imag.fr>
# License: GPL v2 or later
#
# CONFIGURATION VARIABLES
# You might want to change these ones
#
. ./test.config
WIKI_URL=http:
CURR_DIR=$(pwd)
TEST_OUTPUT_DIRECTORY=$(pwd)
TEST_DIRECTORY="$CURR_DIR"/../../../t
export TEST_OUTPUT_DIRECTORY TEST_DIRECTORY CURR_DIR
if test "$LIGHTTPD" = "false" ; then
PORT=80
else
WIKI_DIR_INST="$CURR_DIR/$WEB_WWW"
fi
wiki_upload_file ()
wiki_getpage ()
wiki_delete_page ()
wiki_editpage ()
die ()
die_with_status ()
# Check the preconditions to run git-remote-mediawiki's tests
test_check_precond ()
# test_diff_directories <dir_git> <dir_wiki>
#
# Compare the contents of directories <dir_git> and <dir_wiki> with diff
# and errors if they do not match. The program will
# not look into .git in the process.
# Warning: the first argument MUST be the directory containing the git data
test_diff_directories ()
# $1=<dir>
# $2=<N>
#
# Check that <dir> contains exactly <N> files
test_contains_N_files ()
# wiki_check_content <file_name> <page_name>
#
# Compares the contents of the file <file_name> and the wiki page
# <page_name> and exits with error 1 if they do not match.
wiki_check_content ()
# wiki_page_exist <page_name>
#
# Check the existence of the page <page_name> on the wiki and exits
# with error if it is absent from it.
wiki_page_exist ()
# wiki_getallpagename
#
# Fetch the name of each page on the wiki.
wiki_getallpagename ()
# wiki_getallpagecategory <category>
#
# Fetch the name of each page belonging to <category> on the wiki.
wiki_getallpagecategory ()
# wiki_getallpage <dest_dir> [<category>]
#
# Fetch all the pages from the wiki and place them in the directory
# <dest_dir>.
# If <category> is define, then wiki_getallpage fetch the pages included
# in <category>.
wiki_getallpage ()
# ================= Install part =================
error ()
# config_lighttpd
#
# Create the configuration files and the folders necessary to start lighttpd.
# Overwrite any existing file.
config_lighttpd ()
# start_lighttpd
#
# Start or restart daemon lighttpd. If restart, rewrite configuration files.
start_lighttpd ()
# stop_lighttpd
#
# Kill daemon lighttpd and removes files and folders associated.
stop_lighttpd ()
# Create the SQLite database of the MediaWiki. If the database file already
# exists, it will be deleted.
# This script should be runned from the directory where $FILES_FOLDER is
# located.
create_db ()
# Install a wiki in your web server directory.
wiki_install ()
# Reset the database of the wiki and the password of the admin
#
# Warning: This function must be called only in a subdirectory of t/ directory
wiki_reset ()
# Delete the wiki created in the web server's directory and all its content
# saved in the database.
wiki_delete ()
