#define Py_OBJECT_H
#if defined(Py_DEBUG) && !defined(Py_TRACE_REFS)
#define Py_TRACE_REFS
#if defined(Py_TRACE_REFS) && !defined(Py_REF_DEBUG)
#define Py_REF_DEBUG
#define _PyObject_HEAD_EXTRA            \
struct _object *_ob_next;           \
struct _object *_ob_prev;
#define _PyObject_EXTRA_INIT 0, 0,
#define _PyObject_HEAD_EXTRA
#define _PyObject_EXTRA_INIT
#define PyObject_HEAD                   \
_PyObject_HEAD_EXTRA                \
Py_ssize_t ob_refcnt;               \
struct _typeobject *ob_type;
#define PyObject_HEAD_INIT(type)        \
_PyObject_EXTRA_INIT                \
1, type,
#define PyVarObject_HEAD_INIT(type, size)       \
PyObject_HEAD_INIT(type) size,
#define PyObject_VAR_HEAD               \
PyObject_HEAD                       \
Py_ssize_t ob_size;
#define Py_INVALID_SIZE (Py_ssize_t)-1
typedef struct _object  PyObject;
typedef struct  PyVarObject;
#define Py_REFCNT(ob)           (((PyObject*)(ob))->ob_refcnt)
#define Py_TYPE(ob)             (((PyObject*)(ob))->ob_type)
#define Py_SIZE(ob)             (((PyVarObject*)(ob))->ob_size)
typedef PyObject * (*unaryfunc)(PyObject *);
typedef PyObject * (*binaryfunc)(PyObject *, PyObject *);
typedef PyObject * (*ternaryfunc)(PyObject *, PyObject *, PyObject *);
typedef int (*inquiry)(PyObject *);
typedef Py_ssize_t (*lenfunc)(PyObject *);
typedef int (*coercion)(PyObject **, PyObject **);
typedef PyObject *(*intargfunc)(PyObject *, int) Py_DEPRECATED(2.5);
typedef PyObject *(*intintargfunc)(PyObject *, int, int) Py_DEPRECATED(2.5);
typedef PyObject *(*ssizeargfunc)(PyObject *, Py_ssize_t);
typedef PyObject *(*ssizessizeargfunc)(PyObject *, Py_ssize_t, Py_ssize_t);
typedef int(*intobjargproc)(PyObject *, int, PyObject *);
typedef int(*intintobjargproc)(PyObject *, int, int, PyObject *);
typedef int(*ssizeobjargproc)(PyObject *, Py_ssize_t, PyObject *);
typedef int(*ssizessizeobjargproc)(PyObject *, Py_ssize_t, Py_ssize_t, PyObject *);
typedef int(*objobjargproc)(PyObject *, PyObject *, PyObject *);
typedef int (*getreadbufferproc)(PyObject *, int, void **);
typedef int (*getwritebufferproc)(PyObject *, int, void **);
typedef int (*getsegcountproc)(PyObject *, int *);
typedef int (*getcharbufferproc)(PyObject *, int, char **);
typedef Py_ssize_t (*readbufferproc)(PyObject *, Py_ssize_t, void **);
typedef Py_ssize_t (*writebufferproc)(PyObject *, Py_ssize_t, void **);
typedef Py_ssize_t (*segcountproc)(PyObject *, Py_ssize_t *);
typedef Py_ssize_t (*charbufferproc)(PyObject *, Py_ssize_t, char **);
typedef struct bufferinfo  Py_buffer;
typedef int (*getbufferproc)(PyObject *, Py_buffer *, int);
typedef void (*releasebufferproc)(PyObject *, Py_buffer *);
#define PyBUF_SIMPLE 0
#define PyBUF_WRITABLE 0x0001
#define PyBUF_WRITEABLE PyBUF_WRITABLE
#define PyBUF_FORMAT 0x0004
#define PyBUF_ND 0x0008
#define PyBUF_STRIDES (0x0010 | PyBUF_ND)
#define PyBUF_C_CONTIGUOUS (0x0020 | PyBUF_STRIDES)
#define PyBUF_F_CONTIGUOUS (0x0040 | PyBUF_STRIDES)
#define PyBUF_ANY_CONTIGUOUS (0x0080 | PyBUF_STRIDES)
#define PyBUF_INDIRECT (0x0100 | PyBUF_STRIDES)
#define PyBUF_CONTIG (PyBUF_ND | PyBUF_WRITABLE)
#define PyBUF_CONTIG_RO (PyBUF_ND)
#define PyBUF_STRIDED (PyBUF_STRIDES | PyBUF_WRITABLE)
#define PyBUF_STRIDED_RO (PyBUF_STRIDES)
#define PyBUF_RECORDS (PyBUF_STRIDES | PyBUF_WRITABLE | PyBUF_FORMAT)
#define PyBUF_RECORDS_RO (PyBUF_STRIDES | PyBUF_FORMAT)
#define PyBUF_FULL (PyBUF_INDIRECT | PyBUF_WRITABLE | PyBUF_FORMAT)
#define PyBUF_FULL_RO (PyBUF_INDIRECT | PyBUF_FORMAT)
#define PyBUF_READ  0x100
#define PyBUF_WRITE 0x200
#define PyBUF_SHADOW 0x400
typedef int (*objobjproc)(PyObject *, PyObject *);
typedef int (*visitproc)(PyObject *, void *);
typedef int (*traverseproc)(PyObject *, visitproc, void *);
typedef struct  PyNumberMethods;
typedef struct  PySequenceMethods;
typedef struct  PyMappingMethods;
typedef struct  PyBufferProcs;
typedef void (*freefunc)(void *);
typedef void (*destructor)(PyObject *);
typedef int (*printfunc)(PyObject *, FILE *, int);
typedef PyObject *(*getattrfunc)(PyObject *, char *);
typedef PyObject *(*getattrofunc)(PyObject *, PyObject *);
typedef int (*setattrfunc)(PyObject *, char *, PyObject *);
typedef int (*setattrofunc)(PyObject *, PyObject *, PyObject *);
typedef int (*cmpfunc)(PyObject *, PyObject *);
typedef PyObject *(*reprfunc)(PyObject *);
typedef long (*hashfunc)(PyObject *);
typedef PyObject *(*richcmpfunc) (PyObject *, PyObject *, int);
typedef PyObject *(*getiterfunc) (PyObject *);
typedef PyObject *(*iternextfunc) (PyObject *);
typedef PyObject *(*descrgetfunc) (PyObject *, PyObject *, PyObject *);
typedef int (*descrsetfunc) (PyObject *, PyObject *, PyObject *);
typedef int (*initproc)(PyObject *, PyObject *, PyObject *);
typedef PyObject *(*newfunc)(struct _typeobject *, PyObject *, PyObject *);
typedef PyObject *(*allocfunc)(struct _typeobject *, Py_ssize_t);
typedef struct _typeobject  PyTypeObject;
typedef struct _heaptypeobject  PyHeapTypeObject;
#define PyHeapType_GET_MEMBERS(etype) \
((PyMemberDef *)(((char *)etype) + Py_TYPE(etype)->tp_basicsize))
PyAPI_FUNC(int) PyType_IsSubtype(PyTypeObject *, PyTypeObject *);
#define PyObject_TypeCheck(ob, tp) \
(Py_TYPE(ob) == (tp) || PyType_IsSubtype(Py_TYPE(ob), (tp)))
PyAPI_DATA(PyTypeObject) PyType_Type;
PyAPI_DATA(PyTypeObject) PyBaseObject_Type;
PyAPI_DATA(PyTypeObject) PySuper_Type;
#define PyType_Check(op) \
PyType_FastSubclass(Py_TYPE(op), Py_TPFLAGS_TYPE_SUBCLASS)
#define PyType_CheckExact(op) (Py_TYPE(op) == &PyType_Type)
PyAPI_FUNC(int) PyType_Ready(PyTypeObject *);
PyAPI_FUNC(PyObject *) PyType_GenericAlloc(PyTypeObject *, Py_ssize_t);
PyAPI_FUNC(PyObject *) PyType_GenericNew(PyTypeObject *,
PyObject *, PyObject *);
PyAPI_FUNC(PyObject *) _PyType_Lookup(PyTypeObject *, PyObject *);
PyAPI_FUNC(PyObject *) _PyObject_LookupSpecial(PyObject *, char *, PyObject **);
PyAPI_FUNC(unsigned int) PyType_ClearCache(void);
PyAPI_FUNC(void) PyType_Modified(PyTypeObject *);
PyAPI_FUNC(int) PyObject_Print(PyObject *, FILE *, int);
PyAPI_FUNC(void) _PyObject_Dump(PyObject *);
PyAPI_FUNC(PyObject *) PyObject_Repr(PyObject *);
PyAPI_FUNC(PyObject *) _PyObject_Str(PyObject *);
PyAPI_FUNC(PyObject *) PyObject_Str(PyObject *);
#define PyObject_Bytes PyObject_Str
PyAPI_FUNC(PyObject *) PyObject_Unicode(PyObject *);
PyAPI_FUNC(int) PyObject_Compare(PyObject *, PyObject *);
PyAPI_FUNC(PyObject *) PyObject_RichCompare(PyObject *, PyObject *, int);
PyAPI_FUNC(int) PyObject_RichCompareBool(PyObject *, PyObject *, int);
PyAPI_FUNC(PyObject *) PyObject_GetAttrString(PyObject *, const char *);
PyAPI_FUNC(int) PyObject_SetAttrString(PyObject *, const char *, PyObject *);
PyAPI_FUNC(int) PyObject_HasAttrString(PyObject *, const char *);
PyAPI_FUNC(PyObject *) PyObject_GetAttr(PyObject *, PyObject *);
PyAPI_FUNC(int) PyObject_SetAttr(PyObject *, PyObject *, PyObject *);
PyAPI_FUNC(int) PyObject_HasAttr(PyObject *, PyObject *);
PyAPI_FUNC(PyObject **) _PyObject_GetDictPtr(PyObject *);
PyAPI_FUNC(PyObject *) PyObject_SelfIter(PyObject *);
PyAPI_FUNC(PyObject *) _PyObject_NextNotImplemented(PyObject *);
PyAPI_FUNC(PyObject *) PyObject_GenericGetAttr(PyObject *, PyObject *);
PyAPI_FUNC(int) PyObject_GenericSetAttr(PyObject *,
PyObject *, PyObject *);
PyAPI_FUNC(long) PyObject_Hash(PyObject *);
PyAPI_FUNC(long) PyObject_HashNotImplemented(PyObject *);
PyAPI_FUNC(int) PyObject_IsTrue(PyObject *);
PyAPI_FUNC(int) PyObject_Not(PyObject *);
PyAPI_FUNC(int) PyCallable_Check(PyObject *);
PyAPI_FUNC(int) PyNumber_Coerce(PyObject **, PyObject **);
PyAPI_FUNC(int) PyNumber_CoerceEx(PyObject **, PyObject **);
PyAPI_FUNC(void) PyObject_ClearWeakRefs(PyObject *);
extern int _PyObject_SlotCompare(PyObject *, PyObject *);
PyAPI_FUNC(PyObject *)
_PyObject_GenericGetAttrWithDict(PyObject *, PyObject *, PyObject *);
PyAPI_FUNC(int)
_PyObject_GenericSetAttrWithDict(PyObject *, PyObject *,
PyObject *, PyObject *);
PyAPI_FUNC(PyObject *) PyObject_Dir(PyObject *);
PyAPI_FUNC(int) Py_ReprEnter(PyObject *);
PyAPI_FUNC(void) Py_ReprLeave(PyObject *);
PyAPI_FUNC(long) _Py_HashDouble(double);
PyAPI_FUNC(long) _Py_HashPointer(void*);
typedef struct  _Py_HashSecret_t;
PyAPI_DATA(_Py_HashSecret_t) _Py_HashSecret;
PyAPI_DATA(int) _Py_HashSecret_Initialized;
#define PyObject_REPR(obj) PyString_AS_STRING(PyObject_Repr(obj))
#define Py_PRINT_RAW    1
#define Py_TPFLAGS_HAVE_GETCHARBUFFER  (1L<<0)
#define Py_TPFLAGS_HAVE_SEQUENCE_IN (1L<<1)
#define Py_TPFLAGS_GC 0
#define Py_TPFLAGS_HAVE_INPLACEOPS (1L<<3)
#define Py_TPFLAGS_CHECKTYPES (1L<<4)
#define Py_TPFLAGS_HAVE_RICHCOMPARE (1L<<5)
#define Py_TPFLAGS_HAVE_WEAKREFS (1L<<6)
#define Py_TPFLAGS_HAVE_ITER (1L<<7)
#define Py_TPFLAGS_HAVE_CLASS (1L<<8)
#define Py_TPFLAGS_HEAPTYPE (1L<<9)
#define Py_TPFLAGS_BASETYPE (1L<<10)
#define Py_TPFLAGS_READY (1L<<12)
#define Py_TPFLAGS_READYING (1L<<13)
#define Py_TPFLAGS_HAVE_GC (1L<<14)
#define Py_TPFLAGS_HAVE_STACKLESS_EXTENSION (3L<<15)
#define Py_TPFLAGS_HAVE_STACKLESS_EXTENSION 0
#define Py_TPFLAGS_HAVE_INDEX (1L<<17)
#define Py_TPFLAGS_HAVE_VERSION_TAG   (1L<<18)
#define Py_TPFLAGS_VALID_VERSION_TAG  (1L<<19)
#define Py_TPFLAGS_IS_ABSTRACT (1L<<20)
#define Py_TPFLAGS_HAVE_NEWBUFFER (1L<<21)
#define Py_TPFLAGS_INT_SUBCLASS         (1L<<23)
#define Py_TPFLAGS_LONG_SUBCLASS        (1L<<24)
#define Py_TPFLAGS_LIST_SUBCLASS        (1L<<25)
#define Py_TPFLAGS_TUPLE_SUBCLASS       (1L<<26)
#define Py_TPFLAGS_STRING_SUBCLASS      (1L<<27)
#define Py_TPFLAGS_UNICODE_SUBCLASS     (1L<<28)
#define Py_TPFLAGS_DICT_SUBCLASS        (1L<<29)
#define Py_TPFLAGS_BASE_EXC_SUBCLASS    (1L<<30)
#define Py_TPFLAGS_TYPE_SUBCLASS        (1L<<31)
#define Py_TPFLAGS_DEFAULT_EXTERNAL ( \
Py_TPFLAGS_HAVE_GETCHARBUFFER | \
Py_TPFLAGS_HAVE_SEQUENCE_IN | \
Py_TPFLAGS_HAVE_INPLACEOPS | \
Py_TPFLAGS_HAVE_RICHCOMPARE | \
Py_TPFLAGS_HAVE_WEAKREFS | \
Py_TPFLAGS_HAVE_ITER | \
Py_TPFLAGS_HAVE_CLASS | \
Py_TPFLAGS_HAVE_STACKLESS_EXTENSION | \
Py_TPFLAGS_HAVE_INDEX | \
0)
#define Py_TPFLAGS_DEFAULT_CORE (Py_TPFLAGS_DEFAULT_EXTERNAL | \
Py_TPFLAGS_HAVE_VERSION_TAG)
#define Py_TPFLAGS_DEFAULT Py_TPFLAGS_DEFAULT_CORE
#define Py_TPFLAGS_DEFAULT Py_TPFLAGS_DEFAULT_EXTERNAL
#define PyType_HasFeature(t,f)  (((t)->tp_flags & (f)) != 0)
#define PyType_FastSubclass(t,f)  PyType_HasFeature(t,f)
PyAPI_DATA(Py_ssize_t) _Py_RefTotal;
PyAPI_FUNC(void) _Py_NegativeRefcount(const char *fname,
int lineno, PyObject *op);
PyAPI_FUNC(PyObject *) _PyDict_Dummy(void);
PyAPI_FUNC(PyObject *) _PySet_Dummy(void);
PyAPI_FUNC(Py_ssize_t) _Py_GetRefTotal(void);
#define _Py_INC_REFTOTAL        _Py_RefTotal++
#define _Py_DEC_REFTOTAL        _Py_RefTotal--
#define _Py_REF_DEBUG_COMMA     ,
#define _Py_CHECK_REFCNT(OP)                                    \
#define _Py_INC_REFTOTAL
#define _Py_DEC_REFTOTAL
#define _Py_REF_DEBUG_COMMA
#define _Py_CHECK_REFCNT(OP);
PyAPI_FUNC(void) inc_count(PyTypeObject *);
PyAPI_FUNC(void) dec_count(PyTypeObject *);
#define _Py_INC_TPALLOCS(OP)    inc_count(Py_TYPE(OP))
#define _Py_INC_TPFREES(OP)     dec_count(Py_TYPE(OP))
#define _Py_DEC_TPFREES(OP)     Py_TYPE(OP)->tp_frees--
#define _Py_COUNT_ALLOCS_COMMA  ,
#define _Py_INC_TPALLOCS(OP)
#define _Py_INC_TPFREES(OP)
#define _Py_DEC_TPFREES(OP)
#define _Py_COUNT_ALLOCS_COMMA
PyAPI_FUNC(void) _Py_NewReference(PyObject *);
PyAPI_FUNC(void) _Py_ForgetReference(PyObject *);
PyAPI_FUNC(void) _Py_Dealloc(PyObject *);
PyAPI_FUNC(void) _Py_PrintReferences(FILE *);
PyAPI_FUNC(void) _Py_PrintReferenceAddresses(FILE *);
PyAPI_FUNC(void) _Py_AddToAllObjects(PyObject *, int force);
#define _Py_NewReference(op) (                          \
_Py_INC_TPALLOCS(op) _Py_COUNT_ALLOCS_COMMA         \
_Py_INC_REFTOTAL  _Py_REF_DEBUG_COMMA               \
Py_REFCNT(op) = 1)
#define _Py_ForgetReference(op) _Py_INC_TPFREES(op)
#define _Py_Dealloc(op) (                               \
_Py_INC_TPFREES(op) _Py_COUNT_ALLOCS_COMMA          \
(*Py_TYPE(op)->tp_dealloc)((PyObject *)(op)))
#define Py_INCREF(op) (                         \
_Py_INC_REFTOTAL  _Py_REF_DEBUG_COMMA       \
((PyObject*)(op))->ob_refcnt++)
#define Py_DECREF(op)                                   \
do  while (0)
#define Py_CLEAR(op)                            \
do  while (0)
#define Py_XINCREF(op) do  while (0)
#define Py_XDECREF(op) do  while (0)
#define Py_SETREF(op, op2)                      \
do  while (0)
#define Py_XSETREF(op, op2)                     \
do  while (0)
PyAPI_FUNC(void) Py_IncRef(PyObject *);
PyAPI_FUNC(void) Py_DecRef(PyObject *);
PyAPI_DATA(PyObject) _Py_NoneStruct;
#define Py_None (&_Py_NoneStruct)
#define Py_RETURN_NONE return Py_INCREF(Py_None), Py_None
PyAPI_DATA(PyObject) _Py_NotImplementedStruct;
#define Py_NotImplemented (&_Py_NotImplementedStruct)
#define Py_LT 0
#define Py_LE 1
#define Py_EQ 2
#define Py_NE 3
#define Py_GT 4
#define Py_GE 5
PyAPI_DATA(int) _Py_SwappedOp[];
#define staticforward static
#define statichere static
PyAPI_FUNC(void) _PyTrash_deposit_object(PyObject*);
PyAPI_FUNC(void) _PyTrash_destroy_chain(void);
PyAPI_DATA(int) _PyTrash_delete_nesting;
PyAPI_DATA(PyObject *) _PyTrash_delete_later;
PyAPI_FUNC(void) _PyTrash_thread_deposit_object(PyObject*);
PyAPI_FUNC(void) _PyTrash_thread_destroy_chain(void);
#define PyTrash_UNWIND_LEVEL 50
#define Py_TRASHCAN_SAFE_BEGIN(op) \
do  while (0);
