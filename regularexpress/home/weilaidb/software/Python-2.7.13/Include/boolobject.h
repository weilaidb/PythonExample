#define Py_BOOLOBJECT_H
typedef PyIntObject PyBoolObject;
PyAPI_DATA(PyTypeObject) PyBool_Type;
#define PyBool_Check(x) (Py_TYPE(x) == &PyBool_Type)
PyAPI_DATA(PyIntObject) _Py_ZeroStruct, _Py_TrueStruct;
#define Py_False ((PyObject *) &_Py_ZeroStruct)
#define Py_True ((PyObject *) &_Py_TrueStruct)
#define Py_RETURN_TRUE return Py_INCREF(Py_True), Py_True
#define Py_RETURN_FALSE return Py_INCREF(Py_False), Py_False
PyAPI_FUNC(PyObject *) PyBool_FromLong(long);
