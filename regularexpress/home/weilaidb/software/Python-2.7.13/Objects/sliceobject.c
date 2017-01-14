static PyObject *
ellipsis_repr(PyObject *op)
PyTypeObject PyEllipsis_Type = ;
PyObject _Py_EllipsisObject = ;
PyObject *
PySlice_New(PyObject *start, PyObject *stop, PyObject *step)
PyObject *
_PySlice_FromIndices(Py_ssize_t istart, Py_ssize_t istop)
int
PySlice_GetIndices(PySliceObject *r, Py_ssize_t length,
Py_ssize_t *start, Py_ssize_t *stop, Py_ssize_t *step)
int
PySlice_GetIndicesEx(PySliceObject *r, Py_ssize_t length,
Py_ssize_t *start, Py_ssize_t *stop, Py_ssize_t *step, Py_ssize_t *slicelength)
static PyObject *
slice_new(PyTypeObject *type, PyObject *args, PyObject *kw)
PyDoc_STRVAR(slice_doc,
"slice(stop)\n\
slice(start, stop[, step])\n\
\n\
Create a slice object.  This is used for extended slicing (e.g. a[0:10:2]).");
static void
slice_dealloc(PySliceObject *r)
static PyObject *
slice_repr(PySliceObject *r)
static PyMemberDef slice_members[] = ;
static PyObject*
slice_indices(PySliceObject* self, PyObject* len)
PyDoc_STRVAR(slice_indices_doc,
"S.indices(len) -> (start, stop, stride)\n\
\n\
Assuming a sequence of length len, calculate the start and stop\n\
indices, and the stride length of the extended slice described by\n\
S. Out of bounds indices are clipped in a manner consistent with the\n\
handling of normal slices.");
static PyObject *
slice_reduce(PySliceObject* self)
PyDoc_STRVAR(reduce_doc, );
static PyMethodDef slice_methods[] = ;
static int
slice_compare(PySliceObject *v, PySliceObject *w)
static long
slice_hash(PySliceObject *v)
static int
slice_traverse(PySliceObject *v, visitproc visit, void *arg)
PyTypeObject PySlice_Type = ;
