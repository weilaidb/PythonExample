#define Py_FRAMEOBJECT_H
typedef struct  PyTryBlock;
typedef struct _frame  PyFrameObject;
PyAPI_DATA(PyTypeObject) PyFrame_Type;
#define PyFrame_Check(op) ((op)->ob_type == &PyFrame_Type)
#define PyFrame_IsRestricted(f) \
((f)->f_builtins != (f)->f_tstate->interp->builtins)
PyAPI_FUNC(PyFrameObject *) PyFrame_New(PyThreadState *, PyCodeObject *,
PyObject *, PyObject *);
PyAPI_FUNC(void) PyFrame_BlockSetup(PyFrameObject *, int, int, int);
PyAPI_FUNC(PyTryBlock *) PyFrame_BlockPop(PyFrameObject *);
PyAPI_FUNC(PyObject **) PyFrame_ExtendStack(PyFrameObject *, int, int);
PyAPI_FUNC(void) PyFrame_LocalsToFast(PyFrameObject *, int);
PyAPI_FUNC(void) PyFrame_FastToLocals(PyFrameObject *);
PyAPI_FUNC(int) PyFrame_ClearFreeList(void);
PyAPI_FUNC(int) PyFrame_GetLineNumber(PyFrameObject *);
