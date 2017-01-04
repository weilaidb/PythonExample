#define Py_MODULEOBJECT_H
PyAPI_DATA(PyTypeObject) PyModule_Type;
#define PyModule_Check(op) PyObject_TypeCheck(op, &PyModule_Type)
#define PyModule_CheckExact(op) (Py_TYPE(op) == &PyModule_Type)
PyAPI_FUNC(PyObject *) PyModule_New(const char *);
PyAPI_FUNC(PyObject *) PyModule_GetDict(PyObject *);
PyAPI_FUNC(char *) PyModule_GetName(PyObject *);
PyAPI_FUNC(char *) PyModule_GetFilename(PyObject *);
PyAPI_FUNC(void) _PyModule_Clear(PyObject *);
