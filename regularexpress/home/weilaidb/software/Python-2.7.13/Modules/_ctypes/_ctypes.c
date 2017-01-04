#define PY_SSIZE_T_CLEAN
#define IS_INTRESOURCE(x) (((size_t)(x) >> 16) == 0)
# ifdef _WIN32_WCE
#  undef GetProcAddress
#  define GetProcAddress GetProcAddressA
# endif
PyObject *PyExc_ArgError;
PyObject *_ctypes_ptrtype_cache;
static PyTypeObject Simple_Type;
static PyObject *_unpickle;
char *_ctypes_conversion_encoding = NULL;
char *_ctypes_conversion_errors = NULL;
#if (PY_VERSION_HEX < 0x02040000)
static PyObject *
PyTuple_Pack(int n, ...)
typedef struct  DictRemoverObject;
static void
_DictRemover_dealloc(PyObject *_self)
static PyObject *
_DictRemover_call(PyObject *_self, PyObject *args, PyObject *kw)
static PyTypeObject DictRemover_Type = ;
int
PyDict_SetItemProxy(PyObject *dict, PyObject *key, PyObject *item)
PyObject *
PyDict_GetItemProxy(PyObject *dict, PyObject *key)
char *
_ctypes_alloc_format_string(const char *prefix, const char *suffix)
char *
_ctypes_alloc_format_string_with_shape(int ndim, const Py_ssize_t *shape,
const char *prefix, const char *suffix)
static PyCArgObject *
StructUnionType_paramfunc(CDataObject *self)
static PyObject *
StructUnionType_new(PyTypeObject *type, PyObject *args, PyObject *kwds, int isStruct)
static PyObject *
PyCStructType_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
static PyObject *
UnionType_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
static char from_address_doc[] =
"C.from_address(integer) -> C instance\naccess a C instance at the specified address";
static PyObject *
CDataType_from_address(PyObject *type, PyObject *value)
static char from_buffer_doc[] =
"C.from_buffer(object, offset=0) -> C instance\ncreate a C instance from a writeable buffer";
static int
KeepRef(CDataObject *target, Py_ssize_t index, PyObject *keep);
static PyObject *
CDataType_from_buffer(PyObject *type, PyObject *args)
static char from_buffer_copy_doc[] =
"C.from_buffer_copy(object, offset=0) -> C instance\ncreate a C instance from a readable buffer";
static PyObject *
GenericPyCData_new(PyTypeObject *type, PyObject *args, PyObject *kwds);
static PyObject *
CDataType_from_buffer_copy(PyObject *type, PyObject *args)
static char in_dll_doc[] =
"C.in_dll(dll, name) -> C instance\naccess a C instance in a dll";
static PyObject *
CDataType_in_dll(PyObject *type, PyObject *args)
static char from_param_doc[] =
"Convert a Python object into a function call parameter.";
static PyObject *
CDataType_from_param(PyObject *type, PyObject *value)
static PyMethodDef CDataType_methods[] = ;
static PyObject *
CDataType_repeat(PyObject *self, Py_ssize_t length)
static PySequenceMethods CDataType_as_sequence = ;
static int
CDataType_clear(PyTypeObject *self)
static int
CDataType_traverse(PyTypeObject *self, visitproc visit, void *arg)
static int
PyCStructType_setattro(PyObject *self, PyObject *key, PyObject *value)
static int
UnionType_setattro(PyObject *self, PyObject *key, PyObject *value)
PyTypeObject PyCStructType_Type = ;
static PyTypeObject UnionType_Type = ;
static int
PyCPointerType_SetProto(StgDictObject *stgdict, PyObject *proto)
static PyCArgObject *
PyCPointerType_paramfunc(CDataObject *self)
static PyObject *
PyCPointerType_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
static PyObject *
PyCPointerType_set_type(PyTypeObject *self, PyObject *type)
staticforward PyObject *_byref(PyObject *);
static PyObject *
PyCPointerType_from_param(PyObject *type, PyObject *value)
static PyMethodDef PyCPointerType_methods[] = ;
PyTypeObject PyCPointerType_Type = ;
static int
CharArray_set_raw(CDataObject *self, PyObject *value)
static PyObject *
CharArray_get_raw(CDataObject *self)
static PyObject *
CharArray_get_value(CDataObject *self)
static int
CharArray_set_value(CDataObject *self, PyObject *value)
static PyGetSetDef CharArray_getsets[] = ;
static PyObject *
WCharArray_get_value(CDataObject *self)
static int
WCharArray_set_value(CDataObject *self, PyObject *value)
static PyGetSetDef WCharArray_getsets[] = ;
static int
add_getset(PyTypeObject *type, PyGetSetDef *gsp)
static PyCArgObject *
PyCArrayType_paramfunc(CDataObject *self)
static PyObject *
PyCArrayType_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
PyTypeObject PyCArrayType_Type = ;
static char *SIMPLE_TYPE_CHARS = "cbBhHiIlLdfuzZqQPXOv?g";
static PyObject *
c_wchar_p_from_param(PyObject *type, PyObject *value)
static PyObject *
c_char_p_from_param(PyObject *type, PyObject *value)
static PyObject *
c_void_p_from_param(PyObject *type, PyObject *value)
#if (PYTHON_API_VERSION >= 1012)
static PyMethodDef c_void_p_method = ;
static PyMethodDef c_char_p_method = ;
static PyMethodDef c_wchar_p_method = ;
#error
static PyMethodDef c_void_p_method = ;
static PyMethodDef c_char_p_method = ;
static PyMethodDef c_wchar_p_method = ;
static PyObject *CreateSwappedType(PyTypeObject *type, PyObject *args, PyObject *kwds,
PyObject *proto, struct fielddesc *fmt)
static PyCArgObject *
PyCSimpleType_paramfunc(CDataObject *self)
static PyObject *
PyCSimpleType_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
static PyObject *
PyCSimpleType_from_param(PyObject *type, PyObject *value)
static PyMethodDef PyCSimpleType_methods[] = ;
PyTypeObject PyCSimpleType_Type = ;
static PyObject *
converters_from_argtypes(PyObject *ob)
static int
make_funcptrtype_dict(StgDictObject *stgdict)
static PyCArgObject *
PyCFuncPtrType_paramfunc(CDataObject *self)
static PyObject *
PyCFuncPtrType_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
PyTypeObject PyCFuncPtrType_Type = ;
static CDataObject *
PyCData_GetContainer(CDataObject *self)
static PyObject *
GetKeepedObjects(CDataObject *target)
static PyObject *
unique_key(CDataObject *target, Py_ssize_t index)
static int
KeepRef(CDataObject *target, Py_ssize_t index, PyObject *keep)
static int
PyCData_traverse(CDataObject *self, visitproc visit, void *arg)
static int
PyCData_clear(CDataObject *self)
static void
PyCData_dealloc(PyObject *self)
static PyMemberDef PyCData_members[] = ;
#if (PY_VERSION_HEX >= 0x02060000)
static int PyCData_NewGetBuffer(PyObject *_self, Py_buffer *view, int flags)
static Py_ssize_t PyCData_GetSegcount(PyObject *_self, Py_ssize_t *lenp)
static Py_ssize_t PyCData_GetBuffer(PyObject *_self, Py_ssize_t seg, void **pptr)
static PyBufferProcs PyCData_as_buffer = ;
static long
PyCData_nohash(PyObject *self)
static PyObject *
PyCData_reduce(PyObject *_self, PyObject *args)
static PyObject *
PyCData_setstate(PyObject *_self, PyObject *args)
static PyObject *
PyCData_from_outparam(PyObject *self, PyObject *args)
static PyMethodDef PyCData_methods[] = ;
PyTypeObject PyCData_Type = ;
static int PyCData_MallocBuffer(CDataObject *obj, StgDictObject *dict)
PyObject *
PyCData_FromBaseObj(PyObject *type, PyObject *base, Py_ssize_t index, char *adr)
PyObject *
PyCData_AtAddress(PyObject *type, void *buf)
int _ctypes_simple_instance(PyObject *obj)
PyObject *
PyCData_get(PyObject *type, GETFUNC getfunc, PyObject *src,
Py_ssize_t index, Py_ssize_t size, char *adr)
static PyObject *
_PyCData_set(CDataObject *dst, PyObject *type, SETFUNC setfunc, PyObject *value,
Py_ssize_t size, char *ptr)
int
PyCData_set(PyObject *dst, PyObject *type, SETFUNC setfunc, PyObject *value,
Py_ssize_t index, Py_ssize_t size, char *ptr)
static PyObject *
GenericPyCData_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
static int
PyCFuncPtr_set_errcheck(PyCFuncPtrObject *self, PyObject *ob)
static PyObject *
PyCFuncPtr_get_errcheck(PyCFuncPtrObject *self)
static int
PyCFuncPtr_set_restype(PyCFuncPtrObject *self, PyObject *ob)
static PyObject *
PyCFuncPtr_get_restype(PyCFuncPtrObject *self)
static int
PyCFuncPtr_set_argtypes(PyCFuncPtrObject *self, PyObject *ob)
static PyObject *
PyCFuncPtr_get_argtypes(PyCFuncPtrObject *self)
static PyGetSetDef PyCFuncPtr_getsets[] = ;
static PPROC FindAddress(void *handle, char *name, PyObject *type)
static int
_check_outarg_type(PyObject *arg, Py_ssize_t index)
static int
_validate_paramflags(PyTypeObject *type, PyObject *paramflags)
static int
_get_name(PyObject *obj, char **pname)
static PyObject *
PyCFuncPtr_FromDll(PyTypeObject *type, PyObject *args, PyObject *kwds)
static PyObject *
PyCFuncPtr_FromVtblIndex(PyTypeObject *type, PyObject *args, PyObject *kwds)
static PyObject *
PyCFuncPtr_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
static PyObject *
_byref(PyObject *obj)
static PyObject *
_get_arg(int *pindex, char *name, PyObject *defval, PyObject *inargs, PyObject *kwds)
static PyObject *
_build_callargs(PyCFuncPtrObject *self, PyObject *argtypes,
PyObject *inargs, PyObject *kwds,
int *poutmask, int *pinoutmask, unsigned int *pnumretvals)
static PyObject *
_build_result(PyObject *result, PyObject *callargs,
int outmask, int inoutmask, unsigned int numretvals)
static PyObject *
PyCFuncPtr_call(PyCFuncPtrObject *self, PyObject *inargs, PyObject *kwds)
static int
PyCFuncPtr_traverse(PyCFuncPtrObject *self, visitproc visit, void *arg)
static int
PyCFuncPtr_clear(PyCFuncPtrObject *self)
static void
PyCFuncPtr_dealloc(PyCFuncPtrObject *self)
static PyObject *
PyCFuncPtr_repr(PyCFuncPtrObject *self)
static int
PyCFuncPtr_nonzero(PyCFuncPtrObject *self)
static PyNumberMethods PyCFuncPtr_as_number = ;
PyTypeObject PyCFuncPtr_Type = ;
static int
_init_pos_args(PyObject *self, PyTypeObject *type,
PyObject *args, PyObject *kwds,
int index)
static int
Struct_init(PyObject *self, PyObject *args, PyObject *kwds)
static PyTypeObject Struct_Type = ;
static PyTypeObject Union_Type = ;
static int
Array_init(CDataObject *self, PyObject *args, PyObject *kw)
static PyObject *
Array_item(PyObject *_self, Py_ssize_t index)
static PyObject *
Array_slice(PyObject *_self, Py_ssize_t ilow, Py_ssize_t ihigh)
static PyObject *
Array_subscript(PyObject *_self, PyObject *item)
static int
Array_ass_item(PyObject *_self, Py_ssize_t index, PyObject *value)
static int
Array_ass_slice(PyObject *_self, Py_ssize_t ilow, Py_ssize_t ihigh, PyObject *value)
static int
Array_ass_subscript(PyObject *_self, PyObject *item, PyObject *value)
static Py_ssize_t
Array_length(PyObject *_self)
static PySequenceMethods Array_as_sequence = ;
static PyMappingMethods Array_as_mapping = ;
PyTypeObject PyCArray_Type = ;
PyObject *
PyCArrayType_from_ctype(PyObject *itemtype, Py_ssize_t length)
static int
Simple_set_value(CDataObject *self, PyObject *value)
static int
Simple_init(CDataObject *self, PyObject *args, PyObject *kw)
static PyObject *
Simple_get_value(CDataObject *self)
static PyGetSetDef Simple_getsets[] = ;
static PyObject *
Simple_from_outparm(PyObject *self, PyObject *args)
static PyMethodDef Simple_methods[] = ;
static int Simple_nonzero(CDataObject *self)
static PyNumberMethods Simple_as_number = ;
static PyObject *
Simple_repr(CDataObject *self)
static PyTypeObject Simple_Type = ;
static PyObject *
Pointer_item(PyObject *_self, Py_ssize_t index)
static int
Pointer_ass_item(PyObject *_self, Py_ssize_t index, PyObject *value)
static PyObject *
Pointer_get_contents(CDataObject *self, void *closure)
static int
Pointer_set_contents(CDataObject *self, PyObject *value, void *closure)
static PyGetSetDef Pointer_getsets[] = ;
static int
Pointer_init(CDataObject *self, PyObject *args, PyObject *kw)
static PyObject *
Pointer_new(PyTypeObject *type, PyObject *args, PyObject *kw)
static PyObject *
Pointer_slice(PyObject *_self, Py_ssize_t ilow, Py_ssize_t ihigh)
static PyObject *
Pointer_subscript(PyObject *_self, PyObject *item)
static PySequenceMethods Pointer_as_sequence = ;
static PyMappingMethods Pointer_as_mapping = ;
static int
Pointer_nonzero(CDataObject *self)
static PyNumberMethods Pointer_as_number = ;
PyTypeObject PyCPointer_Type = ;
static char *module_docs =
"Create and manipulate C compatible data types in Python.";
static char comerror_doc[] = "Raised when a COM method call failed.";
static PyObject *
comerror_init(PyObject *self, PyObject *args)
static PyMethodDef comerror_methods[] = ;
static int
create_comerror(void)
static PyObject *
string_at(const char *ptr, int size)
static int
cast_check_pointertype(PyObject *arg)
static PyObject *
cast(void *ptr, PyObject *src, PyObject *ctype)
static PyObject *
wstring_at(const wchar_t *ptr, int size)
PyMODINIT_FUNC
init_ctypes(void)
#if (PY_VERSION_HEX < 0x02040000)
PyObject *My_PyUnicode_FromWideChar(register const wchar_t *w,
Py_ssize_t size)
Py_ssize_t My_PyUnicode_AsWideChar(PyUnicodeObject *unicode,
register wchar_t *w,
Py_ssize_t size)
