#define	NS_PER_MS	1000000
#define	NS_PER_US	1000
extern int getopt(int, char * const *, const char *);
int gettimeofday(struct timeval *tv, struct timezone *tz)
typedef enum  FTYPE;
DB_ENV	 *db_init __P((const char *, const char *, int, u_int32_t));
int	  hpopulate __P((DB *, int, int, int, int));
int	  populate __P((DB *, u_int32_t, u_int32_t, int, const char *));
u_int32_t random_id __P((FTYPE, int, int, int));
u_int32_t random_int __P((u_int32_t, u_int32_t));
int	  tp_populate __P((DB_ENV *, int, int, int, int, int));
int	  tp_run __P((DB_ENV *, int, int, int, int, int));
int	  tp_txn __P((DB_ENV *, DB *, DB *, DB *, DB *, int, int, int, int));
int	  invarg __P((const char *, int, const char *));
int	  main __P((int, char *[]));
int	  usage __P((const char *));
#define	TELLERS_PER_BRANCH	10
#define	ACCOUNTS_PER_TELLER	10000
#define	HISTORY_PER_BRANCH	2592000
#define	ACCOUNTS	 1000000
#define	BRANCHES	      10
#define	TELLERS		     100
#define	HISTORY		25920000
#define	ACCOUNTS	    1000
#define	BRANCHES	      10
#define	TELLERS		     100
#define	HISTORY		   10000
#define	ACCOUNTS	     500
#define	BRANCHES	      10
#define	TELLERS		      50
#define	HISTORY		    5000
#if !defined(VALID_SCALING) && !defined(TINY) && !defined(VERY_TINY)
#define	ACCOUNTS	  100000
#define	BRANCHES	      10
#define	TELLERS		     100
#define	HISTORY		  259200
#define	HISTORY_LEN	    100
#define	RECLEN		    100
#define	BEGID		1000000
typedef struct _defrec  defrec;
typedef struct _histrec  histrec;
char *progname = "ex_tpcb";
int
main(argc, argv)
int argc;
char *argv[];
int
invarg(progname, arg, str)
const char *progname;
int arg;
const char *str;
int
usage(progname)
const char *progname;
DB_ENV *
db_init(home, prefix, cachesize, flags)
const char *home, *prefix;
int cachesize;
u_int32_t flags;
int
tp_populate(env, accounts, branches, history, tellers, verbose)
DB_ENV *env;
int accounts, branches, history, tellers, verbose;
int
populate(dbp, start_id, balance, nrecs, msg)
DB *dbp;
u_int32_t start_id, balance;
int nrecs;
const char *msg;
int
hpopulate(dbp, history, accounts, branches, tellers)
DB *dbp;
int history, accounts, branches, tellers;
u_int32_t
random_int(lo, hi)
u_int32_t lo, hi;
u_int32_t
random_id(type, accounts, branches, tellers)
FTYPE type;
int accounts, branches, tellers;
int
tp_run(dbenv, n, accounts, branches, tellers, verbose)
DB_ENV *dbenv;
int n, accounts, branches, tellers, verbose;
int
tp_txn(dbenv, adb, bdb, tdb, hdb, accounts, branches, tellers, verbose)
DB_ENV *dbenv;
DB *adb, *bdb, *tdb, *hdb;
int accounts, branches, tellers, verbose;
