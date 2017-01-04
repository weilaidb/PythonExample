#define INCL_DOSPROCESS
#define INCL_DOSSEMAPHORES
#if defined(PYCC_GCC)
long PyThread_get_thread_ident(void);
#if !defined(THREAD_STACK_SIZE)
#define THREAD_STACK_SIZE       0x10000
#define OS2_STACKSIZE(x)        (x ? x : THREAD_STACK_SIZE)
static void
PyThread__init_thread(void)
long
PyThread_start_new_thread(void (*func)(void *), void *arg)
long
PyThread_get_thread_ident(void)
void
PyThread_exit_thread(void)
typedef struct os2_lock_t  *type_os2_lock;
PyThread_type_lock
PyThread_allocate_lock(void)
void
PyThread_free_lock(PyThread_type_lock aLock)
int
PyThread_acquire_lock(PyThread_type_lock aLock, int waitflag)
void
PyThread_release_lock(PyThread_type_lock aLock)
#define THREAD_MIN_STACKSIZE    0x8000
#define THREAD_MAX_STACKSIZE    0x2000000
static int
_pythread_os2_set_stacksize(size_t size)
#define THREAD_SET_STACKSIZE(x) _pythread_os2_set_stacksize(x)
