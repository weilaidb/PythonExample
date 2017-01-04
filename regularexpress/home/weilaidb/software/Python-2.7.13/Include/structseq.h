#define Py_STRUCTSEQ_H
typedef struct PyStructSequence_Field  PyStructSequence_Field;
typedef struct PyStructSequence_Desc  PyStructSequence_Desc;
extern char* PyStructSequence_UnnamedField;
PyAPI_FUNC(void) PyStructSequence_InitType(PyTypeObject *type,
PyStructSequence_Desc *desc);
PyAPI_FUNC(PyObject *) PyStructSequence_New(PyTypeObject* type);
typedef struct  PyStructSequence;
#define PyStructSequence_SET_ITEM(op, i, v) \
(((PyStructSequence *)(op))->ob_item[i] = v)
