#define Py_CEVAL_H
PyAPI_FUNC(PyObject *) PyEval_CallObjectWithKeywords(
PyObject *, PyObject *, PyObject *);
#define PyEval_CallObject(func,arg) \
PyEval_CallObjectWithKeywords(func, arg, (PyObject *)NULL)
PyAPI_FUNC(PyObject *) PyEval_CallFunction(PyObject *obj,
const char *format, ...);
PyAPI_FUNC(PyObject *) PyEval_CallMethod(PyObject *obj,
const char *methodname,
const char *format, ...);
PyAPI_FUNC(void) PyEval_SetProfile(Py_tracefunc, PyObject *);
PyAPI_FUNC(void) PyEval_SetTrace(Py_tracefunc, PyObject *);
struct _frame;
PyAPI_FUNC(PyObject *) PyEval_GetBuiltins(void);
PyAPI_FUNC(PyObject *) PyEval_GetGlobals(void);
PyAPI_FUNC(PyObject *) PyEval_GetLocals(void);
PyAPI_FUNC(struct _frame *) PyEval_GetFrame(void);
PyAPI_FUNC(int) PyEval_GetRestricted(void);
PyAPI_FUNC(int) PyEval_MergeCompilerFlags(PyCompilerFlags *cf);
PyAPI_FUNC(int) Py_FlushLine(void);
PyAPI_FUNC(int) Py_AddPendingCall(int (*func)(void *), void *arg);
PyAPI_FUNC(int) Py_MakePendingCalls(void);
PyAPI_FUNC(void) Py_SetRecursionLimit(int);
PyAPI_FUNC(int) Py_GetRecursionLimit(void);
#define Py_EnterRecursiveCall(where)                                    \
(_Py_MakeRecCheck(PyThreadState_GET()->recursion_depth) &&  \
_Py_CheckRecursiveCall(where))
#define Py_LeaveRecursiveCall()                         \
(--PyThreadState_GET()->recursion_depth)
PyAPI_FUNC(int) _Py_CheckRecursiveCall(const char *where);
PyAPI_DATA(int) _Py_CheckRecursionLimit;
#  define _Py_MakeRecCheck(x)  (++(x) > --_Py_CheckRecursionLimit)
#  define _Py_MakeRecCheck(x)  (++(x) > _Py_CheckRecursionLimit)
PyAPI_FUNC(const char *) PyEval_GetFuncName(PyObject *);
PyAPI_FUNC(const char *) PyEval_GetFuncDesc(PyObject *);
PyAPI_FUNC(PyObject *) PyEval_GetCallStats(PyObject *);
PyAPI_FUNC(PyObject *) PyEval_EvalFrame(struct _frame *);
PyAPI_FUNC(PyObject *) PyEval_EvalFrameEx(struct _frame *f, int exc);
PyAPI_DATA(volatile int) _Py_Ticker;
PyAPI_DATA(int) _Py_CheckInterval;
PyAPI_FUNC(PyThreadState *) PyEval_SaveThread(void);
PyAPI_FUNC(void) PyEval_RestoreThread(PyThreadState *);
PyAPI_FUNC(int)  PyEval_ThreadsInitialized(void);
PyAPI_FUNC(void) PyEval_InitThreads(void);
PyAPI_FUNC(void) PyEval_AcquireLock(void);
PyAPI_FUNC(void) PyEval_ReleaseLock(void);
PyAPI_FUNC(void) PyEval_AcquireThread(PyThreadState *tstate);
PyAPI_FUNC(void) PyEval_ReleaseThread(PyThreadState *tstate);
PyAPI_FUNC(void) PyEval_ReInitThreads(void);
#define Py_BEGIN_ALLOW_THREADS
#define Py_BEGIN_ALLOW_THREADS
PyAPI_FUNC(int) _PyEval_SliceIndex(PyObject *, Py_ssize_t *);
