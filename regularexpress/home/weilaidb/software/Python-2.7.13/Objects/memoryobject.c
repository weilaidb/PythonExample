static Py_ssize_t
get_shape0(Py_buffer *buf)
static void
dup_buffer(Py_buffer *dest, Py_buffer *src)
static int
memory_getbuf(PyMemoryViewObject *self, Py_buffer *view, int flags)
static void
memory_releasebuf(PyMemoryViewObject *self, Py_buffer *view)
PyDoc_STRVAR(memory_doc,
"memoryview(object)\n\
\n\
Create a new memoryview object which references the given object.");
PyObject *
PyMemoryView_FromBuffer(Py_buffer *info)
PyObject *
PyMemoryView_FromObject(PyObject *base)
static PyObject *
memory_new(PyTypeObject *subtype, PyObject *args, PyObject *kwds)
static void
_strided_copy_nd(char *dest, char *src, int nd, Py_ssize_t *shape,
Py_ssize_t *strides, Py_ssize_t itemsize, char fort)
static int
_indirect_copy_nd(char *dest, Py_buffer *view, char fort)
PyObject *
PyMemoryView_GetContiguous(PyObject *obj, int buffertype, char fort)
static PyObject *
memory_format_get(PyMemoryViewObject *self)
static PyObject *
memory_itemsize_get(PyMemoryViewObject *self)
static PyObject *
_IntTupleFromSsizet(int len, Py_ssize_t *vals)
static PyObject *
memory_shape_get(PyMemoryViewObject *self)
static PyObject *
memory_strides_get(PyMemoryViewObject *self)
static PyObject *
memory_suboffsets_get(PyMemoryViewObject *self)
static PyObject *
memory_readonly_get(PyMemoryViewObject *self)
static PyObject *
memory_ndim_get(PyMemoryViewObject *self)
static PyGetSetDef memory_getsetlist[] =;
static PyObject *
memory_tobytes(PyMemoryViewObject *self, PyObject *noargs)
static PyObject *
memory_tolist(PyMemoryViewObject *mem, PyObject *noargs)
static PyMethodDef memory_methods[] = ;
static void
memory_dealloc(PyMemoryViewObject *self)
static PyObject *
memory_repr(PyMemoryViewObject *self)
static Py_ssize_t
memory_length(PyMemoryViewObject *self)
static PyObject *
memory_item(PyMemoryViewObject *self, Py_ssize_t result)
static PyObject *
memory_subscript(PyMemoryViewObject *self, PyObject *key)
static int
memory_ass_sub(PyMemoryViewObject *self, PyObject *key, PyObject *value)
static PyObject *
memory_richcompare(PyObject *v, PyObject *w, int op)
static int
memory_traverse(PyMemoryViewObject *self, visitproc visit, void *arg)
static int
memory_clear(PyMemoryViewObject *self)
static PyMappingMethods memory_as_mapping = ;
static PySequenceMethods memory_as_sequence = ;
static PyBufferProcs memory_as_buffer = ;
PyTypeObject PyMemoryView_Type = ;
