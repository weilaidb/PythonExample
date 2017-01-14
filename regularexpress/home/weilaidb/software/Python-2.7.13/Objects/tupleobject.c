#define PyTuple_MAXSAVESIZE     20
#define PyTuple_MAXFREELIST  2000
#if PyTuple_MAXSAVESIZE > 0
static PyTupleObject *free_list[PyTuple_MAXSAVESIZE];
static int numfree[PyTuple_MAXSAVESIZE];
Py_ssize_t fast_tuple_allocs;
Py_ssize_t tuple_zero_allocs;
static Py_ssize_t count_untracked = 0;
static Py_ssize_t count_tracked = 0;
static void
show_track(void)
PyObject *
PyTuple_New(register Py_ssize_t size)
Py_ssize_t
PyTuple_Size(register PyObject *op)
PyObject *
PyTuple_GetItem(register PyObject *op, register Py_ssize_t i)
int
PyTuple_SetItem(register PyObject *op, register Py_ssize_t i, PyObject *newitem)
void
_PyTuple_MaybeUntrack(PyObject *op)
PyObject *
PyTuple_Pack(Py_ssize_t n, ...)
static void
tupledealloc(register PyTupleObject *op)
static int
tupleprint(PyTupleObject *op, FILE *fp, int flags)
static PyObject *
tuplerepr(PyTupleObject *v)
static long
tuplehash(PyTupleObject *v)
static Py_ssize_t
tuplelength(PyTupleObject *a)
static int
tuplecontains(PyTupleObject *a, PyObject *el)
static PyObject *
tupleitem(register PyTupleObject *a, register Py_ssize_t i)
static PyObject *
tupleslice(register PyTupleObject *a, register Py_ssize_t ilow,
register Py_ssize_t ihigh)
PyObject *
PyTuple_GetSlice(PyObject *op, Py_ssize_t i, Py_ssize_t j)
static PyObject *
tupleconcat(register PyTupleObject *a, register PyObject *bb)
static PyObject *
tuplerepeat(PyTupleObject *a, Py_ssize_t n)
static PyObject *
tupleindex(PyTupleObject *self, PyObject *args)
static PyObject *
tuplecount(PyTupleObject *self, PyObject *v)
static int
tupletraverse(PyTupleObject *o, visitproc visit, void *arg)
static PyObject *
tuplerichcompare(PyObject *v, PyObject *w, int op)
static PyObject *
tuple_subtype_new(PyTypeObject *type, PyObject *args, PyObject *kwds);
static PyObject *
tuple_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
static PyObject *
tuple_subtype_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
PyDoc_STRVAR(tuple_doc,
"tuple() -> empty tuple\n\
tuple(iterable) -> tuple initialized from iterable's items\n\
\n\
If the argument is a tuple, the return value is the same object.");
static PySequenceMethods tuple_as_sequence = ;
static PyObject*
tuplesubscript(PyTupleObject* self, PyObject* item)
static PyObject *
tuple_getnewargs(PyTupleObject *v)
PyDoc_STRVAR(index_doc,
);
PyDoc_STRVAR(count_doc,
);
static PyMethodDef tuple_methods[] = ;
static PyMappingMethods tuple_as_mapping = ;
static PyObject *tuple_iter(PyObject *seq);
PyTypeObject PyTuple_Type = ;
int
_PyTuple_Resize(PyObject **pv, Py_ssize_t newsize)
int
PyTuple_ClearFreeList(void)
void
PyTuple_Fini(void)
typedef struct  tupleiterobject;
static void
tupleiter_dealloc(tupleiterobject *it)
static int
tupleiter_traverse(tupleiterobject *it, visitproc visit, void *arg)
static PyObject *
tupleiter_next(tupleiterobject *it)
static PyObject *
tupleiter_len(tupleiterobject *it)
PyDoc_STRVAR(length_hint_doc, );
static PyMethodDef tupleiter_methods[] = ;
PyTypeObject PyTupleIter_Type = ;
static PyObject *
tuple_iter(PyObject *seq)
