#define PY_SSIZE_T_CLEAN
typedef struct  stringio;
#define CHECK_INITIALIZED(self) \
if (self->ok <= 0)
#define CHECK_CLOSED(self) \
if (self->closed)
PyDoc_STRVAR(stringio_doc,
);
static int
resize_buffer(stringio *self, size_t size)
static Py_ssize_t
write_str(stringio *self, PyObject *obj)
PyDoc_STRVAR(stringio_getvalue_doc,
);
static PyObject *
stringio_getvalue(stringio *self)
PyDoc_STRVAR(stringio_tell_doc,
);
static PyObject *
stringio_tell(stringio *self)
PyDoc_STRVAR(stringio_read_doc,
);
static PyObject *
stringio_read(stringio *self, PyObject *args)
static PyObject *
_stringio_readline(stringio *self, Py_ssize_t limit)
PyDoc_STRVAR(stringio_readline_doc,
);
static PyObject *
stringio_readline(stringio *self, PyObject *args)
static PyObject *
stringio_iternext(stringio *self)
PyDoc_STRVAR(stringio_truncate_doc,
);
static PyObject *
stringio_truncate(stringio *self, PyObject *args)
PyDoc_STRVAR(stringio_seek_doc,
);
static PyObject *
stringio_seek(stringio *self, PyObject *args)
PyDoc_STRVAR(stringio_write_doc,
);
static PyObject *
stringio_write(stringio *self, PyObject *obj)
PyDoc_STRVAR(stringio_close_doc,
);
static PyObject *
stringio_close(stringio *self)
static int
stringio_traverse(stringio *self, visitproc visit, void *arg)
static int
stringio_clear(stringio *self)
static void
stringio_dealloc(stringio *self)
static PyObject *
stringio_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
static int
stringio_init(stringio *self, PyObject *args, PyObject *kwds)
PyDoc_STRVAR(stringio_readable_doc,
);
PyDoc_STRVAR(stringio_writable_doc,
);
PyDoc_STRVAR(stringio_seekable_doc,
);
static PyObject *
stringio_seekable(stringio *self, PyObject *args)
static PyObject *
stringio_readable(stringio *self, PyObject *args)
static PyObject *
stringio_writable(stringio *self, PyObject *args)
static PyObject *
stringio_getstate(stringio *self)
static PyObject *
stringio_setstate(stringio *self, PyObject *state)
static PyObject *
stringio_closed(stringio *self, void *context)
static PyObject *
stringio_line_buffering(stringio *self, void *context)
static PyObject *
stringio_newlines(stringio *self, void *context)
static struct PyMethodDef stringio_methods[] = ;
static PyGetSetDef stringio_getset[] = ;
PyTypeObject PyStringIO_Type = ;
