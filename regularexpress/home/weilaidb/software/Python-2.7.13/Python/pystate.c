#define RTLD_LAZY 1
static PyThread_type_lock head_mutex = NULL;
#define HEAD_INIT() (void)(head_mutex || (head_mutex = PyThread_allocate_lock()))
#define HEAD_LOCK() PyThread_acquire_lock(head_mutex, WAIT_LOCK)
#define HEAD_UNLOCK() PyThread_release_lock(head_mutex)
static PyInterpreterState *autoInterpreterState = NULL;
static int autoTLSkey = 0;
#define HEAD_INIT()
#define HEAD_LOCK()
#define HEAD_UNLOCK()
static PyInterpreterState *interp_head = NULL;
PyThreadState *_PyThreadState_Current = NULL;
PyThreadFrameGetter _PyThreadState_GetFrame = NULL;
static void _PyGILState_NoteThreadState(PyThreadState* tstate);
PyInterpreterState *
PyInterpreterState_New(void)
void
PyInterpreterState_Clear(PyInterpreterState *interp)
static void
zapthreads(PyInterpreterState *interp)
void
PyInterpreterState_Delete(PyInterpreterState *interp)
static struct _frame *
threadstate_getframe(PyThreadState *self)
static PyThreadState *
new_threadstate(PyInterpreterState *interp, int init)
PyThreadState *
PyThreadState_New(PyInterpreterState *interp)
PyThreadState *
_PyThreadState_Prealloc(PyInterpreterState *interp)
void
_PyThreadState_Init(PyThreadState *tstate)
void
PyThreadState_Clear(PyThreadState *tstate)
static void
tstate_delete_common(PyThreadState *tstate)
void
PyThreadState_Delete(PyThreadState *tstate)
void
PyThreadState_DeleteCurrent()
PyThreadState *
PyThreadState_Get(void)
PyThreadState *
PyThreadState_Swap(PyThreadState *newts)
PyObject *
PyThreadState_GetDict(void)
int
PyThreadState_SetAsyncExc(long id, PyObject *exc)
PyInterpreterState *
PyInterpreterState_Head(void)
PyInterpreterState *
PyInterpreterState_Next(PyInterpreterState *interp)
PyThreadState *
PyInterpreterState_ThreadHead(PyInterpreterState *interp)
PyThreadState *
PyThreadState_Next(PyThreadState *tstate)
PyObject *
_PyThread_CurrentFrames(void)
static int
PyThreadState_IsCurrent(PyThreadState *tstate)
void
_PyGILState_Init(PyInterpreterState *i, PyThreadState *t)
void
_PyGILState_Fini(void)
static void
_PyGILState_NoteThreadState(PyThreadState* tstate)
PyThreadState *
PyGILState_GetThisThreadState(void)
PyGILState_STATE
PyGILState_Ensure(void)
void
PyGILState_Release(PyGILState_STATE oldstate)
