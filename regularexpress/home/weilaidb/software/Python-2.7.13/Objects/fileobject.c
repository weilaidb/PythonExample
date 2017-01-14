#define PY_SSIZE_T_CLEAN
#define fileno _fileno
#define HAVE_FTRUNCATE
#define WIN32_LEAN_AND_MEAN
#if defined(PYOS_OS2) && defined(PYCC_GCC)
#define BUF(v) PyString_AS_STRING((PyStringObject *)v)
#define GETC(f) getc_unlocked(f)
#define FLOCKFILE(f) flockfile(f)
#define FUNLOCKFILE(f) funlockfile(f)
#define GETC(f) getc(f)
#define FLOCKFILE(f)
#define FUNLOCKFILE(f)
#define NEWLINE_UNKNOWN 0
#define NEWLINE_CR 1
#define NEWLINE_LF 2
#define NEWLINE_CRLF 4
#define FILE_BEGIN_ALLOW_THREADS(fobj) \
#define FILE_ABORT_ALLOW_THREADS(fobj) \
Py_BLOCK_THREADS \
fobj->unlocked_count--; \
assert(fobj->unlocked_count >= 0);
FILE *
PyFile_AsFile(PyObject *f)
void PyFile_IncUseCount(PyFileObject *fobj)
void PyFile_DecUseCount(PyFileObject *fobj)
PyObject *
PyFile_Name(PyObject *f)
static int
file_PyObject_Print(PyObject *op, PyFileObject *f, int flags)
static PyFileObject*
dircheck(PyFileObject* f)
static PyObject *
fill_file_fields(PyFileObject *f, FILE *fp, PyObject *name, char *mode,
int (*close)(FILE *))
#if defined _MSC_VER && _MSC_VER >= 1400 && defined(__STDC_SECURE_LIB__)
#define Py_VERIFY_WINNT
static int _PyVerify_Mode_WINNT(const char *mode)
int
_PyFile_SanitizeMode(char *mode)
static PyObject *
open_the_file(PyFileObject *f, char *name, char *mode)
static PyObject *
close_the_file(PyFileObject *f)
PyObject *
PyFile_FromFile(FILE *fp, char *name, char *mode, int (*close)(FILE *))
PyObject *
PyFile_FromString(char *name, char *mode)
void
PyFile_SetBufSize(PyObject *f, int bufsize)
int
PyFile_SetEncoding(PyObject *f, const char *enc)
int
PyFile_SetEncodingAndErrors(PyObject *f, const char *enc, char* errors)
static PyObject *
err_closed(void)
static PyObject *
err_mode(char *action)
static PyObject *
err_iterbuffered(void)
static void drop_readahead(PyFileObject *);
static void
file_dealloc(PyFileObject *f)
static PyObject *
file_repr(PyFileObject *f)
static PyObject *
file_close(PyFileObject *f)
#if !defined(HAVE_LARGEFILE_SUPPORT)
typedef off_t Py_off_t;
#elif SIZEOF_OFF_T >= 8
typedef off_t Py_off_t;
#elif SIZEOF_FPOS_T >= 8
typedef fpos_t Py_off_t;
#error
static int
_portable_fseek(FILE *fp, Py_off_t offset, int whence)
static Py_off_t
_portable_ftell(FILE* fp)
static PyObject *
file_seek(PyFileObject *f, PyObject *args)
static PyObject *
file_truncate(PyFileObject *f, PyObject *args)
static PyObject *
file_tell(PyFileObject *f)
static PyObject *
file_fileno(PyFileObject *f)
static PyObject *
file_flush(PyFileObject *f)
static PyObject *
file_isatty(PyFileObject *f)
#if BUFSIZ < 8192
#define SMALLCHUNK 8192
#define SMALLCHUNK BUFSIZ
static size_t
new_buffersize(PyFileObject *f, size_t currentsize)
#if defined(EWOULDBLOCK) && defined(EAGAIN) && EWOULDBLOCK != EAGAIN
#define BLOCKED_ERRNO(x) ((x) == EWOULDBLOCK || (x) == EAGAIN)
#define BLOCKED_ERRNO(x) ((x) == EWOULDBLOCK)
#define BLOCKED_ERRNO(x) ((x) == EAGAIN)
#define BLOCKED_ERRNO(x) 0
static PyObject *
file_read(PyFileObject *f, PyObject *args)
static PyObject *
file_readinto(PyFileObject *f, PyObject *args)
#if !defined(USE_FGETS_IN_GETLINE) && !defined(HAVE_GETC_UNLOCKED)
#define USE_FGETS_IN_GETLINE
#if defined(DONT_USE_FGETS_IN_GETLINE) && defined(USE_FGETS_IN_GETLINE)
#undef USE_FGETS_IN_GETLINE
static PyObject*
getline_via_fgets(PyFileObject *f, FILE *fp)
static PyObject *
get_line(PyFileObject *f, int n)
PyObject *
PyFile_GetLine(PyObject *f, int n)
static PyObject *
file_readline(PyFileObject *f, PyObject *args)
static PyObject *
file_readlines(PyFileObject *f, PyObject *args)
static PyObject *
file_write(PyFileObject *f, PyObject *args)
static PyObject *
file_writelines(PyFileObject *f, PyObject *seq)
static PyObject *
file_self(PyFileObject *f)
static PyObject *
file_xreadlines(PyFileObject *f)
static PyObject *
file_exit(PyObject *f, PyObject *args)
PyDoc_STRVAR(readline_doc,
);
PyDoc_STRVAR(read_doc,
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
PyDoc_STRVAR(readlines_doc,
);
PyDoc_STRVAR(xreadlines_doc,
);
PyDoc_STRVAR(writelines_doc,
);
PyDoc_STRVAR(flush_doc,
);
PyDoc_STRVAR(close_doc,
);
PyDoc_STRVAR(isatty_doc,
);
PyDoc_STRVAR(enter_doc,
);
PyDoc_STRVAR(exit_doc,
);
static PyMethodDef file_methods[] = ;
#define OFF(x) offsetof(PyFileObject, x)
static PyMemberDef file_memberlist[] = ;
static PyObject *
get_closed(PyFileObject *f, void *closure)
static PyObject *
get_newlines(PyFileObject *f, void *closure)
static PyObject *
get_softspace(PyFileObject *f, void *closure)
static int
set_softspace(PyFileObject *f, PyObject *value)
static PyGetSetDef file_getsetlist[] = ;
static void
drop_readahead(PyFileObject *f)
static int
readahead(PyFileObject *f, Py_ssize_t bufsize)
static PyStringObject *
readahead_get_line_skip(PyFileObject *f, Py_ssize_t skip, Py_ssize_t bufsize)
#define READAHEAD_BUFSIZE 8192
static PyObject *
file_iternext(PyFileObject *f)
static PyObject *
file_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
static int
file_init(PyObject *self, PyObject *args, PyObject *kwds)
PyDoc_VAR(file_doc) =
PyDoc_STR(
)
PyDoc_STR(
);
PyTypeObject PyFile_Type = ;
int
PyFile_SoftSpace(PyObject *f, int newflag)
int
PyFile_WriteObject(PyObject *v, PyObject *f, int flags)
int
PyFile_WriteString(const char *s, PyObject *f)
int PyObject_AsFileDescriptor(PyObject *o)
#undef fgets
#undef fread
char *
Py_UniversalNewlineFgets(char *buf, int n, FILE *stream, PyObject *fobj)
size_t
Py_UniversalNewlineFread(char *buf, size_t n,
FILE *stream, PyObject *fobj)
