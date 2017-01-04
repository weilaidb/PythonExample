# define _GETOPT_H 1
#if !defined __GNU_LIBRARY__
# include <ctype.h>
extern char *optarg;
extern int optind;
extern int opterr;
extern int optopt;
struct option
;
# define no_argument		0
# define required_argument	1
# define optional_argument	2
#if (defined __STDC__ && __STDC__) || defined __cplusplus
# ifdef __GNU_LIBRARY__
extern int getopt (int __argc, char *const *__argv, const char *__shortopts);
# else
extern int getopt ();
# endif
# ifndef __need_getopt
extern int getopt_long (int __argc, char *const *__argv, const char *__shortopts,
const struct option *__longopts, int *__longind);
extern int getopt_long_only (int __argc, char *const *__argv,
const char *__shortopts,
const struct option *__longopts, int *__longind);
extern int _getopt_internal (int __argc, char *const *__argv,
const char *__shortopts,
const struct option *__longopts, int *__longind,
int __long_only);
# endif
extern int getopt ();
# ifndef __need_getopt
extern int getopt_long ();
extern int getopt_long_only ();
extern int _getopt_internal ();
# endif
#undef __need_getopt
