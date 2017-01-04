#define PY_SSIZE_T_CLEAN
#define HAVE_FTRUNCATE
#define WIN32_LEAN_AND_MEAN
#if BUFSIZ < (8*1024)
#define SMALLCHUNK (8*1024)
#elif (BUFSIZ >= (2 << 25))
#error "unreasonable BUFSIZ > 64MB defined"
#define SMALLCHUNK BUFSIZ
typedef struct  fileio;
PyTypeObject PyFileIO_Type;
#define PyFileIO_Check(op) (PyObject_TypeCheck((op), &PyFileIO_Type))
int
_PyFileIO_closed(PyObject *self)
static PyObject *
portable_lseek(int fd, PyObject *posobj, int whence);
static PyObject *portable_lseek(int fd, PyObject *posobj, int whence);
static int
internal_close(fileio *self)
static PyObject *
fileio_close(fileio *self)
static PyObject *
fileio_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
static int
dircheck(fileio* self, PyObject *nameobj)
static int
check_fd(int fd)
static int
fileio_init(PyObject *oself, PyObject *args, PyObject *kwds)
static int
fileio_traverse(fileio *self, visitproc visit, void *arg)
static int
fileio_clear(fileio *self)
static void
fileio_dealloc(fileio *self)
static PyObject *
err_closed(void)
static PyObject *
err_mode(char *action)
static PyObject *
fileio_fileno(fileio *self)
static PyObject *
fileio_readable(fileio *self)
static PyObject *
fileio_writable(fileio *self)
static PyObject *
fileio_seekable(fileio *self)
static PyObject *
fileio_readinto(fileio *self, PyObject *args)
static size_t
new_buffersize(fileio *self, size_t currentsize)
static PyObject *
fileio_readall(fileio *self)
static PyObject *
fileio_read(fileio *self, PyObject *args)
static PyObject *
fileio_write(fileio *self, PyObject *args)
static PyObject *
portable_lseek(int fd, PyObject *posobj, int whence)
static PyObject *
fileio_seek(fileio *self, PyObject *args)
static PyObject *
fileio_tell(fileio *self, PyObject *args)
static PyObject *
fileio_truncate(fileio *self, PyObject *args)
static char *
mode_string(fileio *self)
static PyObject *
fileio_repr(fileio *self)
static PyObject *
fileio_isatty(fileio *self)
PyDoc_STRVAR(fileio_doc,
"file(name: str[, mode: str]) -> file IO object\n"
"\n"
"Open a file.  The mode can be 'r' (default), 'w' or 'a' for reading,\n"
"writing or appending.  The file will be created if it doesn't exist\n"
"when opened for writing or appending; it will be truncated when\n"
"opened for writing.  Add a '+' to the mode to allow simultaneous\n"
"reading and writing.");
PyDoc_STRVAR(read_doc,
"read(size: int) -> bytes.  read at most size bytes, returned as bytes.\n"
"\n"
"Only makes one system call, so less data may be returned than requested\n"
"In non-blocking mode, returns None if no data is available.\n"
"On end-of-file, returns ''.");
PyDoc_STRVAR(readall_doc,
"readall() -> bytes.  read all data from the file, returned as bytes.\n"
"\n"
"In non-blocking mode, returns as much as is immediately available,\n"
"or None if no data is available.  On end-of-file, returns ''.");
PyDoc_STRVAR(write_doc,
"write(b) -> int.  Write array of bytes b, return number written.\n"
"\n"
"Only makes one system call, so not all of the data may be written.\n"
"The number of bytes actually written is returned.  In non-blocking mode,\n"
"returns None if the write would block."
);
PyDoc_STRVAR(fileno_doc,
"fileno() -> int.  Return the underlying file descriptor (an integer).");
PyDoc_STRVAR(seek_doc,
"seek(offset: int[, whence: int]) -> int.  Move to new file position\n"
"and return the file position.\n"
"\n"
"Argument offset is a byte count.  Optional argument whence defaults to\n"
"SEEK_SET or 0 (offset from start of file, offset should be >= 0); other values\n"
"are SEEK_CUR or 1 (move relative to current position, positive or negative),\n"
"and SEEK_END or 2 (move relative to end of file, usually negative, although\n"
"many platforms allow seeking beyond the end of a file).\n"
"\n"
"Note that not all file objects are seekable.");
PyDoc_STRVAR(truncate_doc,
"truncate([size: int]) -> int.  Truncate the file to at most size bytes and\n"
"return the truncated size.\n"
"\n"
"Size defaults to the current file position, as returned by tell().\n"
"The current file position is changed to the value of size.");
PyDoc_STRVAR(tell_doc,
"tell() -> int.  Current file position.\n"
"\n"
"Can raise OSError for non seekable files."
);
PyDoc_STRVAR(readinto_doc,
"readinto() -> Same as RawIOBase.readinto().");
PyDoc_STRVAR(close_doc,
"close() -> None.  Close the file.\n"
"\n"
"A closed file cannot be used for further I/O operations.  close() may be\n"
"called more than once without error.");
PyDoc_STRVAR(isatty_doc,
"isatty() -> bool.  True if the file is connected to a TTY device.");
PyDoc_STRVAR(seekable_doc,
"seekable() -> bool.  True if file supports random-access.");
PyDoc_STRVAR(readable_doc,
"readable() -> bool.  True if file was opened in a read mode.");
PyDoc_STRVAR(writable_doc,
"writable() -> bool.  True if file was opened in a write mode.");
static PyMethodDef fileio_methods[] = ;
static PyObject *
get_closed(fileio *self, void *closure)
static PyObject *
get_closefd(fileio *self, void *closure)
static PyObject *
get_mode(fileio *self, void *closure)
static PyGetSetDef fileio_getsetlist[] = ;
PyTypeObject PyFileIO_Type = ;
