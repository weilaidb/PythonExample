#define PY_SSIZE_T_CLEAN
typedef struct  stringio;
#define CHECK_INITIALIZED(self) \
if (self->ok <= 0)
#define CHECK_CLOSED(self) \
if (self->closed)
PyDoc_STRVAR(stringio_doc,
"Text I/O implementation using an in-memory buffer.\n"
"\n"
"The initial_value argument sets the value of object.  The newline\n"
"argument is like the one of TextIOWrapper's constructor.");
static int
resize_buffer(stringio *self, size_t size)
static Py_ssize_t
write_str(stringio *self, PyObject *obj)
PyDoc_STRVAR(stringio_getvalue_doc,
"Retrieve the entire contents of the object.");
static PyObject *
stringio_getvalue(stringio *self)
PyDoc_STRVAR(stringio_tell_doc,
"Tell the current file position.");
static PyObject *
stringio_tell(stringio *self)
PyDoc_STRVAR(stringio_read_doc,
"Read at most n characters, returned as a string.\n"
"\n"
"If the argument is negative or omitted, read until EOF\n"
"is reached. Return an empty string at EOF.\n");
static PyObject *
stringio_read(stringio *self, PyObject *args)
static PyObject *
_stringio_readline(stringio *self, Py_ssize_t limit)
PyDoc_STRVAR(stringio_readline_doc,
"Read until newline or EOF.\n"
"\n"
"Returns an empty string if EOF is hit immediately.\n");
static PyObject *
stringio_readline(stringio *self, PyObject *args)
static PyObject *
stringio_iternext(stringio *self)
PyDoc_STRVAR(stringio_truncate_doc,
"Truncate size to pos.\n"
"\n"
"The pos argument defaults to the current file position, as\n"
"returned by tell().  The current file position is unchanged.\n"
"Returns the new absolute position.\n");
static PyObject *
stringio_truncate(stringio *self, PyObject *args)
PyDoc_STRVAR(stringio_seek_doc,
"Change stream position.\n"
"\n"
"Seek to character offset pos relative to position indicated by whence:\n"
"    0  Start of stream (the default).  pos should be >= 0;\n"
"    1  Current position - pos must be 0;\n"
"    2  End of stream - pos must be 0.\n"
"Returns the new absolute position.\n");
static PyObject *
stringio_seek(stringio *self, PyObject *args)
PyDoc_STRVAR(stringio_write_doc,
"Write string to file.\n"
"\n"
"Returns the number of characters written, which is always equal to\n"
"the length of the string.\n");
static PyObject *
stringio_write(stringio *self, PyObject *obj)
PyDoc_STRVAR(stringio_close_doc,
"Close the IO object. Attempting any further operation after the\n"
"object is closed will raise a ValueError.\n"
"\n"
"This method has no effect if the file is already closed.\n");
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
"readable() -> bool. Returns True if the IO object can be read.");
PyDoc_STRVAR(stringio_writable_doc,
"writable() -> bool. Returns True if the IO object can be written.");
PyDoc_STRVAR(stringio_seekable_doc,
"seekable() -> bool. Returns True if the IO object can be seeked.");
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
