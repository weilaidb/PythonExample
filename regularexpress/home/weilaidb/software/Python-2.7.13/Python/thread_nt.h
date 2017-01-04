typedef struct NRMUTEX  NRMUTEX, *PNRMUTEX ;
BOOL
InitializeNonRecursiveMutex(PNRMUTEX mutex)
VOID
DeleteNonRecursiveMutex(PNRMUTEX mutex)
DWORD
EnterNonRecursiveMutex(PNRMUTEX mutex, BOOL wait)
BOOL
LeaveNonRecursiveMutex(PNRMUTEX mutex)
PNRMUTEX
AllocNonRecursiveMutex(void)
void
FreeNonRecursiveMutex(PNRMUTEX mutex)
long PyThread_get_thread_ident(void);
static void
PyThread__init_thread(void)
typedef struct  callobj;
#if defined(MS_WINCE)
static DWORD WINAPI
static unsigned __stdcall
bootstrap(void *call)
long
PyThread_start_new_thread(void (*func)(void *), void *arg)
long
PyThread_get_thread_ident(void)
void
PyThread_exit_thread(void)
PyThread_type_lock
PyThread_allocate_lock(void)
void
PyThread_free_lock(PyThread_type_lock aLock)
int
PyThread_acquire_lock(PyThread_type_lock aLock, int waitflag)
void
PyThread_release_lock(PyThread_type_lock aLock)
#define THREAD_MIN_STACKSIZE    0x8000
#define THREAD_MAX_STACKSIZE    0x10000000
static int
_pythread_nt_set_stacksize(size_t size)
#define THREAD_SET_STACKSIZE(x) _pythread_nt_set_stacksize(x)
#define Py_HAVE_NATIVE_TLS
int
PyThread_create_key(void)
void
PyThread_delete_key(int key)
int
PyThread_set_key_value(int key, void *value)
void *
PyThread_get_key_value(int key)
void
PyThread_delete_key_value(int key)
void
PyThread_ReInitTLS(void)
