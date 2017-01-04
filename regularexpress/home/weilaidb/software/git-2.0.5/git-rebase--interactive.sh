# This shell script fragment is sourced by git-rebase to implement
# its interactive mode.  "git rebase --interactive" makes it easy
# to fix up commits in the middle of a series and rearrange commits.
#
# Copyright (c) 2006 Johannes E. Schindelin
#
# The original idea comes from Eric W. Biederman, in
# http:
#
# The file containing rebase commands, comments, and empty lines.
# This file is created by "git rebase -i" then edited by the user.  As
# the lines are processed, they are removed from the front of this
# file and written to the tail of $done.
todo="$state_dir"/git-rebase-todo
# The rebase command lines that have already been processed.  A line
# is moved here when it is first handled, before any associated user
# actions.
done="$state_dir"/done
# The commit message that is planned to be used for any changes that
# need to be committed following a user interaction.
msg="$state_dir"/message
# The file into which is accumulated the suggested commit message for
# squash/fixup commands.  When the first of a series of squash/fixups
# is seen, the file is created and the commit message from the
# previous commit and from the first squash/fixup commit are written
# to it.  The commit message for each subsequent squash/fixup commit
# is appended to the file as it is processed.
#
# The first line of the file is of the form
#     # This is a combination of $count commits.
# where $count is the number of commits whose messages have been
# written to the file so far (including the initial "pick" commit).
# Each time that a commit message is processed, this line is read and
# updated.  It is deleted just before the combined commit is made.
squash_msg="$state_dir"/message-squash
# If the current series of squash/fixups has not yet included a squash
# command, then this file exists and holds the commit message of the
# original "pick" commit.  (If the series ends without a "squash"
# command, then this can be used as the commit message of the combined
# commit without opening the editor.)
fixup_msg="$state_dir"/message-fixup
# $rewritten is the name of a directory containing files for each
# commit that is reachable by at least one merge base of $head and
# $upstream. They are not necessarily rewritten, but their children
# might be.  This ensures that commits on merged, but otherwise
# unrelated side branches are left alone. (Think "X" in the man page's
# example.)
rewritten="$state_dir"/rewritten
dropped="$state_dir"/dropped
end="$state_dir"/end
msgnum="$state_dir"/msgnum
# A script to set the GIT_AUTHOR_NAME, GIT_AUTHOR_EMAIL, and
# GIT_AUTHOR_DATE that will be used for the commit that is currently
# being rebased.
author_script="$state_dir"/author-script
# When an "edit" rebase command is being processed, the SHA1 of the
# commit to be edited is recorded in this file.  When "git rebase
# --continue" is executed, if there are any staged changes then they
# will be amended to the HEAD commit, but only provided the HEAD
# commit is still the commit to be edited.  When any other rebase
# command is processed, this file is deleted.
amend="$state_dir"/amend
# For the post-rewrite hook, we make a list of rewritten commits and
# their new sha1s.  The rewritten-pending list keeps the sha1s of
# commits that have been processed, but not committed yet,
# e.g. because they are waiting for a 'squash' command.
rewritten_list="$state_dir"/rewritten-list
rewritten_pending="$state_dir"/rewritten-pending
strategy_args=
if test -n "$do_merge"
then
strategy_args=$
eval '
for strategy_opt in '"$strategy_opts"'
do
strategy_args="$strategy_args -X$(git rev-parse --sq-quote "$")"
done
'
fi
GIT_CHERRY_PICK_HELP="$resolvemsg"
export GIT_CHERRY_PICK_HELP
comment_char=$(git config --get core.commentchar 2>/dev/null | cut -c1)
: $
warn ()
# Output the commit message for the specified commit.
commit_message ()
orig_reflog_action="$GIT_REFLOG_ACTION"
comment_for_reflog ()
last_count=
mark_action_done ()
append_todo_help ()
make_patch ()
die_with_patch ()
exit_with_patch ()
die_abort ()
has_action ()
is_empty_commit()
is_merge_commit()
# Run command with GIT_AUTHOR_NAME, GIT_AUTHOR_EMAIL, and
# GIT_AUTHOR_DATE exported from the current environment.
do_with_author ()
git_sequence_editor ()
pick_one ()
pick_one_preserving_merges ()
nth_string ()
update_squash_messages ()
peek_next_command ()
# A squash/fixup has failed.  Prepare the long version of the squash
# commit message, then die_with_patch.  This code path requires the
# user to edit the combined commit message for all commits that have
# been squashed/fixedup so far.  So also erase the old squash
# messages, effectively causing the combined commit to be used as the
# new basis for any further squash/fixups.  Args: sha1 rest
die_failed_squash()
flush_rewritten_pending()
record_in_rewritten()
do_pick ()
do_next ()
# can only return 0, when the infinite loop breaks
do_rest ()
# skip picking commits whose parents are unchanged
skip_unnecessary_picks ()
transform_todo_ids ()
expand_todo_ids()
collapse_todo_ids()
# Rearrange the todo list that has both "pick sha1 msg" and
# "pick sha1 fixup!/squash! msg" appears in it so that the latter
# comes immediately after the former, and change "pick" to
# "fixup"/"squash".
rearrange_squash ()
# Add commands after a pick or after a squash/fixup serie
# in the todo list.
add_exec_commands ()
# The whole contents of this file is run by dot-sourcing it from
# inside a shell function.  It used to be that "return"s we see
# below were not inside any function, and expected to return
# to the function that dot-sourced us.
#
# However, FreeBSD /bin/sh misbehaves on such a construct and
# continues to run the statements that follow such a "return".
# As a work-around, we introduce an extra layer of a function
# here, and immediately call it after defining it.
git_rebase__interactive ()
# ... and then we call the whole thing.
git_rebase__interactive
