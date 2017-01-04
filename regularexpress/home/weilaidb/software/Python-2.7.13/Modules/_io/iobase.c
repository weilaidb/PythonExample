#define PY_SSIZE_T_CLEAN
typedef struct  iobase;
PyDoc_STRVAR(iobase_doc,
"The abstract base class for all I/O classes, acting on streams of\n"
"bytes. There is no public constructor.\n"
"\n"
"This class provides dummy implementations for many methods that\n"
"derived classes can override selectively; the default implementations\n"
"represent a file that cannot be read, written or seeked.\n"
"\n"
"Even though IOBase does not declare read, readinto, or write because\n"
"their signatures will vary, implementations and clients should\n"
"consider those methods part of the interface. Also, implementations\n"
"may raise an IOError when operations they do not support are called.\n"
"\n"
"The basic type used for binary data read from or written to a file is\n"
"the bytes type. Method arguments may also be bytearray or memoryview\n"
"of arrays of bytes. In some cases, such as readinto, a writable\n"
"object such as bytearray is required. Text I/O classes work with\n"
"unicode data.\n"
"\n"
"Note that calling any method (except additional calls to close(),\n"
"which are ignored) on a closed stream should raise a ValueError.\n"
"\n"
"IOBase (and its subclasses) support the iterator protocol, meaning\n"
"that an IOBase object can be iterated over yielding the lines in a\n"
"stream.\n"
"\n"
"IOBase also supports the :keyword:`with` statement. In this example,\n"
"fp is closed after the suite of the with statement is complete:\n"
"\n"
"with open('spam.txt', 'r') as fp:\n"
"    fp.write('Spam and eggs!')\n");
#define IS_CLOSED(self) \
PyObject_HasAttrString(self, "__IOBase_closed")
static PyObject *
iobase_unsupported(const char *message)
PyDoc_STRVAR(iobase_seek_doc,
"Change stream position.\n"
"\n"
"Change the stream position to the given byte offset. The offset is\n"
"interpreted relative to the position indicated by whence.  Values\n"
"for whence are:\n"
"\n"
"* 0 -- start of stream (the default); offset should be zero or positive\n"
"* 1 -- current stream position; offset may be negative\n"
"* 2 -- end of stream; offset is usually negative\n"
"\n"
"Return the new absolute position.");
static PyObject *
iobase_seek(PyObject *self, PyObject *args)
PyDoc_STRVAR(iobase_tell_doc,
"Return current stream position.");
static PyObject *
iobase_tell(PyObject *self, PyObject *args)
PyDoc_STRVAR(iobase_truncate_doc,
"Truncate file to size bytes.\n"
"\n"
"File pointer is left unchanged.  Size defaults to the current IO\n"
"position as reported by tell().  Returns the new size.");
static PyObject *
iobase_truncate(PyObject *self, PyObject *args)
PyDoc_STRVAR(iobase_flush_doc,
"Flush write buffers, if applicable.\n"
"\n"
"This is not implemented for read-only and non-blocking streams.\n");
static PyObject *
iobase_flush(PyObject *self, PyObject *args)
PyDoc_STRVAR(iobase_close_doc,
"Flush and close the IO object.\n"
"\n"
"This method has no effect if the file is already closed.\n");
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
"Return whether object supports random access.\n"
"\n"
"If False, seek(), tell() and truncate() will raise IOError.\n"
"This method may need to do a test seek().");
static PyObject *
iobase_seekable(PyObject *self, PyObject *args)
PyObject *
_PyIOBase_check_seekable(PyObject *self, PyObject *args)
PyDoc_STRVAR(iobase_readable_doc,
"Return whether object was opened for reading.\n"
"\n"
"If False, read() will raise IOError.");
static PyObject *
iobase_readable(PyObject *self, PyObject *args)
PyObject *
_PyIOBase_check_readable(PyObject *self, PyObject *args)
PyDoc_STRVAR(iobase_writable_doc,
"Return whether object was opened for writing.\n"
"\n"
"If False, read() will raise IOError.");
static PyObject *
iobase_writable(PyObject *self, PyObject *args)
PyObject *
_PyIOBase_check_writable(PyObject *self, PyObject *args)
static PyObject *
iobase_enter(PyObject *self, PyObject *args)
static PyObject *
iobase_exit(PyObject *self, PyObject *args)
PyDoc_STRVAR(iobase_fileno_doc,
"Returns underlying file descriptor if one exists.\n"
"\n"
"An IOError is raised if the IO object does not use a file descriptor.\n");
static PyObject *
iobase_fileno(PyObject *self, PyObject *args)
PyDoc_STRVAR(iobase_isatty_doc,
"Return whether this is an 'interactive' stream.\n"
"\n"
"Return False if it can't be determined.\n");
static PyObject *
iobase_isatty(PyObject *self, PyObject *args)
PyDoc_STRVAR(iobase_readline_doc,
"Read and return a line from the stream.\n"
"\n"
"If limit is specified, at most limit bytes will be read.\n"
"\n"
"The line terminator is always b'\\n' for binary files; for text\n"
"files, the newlines argument to open can be used to select the line\n"
"terminator(s) recognized.\n");
static PyObject *
iobase_readline(PyObject *self, PyObject *args)
static PyObject *
iobase_iter(PyObject *self)
static PyObject *
iobase_iternext(PyObject *self)
PyDoc_STRVAR(iobase_readlines_doc,
"Return a list of lines from the stream.\n"
"\n"
"hint can be specified to control the number of lines read: no more\n"
"lines will be read if the total size (in bytes/characters) of all\n"
"lines so far exceeds hint.");
static PyObject *
iobase_readlines(PyObject *self, PyObject *args)
static PyObject *
iobase_writelines(PyObject *self, PyObject *args)
static PyMethodDef iobase_methods[] = ;
static PyGetSetDef iobase_getset[] = ;
PyTypeObject PyIOBase_Type = ;
PyDoc_STRVAR(rawiobase_doc,
"Base class for raw binary I/O.");
static PyObject *
rawiobase_read(PyObject *self, PyObject *args)
PyDoc_STRVAR(rawiobase_readall_doc,
"Read until EOF, using multiple read() call.");
static PyObject *
rawiobase_readall(PyObject *self, PyObject *args)
static PyMethodDef rawiobase_methods[] = ;
PyTypeObject PyRawIOBase_Type = ;
