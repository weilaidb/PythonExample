#define	_BENCH_H_
#if DB_VERSION_MAJOR < 4 || DB_VERSION_MAJOR == 4 && DB_VERSION_MINOR < 5
#define	WIN32_LEAN_AND_MEAN	1
#define	TESTDIR		"TESTDIR"
#define	TESTFILE	"test_micro.db"
#define	DB_BENCH_ASSERT(e) do  while (0)
#define	NS_PER_SEC	1000000000
#define	NS_PER_US	1000
#define	MS_PER_NS	1000000
#define	SET_TIMER_FROM_GETRUSAGE(tp) do  while (0);
#define	TIMER_START	SET_TIMER_FROM_GETRUSAGE(&__start_time);
#define	TIMER_STOP	SET_TIMER_FROM_GETRUSAGE(&__end_time);
#elif defined(DB_WIN32) && !defined(DB_WINCE)
#define	SET_TIMER_FROM_GETPROCESSTIMES(tp) do  while (0);
#define	TIMER_START	SET_TIMER_FROM_GETPROCESSTIMES(&__start_time);
#define	TIMER_STOP	SET_TIMER_FROM_GETPROCESSTIMES(&__end_time);
#if DB_VERSION_MAJOR > 4 || DB_VERSION_MAJOR == 4 && DB_VERSION_MINOR > 6
#define	TIMER_START	__os_gettime(NULL, &__start_time, 1)
#define	TIMER_STOP	__os_gettime(NULL, &__end_time, 1)
#define	TIMER_START	__os_gettime(NULL, &__start_time)
#define	TIMER_STOP	__os_gettime(NULL, &__end_time)
#if defined(HAVE_CLOCK_GETTIME)
typedef struct timespec db_timespec;
typedef struct  db_timespec;
#define	timespecadd(vvp, uvp)						\
do  while (0)
#define	timespecsub(vvp, uvp)						\
do  while (0)
#define	TIMER_START	CLOCK(__start_time)
#define	TIMER_STOP	CLOCK(__end_time)
#if defined(HAVE_CLOCK_GETTIME)
#define	CLOCK(tm) do  while (0)
#elif defined(DB_WIN32)
#define	CLOCK(tm) do  while (0)
#define	CLOCK(tm) do  while (0)
extern db_timespec __start_time, __end_time;
#define	TIMER_GET(tm) do  while (0)
#define	TIMER_DISPLAY(ops) do  while (0)
#define	TIME_DISPLAY(ops, tm) do  while (0)
extern char *progname;
int  b_curalloc __P((int, char *[]));
int  b_curwalk __P((int, char *[]));
int  b_del __P((int, char *[]));
int  b_get __P((int, char *[]));
int  b_inmem __P((int, char *[]));
int  b_latch __P((int, char *[]));
int  b_load __P((int, char *[]));
int  b_open __P((int, char *[]));
int  b_put __P((int, char *[]));
int  b_recover __P((int, char *[]));
int  b_txn __P((int, char *[]));
int  b_txn_write __P((int, char *[]));
int  b_uname __P((void));
void b_util_abort __P((void));
int  b_util_dir_setup __P((void));
int  b_util_dir_teardown __P((void));
int  b_util_have_hash __P((void));
int  b_util_have_heap __P((void));
int  b_util_have_queue __P((void));
int  b_util_unlink __P((char *));
int  b_workload __P((int, char *[]));
u_int32_t part_callback __P((DB *, DBT *));
