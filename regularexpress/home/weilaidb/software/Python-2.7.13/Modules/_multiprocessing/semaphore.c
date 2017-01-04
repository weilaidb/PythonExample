enum ;
typedef struct  SemLockObject;
#define ISMINE(o) (o->count > 0 && PyThread_get_thread_ident() == o->last_tid)
#define SEM_FAILED NULL
#define SEM_CLEAR_ERROR() SetLastError(0)
#define SEM_GET_LAST_ERROR() GetLastError()
#define SEM_CREATE(name, val, max) CreateSemaphore(NULL, val, max, NULL)
#define SEM_CLOSE(sem) (CloseHandle(sem) ? 0 : -1)
#define SEM_GETVALUE(sem, pval) _GetSemaphoreValue(sem, pval)
#define SEM_UNLINK(name) 0
static int
_GetSemaphoreValue(HANDLE handle, long *value)
static PyObject *
semlock_acquire(SemLockObject *self, PyObject *args, PyObject *kwds)
static PyObject *
semlock_release(SemLockObject *self, PyObject *args)
#define SEM_CLEAR_ERROR()
#define SEM_GET_LAST_ERROR() 0
#define SEM_CREATE(name, val, max) sem_open(name, O_CREAT | O_EXCL, 0600, val)
#define SEM_CLOSE(sem) sem_close(sem)
#define SEM_GETVALUE(sem, pval) sem_getvalue(sem, pval)
#define SEM_UNLINK(name) sem_unlink(name)
#  undef SEM_FAILED
#  define SEM_FAILED ((sem_t *)-1)
#  define sem_unlink(name) 0
#  define sem_timedwait(sem,deadline) sem_timedwait_save(sem,deadline,_save)
int
sem_timedwait_save(sem_t *sem, struct timespec *deadline, PyThreadState *_save)
static PyObject *
semlock_acquire(SemLockObject *self, PyObject *args, PyObject *kwds)
static PyObject *
semlock_release(SemLockObject *self, PyObject *args)
static PyObject *
newsemlockobject(PyTypeObject *type, SEM_HANDLE handle, int kind, int maxvalue)
static PyObject *
semlock_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
static PyObject *
semlock_rebuild(PyTypeObject *type, PyObject *args)
static void
semlock_dealloc(SemLockObject* self)
static PyObject *
semlock_count(SemLockObject *self)
static PyObject *
semlock_ismine(SemLockObject *self)
static PyObject *
semlock_getvalue(SemLockObject *self)
static PyObject *
semlock_iszero(SemLockObject *self)
static PyObject *
semlock_afterfork(SemLockObject *self)
static PyMethodDef semlock_methods[] = ;
static PyMemberDef semlock_members[] = ;
PyTypeObject SemLockType = ;
