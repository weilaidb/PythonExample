int PyArg_Parse(PyObject *, const char *, ...);
int PyArg_ParseTuple(PyObject *, const char *, ...);
int PyArg_VaParse(PyObject *, const char *, va_list);
int PyArg_ParseTupleAndKeywords(PyObject *, PyObject *,
const char *, char **, ...);
int PyArg_VaParseTupleAndKeywords(PyObject *, PyObject *,
const char *, char **, va_list);
PyAPI_FUNC(int) _PyArg_Parse_SizeT(PyObject *, char *, ...);
PyAPI_FUNC(int) _PyArg_ParseTuple_SizeT(PyObject *, char *, ...);
PyAPI_FUNC(int) _PyArg_ParseTupleAndKeywords_SizeT(PyObject *, PyObject *,
const char *, char **, ...);
PyAPI_FUNC(PyObject *) _Py_BuildValue_SizeT(const char *, ...);
PyAPI_FUNC(int) _PyArg_VaParse_SizeT(PyObject *, char *, va_list);
PyAPI_FUNC(int) _PyArg_VaParseTupleAndKeywords_SizeT(PyObject *, PyObject *,
const char *, char **, va_list);
#define FLAG_COMPAT 1
#define FLAG_SIZE_T 2
static int vgetargs1(PyObject *, const char *, va_list *, int);
static void seterror(int, const char *, int *, const char *, const char *);
static char *convertitem(PyObject *, const char **, va_list *, int, int *,
char *, size_t, PyObject **);
static char *converttuple(PyObject *, const char **, va_list *, int,
int *, char *, size_t, int, PyObject **);
static char *convertsimple(PyObject *, const char **, va_list *, int, char *,
size_t, PyObject **);
static Py_ssize_t convertbuffer(PyObject *, void **p, char **);
static int getbuffer(PyObject *, Py_buffer *, char**);
static int vgetargskeywords(PyObject *, PyObject *,
const char *, char **, va_list *, int);
static char *skipitem(const char **, va_list *, int);
int
PyArg_Parse(PyObject *args, const char *format, ...)
int
_PyArg_Parse_SizeT(PyObject *args, char *format, ...)
int
PyArg_ParseTuple(PyObject *args, const char *format, ...)
int
_PyArg_ParseTuple_SizeT(PyObject *args, char *format, ...)
int
PyArg_VaParse(PyObject *args, const char *format, va_list va)
int
_PyArg_VaParse_SizeT(PyObject *args, char *format, va_list va)
#define GETARGS_CAPSULE_NAME_CLEANUP_PTR
#define GETARGS_CAPSULE_NAME_CLEANUP_BUFFER
static void
cleanup_ptr(PyObject *self)
static void
cleanup_buffer(PyObject *self)
static int
addcleanup(void *ptr, PyObject **freelist, PyCapsule_Destructor destr)
static int
cleanreturn(int retval, PyObject *freelist)
static int
vgetargs1(PyObject *args, const char *format, va_list *p_va, int flags)
static void
seterror(int iarg, const char *msg, int *levels, const char *fname,
const char *message)
static char *
converttuple(PyObject *arg, const char **p_format, va_list *p_va, int flags,
int *levels, char *msgbuf, size_t bufsize, int toplevel,
PyObject **freelist)
static char *
convertitem(PyObject *arg, const char **p_format, va_list *p_va, int flags,
int *levels, char *msgbuf, size_t bufsize, PyObject **freelist)
#define UNICODE_DEFAULT_ENCODING(arg) \
_PyUnicode_AsDefaultEncodedString(arg, NULL)
static char *
converterr(const char *expected, PyObject *arg, char *msgbuf, size_t bufsize)
#define CONV_UNICODE
static int
float_argument_warning(PyObject *arg)
static int
float_argument_error(PyObject *arg)
static size_t
_ustrlen(Py_UNICODE *u)
static char *
convertsimple(PyObject *arg, const char **p_format, va_list *p_va, int flags,
char *msgbuf, size_t bufsize, PyObject **freelist)
static Py_ssize_t
convertbuffer(PyObject *arg, void **p, char **errmsg)
static int
getbuffer(PyObject *arg, Py_buffer *view, char **errmsg)
int
PyArg_ParseTupleAndKeywords(PyObject *args,
PyObject *keywords,
const char *format,
char **kwlist, ...)
int
_PyArg_ParseTupleAndKeywords_SizeT(PyObject *args,
PyObject *keywords,
const char *format,
char **kwlist, ...)
int
PyArg_VaParseTupleAndKeywords(PyObject *args,
PyObject *keywords,
const char *format,
char **kwlist, va_list va)
int
_PyArg_VaParseTupleAndKeywords_SizeT(PyObject *args,
PyObject *keywords,
const char *format,
char **kwlist, va_list va)
#define IS_END_OF_FORMAT(c) (c == '\0' || c == ';' || c == ':')
static int
vgetargskeywords(PyObject *args, PyObject *keywords, const char *format,
char **kwlist, va_list *p_va, int flags)
static char *
skipitem(const char **p_format, va_list *p_va, int flags)
int
PyArg_UnpackTuple(PyObject *args, const char *name, Py_ssize_t min, Py_ssize_t max, ...)
int
_PyArg_NoKeywords(const char *funcname, PyObject *kw)
