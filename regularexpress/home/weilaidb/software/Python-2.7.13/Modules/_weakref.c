#define GET_WEAKREFS_LISTPTR(o) \
((PyWeakReference **) PyObject_GET_WEAKREFS_LISTPTR(o))
PyDoc_STRVAR(weakref_getweakrefcount__doc__,
"getweakrefcount(object) -- return the number of weak references\n"
"to 'object'.");
static PyObject *
weakref_getweakrefcount(PyObject *self, PyObject *object)
PyDoc_STRVAR(weakref_getweakrefs__doc__,
"getweakrefs(object) -- return a list of all weak reference objects\n"
"that point to 'object'.");
static PyObject *
weakref_getweakrefs(PyObject *self, PyObject *object)
PyDoc_STRVAR(weakref_proxy__doc__,
"proxy(object[, callback]) -- create a proxy object that weakly\n"
"references 'object'.  'callback', if given, is called with a\n"
"reference to the proxy when 'object' is about to be finalized.");
static PyObject *
weakref_proxy(PyObject *self, PyObject *args)
static PyMethodDef
weakref_functions[] =  ;
PyMODINIT_FUNC
init_weakref(void)
