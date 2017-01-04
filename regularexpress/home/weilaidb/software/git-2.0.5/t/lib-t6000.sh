: included from 6002 and others
mkdir -p .git/refs/tags
>sed.script
# Answer the sha1 has associated with the tag. The tag must exist in .git/refs/tags
tag ()
# Generate a commit using the text specified to make it unique and the tree
# named by the tag specified.
unique_commit ()
# Save the output of a command into the tag specified. Prepend
# a substitution script for the tag onto the front of sed.script
save_tag ()
# Replace unhelpful sha1 hashes with their symbolic equivalents
entag ()
# Execute a command after first saving, then setting the GIT_AUTHOR_EMAIL
# tag to a specified value. Restore the original value on return.
as_author ()
commit_date ()
# Assign the value of fake date to a variable, but
# allow fairly common "1971-08-16 00:00" to be omittd
assign_fake_date ()
on_committer_date ()
on_dates ()
# Execute a command and suppress any error output.
hide_error ()
check_output ()
# Turn a reasonable test description into a reasonable test name.
# All alphanums translated into -'s which are then compressed and stripped
# from front and back.
name_from_description ()
# Execute the test described by the first argument, by eval'ing
# command line specified in the 2nd argument. Check the status code
# is zero and that the output matches the stream read from
# stdin.
test_output_expect_success()
