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
#error "Large file support, but neither off_t nor fpos_t is large enough."
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
"readline([size]) -> next line from the file, as a string.\n"
"\n"
"Retain newline.  A non-negative size argument limits the maximum\n"
"number of bytes to return (an incomplete line may be returned then).\n"
"Return an empty string at EOF.");
PyDoc_STRVAR(read_doc,
"read([size]) -> read at most size bytes, returned as a string.\n"
"\n"
"If the size argument is negative or omitted, read until EOF is reached.\n"
"Notice that when in non-blocking mode, less data than what was requested\n"
"may be returned, even if no size parameter was given.");
PyDoc_STRVAR(write_doc,
"write(str) -> None.  Write string str to file.\n"
"\n"
"Note that due to buffering, flush() or close() may be needed before\n"
"the file on disk reflects the data written.");
PyDoc_STRVAR(fileno_doc,
"fileno() -> integer \"file descriptor\".\n"
"\n"
"This is needed for lower-level file interfaces, such os.read().");
PyDoc_STRVAR(seek_doc,
"seek(offset[, whence]) -> None.  Move to new file position.\n"
"\n"
"Argument offset is a byte count.  Optional argument whence defaults to\n"
"0 (offset from start of file, offset should be >= 0); other values are 1\n"
"(move relative to current position, positive or negative), and 2 (move\n"
"relative to end of file, usually negative, although many platforms allow\n"
"seeking beyond the end of a file).  If the file is opened in text mode,\n"
"only offsets returned by tell() are legal.  Use of other offsets causes\n"
"undefined behavior."
"\n"
"Note that not all file objects are seekable.");
PyDoc_STRVAR(truncate_doc,
"truncate([size]) -> None.  Truncate the file to at most size bytes.\n"
"\n"
"Size defaults to the current file position, as returned by tell().");
PyDoc_STRVAR(tell_doc,
"tell() -> current file position, an integer (may be a long integer).");
PyDoc_STRVAR(readinto_doc,
"readinto() -> Undocumented.  Don't use this; it may go away.");
PyDoc_STRVAR(readlines_doc,
"readlines([size]) -> list of strings, each a line from the file.\n"
"\n"
"Call readline() repeatedly and return a list of the lines so read.\n"
"The optional size argument, if given, is an approximate bound on the\n"
"total number of bytes in the lines returned.");
PyDoc_STRVAR(xreadlines_doc,
"xreadlines() -> returns self.\n"
"\n"
"For backward compatibility. File objects now include the performance\n"
"optimizations previously implemented in the xreadlines module.");
PyDoc_STRVAR(writelines_doc,
"writelines(sequence_of_strings) -> None.  Write the strings to the file.\n"
"\n"
"Note that newlines are not added.  The sequence can be any iterable object\n"
"producing strings. This is equivalent to calling write() for each string.");
PyDoc_STRVAR(flush_doc,
"flush() -> None.  Flush the internal I/O buffer.");
PyDoc_STRVAR(close_doc,
"close() -> None or (perhaps) an integer.  Close the file.\n"
"\n"
"Sets data attribute .closed to True.  A closed file cannot be used for\n"
"further I/O operations.  close() may be called more than once without\n"
"error.  Some kinds of file objects (for example, opened by popen())\n"
"may return an exit status upon closing.");
PyDoc_STRVAR(isatty_doc,
"isatty() -> true or false.  True if the file is connected to a tty device.");
PyDoc_STRVAR(enter_doc,
"__enter__() -> self.");
PyDoc_STRVAR(exit_doc,
"__exit__(*excinfo) -> None.  Closes the file.");
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
"file(name[, mode[, buffering]]) -> file object\n"
"\n"
"Open a file.  The mode can be 'r', 'w' or 'a' for reading (default),\n"
"writing or appending.  The file will be created if it doesn't exist\n"
"when opened for writing or appending; it will be truncated when\n"
"opened for writing.  Add a 'b' to the mode for binary files.\n"
"Add a '+' to the mode to allow simultaneous reading and writing.\n"
"If the buffering argument is given, 0 means unbuffered, 1 means line\n"
"buffered, and larger numbers specify the buffer size.  The preferred way\n"
"to open a file is with the builtin open() function.\n"
)
PyDoc_STR(
"Add a 'U' to mode to open the file for input with universal newline\n"
"support.  Any line ending in the input file will be seen as a '\\n'\n"
"in Python.  Also, a file so opened gains the attribute 'newlines';\n"
"the value for this attribute is one of None (no newline read yet),\n"
"'\\r', '\\n', '\\r\\n' or a tuple containing all the newline types seen.\n"
"\n"
"'U' cannot be combined with 'w' or '+' mode.\n"
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
