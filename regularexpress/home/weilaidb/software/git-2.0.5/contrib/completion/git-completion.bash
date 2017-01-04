# bash/zsh completion support for core Git.
#
# Copyright (C) 2006,2007 Shawn O. Pearce <spearce@spearce.org>
# Conceptually based on gitcompletion (http:
# Distributed under the GNU General Public License, version 2.0.
#
# The contained completion routines provide support for completing:
#
#    *) local and remote branch names
#    *) local and remote tag names
#    *) .git/remotes file names
#    *) git 'subcommands'
#    *) tree paths within 'ref:path/to/file' expressions
#    *) file paths within current working directory and index
#    *) common --long-options
#
# To use these routines:
#
#    1) Copy this file to somewhere (e.g. ~/.git-completion.sh).
#    2) Add the following line to your .bashrc/.zshrc:
#        source ~/.git-completion.sh
#    3) Consider changing your PS1 to also show the current branch,
#       see git-prompt.sh for details.
case "$COMP_WORDBREAKS" in
*:*) : great ;;
*)   COMP_WORDBREAKS="$COMP_WORDBREAKS:"
esac
# __gitdir accepts 0 or 1 arguments (i.e., location)
# returns location of .git repo
__gitdir ()
# The following function is based on code from:
#
#   bash_completion - programmable completion functions for bash 3.2+
#
#   Copyright © 2006-2008, Ian Macdonald <ian@caliban.org>
#             © 2009-2010, Bash Completion Maintainers
#                     <bash-completion-devel@lists.alioth.debian.org>
#
#   This program is free software; you can redistribute it and/or modify
#   it under the terms of the GNU General Public License as published by
#   the Free Software Foundation; either version 2, or (at your option)
#   any later version.
#
#   This program is distributed in the hope that it will be useful,
#   but WITHOUT ANY WARRANTY; without even the implied warranty of
#   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
#   GNU General Public License for more details.
#
#   You should have received a copy of the GNU General Public License
#   along with this program; if not, write to the Free Software Foundation,
#   Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
#
#   The latest version of this software can be obtained here:
#
#   http:
#
#   RELEASE: 2.x
# This function can be used to access a tokenized list of words
# on the command line:
#
#	__git_reassemble_comp_words_by_ref '=:'
#	if test "$" = -w
#	then
#		...
#	fi
#
# The argument should be a collection of characters from the list of
# word completion separators (COMP_WORDBREAKS) to treat as ordinary
# characters.
#
# This is roughly equivalent to going back in time and setting
# COMP_WORDBREAKS to exclude those characters.  The intent is to
# make option types like --date=<type> and <rev>:<path> easy to
# recognize by treating each shell word as a single token.
#
# It is best not to set COMP_WORDBREAKS directly because the value is
# shared with other completion scripts.  By the time the completion
# function gets called, COMP_WORDS has already been populated so local
# changes to COMP_WORDBREAKS have no effect.
#
# Output: words_, cword_, cur_.
__git_reassemble_comp_words_by_ref()
__git_list_merge_strategies ()
__git_merge_strategies=
# 'git merge -s help' (and thus detection of the merge strategy
# list) fails, unfortunately, if run outside of any git working
# tree.  __git_merge_strategies is set to the empty string in
# that case, and the detection will be repeated the next time it
# is needed.
__git_compute_merge_strategies ()
__git_complete_revlist_file ()
"
ls="$ref:$pfx"
pfx="$pfx/"
;;
*)
ls="$ref"
;;
esac
case "$COMP_WORDBREAKS" in
*:*) : great ;;
*)   pfx="$ref:$pfx" ;;
esac
__gitcomp_nl "$(git --git-dir="$(__gitdir)" ls-tree "$ls" 2>/dev/null \
| sed '/^100... blob /
/^120000 blob /
/^040000 tree /
s/^.*
"$pfx" "$cur_" ""
;;
*...*)
pfx="$..."
cur_="$"
__gitcomp_nl "$(__git_refs)" "$pfx" "$cur_"
;;
*..*)
pfx="$.."
cur_="$"
__gitcomp_nl "$(__git_refs)" "$pfx" "$cur_"
;;
*)
__gitcomp_nl "$(__git_refs)"
;;
esac
}
# __git_complete_index_file requires 1 argument:
# 1: the options to pass to ls-file
#
# The exception is --committable, which finds the files appropriate commit.
__git_complete_index_file ()
"
pfx="$/"
;;
esac
__gitcomp_file "$(__git_index_files "$1" "$pfx")" "$pfx" "$cur_"
}
__git_complete_file ()
__git_complete_revlist ()
__git_complete_remote_or_refspec ()
__git_complete_strategy ()
__git_commands ()
__git_list_all_commands ()
__git_all_commands=
__git_compute_all_commands ()
__git_list_porcelain_commands ()
__git_porcelain_commands=
__git_compute_porcelain_commands ()
__git_pretty_aliases ()
__git_aliases ()
# __git_aliased_command requires 1 argument
__git_aliased_command ()
# __git_find_on_cmdline requires 1 argument
__git_find_on_cmdline ()
__git_has_doubledash ()
# Try to count non option arguments passed on the command line for the
# specified git command.
# When options are used, it is necessary to use the special -- option to
# tell the implementation were non option arguments begin.
# XXX this can not be improved, since options can appear everywhere, as
# an example:
#	git mv x -n y
#
# __git_count_arguments requires 1 argument: the git command executed.
__git_count_arguments ()
__git_whitespacelist="nowarn warn error error-all fix"
_git_am ()
_git_apply ()
_git_add ()
_git_archive ()
_git_bisect ()
_git_branch ()
_git_bundle ()
_git_checkout ()
_git_cherry ()
_git_cherry_pick ()
_git_clean ()
_git_clone ()
_git_commit ()
_git_describe ()
__git_diff_algorithms="myers minimal patience histogram"
__git_diff_common_options="--stat --numstat --shortstat --summary
--patch-with-stat --name-only --name-status --color
--no-color --color-words --no-renames --check
--full-index --binary --abbrev --diff-filter=
--find-copies-harder
--text --ignore-space-at-eol --ignore-space-change
--ignore-all-space --exit-code --quiet --ext-diff
--no-ext-diff
--no-prefix --src-prefix= --dst-prefix=
--inter-hunk-context=
--patience --histogram --minimal
--raw --word-diff
--dirstat --dirstat= --dirstat-by-file
--dirstat-by-file= --cumulative
--diff-algorithm=
"
_git_diff ()
__git_mergetools_common="diffuse diffmerge ecmerge emerge kdiff3 meld opendiff
tkdiff vimdiff gvimdiff xxdiff araxis p4merge bc3 codecompare
"
_git_difftool ()
__git_fetch_recurse_submodules="yes on-demand no"
__git_fetch_options="
--quiet --verbose --append --upload-pack --force --keep --depth=
--tags --no-tags --all --prune --dry-run --recurse-submodules=
"
_git_fetch ()
__git_format_patch_options="
--stdout --attach --no-attach --thread --thread= --no-thread
--numbered --start-number --numbered-files --keep-subject --signoff
--signature --no-signature --in-reply-to= --cc= --full-index --binary
--not --all --cover-letter --no-prefix --src-prefix= --dst-prefix=
--inline --suffix= --ignore-if-in-upstream --subject-prefix=
--output-directory --reroll-count --to= --quiet --notes
"
_git_format_patch ()
_git_fsck ()
_git_gc ()
_git_gitk ()
__git_match_ctag() {
awk "/^$
_git_grep ()
_git_help ()
_git_init ()
_git_ls_files ()
_git_ls_remote ()
_git_ls_tree ()
# Options that go well for log, shortlog and gitk
__git_log_common_options="
--not --all
--branches --tags --remotes
--first-parent --merges --no-merges
--max-count=
--max-age= --since= --after=
--min-age= --until= --before=
--min-parents= --max-parents=
--no-min-parents --no-max-parents
"
# Options that go well for log and gitk (not shortlog)
__git_log_gitk_options="
--dense --sparse --full-history
--simplify-merges --simplify-by-decoration
--left-right --notes --no-notes
"
# Options that go well for log and shortlog (not gitk)
__git_log_shortlog_options="
--author= --committer= --grep=
--all-match
"
__git_log_pretty_formats="oneline short medium full fuller email raw format:"
__git_log_date_formats="relative iso8601 rfc2822 short local default raw"
_git_log ()
# Common merge options shared by git-merge(1) and git-pull(1).
__git_merge_options="
--no-commit --no-stat --log --no-log --squash --strategy
--commit --stat --no-squash --ff --no-ff --ff-only --edit --no-edit
--verify-signatures --no-verify-signatures --gpg-sign
--quiet --verbose --progress --no-progress
"
_git_merge ()
_git_mergetool ()
_git_merge_base ()
_git_mv ()
_git_name_rev ()
_git_notes ()
_git_pull ()
__git_push_recurse_submodules="check on-demand"
_git_push ()
_git_rebase ()
_git_reflog ()
__git_send_email_confirm_options="always never auto cc compose"
__git_send_email_suppresscc_options="author self cc bodycc sob cccmd body all"
_git_send_email ()
_git_stage ()
__git_config_get_set_variables ()
_git_config ()
_git_remote ()
_git_replace ()
_git_reset ()
_git_revert ()
_git_rm ()
_git_shortlog ()
_git_show ()
_git_show_branch ()
_git_stash ()
_git_submodule ()
_git_svn ()
_git_tag ()
_git_whatchanged ()
__git_main ()
{
local i c=1 command __git_dir
while [ $c -lt $cword ]; do
i="$"
case "$i" in
--git-dir=*) __git_dir="$" ;;
--git-dir)   ((c++)) ; __git_dir="$" ;;
--bare)      __git_dir="." ;;
--help) command="help"; break ;;
-c|--work-tree|--namespace) ((c++)) ;;
-*) ;;
*) command="$i"; break ;;
esac
((c++))
done
if [ -z "$command" ]; then
case "$cur" in
--*)   __gitcomp "
--paginate
--no-pager
--git-dir=
--bare
--version
--exec-path
--exec-path=
--html-path
--man-path
--info-path
--work-tree=
--namespace=
--no-replace-objects
--help
"
;;
*)     __git_compute_porcelain_commands
__gitcomp "$__git_porcelain_commands $(__git_aliases)" ;;
esac
return
fi
local completion_func="_git_${command
declare -f $completion_func >/dev/null && $completion_func && return
local expansion=$(__git_aliased_command "$command")
if [ -n "$expansion" ]; then
words[1]=$expansion
completion_func="_git_$
__gitk_main ()
if [[ -n $ ]]; then
echo "WARNING: this script is deprecated, please see git-completion.zsh" 1>&2
autoload -U +X compinit && compinit
__gitcomp ()
__gitcomp_nl ()
__gitcomp_file ()
_git ()
compdef _git git gitk
return
fi
__git_func_wrap ()
# Setup completion for certain functions defined above by setting common
# variables and workarounds.
# This is NOT a public function; use at your own risk.
__git_complete ()
# wrapper for backwards compatibility
_git ()
# wrapper for backwards compatibility
_gitk ()
__git_complete git __git_main
__git_complete gitk __gitk_main
# The following are necessary only for Cygwin, and only are needed
# when the user has tab-completed the executable name and consequently
# included the '.exe' suffix.
#
if [ Cygwin = "$(uname -o 2>/dev/null)" ]; then
__git_complete git.exe __git_main
fi
