#define Py_CELLOBJECT_H
typedef struct  PyCellObject;
PyAPI_DATA(PyTypeObject) PyCell_Type;
#define PyCell_Check(op) (Py_TYPE(op) == &PyCell_Type)
PyAPI_FUNC(PyObject *) PyCell_New(PyObject *);
PyAPI_FUNC(PyObject *) PyCell_Get(PyObject *);
PyAPI_FUNC(int) PyCell_Set(PyObject *, PyObject *);
#define PyCell_GET(op) (((PyCellObject *)(op))->ob_ref)
#define PyCell_SET(op, v) (((PyCellObject *)(op))->ob_ref = v)
