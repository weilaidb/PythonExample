#if defined(__APPLE__) || defined(HAVE_PTHREAD_DESTRUCTOR)
#define destructor xxdestructor
#if defined(__APPLE__) || defined(HAVE_PTHREAD_DESTRUCTOR)
#undef destructor
#define THREAD_STACK_SIZE       0
#if (defined(__APPLE__) || defined(__FreeBSD__)) && defined(THREAD_STACK_SIZE) && THREAD_STACK_SIZE == 0
#undef  THREAD_STACK_SIZE
#define THREAD_STACK_SIZE       0x400000
#define THREAD_STACK_MIN        0x8000
#error "THREAD_STACK_SIZE defined but _POSIX_THREAD_ATTR_STACKSIZE undefined"
#if (_POSIX_SEMAPHORES+0) == -1
#define HAVE_BROKEN_POSIX_SEMAPHORES
#if __FreeBSD_version >= 500000 && __FreeBSD_version < 504101
#undef PTHREAD_SYSTEM_SCHED_SUPPORTED
#if !defined(pthread_attr_default)
#  define pthread_attr_default ((pthread_attr_t *)NULL)
#if !defined(pthread_mutexattr_default)
#  define pthread_mutexattr_default ((pthread_mutexattr_t *)NULL)
#if !defined(pthread_condattr_default)
#  define pthread_condattr_default ((pthread_condattr_t *)NULL)
#if defined(_POSIX_SEMAPHORES) && !defined(HAVE_BROKEN_POSIX_SEMAPHORES)
#  define USE_SEMAPHORES
#  undef USE_SEMAPHORES
#if defined(HAVE_PTHREAD_SIGMASK) && !defined(HAVE_BROKEN_PTHREAD_SIGMASK)
#  define SET_THREAD_SIGMASK pthread_sigmask
#  define SET_THREAD_SIGMASK sigprocmask
typedef struct  pthread_lock;
#define CHECK_STATUS(name)  if (status != 0)
static
void _noop(void)
static void
PyThread__init_thread(void)
static void
PyThread__init_thread(void)
long
PyThread_start_new_thread(void (*func)(void *), void *arg)
long
PyThread_get_thread_ident(void)
void
PyThread_exit_thread(void)
PyThread_type_lock
PyThread_allocate_lock(void)
void
PyThread_free_lock(PyThread_type_lock lock)
static int
fix_status(int status)
int
PyThread_acquire_lock(PyThread_type_lock lock, int waitflag)
void
PyThread_release_lock(PyThread_type_lock lock)
PyThread_type_lock
PyThread_allocate_lock(void)
void
PyThread_free_lock(PyThread_type_lock lock)
int
PyThread_acquire_lock(PyThread_type_lock lock, int waitflag)
void
PyThread_release_lock(PyThread_type_lock lock)
static int
_pythread_pthread_set_stacksize(size_t size)
#define THREAD_SET_STACKSIZE(x) _pythread_pthread_set_stacksize(x)
