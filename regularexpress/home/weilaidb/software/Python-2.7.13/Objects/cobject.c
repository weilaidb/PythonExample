typedef void (*destructor1)(void *);
typedef void (*destructor2)(void *, void*);
static int cobject_deprecation_warning(void)
PyObject *
PyCObject_FromVoidPtr(void *cobj, void (*destr)(void *))
PyObject *
PyCObject_FromVoidPtrAndDesc(void *cobj, void *desc,
void (*destr)(void *, void *))
void *
PyCObject_AsVoidPtr(PyObject *self)
void *
PyCObject_GetDesc(PyObject *self)
void *
PyCObject_Import(char *module_name, char *name)
int
PyCObject_SetVoidPtr(PyObject *self, void *cobj)
static void
PyCObject_dealloc(PyCObject *self)
PyDoc_STRVAR(PyCObject_Type__doc__,
"C objects to be exported from one extension module to another\n\
\n\
C objects are used for communication between extension modules.  They\n\
provide a way for an extension module to export a C interface to other\n\
extension modules, so that extension modules can use the Python import\n\
mechanism to link to one another.");
PyTypeObject PyCObject_Type = ;
