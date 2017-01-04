# Helper functions to check if read-tree would succeed/fail as expected with
# and without the dry-run option. They also test that the dry-run does not
# write the index and that together with -u it doesn't touch the work tree.
#
read_tree_must_succeed ()
read_tree_must_fail ()
read_tree_u_must_succeed ()
read_tree_u_must_fail ()
