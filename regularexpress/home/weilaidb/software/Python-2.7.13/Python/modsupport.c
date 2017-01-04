#define FLAG_SIZE_T 1
typedef double va_double;
static PyObject *va_build_value(const char *, va_list, int);
char *_Py_PackageContext = NULL;
static char api_version_warning[] =
"Python C API version mismatch for module %.100s:\
This Python has API version %d, module %.100s has version %d.";
PyObject *
Py_InitModule4(const char *name, PyMethodDef *methods, const char *doc,
PyObject *passthrough, int module_api_version)
static int
countformat(const char *format, int endchar)
static PyObject *do_mktuple(const char**, va_list *, int, int, int);
static PyObject *do_mklist(const char**, va_list *, int, int, int);
static PyObject *do_mkdict(const char**, va_list *, int, int, int);
static PyObject *do_mkvalue(const char**, va_list *, int);
static void
do_ignore(const char **p_format, va_list *p_va, int endchar, int n, int flags)
static PyObject *
do_mkdict(const char **p_format, va_list *p_va, int endchar, int n, int flags)
static PyObject *
do_mklist(const char **p_format, va_list *p_va, int endchar, int n, int flags)
static int
_ustrlen(Py_UNICODE *u)
static PyObject *
do_mktuple(const char **p_format, va_list *p_va, int endchar, int n, int flags)
static PyObject *
do_mkvalue(const char **p_format, va_list *p_va, int flags)
}
PyObject *
Py_BuildValue(const char *format, ...)
PyObject *
_Py_BuildValue_SizeT(const char *format, ...)
PyObject *
Py_VaBuildValue(const char *format, va_list va)
PyObject *
_Py_VaBuildValue_SizeT(const char *format, va_list va)
static PyObject *
va_build_value(const char *format, va_list va, int flags)
PyObject *
PyEval_CallFunction(PyObject *obj, const char *format, ...)
PyObject *
PyEval_CallMethod(PyObject *obj, const char *methodname, const char *format, ...)
int
PyModule_AddObject(PyObject *m, const char *name, PyObject *o)
int
PyModule_AddIntConstant(PyObject *m, const char *name, long value)
int
PyModule_AddStringConstant(PyObject *m, const char *name, const char *value)
