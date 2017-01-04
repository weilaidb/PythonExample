#define Py_MODSUPPORT_H
#define PyArg_Parse			_PyArg_Parse_SizeT
#define PyArg_ParseTuple		_PyArg_ParseTuple_SizeT
#define PyArg_ParseTupleAndKeywords	_PyArg_ParseTupleAndKeywords_SizeT
#define PyArg_VaParse			_PyArg_VaParse_SizeT
#define PyArg_VaParseTupleAndKeywords	_PyArg_VaParseTupleAndKeywords_SizeT
#define Py_BuildValue			_Py_BuildValue_SizeT
#define Py_VaBuildValue			_Py_VaBuildValue_SizeT
PyAPI_FUNC(PyObject *) _Py_VaBuildValue_SizeT(const char *, va_list);
PyAPI_FUNC(int) PyArg_Parse(PyObject *, const char *, ...);
PyAPI_FUNC(int) PyArg_ParseTuple(PyObject *, const char *, ...) Py_FORMAT_PARSETUPLE(PyArg_ParseTuple, 2, 3);
PyAPI_FUNC(int) PyArg_ParseTupleAndKeywords(PyObject *, PyObject *,
const char *, char **, ...);
PyAPI_FUNC(int) PyArg_UnpackTuple(PyObject *, const char *, Py_ssize_t, Py_ssize_t, ...);
PyAPI_FUNC(PyObject *) Py_BuildValue(const char *, ...);
PyAPI_FUNC(PyObject *) _Py_BuildValue_SizeT(const char *, ...);
PyAPI_FUNC(int) _PyArg_NoKeywords(const char *funcname, PyObject *kw);
PyAPI_FUNC(int) PyArg_VaParse(PyObject *, const char *, va_list);
PyAPI_FUNC(int) PyArg_VaParseTupleAndKeywords(PyObject *, PyObject *,
const char *, char **, va_list);
PyAPI_FUNC(PyObject *) Py_VaBuildValue(const char *, va_list);
PyAPI_FUNC(int) PyModule_AddObject(PyObject *, const char *, PyObject *);
PyAPI_FUNC(int) PyModule_AddIntConstant(PyObject *, const char *, long);
PyAPI_FUNC(int) PyModule_AddStringConstant(PyObject *, const char *, const char *);
#define PyModule_AddIntMacro(m, c) PyModule_AddIntConstant(m, #c, c)
#define PyModule_AddStringMacro(m, c) PyModule_AddStringConstant(m, #c, c)
#define PYTHON_API_VERSION 1013
#define PYTHON_API_STRING "1013"
#if SIZEOF_SIZE_T != SIZEOF_INT
#define Py_InitModule4 Py_InitModule4_64
#if SIZEOF_SIZE_T != SIZEOF_INT
#undef Py_InitModule4
#define Py_InitModule4 Py_InitModule4TraceRefs_64
#define Py_InitModule4 Py_InitModule4TraceRefs
PyAPI_FUNC(PyObject *) Py_InitModule4(const char *name, PyMethodDef *methods,
const char *doc, PyObject *self,
int apiver);
#define Py_InitModule(name, methods) \
Py_InitModule4(name, methods, (char *)NULL, (PyObject *)NULL, \
PYTHON_API_VERSION)
#define Py_InitModule3(name, methods, doc) \
Py_InitModule4(name, methods, doc, (PyObject *)NULL, \
PYTHON_API_VERSION)
PyAPI_DATA(char *) _Py_PackageContext;
