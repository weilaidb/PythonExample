#define PY_SSIZE_T_CLEAN
#define HAVE_FTRUNCATE
#define WIN32_LEAN_AND_MEAN
#if BUFSIZ < (8*1024)
#define SMALLCHUNK (8*1024)
#elif (BUFSIZ >= (2 << 25))
#error
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
);
PyDoc_STRVAR(read_doc,
);
PyDoc_STRVAR(readall_doc,
);
PyDoc_STRVAR(write_doc,
);
PyDoc_STRVAR(fileno_doc,
);
PyDoc_STRVAR(seek_doc,
);
PyDoc_STRVAR(truncate_doc,
);
PyDoc_STRVAR(tell_doc,
);
PyDoc_STRVAR(readinto_doc,
);
PyDoc_STRVAR(close_doc,
);
PyDoc_STRVAR(isatty_doc,
);
PyDoc_STRVAR(seekable_doc,
);
PyDoc_STRVAR(readable_doc,
);
PyDoc_STRVAR(writable_doc,
);
static PyMethodDef fileio_methods[] = ;
static PyObject *
get_closed(fileio *self, void *closure)
static PyObject *
get_closefd(fileio *self, void *closure)
static PyObject *
get_mode(fileio *self, void *closure)
static PyGetSetDef fileio_getsetlist[] = ;
PyTypeObject PyFileIO_Type = ;
