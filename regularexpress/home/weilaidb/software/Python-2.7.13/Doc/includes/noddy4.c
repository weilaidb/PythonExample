typedef struct  Noddy;
static int
Noddy_traverse(Noddy *self, visitproc visit, void *arg)
static int
Noddy_clear(Noddy *self)
static void
Noddy_dealloc(Noddy* self)
static PyObject *
Noddy_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
static int
Noddy_init(Noddy *self, PyObject *args, PyObject *kwds)
static PyMemberDef Noddy_members[] = ;
static PyObject *
Noddy_name(Noddy* self)
static PyMethodDef Noddy_methods[] = ;
static PyTypeObject NoddyType = ;
static PyMethodDef module_methods[] = ;
#define PyMODINIT_FUNC void
PyMODINIT_FUNC
initnoddy4(void)
