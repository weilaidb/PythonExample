#define Py_GENOBJECT_H
struct _frame;
typedef struct  PyGenObject;
PyAPI_DATA(PyTypeObject) PyGen_Type;
#define PyGen_Check(op) PyObject_TypeCheck(op, &PyGen_Type)
#define PyGen_CheckExact(op) (Py_TYPE(op) == &PyGen_Type)
PyAPI_FUNC(PyObject *) PyGen_New(struct _frame *);
PyAPI_FUNC(int) PyGen_NeedsFinalizing(PyGenObject *);
