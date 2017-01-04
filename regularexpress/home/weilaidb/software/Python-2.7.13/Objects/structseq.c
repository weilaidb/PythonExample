static char visible_length_key[] = "n_sequence_fields";
static char real_length_key[] = "n_fields";
static char unnamed_fields_key[] = "n_unnamed_fields";
char *PyStructSequence_UnnamedField = "unnamed field";
#define VISIBLE_SIZE(op) Py_SIZE(op)
#define VISIBLE_SIZE_TP(tp) PyInt_AsLong( \
PyDict_GetItemString((tp)->tp_dict, visible_length_key))
#define REAL_SIZE_TP(tp) PyInt_AsLong( \
PyDict_GetItemString((tp)->tp_dict, real_length_key))
#define REAL_SIZE(op) REAL_SIZE_TP(Py_TYPE(op))
#define UNNAMED_FIELDS_TP(tp) PyInt_AsLong( \
PyDict_GetItemString((tp)->tp_dict, unnamed_fields_key))
#define UNNAMED_FIELDS(op) UNNAMED_FIELDS_TP(Py_TYPE(op))
PyObject *
PyStructSequence_New(PyTypeObject *type)
static void
structseq_dealloc(PyStructSequence *obj)
static Py_ssize_t
structseq_length(PyStructSequence *obj)
static PyObject*
structseq_item(PyStructSequence *obj, Py_ssize_t i)
static PyObject*
structseq_slice(PyStructSequence *obj, Py_ssize_t low, Py_ssize_t high)
static PyObject *
structseq_subscript(PyStructSequence *self, PyObject *item)
static PyObject *
structseq_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
static PyObject *
make_tuple(PyStructSequence *obj)
static PyObject *
structseq_repr(PyStructSequence *obj)
static PyObject *
structseq_concat(PyStructSequence *obj, PyObject *b)
static PyObject *
structseq_repeat(PyStructSequence *obj, Py_ssize_t n)
static int
structseq_contains(PyStructSequence *obj, PyObject *o)
static long
structseq_hash(PyObject *obj)
static PyObject *
structseq_richcompare(PyObject *obj, PyObject *o2, int op)
static PyObject *
structseq_reduce(PyStructSequence* self)
static PySequenceMethods structseq_as_sequence = ;
static PyMappingMethods structseq_as_mapping = ;
static PyMethodDef structseq_methods[] = ;
static PyTypeObject _struct_sequence_template = ;
void
PyStructSequence_InitType(PyTypeObject *type, PyStructSequence_Desc *desc)
