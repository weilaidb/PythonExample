#define Py_OBJIMPL_H
PyAPI_FUNC(void *) PyObject_Malloc(size_t);
PyAPI_FUNC(void *) PyObject_Realloc(void *, size_t);
PyAPI_FUNC(void) PyObject_Free(void *);
PyAPI_FUNC(void *) _PyObject_DebugMalloc(size_t nbytes);
PyAPI_FUNC(void *) _PyObject_DebugRealloc(void *p, size_t nbytes);
PyAPI_FUNC(void) _PyObject_DebugFree(void *p);
PyAPI_FUNC(void) _PyObject_DebugDumpAddress(const void *p);
PyAPI_FUNC(void) _PyObject_DebugCheckAddress(const void *p);
PyAPI_FUNC(void) _PyObject_DebugMallocStats(void);
PyAPI_FUNC(void *) _PyObject_DebugMallocApi(char api, size_t nbytes);
PyAPI_FUNC(void *) _PyObject_DebugReallocApi(char api, void *p, size_t nbytes);
PyAPI_FUNC(void) _PyObject_DebugFreeApi(char api, void *p);
PyAPI_FUNC(void) _PyObject_DebugCheckAddressApi(char api, const void *p);
PyAPI_FUNC(void *) _PyMem_DebugMalloc(size_t nbytes);
PyAPI_FUNC(void *) _PyMem_DebugRealloc(void *p, size_t nbytes);
PyAPI_FUNC(void) _PyMem_DebugFree(void *p);
#define PyObject_MALLOC         _PyObject_DebugMalloc
#define PyObject_Malloc         _PyObject_DebugMalloc
#define PyObject_REALLOC        _PyObject_DebugRealloc
#define PyObject_Realloc        _PyObject_DebugRealloc
#define PyObject_FREE           _PyObject_DebugFree
#define PyObject_Free           _PyObject_DebugFree
#define PyObject_MALLOC         PyObject_Malloc
#define PyObject_REALLOC        PyObject_Realloc
#define PyObject_FREE           PyObject_Free
#define PyObject_MALLOC         PyMem_MALLOC
#define PyObject_REALLOC        PyMem_REALLOC
#define PyObject_FREE           PyMem_FREE
#define PyObject_Del            PyObject_Free
#define PyObject_DEL            PyObject_FREE
#define _PyObject_Del           PyObject_Free
PyAPI_FUNC(PyObject *) PyObject_Init(PyObject *, PyTypeObject *);
PyAPI_FUNC(PyVarObject *) PyObject_InitVar(PyVarObject *,
PyTypeObject *, Py_ssize_t);
PyAPI_FUNC(PyObject *) _PyObject_New(PyTypeObject *);
PyAPI_FUNC(PyVarObject *) _PyObject_NewVar(PyTypeObject *, Py_ssize_t);
#define PyObject_New(type, typeobj) \
( (type *) _PyObject_New(typeobj) )
#define PyObject_NewVar(type, typeobj, n) \
( (type *) _PyObject_NewVar((typeobj), (n)) )
#define PyObject_INIT(op, typeobj) \
( Py_TYPE(op) = (typeobj), _Py_NewReference((PyObject *)(op)), (op) )
#define PyObject_INIT_VAR(op, typeobj, size) \
( Py_SIZE(op) = (size), PyObject_INIT((op), (typeobj)) )
#define _PyObject_SIZE(typeobj) ( (typeobj)->tp_basicsize )
#if ((SIZEOF_VOID_P - 1) & SIZEOF_VOID_P) != 0
#   error "_PyObject_VAR_SIZE requires SIZEOF_VOID_P be a power of 2"
#define _PyObject_VAR_SIZE(typeobj, nitems)     \
(size_t)                                    \
( ( (typeobj)->tp_basicsize +               \
(nitems)*(typeobj)->tp_itemsize +       \
(SIZEOF_VOID_P - 1)                     \
) & ~(SIZEOF_VOID_P - 1)                  \
)
#define PyObject_NEW(type, typeobj) \
( (type *) PyObject_Init( \
(PyObject *) PyObject_MALLOC( _PyObject_SIZE(typeobj) ), (typeobj)) )
#define PyObject_NEW_VAR(type, typeobj, n) \
( (type *) PyObject_InitVar( \
(PyVarObject *) PyObject_MALLOC(_PyObject_VAR_SIZE((typeobj),(n)) ),\
(typeobj), (n)) )
PyAPI_FUNC(Py_ssize_t) PyGC_Collect(void);
#define PyType_IS_GC(t) PyType_HasFeature((t), Py_TPFLAGS_HAVE_GC)
#define PyObject_IS_GC(o) (PyType_IS_GC(Py_TYPE(o)) && \
(Py_TYPE(o)->tp_is_gc == NULL || Py_TYPE(o)->tp_is_gc(o)))
PyAPI_FUNC(PyVarObject *) _PyObject_GC_Resize(PyVarObject *, Py_ssize_t);
#define PyObject_GC_Resize(type, op, n) \
( (type *) _PyObject_GC_Resize((PyVarObject *)(op), (n)) )
#define _PyObject_GC_Del PyObject_GC_Del
typedef union _gc_head  PyGC_Head;
extern PyGC_Head *_PyGC_generation0;
#define _Py_AS_GC(o) ((PyGC_Head *)(o)-1)
#define _PyGC_REFS_UNTRACKED                    (-2)
#define _PyGC_REFS_REACHABLE                    (-3)
#define _PyGC_REFS_TENTATIVELY_UNREACHABLE      (-4)
#define _PyObject_GC_TRACK(o) do  while (0);
#define _PyObject_GC_UNTRACK(o) do  while (0);
#define _PyObject_GC_IS_TRACKED(o) \
((_Py_AS_GC(o))->gc.gc_refs != _PyGC_REFS_UNTRACKED)
#define _PyObject_GC_MAY_BE_TRACKED(obj) \
(PyObject_IS_GC(obj) && \
(!PyTuple_CheckExact(obj) || _PyObject_GC_IS_TRACKED(obj)))
PyAPI_FUNC(PyObject *) _PyObject_GC_Malloc(size_t);
PyAPI_FUNC(PyObject *) _PyObject_GC_New(PyTypeObject *);
PyAPI_FUNC(PyVarObject *) _PyObject_GC_NewVar(PyTypeObject *, Py_ssize_t);
PyAPI_FUNC(void) PyObject_GC_Track(void *);
PyAPI_FUNC(void) PyObject_GC_UnTrack(void *);
PyAPI_FUNC(void) PyObject_GC_Del(void *);
#define PyObject_GC_New(type, typeobj) \
( (type *) _PyObject_GC_New(typeobj) )
#define PyObject_GC_NewVar(type, typeobj, n) \
( (type *) _PyObject_GC_NewVar((typeobj), (n)) )
#define Py_VISIT(op)                                                    \
do  while (0)
#define PyGC_HEAD_SIZE 0
#define PyObject_GC_Init(op)
#define PyObject_GC_Fini(op)
#define PyObject_AS_GC(op) (op)
#define PyObject_FROM_GC(op) (op)
#define PyType_SUPPORTS_WEAKREFS(t) \
(PyType_HasFeature((t), Py_TPFLAGS_HAVE_WEAKREFS) \
&& ((t)->tp_weaklistoffset > 0))
#define PyObject_GET_WEAKREFS_LISTPTR(o) \
((PyObject **) (((char *) (o)) + Py_TYPE(o)->tp_weaklistoffset))
