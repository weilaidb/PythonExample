# This is a shell library to calculate the remote repository and
# upstream branch that should be pulled by "git pull" from the current
# branch.
# git-ls-remote could be called from outside a git managed repository;
# this would fail in that case and would issue an error message.
GIT_DIR=$(git rev-parse -q --git-dir) || :;
get_default_remote ()
get_remote_merge_branch ()
error_on_missing_default_upstream ()
