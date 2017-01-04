typedef struct  PyModuleObject;
static PyMemberDef module_members[] = ;
PyObject *
PyModule_New(const char *name)
PyObject *
PyModule_GetDict(PyObject *m)
char *
PyModule_GetName(PyObject *m)
char *
PyModule_GetFilename(PyObject *m)
void
_PyModule_Clear(PyObject *m)
static int
module_init(PyModuleObject *m, PyObject *args, PyObject *kwds)
static void
module_dealloc(PyModuleObject *m)
static PyObject *
module_repr(PyModuleObject *m)
static int
module_traverse(PyModuleObject *m, visitproc visit, void *arg)
PyDoc_STRVAR(module_doc,
"module(name[, doc])\n\
\n\
Create a module object.\n\
The name must be a string; the optional doc argument can have any type.");
PyTypeObject PyModule_Type = ;
