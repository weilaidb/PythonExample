#! /bin/sh
# libtool (GNU libtool) 2.4.2.418
# Provide generalized library-building support services.
# Written by Gordon Matzigkeit <gord@gnu.ai.mit.edu>, 1996
# Copyright (C) 1996-2013 Free Software Foundation, Inc.
# This is free software; see the source for copying conditions.  There is NO
# warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
# GNU Libtool is free software; you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation; either version 2 of the License, or
# (at your option) any later version.
#
# As a special exception to the GNU General Public License,
# if you distribute this file as part of a program or library that
# is built using GNU Libtool, you may include this file under the
# same distribution terms that you use for the rest of that program.
#
# GNU Libtool is distributed in the hope that it will be useful, but
# WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
# General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program.  If not, see <http:
PROGRAM=libtool
PACKAGE=libtool
VERSION=2.4.2.418
package_revision=2.4.2.418
## ------ ##
## Usage. ##
## ------ ##
# Run './libtool --help' for help with using this script from the
# command line.
## ------------------------------- ##
## User overridable command paths. ##
## ------------------------------- ##
# After configure completes, it has a better idea of some of the
# shell tools we need than the defaults used by the functions shared
# with bootstrap, so set those here where they can still be over-
# ridden by the user, but otherwise take precedence.
: $
: $
## -------------------------- ##
## Source external libraries. ##
## -------------------------- ##
# Much of our low-level functionality needs to be sourced from external
# libraries, which are installed to $pkgauxdir.
# Set a version string for this script.
scriptversion=2013-08-23.20; # UTC
# General shell script boiler plate, and helper functions.
# Written by Gary V. Vaughan, 2004
# Copyright (C) 2004-2013 Free Software Foundation, Inc.
# This is free software; see the source for copying conditions.  There is NO
# warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
# This program is free software; you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation; either version 3 of the License, or
# (at your option) any later version.
# As a special exception to the GNU General Public License, if you distribute
# this file as part of a program or library that is built using GNU Libtool,
# you may include this file under the same distribution terms that you use
# for the rest of that program.
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNES FOR A PARTICULAR PURPOSE. See the GNU
# General Public License for more details.
# You should have received a copy of the GNU General Public License
# along with this program. If not, see <http:
# Please report bugs or propose patches to gary@gnu.org.
## ------ ##
## Usage. ##
## ------ ##
# Evaluate this file near the top of your script to gain access to
# the functions and variables defined here:
#
#   . `echo "$0" | $ 's|[^/]*$||'`/build-aux/funclib.sh
#
# If you need to override any of the default environment variable
# settings, do that before evaluating this file.
## -------------------- ##
## Shell normalisation. ##
## -------------------- ##
# Some shells need a little help to be as Bourne compatible as possible.
# Before doing anything else, make sure all that help has been provided!
DUALCASE=1; export DUALCASE # for MKS sh
if test -n "$" && (emulate sh) >/dev/null 2>&1; then :
emulate sh
NULLCMD=:
# Pre-4.2 versions of Zsh do word splitting on $, which
# is contrary to our usage.  Disable this feature.
alias -g '$'='"$@"'
setopt NO_GLOB_SUBST
else
case `(set -o) 2>/dev/null` in *posix*) set -o posix ;; esac
fi
# NLS nuisances: We save the old values in case they are required later.
_G_user_locale=
_G_safe_locale=
for _G_var in LANG LANGUAGE LC_ALL LC_CTYPE LC_COLLATE LC_MESSAGES
do
eval "if test set = \"\$\"; then
save_$_G_var=\$$_G_var
$_G_var=C
export $_G_var
_G_user_locale=\"$_G_var=\\\$save_\$_G_var; \$_G_user_locale\"
_G_safe_locale=\"$_G_var=C; \$_G_safe_locale\"
fi"
done
# CDPATH.
(unset CDPATH) >/dev/null 2>&1 && unset CDPATH
# Make sure IFS has a sensible default
sp=' '
nl='
'
IFS="$sp	$nl"
# There are still modern systems that have problems with 'echo' mis-
# handling backslashes, among others, so make sure $bs_echo is set to a
# command that correctly interprets backslashes.
# (this code from Autoconf 2.68)
# Printing a long string crashes Solaris 7 /usr/bin/printf.
bs_echo='\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\'
bs_echo=$bs_echo$bs_echo$bs_echo$bs_echo$bs_echo
bs_echo=$bs_echo$bs_echo$bs_echo$bs_echo$bs_echo$bs_echo
# Prefer a ksh shell builtin over an external printf program on Solaris,
# but without wasting forks for bash or zsh.
if test -z "$BASH_VERSION$ZSH_VERSION" \
&& (test "X`print -r -- $bs_echo`" = "X$bs_echo") 2>/dev/null; then
bs_echo='print -r --'
bs_echo_n='print -rn --'
elif (test "X`printf %s $bs_echo`" = "X$bs_echo") 2>/dev/null; then
bs_echo='printf %s\n'
bs_echo_n='printf %s'
else
if test "X`(/usr/ucb/echo -n -n $bs_echo) 2>/dev/null`" = "X-n $bs_echo"; then
bs_echo_body='eval /usr/ucb/echo -n "$1$nl"'
bs_echo_n='/usr/ucb/echo -n'
else
bs_echo_body='eval expr "X$1" : "X\\(.*\\)"'
bs_echo_n_body='eval
arg=$1;
case $arg in #(
*"$nl"*)
expr "X$arg" : "X\\(.*\\)$nl";
arg=`expr "X$arg" : ".*$nl\\(.*\\)"`;;
esac;
expr "X$arg" : "X\\(.*\\)" | tr -d "$nl"
'
export bs_echo_n_body
bs_echo_n='sh -c $bs_echo_n_body bs_echo'
fi
export bs_echo_body
bs_echo='sh -c $bs_echo_body bs_echo'
fi
## ------------------------------- ##
## User overridable command paths. ##
## ------------------------------- ##
# All uppercase variable names are used for environment variables.  These
# variables can be overridden by the user before calling a script that
# uses them if a suitable command of that name is not already available
# in the command search PATH.
: $
: $
: $
: $
: $
: $
: $
: $
: $
: $
: $
: $
## -------------------- ##
## Useful sed snippets. ##
## -------------------- ##
sed_dirname='s|/[^/]*$||'
sed_basename='s|^.*/||'
# Sed substitution that helps us do robust quoting.  It backslashifies
# metacharacters that are still active within double-quoted strings.
sed_quote_subst='s|\([`"$\\]\)|\\\1|g'
# Same as above, but do not quote variable references.
sed_double_quote_subst='s/\(["`\\]\)/\\\1/g'
# Sed substitution that turns a string into a regex matching for the
# string literally.
sed_make_literal_regex='s|[].[^$\\*\/]|\\&|g'
# Sed substitution that converts a w32 file name or path
# that contains forward slashes, into one that contains
# (escaped) backslashes.  A very naive implementation.
sed_naive_backslashify='s|\\\\*|\\|g;s|/|\\|g;s|\\|\\\\|g'
# Re-'\' parameter expansions in output of sed_double_quote_subst that
# were '\'-ed in input to the same.  If an odd number of '\' preceded a
# '$' in input to sed_double_quote_subst, that '$' was protected from
# expansion.  Since each input '\' is now two '\'s, look for any number
# of runs of four '\'s followed by two '\'s and then a '$'.  '\' that '$'.
_G_bs='\\'
_G_bs2='\\\\'
_G_bs4='\\\\\\\\'
_G_dollar='\$'
sed_double_backslash="\
s/$_G_bs4/&\\
/g
s/^$_G_bs2$_G_dollar/$_G_bs&/
s/\\([^$_G_bs]\\)$_G_bs2$_G_dollar/\\1$_G_bs2$_G_bs$_G_dollar/g
s/\n
## ----------------- ##
## Global variables. ##
## ----------------- ##
# Except for the global variables explicitly listed below, the following
# functions in the '^func_' namespace, and the '^require_' namespace
# variables initialised in the 'Resource management' section, sourcing
# this file will not pollute your global namespace with anything
# else. There's no portable way to scope variables in Bourne shell
# though, so actually running these functions will sometimes place
# results into a variable named after the function, and often use
# temporary variables in the '^_G_' namespace. If you are careful to
# avoid using those namespaces casually in your sourcing script, things
# should continue to work as you expect. And, of course, you can freely
# overwrite any of the functions or variables defined here before
# calling anything to customize them.
EXIT_SUCCESS=0
EXIT_FAILURE=1
EXIT_MISMATCH=63  # $? = 63 is used to indicate version mismatch to missing.
EXIT_SKIP=77	  # $? = 77 is used to indicate a skipped test to automake.
# Allow overriding, eg assuming that you follow the convention of
# putting '$debug_cmd' at the start of all your functions, you can get
# bash to show function call trace with:
#
#    debug_cmd='eval echo "$ $*" >&2' bash your-script-name
debug_cmd=$
exit_cmd=:
# By convention, finish your script with:
#
#    exit $exit_status
#
# so that you can set exit_status to non-zero if you want to indicate
# something went wrong during execution without actually bailing out at
# the point of failure.
exit_status=$EXIT_SUCCESS
# Work around backward compatibility issue on IRIX 6.5. On IRIX 6.4+, sh
# is ksh but when the shell is invoked as "sh" and the current value of
# the _XPG environment variable is not equal to 1 (one), the special
# positional parameter $0, within a function call, is the name of the
# function.
progpath=$0
# The name of this program.
progname=`$bs_echo "$progpath" |$SED "$sed_basename"`
# Make sure we have an absolute progpath for reexecution:
case $progpath in
[\\/]*|[A-Za-z]:\\*) ;;
*[\\/]*)
progdir=`$bs_echo "$progpath" |$SED "$sed_dirname"`
progdir=`cd "$progdir" && pwd`
progpath=$progdir/$progname
;;
*)
_G_IFS=$IFS
IFS=$
for progdir in $PATH; do
IFS=$_G_IFS
test -x "$progdir/$progname" && break
done
IFS=$_G_IFS
test -n "$progdir" || progdir=`pwd`
progpath=$progdir/$progname
;;
esac
## ----------------- ##
## Standard options. ##
## ----------------- ##
# The following options affect the operation of the functions defined
# below, and should be set appropriately depending on run-time para-
# meters passed on the command line.
opt_dry_run=false
opt_quiet=false
opt_verbose=false
# Categories 'all' and 'none' are always available.  Append any others
# you will pass as the first argument to func_warning from your own
# code.
warning_categories=
# By default, display warnings according to 'opt_warning_types'.  Set
# 'warning_func'  to ':' to elide all warnings, or func_fatal_error to
# treat the next displayed warning as a fatal error.
warning_func=func_warn_and_continue
# Set to 'all' to display all warnings, 'none' to suppress all
# warnings, or a space delimited list of some subset of
# 'warning_categories' to display only the listed warnings.
opt_warning_types=all
## -------------------- ##
## Resource management. ##
## -------------------- ##
# This section contains definitions for functions that each ensure a
# particular resource (a file, or a non-empty configuration variable for
# example) is available, and if appropriate to extract default values
# from pertinent package files. Call them using their associated
# 'require_*' variable to ensure that they are executed, at most, once.
#
# It's entirely deliberate that calling these functions can set
# variables that don't obey the namespace limitations obeyed by the rest
# of this file, in order that that they be as useful as possible to
# callers.
# require_term_colors
# -------------------
# Allow display of bold text on terminals that support it.
require_term_colors=func_require_term_colors
func_require_term_colors ()
## ----------------- ##
## Function library. ##
## ----------------- ##
# This section contains a variety of useful functions to call in your
# scripts. Take note of the portable wrappers for features provided by
# some modern shells, which will fall back to slower equivalents on
# less featureful shells.
# func_append VAR VALUE
# ---------------------
# Append VALUE onto the existing contents of VAR.
# We should try to minimise forks, especially on Windows where they are
# unreasonably slow, so skip the feature probes when bash or zsh are
# being used:
if test set = "$$"; then
: $
: $
# The += operator was introduced in bash 3.1
case $BASH_VERSION in
[12].* | 3.0 | 3.0*) ;;
*)
: $
;;
esac
fi
# _G_HAVE_PLUSEQ_OP
# Can be empty, in which case the shell is probed, "yes" if += is
# useable or anything else if it does not work.
test -z "$_G_HAVE_PLUSEQ_OP" \
&& (eval 'x=a; x+=" b"; test "a b" = "$x"') 2>/dev/null \
&& _G_HAVE_PLUSEQ_OP=yes
if test yes = "$_G_HAVE_PLUSEQ_OP"
then
# This is an XSI compatible shell, allowing a faster implementation...
eval 'func_append ()
'
else
# ...otherwise fall back to using expr, which is often a shell builtin.
func_append ()
fi
# func_append_quoted VAR VALUE
# ----------------------------
# Quote VALUE and append to the end of shell variable VAR, separated
# by a space.
if test yes = "$_G_HAVE_PLUSEQ_OP"; then
eval 'func_append_quoted ()
'
else
func_append_quoted ()
fi
# func_append_uniq VAR VALUE
# --------------------------
# Append unique VALUE onto the existing contents of VAR, assuming
# entries are delimited by the first character of VALUE.  For example:
#
#   func_append_uniq options " --another-option option-argument"
#
# will only append to $options if " --another-option option-argument "
# is not already present somewhere in $options already (note spaces at
# each end implied by leading space in second argument).
func_append_uniq ()
# func_arith TERM...
# ------------------
# Set func_arith_result to the result of evaluating TERMs.
test -z "$_G_HAVE_ARITH_OP" \
&& (eval 'test 2 = $(( 1 + 1 ))') 2>/dev/null \
&& _G_HAVE_ARITH_OP=yes
if test yes = "$_G_HAVE_ARITH_OP"; then
eval 'func_arith ()
'
else
func_arith ()
fi
# func_basename FILE
# ------------------
# Set func_basename_result to FILE with everything up to and including
# the last / stripped.
if test yes = "$_G_HAVE_XSI_OPS"; then
# If this shell supports suffix pattern removal, then use it to avoid
# forking. Hide the definitions single quotes in case the shell chokes
# on unsupported syntax...
_b='func_basename_result=$'
_d='case $1 in
*}$"') 2>/dev/null \
&& _G_HAVE_XSI_OPS=yes
if test yes = "$_G_HAVE_XSI_OPS"; then
eval 'func_len ()
'
else
func_len ()
fi
# func_mkdir_p DIRECTORY-PATH
# ---------------------------
# Make sure the entire path to DIRECTORY-PATH is available.
func_mkdir_p ()
$"') 2>/dev/null \
&& _G_HAVE_XSI_OPS=yes
if test yes = "$_G_HAVE_XSI_OPS"
then
# This is an XSI compatible shell, allowing a faster implementation...
eval 'func_split_equals ()
'
else
# ...otherwise fall back to using expr, which is often a shell builtin.
func_split_equals ()
fi #func_split_equals
# func_split_short_opt SHORTOPT
# -----------------------------
# Set func_split_short_opt_name and func_split_short_opt_arg shell
# variables after splitting SHORTOPT after the 2nd character.
if test yes = "$_G_HAVE_XSI_OPS"
then
# This is an XSI compatible shell, allowing a faster implementation...
eval 'func_split_short_opt ()
'
else
# ...otherwise fall back to using expr, which is often a shell builtin.
func_split_short_opt ()
fi #func_split_short_opt
# func_usage
# ----------
# Echo short help message to standard output and exit.
func_usage ()
# func_usage_message
# ------------------
# Echo short help message to standard output.
func_usage_message ()
# func_version
# ------------
# Echo version message to standard output and exit.
func_version ()
# Local variables:
# mode: shell-script
# sh-indentation: 2
# eval: (add-hook 'write-file-hooks 'time-stamp)
# time-stamp-pattern: "10/scriptversion=%:y-%02m-%02d.%02H; # UTC"
# time-stamp-time-zone: "UTC"
# End:
# Set a version string.
scriptversion='(GNU libtool) 2.4.2.418'
# func_echo ARG...
# ----------------
# Libtool also displays the current mode in messages, so override
# funclib.sh func_echo with this custom definition.
func_echo ()
# func_warning ARG...
# -------------------
# Libtool warnings are not categorized, so override funclib.sh
# func_warning with this simpler definition.
func_warning ()
## ---------------- ##
## Options parsing. ##
## ---------------- ##
# Hook in the functions to make sure our own options are parsed during
# the option parsing loop.
usage='$progpath [OPTION]... [MODE-ARG]...'
# Short help message in response to '-h'.
usage_message="Options:
--config             show all configuration variables
--debug              enable verbose shell tracing
-n, --dry-run            display commands without modifying any files
--features           display basic configuration information and exit
--mode=MODE          use operation mode MODE
--no-warnings        equivalent to '-Wnone'
--preserve-dup-deps  don't remove duplicate dependency libraries
--quiet, --silent    don't print informational messages
--tag=TAG            use configuration variables from tag TAG
-v, --verbose            print more informational messages than default
--version            print version information
-W, --warnings=CATEGORY  report the warnings falling in CATEGORY [all]
-h, --help, --help-all   print short, long, or detailed help message
"
# Additional text appended to 'usage_message' in response to '--help'.
long_help_message=$long_help_message"
MODE must be one of the following:
clean           remove files from the build directory
compile         compile a source file into a libtool object
execute         automatically set library path, then run a program
finish          complete the installation of libtool libraries
install         install libraries or executables
link            create a library or an executable
uninstall       remove libraries from an installed directory
MODE-ARGS vary depending on the MODE.  When passed as first option,
'--mode=MODE' may be abbreviated as 'MODE' or a unique abbreviation of that.
Try '$progname --help --mode=MODE' for a more detailed description of MODE.
When reporting a bug, please describe a test case to reproduce it and
include the following information:
host-triplet:   $host
shell:          $SHELL
compiler:       $LTCC
compiler flags: $LTCFLAGS
linker:         $LD (gnu? $with_gnu_ld)
version:        $progname (GNU libtool) 2.4.2.418
automake:       `($AUTOMAKE --version) 2>/dev/null |$SED 1q`
autoconf:       `($AUTOCONF --version) 2>/dev/null |$SED 1q`
Report bugs to <bug-libtool@gnu.org>.
GNU libtool home page: <http:
General help using GNU software: <http:
# func_lo2o OBJECT-NAME
# ---------------------
# Transform OBJECT-NAME from a '.lo' suffix to the platform specific
# object suffix.
lo2o=s/\\.lo\$/.$objext/
o2lo=s/\\.$objext\$/.lo/
if test yes = "$_G_HAVE_XSI_OPS"; then
eval 'func_lo2o ()
'
# func_xform LIBOBJ-OR-SOURCE
# ---------------------------
# Transform LIBOBJ-OR-SOURCE from a '.o' or '.c' (or otherwise)
# suffix to a '.lo' libtool-object suffix.
eval 'func_xform ()
'
else
# ...otherwise fall back to using sed.
func_lo2o ()
func_xform ()
fi
# func_fatal_configuration ARG...
# -------------------------------
# Echo program name prefixed message to standard error, followed by
# a configuration failure hint, and exit.
func_fatal_configuration ()
# func_config
# -----------
# Display the configuration for all the tags in this script.
func_config ()
# func_features
# -------------
# Display the features supported by this script.
func_features ()
# func_enable_tag TAGNAME
# -----------------------
# Verify that TAGNAME is valid, and either flag an error and exit, or
# enable the TAGNAME tag.  We also add TAGNAME to the global $taglist
# variable here.
func_enable_tag ()
# func_check_version_match
# ------------------------
# Ensure that we are using m4 macros, and libtool script from the same
# release of libtool.
func_check_version_match ()
# libtool_options_prep [ARG]...
# -----------------------------
# Preparation for options parsed by libtool.
libtool_options_prep ()
func_add_hook func_options_prep libtool_options_prep
# libtool_parse_options [ARG]...
# ---------------------------------
# Provide handling for libtool specific options.
libtool_parse_options ()
func_add_hook func_parse_options libtool_parse_options
# libtool_validate_options [ARG]...
# ---------------------------------
# Perform any sanity checks on option settings and/or unconsumed
# arguments.
libtool_validate_options ()
func_add_hook func_validate_options libtool_validate_options
# Process options as early as possible so that --help and --version
# can return quickly.
func_options $
eval set dummy "$func_options_result"; shift
## ----------- ##
##    Main.    ##
## ----------- ##
magic='%%%MAGIC variable%%%'
magic_exe='%%%MAGIC EXE variable%%%'
# Global variables.
extracted_archives=
extracted_serial=0
# If this variable is set in any of the actions, the command in it
# will be execed at the end.  This prevents here-documents from being
# left over by shells.
exec_cmd=
# A function that is used when there is no print builtin or printf.
func_fallback_echo ()
# func_lalib_p file
# True iff FILE is a libtool '.la' library or '.lo' object file.
# This function is only a basic sanity check; it will hardly flush out
# determined imposters.
func_lalib_p ()
# func_lalib_unsafe_p file
# True iff FILE is a libtool '.la' library or '.lo' object file.
# This function implements the same check as func_lalib_p without
# resorting to external programs.  To this end, it redirects stdin and
# closes it afterwards, without saving the original file descriptor.
# As a safety measure, use it only where a negative result would be
# fatal anyway.  Works if 'file' does not exist.
func_lalib_unsafe_p ()
# func_ltwrapper_script_p file
# True iff FILE is a libtool wrapper script
# This function is only a basic sanity check; it will hardly flush out
# determined imposters.
func_ltwrapper_script_p ()
# func_ltwrapper_executable_p file
# True iff FILE is a libtool wrapper executable
# This function is only a basic sanity check; it will hardly flush out
# determined imposters.
func_ltwrapper_executable_p ()
# func_ltwrapper_scriptname file
# Assumes file is an ltwrapper_executable
# uses $file to determine the appropriate filename for a
# temporary ltwrapper_script.
func_ltwrapper_scriptname ()
# func_ltwrapper_p file
# True iff FILE is a libtool wrapper script or wrapper executable
# This function is only a basic sanity check; it will hardly flush out
# determined imposters.
func_ltwrapper_p ()
# func_execute_cmds commands fail_cmd
# Execute tilde-delimited COMMANDS.
# If FAIL_CMD is given, eval that upon failure.
# FAIL_CMD may read-access the current command in variable CMD!
func_execute_cmds ()
# func_source file
# Source FILE, adding directory component if necessary.
# Note that it is not necessary on cygwin/mingw to append a dot to
# FILE even if both FILE and FILE.exe exist: automatic-append-.exe
# behavior happens only for exec(3), not for open(2)!  Also, sourcing
# 'FILE.' does not work on cygwin managed mounts.
func_source ()
$opt_help ||
func_mode_help ()
# Now that we've collected a possible --mode arg, show help if necessary
if $opt_help; then
if test : = "$opt_help"; then
func_mode_help
else
| sed -n '1p; 2,$s/^Usage:/  or: /p'
|
sed '1d
/^When reporting/,/^Report/
$x
/information about other modes/d
/more detailed .*MODE/d
s/^Usage:.*--mode=\([^ ]*\) .*/Description of \1 mode:/'
fi
exit $?
fi
# func_mode_execute arg...
func_mode_execute ()
test execute = "$opt_mode" && func_mode_execute $
# func_mode_finish arg...
func_mode_finish ()
test finish = "$opt_mode" && func_mode_finish $
# func_mode_install arg...
func_mode_install ()
test install = "$opt_mode" && func_mode_install $
# func_generate_dlsyms outputname originator pic_p
# Extract symbols from dlprefiles and create $S.o with
# a dlpreopen symbol table.
func_generate_dlsyms ()
# func_cygming_gnu_implib_p ARG
# This predicate returns with zero status (TRUE) if
# ARG is a GNU/binutils-style import library. Returns
# with nonzero status (FALSE) otherwise.
func_cygming_gnu_implib_p ()
# func_cygming_ms_implib_p ARG
# This predicate returns with zero status (TRUE) if
# ARG is an MS-style import library. Returns
# with nonzero status (FALSE) otherwise.
func_cygming_ms_implib_p ()
# func_win32_libid arg
# return the library type of file 'arg'
#
# Need a lot of goo to handle *both* DLLs and import libs
# Has to be a shell function in order to 'eat' the argument
# that is supplied when $file_magic_command is called.
# Despite the name, also deal with 64 bit binaries.
func_win32_libid ()
# func_cygming_dll_for_implib ARG
#
# Platform-specific function to extract the
# name of the DLL associated with the specified
# import library ARG.
# Invoked by eval'ing the libtool variable
#    $sharedlib_from_linklib_cmd
# Result is available in the variable
#    $sharedlib_from_linklib_result
func_cygming_dll_for_implib ()
# func_cygming_dll_for_implib_fallback_core SECTION_NAME LIBNAMEs
#
# The is the core of a fallback implementation of a
# platform-specific function to extract the name of the
# DLL associated with the specified import library LIBNAME.
#
# SECTION_NAME is either .idata$6 or .idata$7, depending
# on the platform and compiler that created the implib.
#
# Echos the name of the DLL associated with the
# specified import library.
func_cygming_dll_for_implib_fallback_core ()
# func_cygming_dll_for_implib_fallback ARG
# Platform-specific function to extract the
# name of the DLL associated with the specified
# import library ARG.
#
# This fallback implementation is for use when $DLLTOOL
# does not support the --identify-strict option.
# Invoked by eval'ing the libtool variable
#    $sharedlib_from_linklib_cmd
# Result is available in the variable
#    $sharedlib_from_linklib_result
func_cygming_dll_for_implib_fallback ()
# func_extract_an_archive dir oldlib
func_extract_an_archive ()
# func_extract_archives gentop oldlib ...
func_extract_archives ()
# func_emit_wrapper [arg=no]
#
# Emit a libtool wrapper script on stdout.
# Don't directly open a file because we may want to
# incorporate the script contents within a cygwin/mingw
# wrapper executable.  Must ONLY be called from within
# func_mode_link because it depends on a number of variables
# set therein.
#
# ARG is the value that the WRAPPER_SCRIPT_BELONGS_IN_OBJDIR
# variable will take.  If 'yes', then the emitted script
# will assume that the directory where it is stored is
# the $objdir directory.  This is a cygwin/mingw-specific
# behavior.
func_emit_wrapper ()
# func_emit_cwrapperexe_src
# emit the source code for a wrapper executable on stdout
# Must ONLY be called from within func_mode_link because
# it depends on a number of variable set therein.
func_emit_cwrapperexe_src ()
# end: func_emit_cwrapperexe_src
# func_win32_import_lib_p ARG
# True if ARG is an import lib, as indicated by $file_magic_cmd
func_win32_import_lib_p ()
# func_mode_link arg...
func_mode_link ()
if test link = "$opt_mode" || test relink = "$opt_mode"; then
func_mode_link $
fi
# func_mode_uninstall arg...
func_mode_uninstall ()
if test uninstall = "$opt_mode" || test clean = "$opt_mode"; then
func_mode_uninstall $
fi
test -z "$opt_mode" &&
test -z "$exec_cmd" && \
func_fatal_help "invalid operation mode '$opt_mode'"
if test -n "$exec_cmd"; then
eval exec "$exec_cmd"
exit $EXIT_FAILURE
fi
exit $exit_status
# The TAGs below are defined such that we never get into a situation
# where we disable both kinds of libraries.  Given conflicting
# choices, we go for a static library, that is the most portable,
# since we can't tell whether shared libraries were disabled because
# the user asked for that or because the platform doesn't support
# them.  This is particularly important on AIX, because we don't
# support having both static and shared libraries enabled at the same
# time on that platform, so we default to a shared-only configuration.
# If a disable-shared tag is given, we'll fallback to a static-only
# configuration.  But we'll never go from static-only to shared-only.
# ### BEGIN LIBTOOL TAG CONFIG: disable-shared
build_libtool_libs=no
build_old_libs=yes
# ### END LIBTOOL TAG CONFIG: disable-shared
# ### BEGIN LIBTOOL TAG CONFIG: disable-static
build_old_libs=`case $build_libtool_libs in yes) echo no;; *) echo yes;; esac`
# ### END LIBTOOL TAG CONFIG: disable-static
# Local Variables:
# mode:shell-script
# sh-indentation:2
# End:
