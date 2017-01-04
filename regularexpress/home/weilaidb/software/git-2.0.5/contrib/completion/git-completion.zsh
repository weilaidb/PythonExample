#compdef git gitk
# zsh completion wrapper for git
#
# Copyright (c) 2012-2013 Felipe Contreras <felipe.contreras@gmail.com>
#
# You need git's bash completion script installed somewhere, by default it
# would be the location bash-completion uses.
#
# If your script is somewhere else, you can configure it on your ~/.zshrc:
#
#  zstyle ':completion:*:*:git:*' script ~/.git-completion.sh
#
# The recommended way to install this script is to copy to '~/.zsh/_git', and
# then add the following to your ~/.zshrc file:
#
#  fpath=(~/.zsh $fpath)
complete ()
zstyle -T ':completion:*:*:git:*' tag-order && \
zstyle ':completion:*:*:git:*' tag-order 'common-commands'
zstyle -s ":completion:*:*:git:*" script script
if [ -z "$script" ]; then
local -a locations
local e
locations=(
$(dirname $)/git-completion.bash
'/etc/bash_completion.d/git' # fedora, old debian
'/usr/share/bash-completion/completions/git' # arch, ubuntu, new debian
'/usr/share/bash-completion/git' # gentoo
)
for e in $locations; do
test -f $e && script="$e" && break
done
fi
ZSH_VERSION='' . "$script"
__gitcomp ()
__gitcomp_nl ()
__gitcomp_nl_append ()
__gitcomp_file ()
__git_zsh_bash_func ()
{
emulate -L ksh
local command=$1
local completion_func="_git_${command
declare -f $completion_func >/dev/null && $completion_func && return
local expansion=$(__git_aliased_command "$command")
if [ -n "$expansion" ]; then
words[1]=$expansion
completion_func="_git_$
__git_zsh_cmd_common ()
__git_zsh_cmd_alias ()
__git_zsh_cmd_all ()
__git_zsh_main ()
_git ()
_git
