# libtool (GNU libtool) 2.4.2
# Written by Gordon Matzigkeit <gord@gnu.ai.mit.edu>, 1996
# Copyright (C) 1996, 1997, 1998, 1999, 2000, 2001, 2003, 2004, 2005, 2006,
# 2007, 2008, 2009, 2010, 2011 Free Software Foundation, Inc.
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
#       --config             show all configuration variables
#       --debug              enable verbose shell tracing
#   -n, --dry-run            display commands without modifying any files
#       --features           display basic configuration information and exit
#       --mode=MODE          use operation mode MODE
#       --preserve-dup-deps  don't remove duplicate dependency libraries
#       --quiet, --silent    don't print informational messages
#       --no-quiet, --no-silent
#                            print informational messages (default)
#       --no-warn            don't display warning messages
#       --tag=TAG            use configuration variables from tag TAG
#   -v, --verbose            print more informational messages than default
#       --no-verbose         don't print the extra informational messages
#       --version            print version information
#   -h, --help, --help-all   print short, long, or detailed help message
#
# MODE must be one of the following:
#
#         clean              remove files from the build directory
#         compile            compile a source file into a libtool object
#         execute            automatically set library path, then run a program
#         finish             complete the installation of libtool libraries
#         install            install libraries or executables
#         link               create a library or an executable
#         uninstall          remove libraries from an installed directory
#
# MODE-ARGS vary depending on the MODE.  When passed as first option,
# `--mode=MODE' may be abbreviated as `MODE' or a unique abbreviation of that.
# Try `$progname --help --mode=MODE' for a more detailed description of MODE.
#
# When reporting a bug, please describe a test case to reproduce it and
# include the following information:
#
#         host-triplet:	$host
#         shell:		$SHELL
#         compiler:		$LTCC
#         compiler flags:		$LTCFLAGS
#         linker:		$LD (gnu? $with_gnu_ld)
#         $progname:	(GNU libtool) 2.4.2 Debian-2.4.2-1ubuntu1
#         automake:	$automake_version
#         autoconf:	$autoconf_version
#
# Report bugs to <bug-libtool@gnu.org>.
# GNU libtool home page: <http:
# General help using GNU software: <http:
PROGRAM=libtool
PACKAGE=libtool
VERSION="2.4.2 Debian-2.4.2-1ubuntu1"
TIMESTAMP=""
package_revision=1.3337
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
# A function that is used when there is no print builtin or printf.
func_fallback_echo ()
# NLS nuisances: We save the old values to restore during execute mode.
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
LC_ALL=C
LANGUAGE=C
export LANGUAGE LC_ALL
$lt_unset CDPATH
# Work around backward compatibility issue on IRIX 6.5. On IRIX 6.4+, sh
# is ksh but when the shell is invoked as "sh" and the current value of
# the _XPG environment variable is not equal to 1 (one), the special
# positional parameter $0, within a function call, is the name of the
# function.
progpath="$0"
: $
test "$" = set || ECHO=$
: $
: $
: $
: $
: $
: $
# func_mktempdir [string]
# Make a temporary directory that won't clash with other running
# libtool processes, and avoids race conditions if possible.  If
# given, STRING is the basename for that directory.
func_mktempdir ()
# func_quote_for_eval arg
# Aesthetically quote ARG to be evaled later.
# This function returns two values: FUNC_QUOTE_FOR_EVAL_RESULT
# is double-quoted, suitable for a subsequent eval, whereas
# FUNC_QUOTE_FOR_EVAL_UNQUOTED_RESULT has merely all characters
# which are still active within double quotes backslashified.
func_quote_for_eval ()
# func_quote_for_expand arg
# Aesthetically quote ARG to be evaled later; same as above,
# but do not quote variable references.
func_quote_for_expand ()
# func_show_eval cmd [fail_exp]
# Unless opt_silent is true, then output CMD.  Then, if opt_dryrun is
# not true, evaluate CMD.  If the evaluation of CMD fails, and FAIL_EXP
# is given, then evaluate it.
func_show_eval ()
# func_show_eval_locale cmd [fail_exp]
# Unless opt_silent is true, then output CMD.  Then, if opt_dryrun is
# not true, evaluate CMD.  If the evaluation of CMD fails, and FAIL_EXP
# is given, then evaluate it.  Use the saved locale for evaluation.
func_show_eval_locale ()
# func_tr_sh
# Turn $1 into a string suitable for a shell variable name.
# Result is stored in $func_tr_sh_result.  All characters
# not in the set a-zA-Z0-9_ are replaced with '_'. Further,
# if $1 begins with a digit, a '_' is prepended as well.
func_tr_sh ()
# func_version
# Echo version message to standard output and exit.
func_version ()
# func_usage
# Echo short help message to standard output and exit.
func_usage ()
# func_help [NOEXIT]
# Echo long help message to standard output and exit,
# unless 'noexit' is passed as argument.
func_help ()
# func_missing_arg argname
# Echo program name prefixed message to standard error and set global
# exit_cmd.
func_missing_arg ()
# func_split_short_opt shortopt
# Set func_split_short_opt_name and func_split_short_opt_arg shell
# variables after splitting SHORTOPT after the 2nd character.
func_split_short_opt ()
# func_split_short_opt may be replaced by extended shell implementation
# func_split_long_opt longopt
# Set func_split_long_opt_name and func_split_long_opt_arg shell
# variables after splitting LONGOPT at the `=' sign.
func_split_long_opt ()
# func_split_long_opt may be replaced by extended shell implementation
exit_cmd=:
magic="%%%MAGIC variable%%%"
magic_exe="%%%MAGIC EXE variable%%%"
# Global variables.
nonopt=
preserve_args=
lo2o="s/\\.lo\$/.$/"
o2lo="s/\\.$\$/.lo/"
extracted_archives=
extracted_serial=0
# If this variable is set in any of the actions, the command in it
# will be execed at the end.  This prevents here-documents from being
# left over by shells.
exec_cmd=
# func_append var value
# Append VALUE to the end of shell variable VAR.
func_append ()
# func_append may be replaced by extended shell implementation
# func_append_quoted var value
# Quote VALUE and append to the end of shell variable VAR, separated
# by a space.
func_append_quoted ()
# func_append_quoted may be replaced by extended shell implementation
# func_arith arithmetic-term...
func_arith ()
# func_arith may be replaced by extended shell implementation
# func_len string
# STRING may not start with a hyphen.
func_len ()
# func_len may be replaced by extended shell implementation
# func_lo2o object
func_lo2o ()
# func_lo2o may be replaced by extended shell implementation
# func_xform libobj-or-source
func_xform ()
# func_xform may be replaced by extended shell implementation
# func_fatal_configuration arg...
# Echo program name prefixed message to standard error, followed by
# a configuration failure hint, and exit.
func_fatal_configuration ()
# func_config
# Display the configuration for all the tags in this script.
func_config ()
# func_features
# Display the features supported by this script.
func_features ()
# func_enable_tag tagname
# Verify that TAGNAME is valid, and either flag an error and exit, or
# enable the TAGNAME tag.  We also add TAGNAME to the global $taglist
# variable here.
func_enable_tag ()
# func_check_version_match
# Ensure that we are using m4 macros, and libtool script from the same
# release of libtool.
func_check_version_match ()
# Shorthand for --mode=foo, only valid as the first argument
case $1 in
clean|clea|cle|cl)
shift; set dummy --mode clean $; shift
;;
compile|compil|compi|comp|com|co|c)
shift; set dummy --mode compile $; shift
;;
execute|execut|execu|exec|exe|ex|e)
shift; set dummy --mode execute $; shift
;;
finish|finis|fini|fin|fi|f)
shift; set dummy --mode finish $; shift
;;
install|instal|insta|inst|ins|in|i)
shift; set dummy --mode install $; shift
;;
link|lin|li|l)
shift; set dummy --mode link $; shift
;;
uninstall|uninstal|uninsta|uninst|unins|unin|uni|un|u)
shift; set dummy --mode uninstall $; shift
;;
esac
# Option defaults:
opt_debug=:
opt_dry_run=false
opt_config=false
opt_preserve_dup_deps=false
opt_features=false
opt_finish=false
opt_help=false
opt_help_all=false
opt_silent=:
opt_warning=:
opt_verbose=:
opt_silent=false
opt_verbose=false
# Parse options once, thoroughly.  This comes as soon as possible in the
# script to make things like `--version' happen as quickly as we can.
## ----------- ##
##    Main.    ##
## ----------- ##
# func_lalib_p file
# True iff FILE is a libtool `.la' library or `.lo' object file.
# This function is only a basic sanity check; it will hardly flush out
# determined imposters.
func_lalib_p ()
# func_lalib_unsafe_p file
# True iff FILE is a libtool `.la' library or `.lo' object file.
# This function implements the same check as func_lalib_p without
# resorting to external programs.  To this end, it redirects stdin and
# closes it afterwards, without saving the original file descriptor.
# As a safety measure, use it only where a negative result would be
# fatal anyway.  Works if `file' does not exist.
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
# `FILE.' does not work on cygwin managed mounts.
func_source ()
$opt_help ||
func_mode_help ()
# Now that we've collected a possible --mode arg, show help if necessary
if $opt_help; then
if test "$opt_help" = :; then
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
test "$opt_mode" = execute && func_mode_execute $
# func_mode_finish arg...
func_mode_finish ()
test "$opt_mode" = finish && func_mode_finish $
# func_mode_install arg...
func_mode_install ()
test "$opt_mode" = install && func_mode_install $
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
# will assume that the directory in which it is stored is
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
&&
func_mode_link $
# func_mode_uninstall arg...
func_mode_uninstall ()
&&
func_mode_uninstall $
test -z "$opt_mode" &&
test -z "$exec_cmd" && \
func_fatal_help "invalid operation mode \`$opt_mode'"
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
