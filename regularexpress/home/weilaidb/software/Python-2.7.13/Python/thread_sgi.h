#define HDR_SIZE        2680
#define MAXPROC         100
static usptr_t *shared_arena;
static ulock_t count_lock;
static ulock_t wait_lock;
static int waiting_for_threads;
static int nthreads;
static int exit_status;
static int exiting;
static pid_t my_pid;
static struct pidlist  pidlist[MAXPROC];
static int maxpidindex;
static void PyThread__init_thread(void)
static void clean_threads(void)
long PyThread_start_new_thread(void (*func)(void *), void *arg)
long PyThread_get_thread_ident(void)
void PyThread_exit_thread(void)
PyThread_type_lock PyThread_allocate_lock(void)
void PyThread_free_lock(PyThread_type_lock lock)
int PyThread_acquire_lock(PyThread_type_lock lock, int waitflag)
void PyThread_release_lock(PyThread_type_lock lock)
