static void
CThunkObject_dealloc(PyObject *_self)
static int
CThunkObject_traverse(PyObject *_self, visitproc visit, void *arg)
static int
CThunkObject_clear(PyObject *_self)
PyTypeObject PyCThunk_Type = ;
static void
PrintError(char *msg, ...)
#if (PY_VERSION_HEX < 0x02070000)
PyCodeObject *
PyCode_NewEmpty(const char *filename, const char *funcname, int firstlineno)
void _ctypes_add_traceback(char *funcname, char *filename, int lineno)
static void
TryAddRef(StgDictObject *dict, CDataObject *obj)
static void _CallPythonObject(void *mem,
ffi_type *restype,
SETFUNC setfunc,
PyObject *callable,
PyObject *converters,
int flags,
void **pArgs)
static void closure_fcn(ffi_cif *cif,
void *resp,
void **args,
void *userdata)
static CThunkObject* CThunkObject_new(Py_ssize_t nArgs)
CThunkObject *_ctypes_alloc_callback(PyObject *callable,
PyObject *converters,
PyObject *restype,
int flags)
static void LoadPython(void)
long Call_GetClassObject(REFCLSID rclsid, REFIID riid, LPVOID *ppv)
STDAPI DllGetClassObject(REFCLSID rclsid,
REFIID riid,
LPVOID *ppv)
long Call_CanUnloadNow(void)
STDAPI DllCanUnloadNow(void)
BOOL WINAPI DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvRes)
