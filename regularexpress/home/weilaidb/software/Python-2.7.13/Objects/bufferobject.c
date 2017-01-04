typedef struct  PyBufferObject;
enum buffer_t ;
static int
get_buf(PyBufferObject *self, void **ptr, Py_ssize_t *size,
enum buffer_t buffer_type)
static PyObject *
buffer_from_memory(PyObject *base, Py_ssize_t size, Py_ssize_t offset, void *ptr,
int readonly)
static PyObject *
buffer_from_object(PyObject *base, Py_ssize_t size, Py_ssize_t offset, int readonly)
PyObject *
PyBuffer_FromObject(PyObject *base, Py_ssize_t offset, Py_ssize_t size)
PyObject *
PyBuffer_FromReadWriteObject(PyObject *base, Py_ssize_t offset, Py_ssize_t size)
PyObject *
PyBuffer_FromMemory(void *ptr, Py_ssize_t size)
PyObject *
PyBuffer_FromReadWriteMemory(void *ptr, Py_ssize_t size)
PyObject *
PyBuffer_New(Py_ssize_t size)
static PyObject *
buffer_new(PyTypeObject *type, PyObject *args, PyObject *kw)
PyDoc_STRVAR(buffer_doc,
"buffer(object [, offset[, size]])\n\
\n\
Create a new buffer object which references the given object.\n\
The buffer will reference a slice of the target object from the\n\
start of the object (or at the specified offset). The slice will\n\
extend to the end of the target object (or with the specified size).");
static void
buffer_dealloc(PyBufferObject *self)
static int
buffer_compare(PyBufferObject *self, PyBufferObject *other)
static PyObject *
buffer_repr(PyBufferObject *self)
static long
buffer_hash(PyBufferObject *self)
static PyObject *
buffer_str(PyBufferObject *self)
static Py_ssize_t
buffer_length(PyBufferObject *self)
static PyObject *
buffer_concat(PyBufferObject *self, PyObject *other)
static PyObject *
buffer_repeat(PyBufferObject *self, Py_ssize_t count)
static PyObject *
buffer_item(PyBufferObject *self, Py_ssize_t idx)
static PyObject *
buffer_slice(PyBufferObject *self, Py_ssize_t left, Py_ssize_t right)
static PyObject *
buffer_subscript(PyBufferObject *self, PyObject *item)
static int
buffer_ass_item(PyBufferObject *self, Py_ssize_t idx, PyObject *other)
static int
buffer_ass_slice(PyBufferObject *self, Py_ssize_t left, Py_ssize_t right, PyObject *other)
static int
buffer_ass_subscript(PyBufferObject *self, PyObject *item, PyObject *value)
static Py_ssize_t
buffer_getreadbuf(PyBufferObject *self, Py_ssize_t idx, void **pp)
static Py_ssize_t
buffer_getwritebuf(PyBufferObject *self, Py_ssize_t idx, void **pp)
static Py_ssize_t
buffer_getsegcount(PyBufferObject *self, Py_ssize_t *lenp)
static Py_ssize_t
buffer_getcharbuf(PyBufferObject *self, Py_ssize_t idx, const char **pp)
static int buffer_getbuffer(PyBufferObject *self, Py_buffer *buf, int flags)
static PySequenceMethods buffer_as_sequence = ;
static PyMappingMethods buffer_as_mapping = ;
static PyBufferProcs buffer_as_buffer = ;
PyTypeObject PyBuffer_Type = ;
