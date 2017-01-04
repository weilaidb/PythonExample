#define Py_PYMEM_H
PyAPI_FUNC(void *) PyMem_Malloc(size_t);
PyAPI_FUNC(void *) PyMem_Realloc(void *, size_t);
PyAPI_FUNC(void) PyMem_Free(void *);
#define PyMem_MALLOC		_PyMem_DebugMalloc
#define PyMem_REALLOC		_PyMem_DebugRealloc
#define PyMem_FREE		_PyMem_DebugFree
#define PyMem_MALLOC(n)		((size_t)(n) > (size_t)PY_SSIZE_T_MAX ? NULL \
: malloc((n) ? (n) : 1))
#define PyMem_REALLOC(p, n)	((size_t)(n) > (size_t)PY_SSIZE_T_MAX  ? NULL \
: realloc((p), (n) ? (n) : 1))
#define PyMem_FREE		free
#define PyMem_New(type, n) \
( ((size_t)(n) > PY_SSIZE_T_MAX / sizeof(type)) ? NULL :	\
( (type *) PyMem_Malloc((n) * sizeof(type)) ) )
#define PyMem_NEW(type, n) \
( ((size_t)(n) > PY_SSIZE_T_MAX / sizeof(type)) ? NULL :	\
( (type *) PyMem_MALLOC((n) * sizeof(type)) ) )
#define PyMem_Resize(p, type, n) \
( (p) = ((size_t)(n) > PY_SSIZE_T_MAX / sizeof(type)) ? NULL :	\
(type *) PyMem_Realloc((p), (n) * sizeof(type)) )
#define PyMem_RESIZE(p, type, n) \
( (p) = ((size_t)(n) > PY_SSIZE_T_MAX / sizeof(type)) ? NULL :	\
(type *) PyMem_REALLOC((p), (n) * sizeof(type)) )
#define PyMem_Del		PyMem_Free
#define PyMem_DEL		PyMem_FREE
