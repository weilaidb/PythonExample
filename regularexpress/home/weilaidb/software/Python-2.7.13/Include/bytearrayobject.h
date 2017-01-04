#define Py_BYTEARRAYOBJECT_H
typedef struct  PyByteArrayObject;
PyAPI_DATA(PyTypeObject) PyByteArray_Type;
PyAPI_DATA(PyTypeObject) PyByteArrayIter_Type;
#define PyByteArray_Check(self) PyObject_TypeCheck(self, &PyByteArray_Type)
#define PyByteArray_CheckExact(self) (Py_TYPE(self) == &PyByteArray_Type)
PyAPI_FUNC(PyObject *) PyByteArray_FromObject(PyObject *);
PyAPI_FUNC(PyObject *) PyByteArray_Concat(PyObject *, PyObject *);
PyAPI_FUNC(PyObject *) PyByteArray_FromStringAndSize(const char *, Py_ssize_t);
PyAPI_FUNC(Py_ssize_t) PyByteArray_Size(PyObject *);
PyAPI_FUNC(char *) PyByteArray_AsString(PyObject *);
PyAPI_FUNC(int) PyByteArray_Resize(PyObject *, Py_ssize_t);
#define PyByteArray_AS_STRING(self) \
(assert(PyByteArray_Check(self)), \
Py_SIZE(self) ? ((PyByteArrayObject *)(self))->ob_bytes : _PyByteArray_empty_string)
#define PyByteArray_GET_SIZE(self)  (assert(PyByteArray_Check(self)),Py_SIZE(self))
PyAPI_DATA(char) _PyByteArray_empty_string[];
