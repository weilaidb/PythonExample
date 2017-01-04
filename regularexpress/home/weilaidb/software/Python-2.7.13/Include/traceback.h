#define Py_TRACEBACK_H
struct _frame;
typedef struct _traceback  PyTracebackObject;
PyAPI_FUNC(int) PyTraceBack_Here(struct _frame *);
PyAPI_FUNC(int) PyTraceBack_Print(PyObject *, PyObject *);
PyAPI_FUNC(int) _Py_DisplaySourceLine(PyObject *, const char *, int, int);
PyAPI_DATA(PyTypeObject) PyTraceBack_Type;
#define PyTraceBack_Check(v) (Py_TYPE(v) == &PyTraceBack_Type)
