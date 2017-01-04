# Helper functions used by interactive rebase tests.
# After setting the fake editor with this function, you can
#
# - override the commit message with $FAKE_COMMIT_MESSAGE
# - amend the commit message with $FAKE_COMMIT_AMEND
# - check that non-commit messages have a certain line count with $EXPECT_COUNT
# - check the commit count in the commit message header with $EXPECT_HEADER_COUNT
# - rewrite a rebase -i script as directed by $FAKE_LINES.
#   $FAKE_LINES consists of a sequence of words separated by spaces.
#   The following word combinations are possible:
#
#   "<lineno>" -- add a "pick" line with the SHA1 taken from the
#       specified line.
#
#   "<cmd> <lineno>" -- add a line with the specified command
#       ("squash", "fixup", "edit", or "reword") and the SHA1 taken
#       from the specified line.
#
#   "exec_cmd_with_args" -- add an "exec cmd with args" line.
#
#   "#" -- Add a comment line.
#
#   ">" -- Add a blank line.
set_fake_editor ()
# After set_cat_todo_editor, rebase -i will write the todo list (ignoring
# blank lines and comments) to stdout, and exit failure (so you should run
# it with test_must_fail).  This can be used to verify the expected user
# experience, for todo list changes that do not affect the outcome of
# rebase; or as an extra check in addition to checking the outcome.
set_cat_todo_editor ()
# checks that the revisions in "$2" represent a linear range with the
# subjects in "$1"
test_linear_range ()
reset_rebase ()
cherry_pick ()
revert ()
make_empty ()
