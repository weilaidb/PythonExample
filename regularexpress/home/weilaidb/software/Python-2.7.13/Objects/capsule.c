typedef struct  PyCapsule;
static int
_is_legal_capsule(PyCapsule *capsule, const char *invalid_capsule)
#define is_legal_capsule(capsule, name) \
(_is_legal_capsule(capsule, \
name ))
static int
name_matches(const char *name1, const char *name2)
PyObject *
PyCapsule_New(void *pointer, const char *name, PyCapsule_Destructor destructor)
int
PyCapsule_IsValid(PyObject *o, const char *name)
void *
PyCapsule_GetPointer(PyObject *o, const char *name)
const char *
PyCapsule_GetName(PyObject *o)
PyCapsule_Destructor
PyCapsule_GetDestructor(PyObject *o)
void *
PyCapsule_GetContext(PyObject *o)
int
PyCapsule_SetPointer(PyObject *o, void *pointer)
int
PyCapsule_SetName(PyObject *o, const char *name)
int
PyCapsule_SetDestructor(PyObject *o, PyCapsule_Destructor destructor)
int
PyCapsule_SetContext(PyObject *o, void *context)
void *
PyCapsule_Import(const char *name, int no_block)
static void
capsule_dealloc(PyObject *o)
static PyObject *
capsule_repr(PyObject *o)
PyDoc_STRVAR(PyCapsule_Type__doc__,
pointer in a Python\n\
object.  They're a way of passing data through the Python interpreter\n\
without creating your own custom type.\n\
\n\
Capsules are used for communication between extension modules.\n\
They provide a way for an extension module to export a C interface\n\
to other extension modules, so that extension modules can use the\n\
Python import mechanism to link to one another.\n\
");
PyTypeObject PyCapsule_Type = ;
