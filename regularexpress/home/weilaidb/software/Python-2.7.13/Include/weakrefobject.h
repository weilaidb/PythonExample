#define Py_WEAKREFOBJECT_H
typedef struct _PyWeakReference PyWeakReference;
struct _PyWeakReference ;
PyAPI_DATA(PyTypeObject) _PyWeakref_RefType;
PyAPI_DATA(PyTypeObject) _PyWeakref_ProxyType;
PyAPI_DATA(PyTypeObject) _PyWeakref_CallableProxyType;
#define PyWeakref_CheckRef(op) PyObject_TypeCheck(op, &_PyWeakref_RefType)
#define PyWeakref_CheckRefExact(op) \
(Py_TYPE(op) == &_PyWeakref_RefType)
#define PyWeakref_CheckProxy(op) \
((Py_TYPE(op) == &_PyWeakref_ProxyType) || \
(Py_TYPE(op) == &_PyWeakref_CallableProxyType))
#define PyWeakref_Check(op) \
(PyWeakref_CheckRef(op) || PyWeakref_CheckProxy(op))
PyAPI_FUNC(PyObject *) PyWeakref_NewRef(PyObject *ob,
PyObject *callback);
PyAPI_FUNC(PyObject *) PyWeakref_NewProxy(PyObject *ob,
PyObject *callback);
PyAPI_FUNC(PyObject *) PyWeakref_GetObject(PyObject *ref);
PyAPI_FUNC(Py_ssize_t) _PyWeakref_GetWeakrefCount(PyWeakReference *head);
PyAPI_FUNC(void) _PyWeakref_ClearRef(PyWeakReference *self);
#define PyWeakref_GET_OBJECT(ref)                           \
(Py_REFCNT(((PyWeakReference *)(ref))->wr_object) > 0   \
? ((PyWeakReference *)(ref))->wr_object                \
: Py_None)
