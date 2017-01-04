extern int getopt(int, char * const *, const char *);
#define	COMPQUIET(n, v)	do  while (0)
extern int sched_yield __P((void));
int	db_init __P((const char *));
void   *deadlock __P((void *));
void	fatal __P((const char *, int, int));
void	onint __P((int));
int	main __P((int, char *[]));
int	reader __P((int));
void	stats __P((void));
void   *trickle __P((void *));
void   *tstart __P((void *));
int	usage __P((void));
void	word __P((void));
int	writer __P((int));
time_t	EndTime;
int	Quit = 0;
struct _statistics  *perf;
const char
*progname = "ex_thread";
#define	DATABASE	"access.db"
#define	WORDLIST	"../test/tcl/wordlist"
int	punish;
int	nlist;
int	nreaders;
int	verbose;
int	nwriters;
DB     *dbp;
DB_ENV *dbenv;
int	nthreads;
char  **list;
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
int
db_init(home)
const char *home;
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
fatal(msg, err, syserr)
const char *msg;
int err, syserr;
int
usage()
void
onint(signo)
int signo;
