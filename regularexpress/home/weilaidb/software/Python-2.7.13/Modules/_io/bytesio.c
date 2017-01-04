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
"readable() -> bool. Returns True if the IO object can be read.");
PyDoc_STRVAR(writable_doc,
"writable() -> bool. Returns True if the IO object can be written.");
PyDoc_STRVAR(seekable_doc,
"seekable() -> bool. Returns True if the IO object can be seeked.");
static PyObject *
return_not_closed(bytesio *self)
PyDoc_STRVAR(flush_doc,
"flush() -> None.  Does nothing.");
static PyObject *
bytesio_flush(bytesio *self)
PyDoc_STRVAR(getval_doc,
"getvalue() -> bytes.\n"
"\n"
"Retrieve the entire contents of the BytesIO object.");
static PyObject *
bytesio_getvalue(bytesio *self)
PyDoc_STRVAR(isatty_doc,
"isatty() -> False.\n"
"\n"
"Always returns False since BytesIO objects are not connected\n"
"to a tty-like device.");
static PyObject *
bytesio_isatty(bytesio *self)
PyDoc_STRVAR(tell_doc,
"tell() -> current file position, an integer\n");
static PyObject *
bytesio_tell(bytesio *self)
PyDoc_STRVAR(read_doc,
"read([size]) -> read at most size bytes, returned as a string.\n"
"\n"
"If the size argument is negative, read until EOF is reached.\n"
"Return an empty string at EOF.");
static PyObject *
bytesio_read(bytesio *self, PyObject *args)
PyDoc_STRVAR(read1_doc,
"read1(size) -> read at most size bytes, returned as a string.\n"
"\n"
"If the size argument is negative or omitted, read until EOF is reached.\n"
"Return an empty string at EOF.");
static PyObject *
bytesio_read1(bytesio *self, PyObject *n)
PyDoc_STRVAR(readline_doc,
"readline([size]) -> next line from the file, as a string.\n"
"\n"
"Retain newline.  A non-negative size argument limits the maximum\n"
"number of bytes to return (an incomplete line may be returned then).\n"
"Return an empty string at EOF.\n");
static PyObject *
bytesio_readline(bytesio *self, PyObject *args)
PyDoc_STRVAR(readlines_doc,
"readlines([size]) -> list of strings, each a line from the file.\n"
"\n"
"Call readline() repeatedly and return a list of the lines so read.\n"
"The optional size argument, if given, is an approximate bound on the\n"
"total number of bytes in the lines returned.\n");
static PyObject *
bytesio_readlines(bytesio *self, PyObject *args)
PyDoc_STRVAR(readinto_doc,
"readinto(b) -> int.  Read up to len(b) bytes into b.\n"
"\n"
"Returns number of bytes read (0 for EOF), or None if the object\n"
"is set not to block and has no data to read.");
static PyObject *
bytesio_readinto(bytesio *self, PyObject *args)
PyDoc_STRVAR(truncate_doc,
"truncate([size]) -> int.  Truncate the file to at most size bytes.\n"
"\n"
"Size defaults to the current file position, as returned by tell().\n"
"The current file position is unchanged.  Returns the new size.\n");
static PyObject *
bytesio_truncate(bytesio *self, PyObject *args)
static PyObject *
bytesio_iternext(bytesio *self)
PyDoc_STRVAR(seek_doc,
"seek(pos[, whence]) -> int.  Change stream position.\n"
"\n"
"Seek to byte offset pos relative to position indicated by whence:\n"
"     0  Start of stream (the default).  pos should be >= 0;\n"
"     1  Current position - pos may be negative;\n"
"     2  End of stream - pos usually negative.\n"
"Returns the new absolute position.");
static PyObject *
bytesio_seek(bytesio *self, PyObject *args)
PyDoc_STRVAR(write_doc,
"write(bytes) -> int.  Write bytes to file.\n"
"\n"
"Return the number of bytes written.");
static PyObject *
bytesio_write(bytesio *self, PyObject *obj)
PyDoc_STRVAR(writelines_doc,
"writelines(sequence_of_strings) -> None.  Write strings to the file.\n"
"\n"
"Note that newlines are not added.  The sequence can be any iterable\n"
"object producing strings. This is equivalent to calling write() for\n"
"each string.");
static PyObject *
bytesio_writelines(bytesio *self, PyObject *v)
PyDoc_STRVAR(close_doc,
"close() -> None.  Disable all I/O operations.");
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
"BytesIO([buffer]) -> object\n"
"\n"
"Create a buffered I/O implementation using an in-memory bytes\n"
"buffer, ready for reading and writing.");
PyTypeObject PyBytesIO_Type = ;
