typedef struct  threadinfo_t;
static void *latch_threadmain __P((void *));
static int   time_latches __P((DB_ENV *, db_mutex_t, int));
#define	LATCH_THREADS_MAX	100
#if DB_VERSION_MAJOR <4 || DB_VERSION_MAJOR == 4 && DB_VERSION_MINOR < 7
#define	ENV_ARG(dbenv)	(dbenv)
#define	ENV_ARG(dbenv)	((dbenv)->env)
static int CurrentCounter = 0;
static int   latch_usage __P((void));
static int
latch_usage()
static int time_latches(dbenv, mutex, iterations)
DB_ENV *dbenv;
db_mutex_t mutex;
int iterations;
static void *
latch_threadmain(arg)
void *arg;
int
b_latch(argc, argv)
int argc;
char *argv[];
