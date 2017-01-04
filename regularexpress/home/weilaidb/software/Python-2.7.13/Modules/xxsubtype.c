PyDoc_STRVAR(xxsubtype__doc__,
"xxsubtype is an example module showing how to subtype builtin types from C.\n"
"test_descr.py in the standard test suite requires it in order to complete.\n"
"If you don't care about the examples, and don't intend to run the Python\n"
"test suite, you can recompile Python without Modules/xxsubtype.c.");
#define DEFERRED_ADDRESS(ADDR) 0
typedef struct  spamlistobject;
static PyObject *
spamlist_getstate(spamlistobject *self, PyObject *args)
static PyObject *
spamlist_setstate(spamlistobject *self, PyObject *args)
static PyObject *
spamlist_specialmeth(PyObject *self, PyObject *args, PyObject *kw)
static PyMethodDef spamlist_methods[] = ;
static int
spamlist_init(spamlistobject *self, PyObject *args, PyObject *kwds)
static PyObject *
spamlist_state_get(spamlistobject *self)
static PyGetSetDef spamlist_getsets[] = ;
static PyTypeObject spamlist_type = ;
typedef struct  spamdictobject;
static PyObject *
spamdict_getstate(spamdictobject *self, PyObject *args)
static PyObject *
spamdict_setstate(spamdictobject *self, PyObject *args)
static PyMethodDef spamdict_methods[] = ;
static int
spamdict_init(spamdictobject *self, PyObject *args, PyObject *kwds)
static PyMemberDef spamdict_members[] = ;
static PyTypeObject spamdict_type = ;
static PyObject *
spam_bench(PyObject *self, PyObject *args)
static PyMethodDef xxsubtype_functions[] = ;
PyMODINIT_FUNC
initxxsubtype(void)
