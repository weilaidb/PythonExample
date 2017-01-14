typedef struct  seqiterobject;
PyObject *
PySeqIter_New(PyObject *seq)
static void
iter_dealloc(seqiterobject *it)
static int
iter_traverse(seqiterobject *it, visitproc visit, void *arg)
static PyObject *
iter_iternext(PyObject *iterator)
static PyObject *
iter_len(seqiterobject *it)
PyDoc_STRVAR(length_hint_doc, );
static PyMethodDef seqiter_methods[] = ;
PyTypeObject PySeqIter_Type = ;
typedef struct  calliterobject;
PyObject *
PyCallIter_New(PyObject *callable, PyObject *sentinel)
static void
calliter_dealloc(calliterobject *it)
static int
calliter_traverse(calliterobject *it, visitproc visit, void *arg)
static PyObject *
calliter_iternext(calliterobject *it)
PyTypeObject PyCallIter_Type = ;
