#define	BULKDIR			"EX_BULK_DIR"
#define	DATABASE_FILE		"ex_bulk.db"
#define	DB_MAXIMUM_PAGESIZE	(64 * 1024)
#define	PRIMARY_NAME		"primary"
#define	SECONDARY_NAME		"secondary"
#define	DATALEN		20
#define	STRINGLEN	(DATALEN - sizeof(int))
typedef struct bulk_record  bulk_record_t;
const char	DataString[] = "0123456789abcdef";
extern int getopt(int, char * const *, const char *);
int
gettimeofday(struct timeval *tv, struct timezone *tz)
#define CLEANUP_CMD "rmdir " BULKDIR " /q/s"
#define CLEANUP_CMD "rm -rf " BULKDIR
int	bulk_dbt_init(DBT *, int);
int	bulk_delete(DB_ENV *, DB *, int, int, int, long long *, int *, int);
int	bulk_delete_sec(DB_ENV *, DB *, int, int, int, long long *, int *, int);
int	bulk_insert(DB_ENV *, DB *, int, int, int, long long *, int *, int);
int	bulk_get(DB_ENV *, DB *, int, int, int, int, long long *, int);
int	compare_int(DB *, const DBT *, const DBT *, size_t *);
int	db_init(DB_ENV *, DB **, DB**, int, int, int);
DB_ENV	*env_init(const char *, const char *, u_int);
int	get_first_str(DB *, const DBT *, const DBT *, DBT *);
int	rotate_string(const char *, char *, int);
void	timer_start(struct timeval *start);
double	timer_end(const struct timeval *start);
int	main(int, char *[]);
void	usage(void);
const char	*Progname = "ex_bulk";
void
timer_start(struct timeval *timer)
double
timer_end(const struct timeval *start)
int
main(argc, argv)
int argc;
char *argv[];
int
bulk_dbt_init(bulk, itemcount)
DBT *bulk;
int itemcount;
int
bulk_insert(dbenv, dbp, numkeys, dups, batchsize, itemcountp, batchcountp, verbose)
DB_ENV *dbenv;
DB *dbp;
int numkeys;
int dups;
int batchsize;
long long *itemcountp;
int *batchcountp;
int verbose;
int
bulk_delete(dbenv, dbp, numkeys, dups, batchsize, itemcountp, batchcountp, verbose)
DB_ENV *dbenv;
DB *dbp;
int numkeys;
int dups;
int batchsize;
long long *itemcountp;
int *batchcountp;
int verbose;
int
bulk_delete_sec(dbenv, dbp,
numkeys, pairs, batchsize, itemcountp, batchcountp, verbose)
DB_ENV *dbenv;
DB *dbp;
int numkeys;
int pairs;
int batchsize;
long long *itemcountp;
int *batchcountp;
int verbose;
int
bulk_get(dbenv, dbp, numkeys, dups, batchsize, iterations, countp, verbose)
DB_ENV *dbenv;
DB *dbp;
int numkeys;
int dups;
int batchsize;
int iterations;
long long *countp;
int verbose;
int
compare_int(dbp, a, b, locp)
DB *dbp;
const DBT *a, *b;
size_t *locp;
int
db_init(dbenv, dbpp, sdbpp, dups, secondaryflag, pagesize)
DB_ENV *dbenv;
DB **dbpp;
DB **sdbpp;
int dups;
int secondaryflag;
int pagesize;
DB_ENV *
env_init(home, progname, cachesize)
const char *home;
const char *progname;
u_int cachesize;
int
get_first_str(sdbp, key, data, skey)
DB *sdbp;
const DBT *key;
const DBT *data;
DBT *skey;
int
rotate_string(source, dest, offset)
const char *source;
char *dest;
int offset;
void
usage()
