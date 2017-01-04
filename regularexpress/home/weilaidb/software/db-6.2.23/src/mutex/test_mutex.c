extern int getopt(int, char * const *, const char *);
typedef HANDLE os_pid_t;
typedef HANDLE os_thread_t;
#define	os_thread_create(thrp, attr, func, arg)				\
(((*(thrp) = CreateThread(NULL, 0,					\
(LPTHREAD_START_ROUTINE)(func), (arg), 0, NULL)) == NULL) ? -1 : 0)
#define	os_thread_join(thr, statusp)					\
((WaitForSingleObject((thr), INFINITE) == WAIT_OBJECT_0) &&		\
GetExitCodeThread((thr), (LPDWORD)(statusp)) ? 0 : -1)
#define	os_thread_self() GetCurrentThreadId()
typedef pid_t os_pid_t;
typedef pthread_t os_thread_t;
#define	os_thread_create(thrp, attr, func, arg)				\
pthread_create((thrp), (attr), (func), (arg))
#define	os_thread_join(thr, statusp) pthread_join((thr), (statusp))
#define	os_thread_self() pthread_self()
#define	OS_BAD_PID ((os_pid_t)-1)
#define	TESTDIR		"TESTDIR"
#define	MT_FILE		"TESTDIR/mutex.file"
#define	MT_FILE_QUIT	"TESTDIR/mutex.file.quit"
typedef struct  TM;
DB_ENV	*dbenv;
ENV	*env;
size_t	 len;
u_int	alignment = 0;
u_int8_t *gm_addr;
u_int8_t *lm_addr;
u_int8_t *tm_addr;
os_thread_t *kidsp;
os_thread_t  wakep;
u_int	nprocs = 1;
u_int	nthreads = 20;
u_int	nprocs = 5;
u_int	nthreads = 4;
u_int	maxlocks = 20;
u_int	nlocks = 10000;
int	verbose;
const char *progname;
void	 data_off(u_int8_t *, DB_FH *);
void	 data_on(u_int8_t **, u_int8_t **, u_int8_t **, DB_FH **, int);
int	 locker_start(u_long);
int	 locker_wait(void);
os_pid_t os_spawn(const char *, char *const[]);
int	 os_wait(os_pid_t *, u_int);
void	*run_lthread(void *);
void	*run_wthread(void *);
os_pid_t spawn_proc(u_long, char *, char *);
void	 tm_env_close(void);
int	 tm_env_init(void);
void	 tm_mutex_destroy(void);
void	 tm_mutex_init(void);
void	 tm_mutex_stats(void);
int	 usage(void);
int	 wakeup_start(u_long);
int	 wakeup_wait(void);
int
main(argc, argv)
int argc;
char *argv[];
int
locker_start(id)
u_long id;
int
locker_wait()
void *
run_lthread(arg)
void *arg;
int
wakeup_start(id)
u_long id;
int
wakeup_wait()
void *
run_wthread(arg)
void *arg;
int
tm_env_init()
void
tm_env_close()
void
tm_mutex_init()
void
tm_mutex_destroy()
void
tm_mutex_stats()
void
data_on(gm_addrp, tm_addrp, lm_addrp, fhpp, init)
u_int8_t **gm_addrp, **tm_addrp, **lm_addrp;
DB_FH **fhpp;
int init;
void
data_off(addr, fhp)
u_int8_t *addr;
DB_FH *fhp;
int
usage()
int
os_wait(procs, n)
os_pid_t *procs;
u_int n;
os_pid_t
spawn_proc(id, tmpath, typearg)
u_long id;
char *tmpath, *typearg;
os_pid_t
os_spawn(path, argv)
const char *path;
char *const argv[];
