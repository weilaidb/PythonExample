#define Py_MEMORYOBJECT_H
PyAPI_DATA(PyTypeObject) PyMemoryView_Type;
#define PyMemoryView_Check(op) (Py_TYPE(op) == &PyMemoryView_Type)
#define PyMemoryView_GET_BUFFER(op) (&((PyMemoryViewObject *)(op))->view)
#define PyMemoryView_GET_BASE(op) (((PyMemoryViewObject *)(op))->view.obj)
PyAPI_FUNC(PyObject *) PyMemoryView_GetContiguous(PyObject *base,
int buffertype,
char fort);
PyAPI_FUNC(PyObject *) PyMemoryView_FromObject(PyObject *base);
PyAPI_FUNC(PyObject *) PyMemoryView_FromBuffer(Py_buffer *info);
typedef struct  PyMemoryViewObject;
