#define Py_FUNCOBJECT_H
typedef struct  PyFunctionObject;
PyAPI_DATA(PyTypeObject) PyFunction_Type;
#define PyFunction_Check(op) (Py_TYPE(op) == &PyFunction_Type)
PyAPI_FUNC(PyObject *) PyFunction_New(PyObject *, PyObject *);
PyAPI_FUNC(PyObject *) PyFunction_GetCode(PyObject *);
PyAPI_FUNC(PyObject *) PyFunction_GetGlobals(PyObject *);
PyAPI_FUNC(PyObject *) PyFunction_GetModule(PyObject *);
PyAPI_FUNC(PyObject *) PyFunction_GetDefaults(PyObject *);
PyAPI_FUNC(int) PyFunction_SetDefaults(PyObject *, PyObject *);
PyAPI_FUNC(PyObject *) PyFunction_GetClosure(PyObject *);
PyAPI_FUNC(int) PyFunction_SetClosure(PyObject *, PyObject *);
#define PyFunction_GET_CODE(func) \
(((PyFunctionObject *)func) -> func_code)
#define PyFunction_GET_GLOBALS(func) \
(((PyFunctionObject *)func) -> func_globals)
#define PyFunction_GET_MODULE(func) \
(((PyFunctionObject *)func) -> func_module)
#define PyFunction_GET_DEFAULTS(func) \
(((PyFunctionObject *)func) -> func_defaults)
#define PyFunction_GET_CLOSURE(func) \
(((PyFunctionObject *)func) -> func_closure)
PyAPI_DATA(PyTypeObject) PyClassMethod_Type;
PyAPI_DATA(PyTypeObject) PyStaticMethod_Type;
PyAPI_FUNC(PyObject *) PyClassMethod_New(PyObject *);
PyAPI_FUNC(PyObject *) PyStaticMethod_New(PyObject *);
