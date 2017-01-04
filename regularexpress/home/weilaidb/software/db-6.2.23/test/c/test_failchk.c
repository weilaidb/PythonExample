extern int getopt(int, char * const *, const char *);
void __os_gettime __P((const ENV *, struct timespec *, int));
#define EXIT_TEST_ABORTED	101
#define	COMPQUIET(n, v)	do  while (0)
#define	UTIL_ANNOTATE_STRLEN	64
extern int sched_yield __P((void));
extern pthread_key_t TxnCommitMutex;
int	db_init __P((DB_ENV **, u_int32_t));
void   *deadlock __P((void *));
void	fatal __P((const char *, int));
void	onint __P((int));
int	main __P((int, char *[]));
void	notice_event __P((DB_ENV *, u_int32_t, void *));
int	reader __P((int));
void	stats __P((void));
void   *failchk __P((void *));
int	say_is_alive __P((DB_ENV *, pid_t, db_threadid_t, unsigned));
void   *trickle __P((void *));
void   *tstart __P((void *));
int	usage __P((const char *));
const char   *util_annotate __P((const DB_ENV *, char *, size_t));
void	util_errcall __P((const DB_ENV *, const char *, const char *));
void	util_msgcall __P((const DB_ENV *, const char *, const char *));
void	word __P((void));
int	writer __P((int));
struct _statistics  *perf;
const char *Progname = "test_failchk";
#define	DATABASE	"access.db"
#define	WORDLIST	"../test/tcl/wordlist"
time_t	EndTime;
int	Duration = 60;
char	*Home = "TESTDIR";
int	Punish;
int	Nlist = 1000;
int	Nreaders = 4;
int	StatsInterval = 60;
int	TxnInterval = 1000;
int	Verbose;
int	Nwriters = 4;
int	ActiveThreads = 0;
DB     *Dbp;
DB_ENV *DbEnv;
int	EnvOpenFlags =  DB_CREATE | DB_THREAD | DB_REGISTER;
int	Failchk = 0;
char  **List;
int	MutexDied = 0;
int	Nthreads;
int	Quit = 0;
int	PrintStats = 0;
int
main(argc, argv)
int argc;
char *argv[];
int
reader(id)
int id;
int
writer(id)
int id;
void
stats()
const char *
util_annotate(dbenv, header, header_size)
const DB_ENV *dbenv;
char *header;
size_t header_size;
void
util_errcall(dbenv, errpfx, msg)
const DB_ENV *dbenv;
const char *errpfx;
const char *msg;
void
util_msgcall(dbenv, msgpfx, msg)
const DB_ENV *dbenv;
const char *msgpfx;
const char *msg;
int
db_init(dbenvp, flags)
DB_ENV **dbenvp;
u_int32_t flags;
void *
tstart(arg)
void *arg;
void *
deadlock(arg)
void *arg;
void *
trickle(arg)
void *arg;
void *
failchk(arg)
void *arg;
void
word()
void
fatal(msg, err)
const char *msg;
int err;
int
usage(msg)
const char *msg;
void
onint(signo)
int signo;
void notice_event(dbenv, event, info)
DB_ENV *dbenv;
u_int32_t event;
void *info;
int
say_is_alive(dbenv, pid, tid, flags)
DB_ENV *dbenv;
pid_t pid;
db_threadid_t tid;
u_int32_t flags;
