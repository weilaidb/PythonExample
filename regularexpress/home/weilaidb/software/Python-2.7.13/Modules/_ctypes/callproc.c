#if defined(_DEBUG) || defined(__MINGW32__)
#define DONT_USE_SEH
#define CTYPES_CAPSULE_ERROROBJ "_ctypes/callproc.c error object"
CTYPES_CAPSULE_INSTANTIATE_DESTRUCTOR(CTYPES_CAPSULE_ERROROBJ)
#if defined(CTYPES_UNICODE) && !defined(HAVE_USABLE_WCHAR_T)
#  define CTYPES_CAPSULE_WCHAR_T "_ctypes/callproc.c wchar_t buffer from unicode"
CTYPES_CAPSULE_INSTANTIATE_DESTRUCTOR(CTYPES_CAPSULE_WCHAR_T)
PyObject *
_ctypes_get_errobj(int **pspace)
static PyObject *
get_error_internal(PyObject *self, PyObject *args, int index)
static PyObject *
set_error_internal(PyObject *self, PyObject *args, int index)
static PyObject *
get_errno(PyObject *self, PyObject *args)
static PyObject *
set_errno(PyObject *self, PyObject *args)
static PyObject *
get_last_error(PyObject *self, PyObject *args)
static PyObject *
set_last_error(PyObject *self, PyObject *args)
PyObject *ComError;
static TCHAR *FormatError(DWORD code)
static void SetException(DWORD code, EXCEPTION_RECORD *pr)
static DWORD HandleException(EXCEPTION_POINTERS *ptrs,
DWORD *pdw, EXCEPTION_RECORD *record)
static PyObject *
check_hresult(PyObject *self, PyObject *args)
PyCArgObject *
PyCArgObject_new(void)
static void
PyCArg_dealloc(PyCArgObject *self)
static PyObject *
PyCArg_repr(PyCArgObject *self)
static PyMemberDef PyCArgType_members[] = ;
PyTypeObject PyCArg_Type = ;
union result ;
struct argument ;
static int ConvParam(PyObject *obj, Py_ssize_t index, struct argument *pa)
ffi_type *_ctypes_get_ffi_type(PyObject *obj)
static int _call_function_pointer(int flags,
PPROC pProc,
void **avalues,
ffi_type **atypes,
ffi_type *restype,
void *resmem,
int argcount)
static PyObject *GetResult(PyObject *restype, void *result, PyObject *checker)
void _ctypes_extend_error(PyObject *exc_class, char *fmt, ...)
static PyObject *
GetComError(HRESULT errcode, GUID *riid, IUnknown *pIunk)
PyObject *_ctypes_callproc(PPROC pProc,
PyObject *argtuple,
IUnknown *pIunk,
GUID *iid,
int flags,
PyObject *argtypes,
PyObject *restype,
PyObject *checker)
static int
_parse_voidp(PyObject *obj, void **address)
#  define PYBUILD_TSTR "u"
#  define PYBUILD_TSTR "s"
#  ifndef _T
#    define _T(text) text
#  endif
static char format_error_doc[] =
"FormatError([integer]) -> string\n\
\n\
Convert a win32 error code into a string. If the error code is not\n\
given, the return value of a call to GetLastError() is used.\n";
static PyObject *format_error(PyObject *self, PyObject *args)
static char load_library_doc[] =
"LoadLibrary(name) -> handle\n\
\n\
Load an executable (usually a DLL), and return a handle to it.\n\
The handle may be used to locate exported functions in this\n\
module.\n";
static PyObject *load_library(PyObject *self, PyObject *args)
static char free_library_doc[] =
"FreeLibrary(handle) -> void\n\
\n\
Free the handle of an executable previously loaded by LoadLibrary.\n";
static PyObject *free_library(PyObject *self, PyObject *args)
static PyObject *
call_commethod(PyObject *self, PyObject *args)
static char copy_com_pointer_doc[] =
"CopyComPointer(src, dst) -> HRESULT value\n";
static PyObject *
copy_com_pointer(PyObject *self, PyObject *args)
static PyObject *py_dl_open(PyObject *self, PyObject *args)
static PyObject *py_dl_close(PyObject *self, PyObject *args)
static PyObject *py_dl_sym(PyObject *self, PyObject *args)
static PyObject *
call_function(PyObject *self, PyObject *args)
static PyObject *
call_cdeclfunction(PyObject *self, PyObject *args)
static char sizeof_doc[] =
"sizeof(C type) -> integer\n"
"sizeof(C instance) -> integer\n"
"Return the size in bytes of a C instance";
static PyObject *
sizeof_func(PyObject *self, PyObject *obj)
static char alignment_doc[] =
"alignment(C type) -> integer\n"
"alignment(C instance) -> integer\n"
"Return the alignment requirements of a C instance";
static PyObject *
align_func(PyObject *self, PyObject *obj)
static char byref_doc[] =
"byref(C instance[, offset=0]) -> byref-object\n"
"Return a pointer lookalike to a C instance, only usable\n"
"as function argument";
static PyObject *
byref(PyObject *self, PyObject *args)
static char addressof_doc[] =
"addressof(C instance) -> integer\n"
"Return the address of the C instance internal buffer";
static PyObject *
addressof(PyObject *self, PyObject *obj)
static int
converter(PyObject *obj, void **address)
static PyObject *
My_PyObj_FromPtr(PyObject *self, PyObject *args)
static PyObject *
My_Py_INCREF(PyObject *self, PyObject *arg)
static PyObject *
My_Py_DECREF(PyObject *self, PyObject *arg)
static char set_conversion_mode_doc[] =
"set_conversion_mode(encoding, errors) -> (previous-encoding, previous-errors)\n\
\n\
Set the encoding and error handling ctypes uses when converting\n\
between unicode and strings.  Returns the previous values.\n";
static PyObject *
set_conversion_mode(PyObject *self, PyObject *args)
static PyObject *
resize(PyObject *self, PyObject *args)
static PyObject *
unpickle(PyObject *self, PyObject *args)
static PyObject *
POINTER(PyObject *self, PyObject *cls)
static PyObject *
pointer(PyObject *self, PyObject *arg)
static PyObject *
buffer_info(PyObject *self, PyObject *arg)
PyMethodDef _ctypes_module_methods[] = ;
