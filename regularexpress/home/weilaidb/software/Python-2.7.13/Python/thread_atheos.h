extern int exit_thread(int);
#define FASTLOCK
typedef struct fastmutex  fastmutex_t;
static int fastmutex_create(const char *name, fastmutex_t * mutex);
static int fastmutex_destroy(fastmutex_t * mutex);
static int fastmutex_lock(fastmutex_t * mutex);
static int fastmutex_timedlock(fastmutex_t * mutex, bigtime_t timeout);
static int fastmutex_unlock(fastmutex_t * mutex);
static int fastmutex_create(const char *name, fastmutex_t * mutex)
static int fastmutex_destroy(fastmutex_t * mutex)
static int fastmutex_lock(fastmutex_t * mutex)
static int fastmutex_timedlock(fastmutex_t * mutex, bigtime_t timeout)
static int fastmutex_unlock(fastmutex_t * mutex)
static void PyThread__init_thread(void)
static atomic_t thread_count = 0;
long PyThread_start_new_thread(void (*func) (void *), void *arg)
long PyThread_get_thread_ident(void)
void PyThread_exit_thread(void)
static atomic_t lock_count = 0;
PyThread_type_lock PyThread_allocate_lock(void)
void PyThread_free_lock(PyThread_type_lock lock)
int PyThread_acquire_lock(PyThread_type_lock lock, int waitflag)
void PyThread_release_lock(PyThread_type_lock lock)
