PyDoc_STRVAR(xxsubtype__doc__,
);
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
