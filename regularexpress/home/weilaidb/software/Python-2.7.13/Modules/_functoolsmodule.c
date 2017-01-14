static PyObject *
functools_reduce(PyObject *self, PyObject *args)
PyDoc_STRVAR(reduce_doc,
"reduce(function, sequence[, initial]) -> value\n\
\n\
Apply a function of two arguments cumulatively to the items of a sequence,\n\
from left to right, so as to reduce the sequence to a single value.\n\
For example, reduce(lambda x, y: x+y, [1, 2, 3, 4, 5]) calculates\n\
((((1+2)+3)+4)+5).  If initial is present, it is placed before the items\n\
of the sequence in the calculation, and serves as a default when the\n\
sequence is empty.");
typedef struct  partialobject;
static PyTypeObject partial_type;
static PyObject *
partial_new(PyTypeObject *type, PyObject *args, PyObject *kw)
static void
partial_dealloc(partialobject *pto)
static PyObject *
partial_call(partialobject *pto, PyObject *args, PyObject *kw)
static int
partial_traverse(partialobject *pto, visitproc visit, void *arg)
PyDoc_STRVAR(partial_doc,
"partial(func, *args, **keywords) - new function with partial application\n\
of the given arguments and keywords.\n");
#define OFF(x) offsetof(partialobject, x)
static PyMemberDef partial_memberlist[] = ;
static PyObject *
partial_get_dict(partialobject *pto)
static int
partial_set_dict(partialobject *pto, PyObject *value)
static PyGetSetDef partial_getsetlist[] = ;
PyObject *
partial_reduce(partialobject *pto, PyObject *unused)
PyObject *
partial_setstate(partialobject *pto, PyObject *state)
static PyMethodDef partial_methods[] = ;
static PyTypeObject partial_type = ;
PyDoc_STRVAR(module_doc,
);
static PyMethodDef module_methods[] = ;
PyMODINIT_FUNC
init_functools(void)
