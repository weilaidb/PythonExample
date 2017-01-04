#define Py_INTOBJECT_H
typedef struct  PyIntObject;
PyAPI_DATA(PyTypeObject) PyInt_Type;
#define PyInt_Check(op) \
PyType_FastSubclass((op)->ob_type, Py_TPFLAGS_INT_SUBCLASS)
#define PyInt_CheckExact(op) ((op)->ob_type == &PyInt_Type)
PyAPI_FUNC(PyObject *) PyInt_FromString(char*, char**, int);
PyAPI_FUNC(PyObject *) PyInt_FromUnicode(Py_UNICODE*, Py_ssize_t, int);
PyAPI_FUNC(PyObject *) PyInt_FromLong(long);
PyAPI_FUNC(PyObject *) PyInt_FromSize_t(size_t);
PyAPI_FUNC(PyObject *) PyInt_FromSsize_t(Py_ssize_t);
PyAPI_FUNC(long) PyInt_AsLong(PyObject *);
PyAPI_FUNC(Py_ssize_t) PyInt_AsSsize_t(PyObject *);
PyAPI_FUNC(int) _PyInt_AsInt(PyObject *);
PyAPI_FUNC(unsigned long) PyInt_AsUnsignedLongMask(PyObject *);
PyAPI_FUNC(unsigned PY_LONG_LONG) PyInt_AsUnsignedLongLongMask(PyObject *);
PyAPI_FUNC(long) PyInt_GetMax(void);
#define PyInt_AS_LONG(op) (((PyIntObject *)(op))->ob_ival)
PyAPI_FUNC(unsigned long) PyOS_strtoul(char *, char **, int);
PyAPI_FUNC(long) PyOS_strtol(char *, char **, int);
PyAPI_FUNC(int) PyInt_ClearFreeList(void);
PyAPI_FUNC(PyObject*) _PyInt_Format(PyIntObject* v, int base, int newstyle);
PyAPI_FUNC(PyObject *) _PyInt_FormatAdvanced(PyObject *obj,
char *format_spec,
Py_ssize_t format_spec_len);
