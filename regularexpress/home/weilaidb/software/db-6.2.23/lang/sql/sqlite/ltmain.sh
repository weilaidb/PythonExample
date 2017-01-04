# Generated from ltmain.m4sh.
# ltmain.sh (GNU libtool) 2.2.6
# Written by Gordon Matzigkeit <gord@gnu.ai.mit.edu>, 1996
# Copyright (C) 1996, 1997, 1998, 1999, 2000, 2001, 2003, 2004, 2005, 2006, 2007 2008 Free Software Foundation, Inc.
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
# along with GNU Libtool; see the file COPYING.  If not, a copy
# can be downloaded from http:
# or obtained by writing to the Free Software Foundation, Inc.,
# 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
# Usage: $progname [OPTION]... [MODE-ARG]...
#
# Provide generalized library-building support services.
#
#     --config             show all configuration variables
#     --debug              enable verbose shell tracing
# -n, --dry-run            display commands without modifying any files
#     --features           display basic configuration information and exit
#     --mode=MODE          use operation mode MODE
#     --preserve-dup-deps  don't remove duplicate dependency libraries
#     --quiet, --silent    don't print informational messages
#     --tag=TAG            use configuration variables from tag TAG
# -v, --verbose            print informational messages (default)
#     --version            print version information
# -h, --help               print short or long help message
#
# MODE must be one of the following:
#
#       clean              remove files from the build directory
#       compile            compile a source file into a libtool object
#       execute            automatically set library path, then run a program
#       finish             complete the installation of libtool libraries
#       install            install libraries or executables
#       link               create a library or an executable
#       uninstall          remove libraries from an installed directory
#
# MODE-ARGS vary depending on the MODE.
# Try `$progname --help --mode=MODE' for a more detailed description of MODE.
#
# When reporting a bug, please describe a test case to reproduce it and
# include the following information:
#
#       host-triplet:	$host
#       shell:		$SHELL
#       compiler:		$LTCC
#       compiler flags:		$LTCFLAGS
#       linker:		$LD (gnu? $with_gnu_ld)
#       $progname:		(GNU libtool) 2.2.6
#       automake:		$automake_version
#       autoconf:		$autoconf_version
#
# Report bugs to <bug-libtool@gnu.org>.
PROGRAM=ltmain.sh
PACKAGE=libtool
VERSION=2.2.6
TIMESTAMP=""
package_revision=1.3012
# Be Bourne compatible
if test -n "$" && (emulate sh) >/dev/null 2>&1; then
emulate sh
NULLCMD=:
# Zsh 3.x and 4.x performs word splitting on $, which
# is contrary to our usage.  Disable this feature.
alias -g '$'='"$@"'
setopt NO_GLOB_SUBST
else
case `(set -o) 2>/dev/null` in *posix*) set -o posix;; esac
fi
BIN_SH=xpg4; export BIN_SH # for Tru64
DUALCASE=1; export DUALCASE # for MKS sh
# NLS nuisances: We save the old values to restore during execute mode.
# Only set LANG and LC_ALL to C if already set.
# These must not be set unconditionally because not all systems understand
# e.g. LANG=C (notably SCO).
lt_user_locale=
lt_safe_locale=
for lt_var in LANG LANGUAGE LC_ALL LC_CTYPE LC_COLLATE LC_MESSAGES
do
eval "if test \"\$\" = set; then
save_$lt_var=\$$lt_var
$lt_var=C
export $lt_var
lt_user_locale=\"$lt_var=\\\$save_\$lt_var; \$lt_user_locale\"
lt_safe_locale=\"$lt_var=C; \$lt_safe_locale\"
fi"
done
$lt_unset CDPATH
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
: ${Xsed="$SED -e 1s/^X
# Global variables:
EXIT_SUCCESS=0
EXIT_FAILURE=1
EXIT_MISMATCH=63  # $? = 63 is used to indicate version mismatch to missing.
EXIT_SKIP=77	  # $? = 77 is used to indicate a skipped test to automake.
exit_status=$EXIT_SUCCESS
# Make sure IFS has a sensible default
lt_nl='
'
IFS=" 	$lt_nl"
dirname="s,/[^/]*$,,"
basename="s,^.*/,,"
# func_dirname_and_basename file append nondir_replacement
# perform func_basename and func_dirname in a single function
# call:
#   dirname:  Compute the dirname of FILE.  If nonempty,
#             add APPEND to the result, otherwise set result
#             to NONDIR_REPLACEMENT.
#             value returned in "$func_dirname_result"
#   basename: Compute filename of FILE.
#             value retuned in "$func_basename_result"
# Implementation must be kept synchronized with func_dirname
# and func_basename. For efficiency, we do not delegate to
# those functions but instead duplicate the functionality here.
func_dirname_and_basename ()
# Generated shell functions inserted here.
# Work around backward compatibility issue on IRIX 6.5. On IRIX 6.4+, sh
# is ksh but when the shell is invoked as "sh" and the current value of
# the _XPG environment variable is not equal to 1 (one), the special
# positional parameter $0, within a function call, is the name of the
# function.
progpath="$0"
# The name of this program:
# In the unlikely event $progname began with a '-', it would play havoc with
# func_echo (imagine progname=-n), so we prepend ./ in that case:
func_dirname_and_basename "$progpath"
progname=$func_basename_result
case $progname in
-*) progname=./$progname ;;
esac
# Make sure we have an absolute path for reexecution:
case $progpath in
[\\/]*|[A-Za-z]:\\*) ;;
*[\\/]*)
progdir=$func_dirname_result
progdir=`cd "$progdir" && pwd`
progpath="$progdir/$progname"
;;
*)
save_IFS="$IFS"
IFS=:
for progdir in $PATH; do
IFS="$save_IFS"
test -x "$progdir/$progname" && break
done
IFS="$save_IFS"
test -n "$progdir" || progdir=`pwd`
progpath="$progdir/$progname"
;;
esac
# Sed substitution that helps us do robust quoting.  It backslashifies
# metacharacters that are still active within double-quoted strings.
Xsed="$"' -e 1s/^X
sed_quote_subst='s/\([`"$\\]\)/\\\1/g'
# Same as above, but do not quote variable references.
double_quote_subst='s/\(["`\\]\)/\\\1/g'
# Re-`\' parameter expansions in output of double_quote_subst that were
# `\'-ed in input to the same.  If an odd number of `\' preceded a '$'
# in input to double_quote_subst, that '$' was protected from expansion.
# Since each input `\' is now two `\'s, look for any number of runs of
# four `\'s followed by two `\'s and then a '$'.  `\' that '$'.
bs='\\'
bs2='\\\\'
bs4='\\\\\\\\'
dollar='\$'
sed_double_backslash="\
s/$bs4/&\\
/g
s/^$bs2$dollar/$bs&/
s/\\([^$bs]\\)$bs2$dollar/\\1$bs2$bs$dollar/g
s/\n
# Standard options:
opt_dry_run=false
opt_help=false
opt_quiet=false
opt_verbose=false
opt_warning=:
# func_echo arg...
# Echo program name prefixed message, along with the current mode
# name if it has been set yet.
func_echo ()
# func_verbose arg...
# Echo program name prefixed message in verbose mode only.
func_verbose ()
# func_error arg...
# Echo program name prefixed message to standard error.
func_error ()
# func_warning arg...
# Echo program name prefixed warning message to standard error.
func_warning ()
# func_fatal_error arg...
# Echo program name prefixed message to standard error, and exit.
func_fatal_error ()
# func_fatal_help arg...
# Echo program name prefixed message to standard error, followed by
# a help hint, and exit.
func_fatal_help ()
help="Try \`$progname --help' for more information."  ## default
# func_grep expression filename
# Check whether EXPRESSION matches any line of FILENAME, without output.
func_grep ()
# func_mkdir_p directory-path
# Make sure the entire path to DIRECTORY-PATH is available.
func_mkdir_p ()
# func_infer_tag arg
# Infer tagged configuration to use if any are available and
# if one wasn't chosen via the "--tag" command line option.
# Only attempt this if the compiler in the base compile
# command doesn't match the default compiler.
# arg is usually of the form 'gcc ...'
func_infer_tag ()
# func_write_libtool_object output_name pic_name nonpic_name
# Create a libtool object file (analogous to a ".la" file),
# but don't create it if we're doing a dry run.
func_write_libtool_object ()
# func_mode_compile arg...
func_mode_compile ()
$opt_help ||
func_mode_help ()
# Now that we've collected a possible --mode arg, show help if necessary
$opt_help && func_mode_help
# func_mode_execute arg...
func_mode_execute ()
test "$mode" = execute && func_mode_execute $
# func_mode_finish arg...
func_mode_finish ()
test "$mode" = finish && func_mode_finish $
# func_mode_install arg...
func_mode_install ()
test "$mode" = install && func_mode_install $
# func_generate_dlsyms outputname originator pic_p
# Extract symbols from dlprefiles and create $S.o with
# a dlpreopen symbol table.
func_generate_dlsyms ()
# func_win32_libid arg
# return the library type of file 'arg'
#
# Need a lot of goo to handle *both* DLLs and import libs
# Has to be a shell function in order to 'eat' the argument
# that is supplied when $file_magic_command is called.
func_win32_libid ()
# func_extract_an_archive dir oldlib
func_extract_an_archive ()
# func_extract_archives gentop oldlib ...
func_extract_archives ()
# func_emit_wrapper_part1 [arg=no]
#
# Emit the first part of a libtool wrapper script on stdout.
# For more information, see the description associated with
# func_emit_wrapper(), below.
func_emit_wrapper_part1 ()
# end: func_emit_wrapper_part1
# func_emit_wrapper_part2 [arg=no]
#
# Emit the second part of a libtool wrapper script on stdout.
# For more information, see the description associated with
# func_emit_wrapper(), below.
func_emit_wrapper_part2 ()
# end: func_emit_wrapper_part2
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
# will assume that the directory in which it is stored is
# the $objdir directory.  This is a cygwin/mingw-specific
# behavior.
func_emit_wrapper ()
# func_to_host_path arg
#
# Convert paths to host format when used with build tools.
# Intended for use with "native" mingw (where libtool itself
# is running under the msys shell), or in the following cross-
# build environments:
#    $build          $host
#    mingw (msys)    mingw  [e.g. native]
#    cygwin          mingw
#    *nix + wine     mingw
# where wine is equipped with the `winepath' executable.
# In the native mingw case, the (msys) shell automatically
# converts paths for any non-msys applications it launches,
# but that facility isn't available from inside the cwrapper.
# Similar accommodations are necessary for $host mingw and
# $build cygwin.  Calling this function does no harm for other
# $host/$build combinations not listed above.
#
# ARG is the path (on $build) that should be converted to
# the proper representation for $host. The result is stored
# in $func_to_host_path_result.
func_to_host_path ()
# end: func_to_host_path
# func_to_host_pathlist arg
#
# Convert pathlists to host format when used with build tools.
# See func_to_host_path(), above. This function supports the
# following $build/$host combinations (but does no harm for
# combinations not listed here):
#    $build          $host
#    mingw (msys)    mingw  [e.g. native]
#    cygwin          mingw
#    *nix + wine     mingw
#
# Path separators are also converted from $build format to
# $host format. If ARG begins or ends with a path separator
# character, it is preserved (but converted to $host format)
# on output.
#
# ARG is a pathlist (on $build) that should be converted to
# the proper representation on $host. The result is stored
# in $func_to_host_pathlist_result.
func_to_host_pathlist ()
# end: func_to_host_pathlist
# func_emit_cwrapperexe_src
# emit the source code for a wrapper executable on stdout
# Must ONLY be called from within func_mode_link because
# it depends on a number of variable set therein.
func_emit_cwrapperexe_src ()
# end: func_emit_cwrapperexe_src
# func_mode_link arg...
func_mode_link ()
&&
func_mode_link $
# func_mode_uninstall arg...
func_mode_uninstall ()
&&
func_mode_uninstall $
test -z "$mode" &&
test -z "$exec_cmd" && \
func_fatal_help "invalid operation mode \`$mode'"
if test -n "$exec_cmd"; then
eval exec "$exec_cmd"
exit $EXIT_FAILURE
fi
exit $exit_status
# The TAGs below are defined such that we never get into a situation
# in which we disable both kinds of libraries.  Given conflicting
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
# vi:sw=2
