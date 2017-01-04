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
"enumerate(iterable[, start]) -> iterator for index, value of iterable\n"
"\n"
"Return an enumerate object.  iterable must be another object that supports\n"
"iteration.  The enumerate object yields pairs containing a count (from\n"
"start, which defaults to zero) and a value yielded by the iterable argument.\n"
"enumerate is useful for obtaining an indexed list:\n"
"    (0, seq[0]), (1, seq[1]), (2, seq[2]), ...");
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
"reversed(sequence) -> reverse iterator over values of the sequence\n"
"\n"
"Return a reverse iterator");
static PyObject *
reversed_len(reversedobject *ro)
PyDoc_STRVAR(length_hint_doc, "Private method returning an estimate of len(list(it)).");
static PyMethodDef reversediter_methods[] = ;
PyTypeObject PyReversed_Type = ;
