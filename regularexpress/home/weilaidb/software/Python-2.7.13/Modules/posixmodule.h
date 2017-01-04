#define Py_POSIXMODULE_H
PyAPI_FUNC(PyObject *) _PyInt_FromUid(uid_t);
PyAPI_FUNC(PyObject *) _PyInt_FromGid(gid_t);
PyAPI_FUNC(int) _Py_Uid_Converter(PyObject *, void *);
PyAPI_FUNC(int) _Py_Gid_Converter(PyObject *, void *);
