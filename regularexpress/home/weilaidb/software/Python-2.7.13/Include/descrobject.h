#define Py_DESCROBJECT_H
typedef PyObject *(*getter)(PyObject *, void *);
typedef int (*setter)(PyObject *, PyObject *, void *);
typedef struct PyGetSetDef  PyGetSetDef;
typedef PyObject *(*wrapperfunc)(PyObject *self, PyObject *args,
void *wrapped);
typedef PyObject *(*wrapperfunc_kwds)(PyObject *self, PyObject *args,
void *wrapped, PyObject *kwds);
struct wrapperbase ;
#define PyWrapperFlag_KEYWORDS 1
#define PyDescr_COMMON \
PyObject_HEAD \
PyTypeObject *d_type; \
PyObject *d_name
typedef struct  PyDescrObject;
typedef struct  PyMethodDescrObject;
typedef struct  PyMemberDescrObject;
typedef struct  PyGetSetDescrObject;
typedef struct  PyWrapperDescrObject;
PyAPI_DATA(PyTypeObject) PyWrapperDescr_Type;
PyAPI_DATA(PyTypeObject) PyDictProxy_Type;
PyAPI_DATA(PyTypeObject) PyGetSetDescr_Type;
PyAPI_DATA(PyTypeObject) PyMemberDescr_Type;
PyAPI_FUNC(PyObject *) PyDescr_NewMethod(PyTypeObject *, PyMethodDef *);
PyAPI_FUNC(PyObject *) PyDescr_NewClassMethod(PyTypeObject *, PyMethodDef *);
PyAPI_FUNC(PyObject *) PyDescr_NewMember(PyTypeObject *,
struct PyMemberDef *);
PyAPI_FUNC(PyObject *) PyDescr_NewGetSet(PyTypeObject *,
struct PyGetSetDef *);
PyAPI_FUNC(PyObject *) PyDescr_NewWrapper(PyTypeObject *,
struct wrapperbase *, void *);
#define PyDescr_IsData(d) (Py_TYPE(d)->tp_descr_set != NULL)
PyAPI_FUNC(PyObject *) PyDictProxy_New(PyObject *);
PyAPI_FUNC(PyObject *) PyWrapper_New(PyObject *, PyObject *);
PyAPI_DATA(PyTypeObject) PyProperty_Type;
