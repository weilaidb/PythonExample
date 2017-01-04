extern char *__db_rpath(const char *);
int	__db_getopt_reset;
int	opterr = 1,
optind = 1,
optopt,
optreset;
char	*optarg;
#undef	BADCH
#define	BADCH	(int)'?'
#undef	BADARG
#define	BADARG	(int)':'
#undef	EMSG
#define	EMSG	""
int
getopt(nargc, nargv, ostr)
int nargc;
char * const *nargv;
const char *ostr;
