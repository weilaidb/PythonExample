# define _NO_PROTO
# include <config.h>
#if !defined __STDC__ || !__STDC__
# ifndef const
#  define const
# endif
#define GETOPT_INTERFACE_VERSION 2
#if !defined _LIBC && defined __GLIBC__ && __GLIBC__ >= 2
# include <gnu-versions.h>
# if _GNU_GETOPT_INTERFACE_VERSION == GETOPT_INTERFACE_VERSION
#  define ELIDE_CODE
# endif
# include <stdlib.h>
# include <unistd.h>
# include <unixlib.h>
# if HAVE_STRING_H - 0
#  include <string.h>
# endif
# if (HAVE_LIBINTL_H && ENABLE_NLS) || defined _LIBC
#  include <libintl.h>
#  ifndef _
#   define _(msgid)	gettext (msgid)
#  endif
# else
#  define _(msgid)	(msgid)
# endif
char *optarg;
int optind = 1;
int __getopt_initialized;
static char *nextchar;
int opterr = 1;
int optopt = '?';
static enum
ordering;
static char *posixly_correct;
# include <string.h>
# define my_index	strchr
# if HAVE_STRING_H
#  include <string.h>
# else
#  include <strings.h>
# endif
extern char *getenv ();
static char *
my_index (str, chr)
const char *str;
int chr;
# if (!defined __STDC__ || !__STDC__) && !defined strlen
extern int strlen (const char *);
# endif
static int first_nonopt;
static int last_nonopt;
extern int __libc_argc;
extern char **__libc_argv;
# ifdef USE_NONOPTION_FLAGS
extern char *__getopt_nonoption_flags;
static int nonoption_flags_max_len;
static int nonoption_flags_len;
# endif
# ifdef USE_NONOPTION_FLAGS
#  define SWAP_FLAGS(ch1, ch2) \
if (nonoption_flags_len > 0)						      \
# else
#  define SWAP_FLAGS(ch1, ch2)
# endif
# define SWAP_FLAGS(ch1, ch2)
#if defined __STDC__ && __STDC__
static void exchange (char **);
static void
exchange (argv)
char **argv;
#if defined __STDC__ && __STDC__
static const char *_getopt_initialize (int, char *const *, const char *);
static const char *
_getopt_initialize (argc, argv, optstring)
int argc;
char *const *argv;
const char *optstring;
int
_getopt_internal (argc, argv, optstring, longopts, longind, long_only)
int argc;
char *const *argv;
const char *optstring;
const struct option *longopts;
int *longind;
int long_only;
int
getopt (argc, argv, optstring)
int argc;
char *const *argv;
const char *optstring;
int getopt_long (argc, argv, optstring, long_options, opt_index)
int argc;
char *const *argv;
const char *optstring;
const struct option *long_options;
int *opt_index;
int
main (argc, argv)
int argc;
char **argv;
