#define Py_WARNINGS_H
PyAPI_FUNC(void) _PyWarnings_Init(void);
PyAPI_FUNC(int) PyErr_WarnEx(PyObject *, const char *, Py_ssize_t);
PyAPI_FUNC(int) PyErr_WarnExplicit(PyObject *, const char *, const char *, int,
const char *, PyObject *);
#define PyErr_WarnPy3k(msg, stacklevel) \
(Py_Py3kWarningFlag ? PyErr_WarnEx(PyExc_DeprecationWarning, msg, stacklevel) : 0)
#define PyErr_Warn(category, msg) PyErr_WarnEx(category, msg, 1)
