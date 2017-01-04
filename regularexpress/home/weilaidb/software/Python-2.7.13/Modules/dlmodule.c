#define RTLD_LAZY 1
typedef void *PyUnivPtr;
typedef struct  dlobject;
static PyTypeObject Dltype;
static PyObject *Dlerror;
static PyObject *
newdlobject(PyUnivPtr *handle)
static void
dl_dealloc(dlobject *xp)
static PyObject *
dl_close(dlobject *xp)
static PyObject *
dl_sym(dlobject *xp, PyObject *args)
static PyObject *
dl_call(dlobject *xp, PyObject *args)
static PyMethodDef dlobject_methods[] = ;
static PyObject *
dl_getattr(dlobject *xp, char *name)
static PyTypeObject Dltype = ;
static PyObject *
dl_open(PyObject *self, PyObject *args)
static PyMethodDef dl_methods[] = ;
static void
insint(PyObject *d, char *name, int value)
PyMODINIT_FUNC
initdl(void)
