#define Py_SETOBJECT_H
#define PySet_MINSIZE 8
typedef struct  setentry;
typedef struct _setobject PySetObject;
struct _setobject ;
PyAPI_DATA(PyTypeObject) PySet_Type;
PyAPI_DATA(PyTypeObject) PyFrozenSet_Type;
#define PyFrozenSet_CheckExact(ob) (Py_TYPE(ob) == &PyFrozenSet_Type)
#define PyAnySet_CheckExact(ob) \
(Py_TYPE(ob) == &PySet_Type || Py_TYPE(ob) == &PyFrozenSet_Type)
#define PyAnySet_Check(ob) \
(Py_TYPE(ob) == &PySet_Type || Py_TYPE(ob) == &PyFrozenSet_Type || \
PyType_IsSubtype(Py_TYPE(ob), &PySet_Type) || \
PyType_IsSubtype(Py_TYPE(ob), &PyFrozenSet_Type))
#define PySet_Check(ob) \
(Py_TYPE(ob) == &PySet_Type || \
PyType_IsSubtype(Py_TYPE(ob), &PySet_Type))
#define   PyFrozenSet_Check(ob) \
(Py_TYPE(ob) == &PyFrozenSet_Type || \
PyType_IsSubtype(Py_TYPE(ob), &PyFrozenSet_Type))
PyAPI_FUNC(PyObject *) PySet_New(PyObject *);
PyAPI_FUNC(PyObject *) PyFrozenSet_New(PyObject *);
PyAPI_FUNC(Py_ssize_t) PySet_Size(PyObject *anyset);
#define PySet_GET_SIZE(so) (((PySetObject *)(so))->used)
PyAPI_FUNC(int) PySet_Clear(PyObject *set);
PyAPI_FUNC(int) PySet_Contains(PyObject *anyset, PyObject *key);
PyAPI_FUNC(int) PySet_Discard(PyObject *set, PyObject *key);
PyAPI_FUNC(int) PySet_Add(PyObject *set, PyObject *key);
PyAPI_FUNC(int) _PySet_Next(PyObject *set, Py_ssize_t *pos, PyObject **key);
PyAPI_FUNC(int) _PySet_NextEntry(PyObject *set, Py_ssize_t *pos, PyObject **key, long *hash);
PyAPI_FUNC(PyObject *) PySet_Pop(PyObject *set);
PyAPI_FUNC(int) _PySet_Update(PyObject *set, PyObject *iterable);
