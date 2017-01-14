typedef struct  bytesio;
#define CHECK_CLOSED(self)                                  \
if ((self)->buf == NULL)
static Py_ssize_t
get_line(bytesio *self, char **output)
static int
resize_buffer(bytesio *self, size_t size)
static Py_ssize_t
write_bytes(bytesio *self, const char *bytes, Py_ssize_t len)
static PyObject *
bytesio_get_closed(bytesio *self)
PyDoc_STRVAR(readable_doc,
);
PyDoc_STRVAR(writable_doc,
);
PyDoc_STRVAR(seekable_doc,
);
static PyObject *
return_not_closed(bytesio *self)
PyDoc_STRVAR(flush_doc,
);
static PyObject *
bytesio_flush(bytesio *self)
PyDoc_STRVAR(getval_doc,
);
static PyObject *
bytesio_getvalue(bytesio *self)
PyDoc_STRVAR(isatty_doc,
);
static PyObject *
bytesio_isatty(bytesio *self)
PyDoc_STRVAR(tell_doc,
);
static PyObject *
bytesio_tell(bytesio *self)
PyDoc_STRVAR(read_doc,
);
static PyObject *
bytesio_read(bytesio *self, PyObject *args)
PyDoc_STRVAR(read1_doc,
);
static PyObject *
bytesio_read1(bytesio *self, PyObject *n)
PyDoc_STRVAR(readline_doc,
);
static PyObject *
bytesio_readline(bytesio *self, PyObject *args)
PyDoc_STRVAR(readlines_doc,
);
static PyObject *
bytesio_readlines(bytesio *self, PyObject *args)
PyDoc_STRVAR(readinto_doc,
);
static PyObject *
bytesio_readinto(bytesio *self, PyObject *args)
PyDoc_STRVAR(truncate_doc,
);
static PyObject *
bytesio_truncate(bytesio *self, PyObject *args)
static PyObject *
bytesio_iternext(bytesio *self)
PyDoc_STRVAR(seek_doc,
);
static PyObject *
bytesio_seek(bytesio *self, PyObject *args)
PyDoc_STRVAR(write_doc,
);
static PyObject *
bytesio_write(bytesio *self, PyObject *obj)
PyDoc_STRVAR(writelines_doc,
);
static PyObject *
bytesio_writelines(bytesio *self, PyObject *v)
PyDoc_STRVAR(close_doc,
);
static PyObject *
bytesio_close(bytesio *self)
static PyObject *
bytesio_getstate(bytesio *self)
static PyObject *
bytesio_setstate(bytesio *self, PyObject *state)
static void
bytesio_dealloc(bytesio *self)
static PyObject *
bytesio_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
static int
bytesio_init(bytesio *self, PyObject *args, PyObject *kwds)
static PyObject *
bytesio_sizeof(bytesio *self, void *unused)
static int
bytesio_traverse(bytesio *self, visitproc visit, void *arg)
static int
bytesio_clear(bytesio *self)
static PyGetSetDef bytesio_getsetlist[] = ;
static struct PyMethodDef bytesio_methods[] = ;
PyDoc_STRVAR(bytesio_doc,
);
PyTypeObject PyBytesIO_Type = ;
