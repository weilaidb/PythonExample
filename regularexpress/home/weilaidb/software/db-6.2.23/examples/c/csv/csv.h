#define	WIN32_LEAN_AND_MEAN	1
extern int getopt(int, char * const *, const char *);
extern char *optarg;
extern int optind;
#define	HAVE_WILDCARD_SUPPORT	1
#define	MAP_VERSION	1
typedef enum  input_fmt;
#define	OFFSET_LEN(offset, indx)					\
(((offset)[(indx) + 1] - (offset)[(indx)]) - 1)
#define	OFFSET_OOB	0
typedef enum  OPERATOR;
typedef enum  datatype;
typedef struct  DbField;
extern DB	 *db;
extern DbField	  fieldlist[];
extern DB_ENV	 *dbenv;
extern char	 *progname;
extern int	  verbose;
#undef strcasecmp
#define	strcasecmp _stricmp
#undef strncasecmp
#define	strncasecmp _strnicmp
#define	mkdir(d, perm) _mkdir(d)
