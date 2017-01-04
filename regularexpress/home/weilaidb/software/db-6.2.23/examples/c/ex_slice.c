extern int getopt(int, char * const *, const char *);
#define MEGABYTE	(1024 * 1024)
#define GIGABYTE	(MEGABYTE * 1024ULL)
#define MAXARGC		40
#define COMPQUIET(v, n)
#define ABS(v)		((v) < 0 ? (-v) : (v))
extern int sched_yield __P((void));
int	db_init __P((const char *, DB_ENV **, u_int32_t));
void   *deadlock __P((void *));
void	fatal __P((const char *, int, ...));
void	onint __P((int));
int	main __P((int, char *[]));
int	open_database __P((DB_ENV *, const char *, DB **, u_int32_t));
int	preload __P((DB *, int));
int	reader __P((int));
void	stats __P((long, int));
void	slice_stats __P((void));
void   *trickle __P((void *));
void   *tstart __P((void *));
int	usage __P((int, const char *));
void	word __P((void));
int	writer __P((int));
int	verify __P((void));
typedef enum SliceKey  SliceKeyType;
char	 *ConfigLines = NULL;
int	  Checkpoint = 0;
int	  Duration;
int	  DbType = DB_BTREE;
char	 *Home = "SLICE";
SliceKeyType KeyType =
SliceKeyWhole;
char	 *LogWriteMode = "write_nosync";
int	  LockerCache = 0;
int	  MultiProc = 0;
long long NRecords = 1000000;
int	  NoCreate = 0;
int	  OverflowSize = 0;
long long OpCount;
int	  Pagesize = 8192;
char	  ProcessName[50];
int	  RmDir = 0;
int	  Quiet = 0;
int	  NReaders = 0;
int	  NSlices = -1;
int	  Seed;
int	  ThreadFlag = 0;
int	  Trickle = 0;
int	  Update = 0;
int	  Verbose = 0;
int	  Verify = 0;
int	  NWriters = 4;
int	  Yield = 0;
int	  SubProcess = 0;
struct _statistics  *Perf;
const char *Progname = "ex_slice";
#define	DATABASE	"slice.db"
#define	WORDLIST	"../test/tcl/wordlist"
DB        *Dbp;
DB_ENV    *DbEnv;
DB_ENV   **Slices;
int	   ActiveThreads;
time_t	   EndTime;
int	   KeepFsync = 0;
int	   NThreads;
int	   Quit = 0;
time_t	   Setup;
long	   CpuUse;
typedef struct slicestats  SliceStats_t;
SliceStats_t *SliceStats = NULL;
struct entry ;
struct entry *WordList;
long
get_time_ms()
long
get_cpu_ms()
long long
get_scaled(char *s)
void
print_help()
#define PROPT_BOOL(optchar, var )					\
if (var) 							\
printf("-%c ", optchar);				\
#define PROPT_INT(optchar, var )					\
if (var) 							\
printf("-%c %d ", optchar, var);			\
#define PROPT_LL(optchar, var )						\
if (var) 							\
printf("-%c %lld ", optchar, var);			\
#define PROPT_STR(optchar, var )					\
if (var != NULL) 						\
printf("-%c \"%s\" ", optchar, var);			\
void
print_options()
int nop()
int
start_processes(int argc, char **argv)
int
main(argc, argv)
int argc;
char *argv[];
int
single_slice_field(const DB *db, const DBT *key, DBT *slice)
int
multiple_slice_field(const DB *db, const DBT *key, DBT *slice)
int
get_slice_number(dbp, key)
DB *dbp;
DBT *key;
int
reader(id)
int id;
int
writer(id)
int id;
int
verify()
void
stats(time_sofar, final)
long time_sofar;
int final;
void
slice_stats()
int
db_init(home, dbenvp, open_flags)
const char *home;
DB_ENV **dbenvp;
u_int32_t open_flags;
int
open_database(dbenv, name, dbpp, open_flags)
DB_ENV *dbenv;
const char *name;
DB **dbpp;
u_int32_t open_flags;
void *
tstart(arg)
void *arg;
void *
deadlock(arg)
void *arg;
void *
trickle(arg)
void *arg;
void
word()
void
fatal(const char *msg, int err, ...)
int
usage(option, bad_value)
int option;
const char *bad_value;
void
onint(signo)
int signo;
