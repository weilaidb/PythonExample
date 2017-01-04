#define Py_PYSTATE_H
struct _ts;
struct _is;
typedef struct _is  PyInterpreterState;
struct _frame;
typedef int (*Py_tracefunc)(PyObject *, struct _frame *, int, PyObject *);
#define PyTrace_CALL 0
#define PyTrace_EXCEPTION 1
#define PyTrace_LINE 2
#define PyTrace_RETURN 3
#define PyTrace_C_CALL 4
#define PyTrace_C_EXCEPTION 5
#define PyTrace_C_RETURN 6
typedef struct _ts  PyThreadState;
PyAPI_FUNC(PyInterpreterState *) PyInterpreterState_New(void);
PyAPI_FUNC(void) PyInterpreterState_Clear(PyInterpreterState *);
PyAPI_FUNC(void) PyInterpreterState_Delete(PyInterpreterState *);
PyAPI_FUNC(PyThreadState *) PyThreadState_New(PyInterpreterState *);
PyAPI_FUNC(PyThreadState *) _PyThreadState_Prealloc(PyInterpreterState *);
PyAPI_FUNC(void) _PyThreadState_Init(PyThreadState *);
PyAPI_FUNC(void) PyThreadState_Clear(PyThreadState *);
PyAPI_FUNC(void) PyThreadState_Delete(PyThreadState *);
PyAPI_FUNC(void) PyThreadState_DeleteCurrent(void);
PyAPI_FUNC(PyThreadState *) PyThreadState_Get(void);
PyAPI_FUNC(PyThreadState *) PyThreadState_Swap(PyThreadState *);
PyAPI_FUNC(PyObject *) PyThreadState_GetDict(void);
PyAPI_FUNC(int) PyThreadState_SetAsyncExc(long, PyObject *);
PyAPI_DATA(PyThreadState *) _PyThreadState_Current;
#define PyThreadState_GET() PyThreadState_Get()
#define PyThreadState_GET() (_PyThreadState_Current)
typedef
enum
PyGILState_STATE;
PyAPI_FUNC(PyGILState_STATE) PyGILState_Ensure(void);
PyAPI_FUNC(void) PyGILState_Release(PyGILState_STATE);
PyAPI_FUNC(PyThreadState *) PyGILState_GetThisThreadState(void);
PyAPI_FUNC(PyObject *) _PyThread_CurrentFrames(void);
PyAPI_FUNC(PyInterpreterState *) PyInterpreterState_Head(void);
PyAPI_FUNC(PyInterpreterState *) PyInterpreterState_Next(PyInterpreterState *);
PyAPI_FUNC(PyThreadState *) PyInterpreterState_ThreadHead(PyInterpreterState *);
PyAPI_FUNC(PyThreadState *) PyThreadState_Next(PyThreadState *);
typedef struct _frame *(*PyThreadFrameGetter)(PyThreadState *self_);
PyAPI_DATA(PyThreadFrameGetter) _PyThreadState_GetFrame;
