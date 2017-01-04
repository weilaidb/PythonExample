#define Py_METHODOBJECT_H
PyAPI_DATA(PyTypeObject) PyCFunction_Type;
#define PyCFunction_Check(op) (Py_TYPE(op) == &PyCFunction_Type)
typedef PyObject *(*PyCFunction)(PyObject *, PyObject *);
typedef PyObject *(*PyCFunctionWithKeywords)(PyObject *, PyObject *,
PyObject *);
typedef PyObject *(*PyNoArgsFunction)(PyObject *);
PyAPI_FUNC(PyCFunction) PyCFunction_GetFunction(PyObject *);
PyAPI_FUNC(PyObject *) PyCFunction_GetSelf(PyObject *);
PyAPI_FUNC(int) PyCFunction_GetFlags(PyObject *);
#define PyCFunction_GET_FUNCTION(func) \
(((PyCFunctionObject *)func) -> m_ml -> ml_meth)
#define PyCFunction_GET_SELF(func) \
(((PyCFunctionObject *)func) -> m_self)
#define PyCFunction_GET_FLAGS(func) \
(((PyCFunctionObject *)func) -> m_ml -> ml_flags)
PyAPI_FUNC(PyObject *) PyCFunction_Call(PyObject *, PyObject *, PyObject *);
struct PyMethodDef ;
typedef struct PyMethodDef PyMethodDef;
PyAPI_FUNC(PyObject *) Py_FindMethod(PyMethodDef[], PyObject *, const char *);
#define PyCFunction_New(ML, SELF) PyCFunction_NewEx((ML), (SELF), NULL)
PyAPI_FUNC(PyObject *) PyCFunction_NewEx(PyMethodDef *, PyObject *,
PyObject *);
#define METH_OLDARGS  0x0000
#define METH_VARARGS  0x0001
#define METH_KEYWORDS 0x0002
#define METH_NOARGS   0x0004
#define METH_O        0x0008
#define METH_CLASS    0x0010
#define METH_STATIC   0x0020
#define METH_COEXIST   0x0040
typedef struct PyMethodChain  PyMethodChain;
PyAPI_FUNC(PyObject *) Py_FindMethodInChain(PyMethodChain *, PyObject *,
const char *);
typedef struct  PyCFunctionObject;
PyAPI_FUNC(int) PyCFunction_ClearFreeList(void);
