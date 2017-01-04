#if defined (__SVR4) && defined (__sun)
#   include <alloca.h>
#if (PY_VERSION_HEX < 0x02040000)
#define PyDict_CheckExact(ob) (Py_TYPE(ob) == &PyDict_Type)
#if (PY_VERSION_HEX < 0x02050000)
typedef int Py_ssize_t;
#define PyInt_FromSsize_t PyInt_FromLong
#define PyNumber_AsSsize_t(ob, exc) PyInt_AsLong(ob)
#define PyIndex_Check(ob) PyInt_Check(ob)
typedef Py_ssize_t (*readbufferproc)(PyObject *, Py_ssize_t, void **);
typedef Py_ssize_t (*writebufferproc)(PyObject *, Py_ssize_t, void **);
typedef Py_ssize_t (*segcountproc)(PyObject *, Py_ssize_t *);
typedef Py_ssize_t (*charbufferproc)(PyObject *, Py_ssize_t, char **);
#if (PY_VERSION_HEX < 0x02060000)
#define Py_TYPE(ob) (((PyObject*)(ob))->ob_type)
#define PyVarObject_HEAD_INIT(type, size) \
PyObject_HEAD_INIT(type) size,
#define PyImport_ImportModuleNoBlock PyImport_ImportModule
#define PyLong_FromSsize_t PyInt_FromLong
#define Py_TPFLAGS_HAVE_NEWBUFFER 0
#define max(a, b) ((a) > (b) ? (a) : (b))
#define min(a, b) ((a) < (b) ? (a) : (b))
#define PARAMFLAG_FIN 0x1
#define PARAMFLAG_FOUT 0x2
#define PARAMFLAG_FLCID 0x4
#if defined(HAVE_LONG_LONG) && !defined(PY_LONG_LONG)
#define PY_LONG_LONG LONG_LONG
typedef struct tagPyCArgObject PyCArgObject;
typedef struct tagCDataObject CDataObject;
typedef PyObject *(* GETFUNC)(void *, Py_ssize_t size);
typedef PyObject *(* SETFUNC)(void *, PyObject *value, Py_ssize_t size);
typedef PyCArgObject *(* PARAMFUNC)(CDataObject *obj);
union value ;
struct tagCDataObject ;
typedef struct  CThunkObject;
extern PyTypeObject PyCThunk_Type;
#define CThunk_CheckExact(v)        ((v)->ob_type == &PyCThunk_Type)
typedef struct  PyCFuncPtrObject;
extern PyTypeObject PyCStgDict_Type;
#define PyCStgDict_CheckExact(v)            ((v)->ob_type == &PyCStgDict_Type)
#define PyCStgDict_Check(v)         PyObject_TypeCheck(v, &PyCStgDict_Type)
extern int PyCStructUnionType_update_stgdict(PyObject *fields, PyObject *type, int isStruct);
extern int PyType_stginfo(PyTypeObject *self, Py_ssize_t *psize, Py_ssize_t *palign, Py_ssize_t *plength);
extern int PyObject_stginfo(PyObject *self, Py_ssize_t *psize, Py_ssize_t *palign, Py_ssize_t *plength);
extern PyTypeObject PyCData_Type;
#define CDataObject_CheckExact(v)       ((v)->ob_type == &PyCData_Type)
#define CDataObject_Check(v)            PyObject_TypeCheck(v, &PyCData_Type)
#define _CDataObject_HasExternalBuffer(v)  ((v)->b_ptr != (char *)&(v)->b_value)
extern PyTypeObject PyCSimpleType_Type;
#define PyCSimpleTypeObject_CheckExact(v)       ((v)->ob_type == &PyCSimpleType_Type)
#define PyCSimpleTypeObject_Check(v)    PyObject_TypeCheck(v, &PyCSimpleType_Type)
extern PyTypeObject PyCField_Type;
extern struct fielddesc *_ctypes_get_fielddesc(char *fmt);
extern PyObject *
PyCField_FromDesc(PyObject *desc, Py_ssize_t index,
Py_ssize_t *pfield_size, int bitsize, int *pbitofs,
Py_ssize_t *psize, Py_ssize_t *poffset, Py_ssize_t *palign,
int pack, int is_big_endian);
extern PyObject *PyCData_AtAddress(PyObject *type, void *buf);
extern PyObject *PyCData_FromBytes(PyObject *type, char *data, Py_ssize_t length);
extern PyTypeObject PyCArrayType_Type;
extern PyTypeObject PyCArray_Type;
extern PyTypeObject PyCPointerType_Type;
extern PyTypeObject PyCPointer_Type;
extern PyTypeObject PyCFuncPtr_Type;
extern PyTypeObject PyCFuncPtrType_Type;
extern PyTypeObject PyCStructType_Type;
#define PyCArrayTypeObject_Check(v)     PyObject_TypeCheck(v, &PyCArrayType_Type)
#define ArrayObject_Check(v)            PyObject_TypeCheck(v, &PyCArray_Type)
#define PointerObject_Check(v)          PyObject_TypeCheck(v, &PyCPointer_Type)
#define PyCPointerTypeObject_Check(v)   PyObject_TypeCheck(v, &PyCPointerType_Type)
#define PyCFuncPtrObject_Check(v)               PyObject_TypeCheck(v, &PyCFuncPtr_Type)
#define PyCFuncPtrTypeObject_Check(v)   PyObject_TypeCheck(v, &PyCFuncPtrType_Type)
#define PyCStructTypeObject_Check(v)    PyObject_TypeCheck(v, &PyCStructType_Type)
extern PyObject *
PyCArrayType_from_ctype(PyObject *itemtype, Py_ssize_t length);
extern PyMethodDef _ctypes_module_methods[];
extern CThunkObject *_ctypes_alloc_callback(PyObject *callable,
PyObject *converters,
PyObject *restype,
int flags);
struct fielddesc ;
typedef struct  CFieldObject;
typedef struct  StgDictObject;
extern StgDictObject *PyType_stgdict(PyObject *obj);
extern StgDictObject *PyObject_stgdict(PyObject *self);
extern int PyCStgDict_clone(StgDictObject *src, StgDictObject *dst);
typedef int(* PPROC)(void);
PyObject *_ctypes_callproc(PPROC pProc,
PyObject *arguments,
IUnknown *pIUnk,
GUID *iid,
int flags,
PyObject *argtypes,
PyObject *restype,
PyObject *checker);
#define FUNCFLAG_STDCALL 0x0
#define FUNCFLAG_CDECL   0x1
#define FUNCFLAG_HRESULT 0x2
#define FUNCFLAG_PYTHONAPI 0x4
#define FUNCFLAG_USE_ERRNO 0x8
#define FUNCFLAG_USE_LASTERROR 0x10
#define TYPEFLAG_ISPOINTER 0x100
#define TYPEFLAG_HASPOINTER 0x200
#define DICTFLAG_FINAL 0x1000
struct tagPyCArgObject ;
extern PyTypeObject PyCArg_Type;
#define PyCArg_CheckExact(v)        ((v)->ob_type == &PyCArg_Type)
extern PyCArgObject *PyCArgObject_new(void);
extern PyObject *
PyCData_get(PyObject *type, GETFUNC getfunc, PyObject *src,
Py_ssize_t index, Py_ssize_t size, char *ptr);
extern int
PyCData_set(PyObject *dst, PyObject *type, SETFUNC setfunc, PyObject *value,
Py_ssize_t index, Py_ssize_t size, char *ptr);
extern void _ctypes_extend_error(PyObject *exc_class, char *fmt, ...);
struct basespec ;
extern char basespec_string[];
extern ffi_type *_ctypes_get_ffi_type(PyObject *obj);
extern PyObject *PyExc_ArgError;
extern char *_ctypes_conversion_encoding;
extern char *_ctypes_conversion_errors;
#define Py_CLEAR(op)                            \
do  while (0)
#define Py_VISIT(op)                                    \
do  while (0)
#if defined(Py_USING_UNICODE) && defined(HAVE_WCHAR_H)
#  define CTYPES_UNICODE
#if (PY_VERSION_HEX < 0x02040000)
#  undef PyUnicode_FromWideChar
#  define PyUnicode_FromWideChar PyUnicode_FromWideChar_fixed
#  undef PyUnicode_AsWideChar
#  define PyUnicode_AsWideChar PyUnicode_AsWideChar_fixed
extern PyObject *PyUnicode_FromWideChar_fixed(const wchar_t *, Py_ssize_t);
extern Py_ssize_t PyUnicode_AsWideChar_fixed(PyUnicodeObject *, wchar_t *, Py_ssize_t);
extern void _ctypes_add_traceback(char *, char *, int);
extern PyObject *PyCData_FromBaseObj(PyObject *type, PyObject *base, Py_ssize_t index, char *adr);
extern char *_ctypes_alloc_format_string(const char *prefix, const char *suffix);
extern char *_ctypes_alloc_format_string_with_shape(int ndim,
const Py_ssize_t *shape,
const char *prefix, const char *suffix);
extern int _ctypes_simple_instance(PyObject *obj);
extern PyObject *_ctypes_ptrtype_cache;
PyObject *_ctypes_get_errobj(int **pspace);
extern PyObject *ComError;
#if PY_VERSION_HEX >= 0x020700A4
#define CTYPES_USING_CAPSULE
#define CTYPES_CAPSULE_INSTANTIATE_DESTRUCTOR(name) \
static void capsule_destructor_ ## name(PyObject *ptr) \
\
#define CAPSULE_NEW(pointer, name) \
(PyCapsule_New(pointer, name, capsule_destructor_ ## name))
#define CAPSULE_DEREFERENCE(capsule, name) \
(PyCapsule_GetPointer(capsule, name))
#define CTYPES_CAPSULE_INSTANTIATE_DESTRUCTOR(name)
#define CAPSULE_NEW(pointer, name) \
(PyCObject_FromVoidPtr(pointer, PyMem_Free))
#define CAPSULE_DEREFERENCE(capsule, name) \
(PyCObject_AsVoidPtr(capsule))
