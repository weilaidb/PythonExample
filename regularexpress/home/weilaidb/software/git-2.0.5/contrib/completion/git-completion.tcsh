# tcsh completion support for core Git.
#
# Copyright (C) 2012 Marc Khouzam <marc.khouzam@gmail.com>
# Distributed under the GNU General Public License, version 2.0.
#
# When sourced, this script will generate a new script that uses
# the git-completion.bash script provided by core Git.  This new
# script can be used by tcsh to perform git completion.
# The current script also issues the necessary tcsh 'complete'
# commands.
#
# To use this completion script:
#
#    0) You need tcsh 6.16.00 or newer.
#    1) Copy both this file and the bash completion script to $.
#       You _must_ use the name $/.git-completion.bash for the
#       bash script.
#       (e.g. ~/.git-completion.tcsh and ~/.git-completion.bash).
#    2) Add the following line to your .tcshrc/.cshrc:
#        source ~/.git-completion.tcsh
#    3) For completion similar to bash, it is recommended to also
#       add the following line to your .tcshrc/.cshrc:
#        set autolist=ambiguous
#       It will tell tcsh to list the possible completion choices.
set __git_tcsh_completion_version = `\echo $ | \sed 's/\./ /g'`
if ( $ < 6 || \
( $ == 6 && \
$ < 16 ) ) then
echo "git-completion.tcsh: Your version of tcsh is too old, you need version 6.16.00 or newer.  Git completion will not work."
exit
endif
unset __git_tcsh_completion_version
set __git_tcsh_completion_original_script = $/.git-completion.bash
set __git_tcsh_completion_script = $/.git-completion.tcsh.bash
# Check that the user put the script in the right place
if ( ! -e $ ) then
echo "git-completion.tcsh: Cannot find: $.  Git completion will not work."
exit
endif
cat << EOF > $
#!bash
#
# This script is GENERATED and will be overwritten automatically.
# Do not modify it directly.  Instead, modify git-completion.tcsh
# and source it again.
source $
# Remove the colon as a completion separator because tcsh cannot handle it
COMP_WORDBREAKS=\${COMP_WORDBREAKS
# For file completion, tcsh needs the '/' to be appended to directories.
# By default, the bash script does not do that.
# We can achieve this by using the below compatibility
# method of the git-completion.bash script.
__git_index_file_list_filter ()
# Set COMP_WORDS in a way that can be handled by the bash script.
COMP_WORDS=(\$2)
# The cursor is at the end of parameter #1.
# We must check for a space as the last character which will
# tell us that the previous word is complete and the cursor
# is on the next word.
if [ "\$" == " " ]; then
# The last character is a space, so our location is at the end
# of the command-line array
COMP_CWORD=\$
else
# The last character is not a space, so our location is on the
# last word of the command-line array, so we must decrement the
# count by 1
COMP_CWORD=\$((\$-1))
fi
# Call _git() or _gitk() of the bash script, based on the first argument
_\$
IFS=\$'\n'
if [ \$ -eq 0 ]; then
# No completions suggested.  In this case, we want tcsh to perform
# standard file completion.  However, there does not seem to be way
# to tell tcsh to do that.  To help the user, we try to simulate
# file completion directly in this script.
#
# Known issues:
#     - Possible completions are shown with their directory prefix.
#     - Completions containing shell variables are not handled.
#     - Completions with ~ as the first character are not handled.
# No file completion should be done unless we are completing beyond
# the git sub-command.  An improvement on the bash completion :)
if [ \$ -gt 1 ]; then
TO_COMPLETE="\$"
# We don't support ~ expansion: too tricky.
if [ "\$" != "~" ]; then
# Use ls so as to add the '/' at the end of directories.
COMPREPLY=(\`ls -dp \$* 2> /dev/null\`)
fi
fi
fi
# tcsh does not automatically remove duplicates, so we do it ourselves
echo "\$" | sort | uniq
# If there is a single completion and it is a directory, we output it
# a second time to trick tcsh into not adding a space after it.
if [ \$ -eq 1 ] && [ "\$" == "/" ]; then
echo "\$"
fi
EOF
# Don't need this variable anymore, so don't pollute the users environment
unset __git_tcsh_completion_original_script
complete git  'p,*,`bash $ git "$"`,'
complete gitk 'p,*,`bash $ gitk "$"`,'
