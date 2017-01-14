#define PY_SSIZE_T_CLEAN
typedef struct  iobase;
PyDoc_STRVAR(iobase_doc,
);
#define IS_CLOSED(self) \
PyObject_HasAttrString(self, )
static PyObject *
iobase_unsupported(const char *message)
PyDoc_STRVAR(iobase_seek_doc,
);
static PyObject *
iobase_seek(PyObject *self, PyObject *args)
PyDoc_STRVAR(iobase_tell_doc,
);
static PyObject *
iobase_tell(PyObject *self, PyObject *args)
PyDoc_STRVAR(iobase_truncate_doc,
);
static PyObject *
iobase_truncate(PyObject *self, PyObject *args)
PyDoc_STRVAR(iobase_flush_doc,
);
static PyObject *
iobase_flush(PyObject *self, PyObject *args)
PyDoc_STRVAR(iobase_close_doc,
);
static int
iobase_closed(PyObject *self)
static PyObject *
iobase_closed_get(PyObject *self, void *context)
PyObject *
_PyIOBase_check_closed(PyObject *self, PyObject *args)
static PyObject *
iobase_close(PyObject *self, PyObject *args)
int
_PyIOBase_finalize(PyObject *self)
static int
iobase_traverse(iobase *self, visitproc visit, void *arg)
static int
iobase_clear(iobase *self)
static void
iobase_dealloc(iobase *self)
PyDoc_STRVAR(iobase_seekable_doc,
);
static PyObject *
iobase_seekable(PyObject *self, PyObject *args)
PyObject *
_PyIOBase_check_seekable(PyObject *self, PyObject *args)
PyDoc_STRVAR(iobase_readable_doc,
);
static PyObject *
iobase_readable(PyObject *self, PyObject *args)
PyObject *
_PyIOBase_check_readable(PyObject *self, PyObject *args)
PyDoc_STRVAR(iobase_writable_doc,
);
static PyObject *
iobase_writable(PyObject *self, PyObject *args)
PyObject *
_PyIOBase_check_writable(PyObject *self, PyObject *args)
static PyObject *
iobase_enter(PyObject *self, PyObject *args)
static PyObject *
iobase_exit(PyObject *self, PyObject *args)
PyDoc_STRVAR(iobase_fileno_doc,
);
static PyObject *
iobase_fileno(PyObject *self, PyObject *args)
PyDoc_STRVAR(iobase_isatty_doc,
);
static PyObject *
iobase_isatty(PyObject *self, PyObject *args)
PyDoc_STRVAR(iobase_readline_doc,
);
static PyObject *
iobase_readline(PyObject *self, PyObject *args)
static PyObject *
iobase_iter(PyObject *self)
static PyObject *
iobase_iternext(PyObject *self)
PyDoc_STRVAR(iobase_readlines_doc,
);
static PyObject *
iobase_readlines(PyObject *self, PyObject *args)
static PyObject *
iobase_writelines(PyObject *self, PyObject *args)
static PyMethodDef iobase_methods[] = ;
static PyGetSetDef iobase_getset[] = ;
PyTypeObject PyIOBase_Type = ;
PyDoc_STRVAR(rawiobase_doc,
);
static PyObject *
rawiobase_read(PyObject *self, PyObject *args)
PyDoc_STRVAR(rawiobase_readall_doc,
);
static PyObject *
rawiobase_readall(PyObject *self, PyObject *args)
static PyMethodDef rawiobase_methods[] = ;
PyTypeObject PyRawIOBase_Type = ;
