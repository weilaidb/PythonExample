typedef struct  enumobject;
static PyObject *
enum_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
static void
enum_dealloc(enumobject *en)
static int
enum_traverse(enumobject *en, visitproc visit, void *arg)
static PyObject *
enum_next_long(enumobject *en, PyObject* next_item)
static PyObject *
enum_next(enumobject *en)
PyDoc_STRVAR(enum_doc,
);
PyTypeObject PyEnum_Type = ;
typedef struct  reversedobject;
static PyObject *
reversed_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
static void
reversed_dealloc(reversedobject *ro)
static int
reversed_traverse(reversedobject *ro, visitproc visit, void *arg)
static PyObject *
reversed_next(reversedobject *ro)
PyDoc_STRVAR(reversed_doc,
);
static PyObject *
reversed_len(reversedobject *ro)
PyDoc_STRVAR(length_hint_doc, );
static PyMethodDef reversediter_methods[] = ;
PyTypeObject PyReversed_Type = ;
