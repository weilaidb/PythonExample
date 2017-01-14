#define GET_WEAKREFS_LISTPTR(o) \
((PyWeakReference **) PyObject_GET_WEAKREFS_LISTPTR(o))
PyDoc_STRVAR(weakref_getweakrefcount__doc__,
);
static PyObject *
weakref_getweakrefcount(PyObject *self, PyObject *object)
PyDoc_STRVAR(weakref_getweakrefs__doc__,
);
static PyObject *
weakref_getweakrefs(PyObject *self, PyObject *object)
PyDoc_STRVAR(weakref_proxy__doc__,
);
static PyObject *
weakref_proxy(PyObject *self, PyObject *args)
static PyMethodDef
weakref_functions[] =  ;
PyMODINIT_FUNC
init_weakref(void)
