extern char *strerror(int);
void
PyErr_Restore(PyObject *type, PyObject *value, PyObject *traceback)
void
PyErr_SetObject(PyObject *exception, PyObject *value)
void
PyErr_SetNone(PyObject *exception)
void
PyErr_SetString(PyObject *exception, const char *string)
PyObject *
PyErr_Occurred(void)
int
PyErr_GivenExceptionMatches(PyObject *err, PyObject *exc)
int
PyErr_ExceptionMatches(PyObject *exc)
void
PyErr_NormalizeException(PyObject **exc, PyObject **val, PyObject **tb)
void
PyErr_Fetch(PyObject **p_type, PyObject **p_value, PyObject **p_traceback)
void
PyErr_Clear(void)
void
_PyErr_ReplaceException(PyObject *exc, PyObject *val, PyObject *tb)
int
PyErr_BadArgument(void)
PyObject *
PyErr_NoMemory(void)
PyObject *
PyErr_SetFromErrnoWithFilenameObject(PyObject *exc, PyObject *filenameObject)
PyObject *
PyErr_SetFromErrnoWithFilename(PyObject *exc, const char *filename)
PyObject *
PyErr_SetFromErrnoWithUnicodeFilename(PyObject *exc, const Py_UNICODE *filename)
PyObject *
PyErr_SetFromErrno(PyObject *exc)
PyObject *PyErr_SetExcFromWindowsErrWithFilenameObject(
PyObject *exc,
int ierr,
PyObject *filenameObject)
PyObject *PyErr_SetExcFromWindowsErrWithFilename(
PyObject *exc,
int ierr,
const char *filename)
PyObject *PyErr_SetExcFromWindowsErrWithUnicodeFilename(
PyObject *exc,
int ierr,
const Py_UNICODE *filename)
PyObject *PyErr_SetExcFromWindowsErr(PyObject *exc, int ierr)
PyObject *PyErr_SetFromWindowsErr(int ierr)
PyObject *PyErr_SetFromWindowsErrWithFilename(
int ierr,
const char *filename)
PyObject *PyErr_SetFromWindowsErrWithUnicodeFilename(
int ierr,
const Py_UNICODE *filename)
void
_PyErr_BadInternalCall(const char *filename, int lineno)
#undef PyErr_BadInternalCall
void
PyErr_BadInternalCall(void)
#define PyErr_BadInternalCall() _PyErr_BadInternalCall(__FILE__, __LINE__)
PyObject *
PyErr_Format(PyObject *exception, const char *format, ...)
PyObject *
PyErr_NewException(char *name, PyObject *base, PyObject *dict)
PyObject *
PyErr_NewExceptionWithDoc(char *name, char *doc, PyObject *base, PyObject *dict)
void
PyErr_WriteUnraisable(PyObject *obj)
extern PyObject *PyModule_GetWarningsModule(void);
void
PyErr_SyntaxLocation(const char *filename, int lineno)
PyObject *
PyErr_ProgramText(const char *filename, int lineno)
