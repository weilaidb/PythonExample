#define Py_RANGEOBJECT_H
PyAPI_DATA(PyTypeObject) PyRange_Type;
#define PyRange_Check(op) (Py_TYPE(op) == &PyRange_Type)
