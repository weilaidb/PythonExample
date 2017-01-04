typedef struct  Noddy;
static void
Noddy_dealloc(Noddy* self)
static PyObject *
Noddy_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
static int
Noddy_init(Noddy *self, PyObject *args, PyObject *kwds)
static PyMemberDef Noddy_members[] = ;
static PyObject *
Noddy_getfirst(Noddy *self, void *closure)
static int
Noddy_setfirst(Noddy *self, PyObject *value, void *closure)
static PyObject *
Noddy_getlast(Noddy *self, void *closure)
static int
Noddy_setlast(Noddy *self, PyObject *value, void *closure)
static PyGetSetDef Noddy_getseters[] = ;
static PyObject *
Noddy_name(Noddy* self)
static PyMethodDef Noddy_methods[] = ;
static PyTypeObject NoddyType = ;
static PyMethodDef module_methods[] = ;
#define PyMODINIT_FUNC void
PyMODINIT_FUNC
initnoddy3(void)
