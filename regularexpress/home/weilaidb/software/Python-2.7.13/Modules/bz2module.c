static char __author__[] =
"The bz2 python module was written by:\n\
\n\
Gustavo Niemeyer <niemeyer@conectiva.com>\n\
";
#if !defined(HAVE_LARGEFILE_SUPPORT)
typedef off_t Py_off_t;
#elif SIZEOF_OFF_T >= 8
typedef off_t Py_off_t;
#elif SIZEOF_FPOS_T >= 8
typedef fpos_t Py_off_t;
#error "Large file support, but neither off_t nor fpos_t is large enough."
#define BUF(v) PyString_AS_STRING((PyStringObject *)v)
#define MODE_CLOSED   0
#define MODE_READ     1
#define MODE_READ_EOF 2
#define MODE_WRITE    3
#define BZ2_bzRead bzRead
#define BZ2_bzReadOpen bzReadOpen
#define BZ2_bzReadClose bzReadClose
#define BZ2_bzWrite bzWrite
#define BZ2_bzWriteOpen bzWriteOpen
#define BZ2_bzWriteClose bzWriteClose
#define BZ2_bzCompress bzCompress
#define BZ2_bzCompressInit bzCompressInit
#define BZ2_bzCompressEnd bzCompressEnd
#define BZ2_bzDecompress bzDecompress
#define BZ2_bzDecompressInit bzDecompressInit
#define BZ2_bzDecompressEnd bzDecompressEnd
#define ACQUIRE_LOCK(obj) do  while(0)
#define RELEASE_LOCK(obj) PyThread_release_lock(obj->lock)
#define ACQUIRE_LOCK(obj)
#define RELEASE_LOCK(obj)
#define MIN(X, Y) (((X) < (Y)) ? (X) : (Y))
#define NEWLINE_UNKNOWN 0
#define NEWLINE_CR 1
#define NEWLINE_LF 2
#define NEWLINE_CRLF 4
typedef struct  BZ2FileObject;
typedef struct  BZ2CompObject;
typedef struct  BZ2DecompObject;
static int
check_iterbuffered(BZ2FileObject *f)
static int
Util_CatchBZ2Error(int bzerror)
#if BUFSIZ < 8192
#define SMALLCHUNK 8192
#define SMALLCHUNK BUFSIZ
static size_t
Util_NewBufferSize(size_t currentsize)
static int
Util_GrowBuffer(PyObject **buf)
static PyObject *
Util_GetLine(BZ2FileObject *f, int n)
size_t
Util_UnivNewlineRead(int *bzerror, BZFILE *stream,
char* buf, size_t n, BZ2FileObject *f)
static void
Util_DropReadAhead(BZ2FileObject *f)
static int
Util_ReadAhead(BZ2FileObject *f, int bufsize)
static PyStringObject *
Util_ReadAheadGetLineSkip(BZ2FileObject *f, int skip, int bufsize)
PyDoc_STRVAR(BZ2File_read__doc__,
"read([size]) -> string\n\
\n\
Read at most size uncompressed bytes, returned as a string. If the size\n\
argument is negative or omitted, read until EOF is reached.\n\
");
static PyObject *
BZ2File_read(BZ2FileObject *self, PyObject *args)
PyDoc_STRVAR(BZ2File_readline__doc__,
"readline([size]) -> string\n\
\n\
Return the next line from the file, as a string, retaining newline.\n\
A non-negative size argument will limit the maximum number of bytes to\n\
return (an incomplete line may be returned then). Return an empty\n\
string at EOF.\n\
");
static PyObject *
BZ2File_readline(BZ2FileObject *self, PyObject *args)
PyDoc_STRVAR(BZ2File_readlines__doc__,
"readlines([size]) -> list\n\
\n\
Call readline() repeatedly and return a list of lines read.\n\
The optional size argument, if given, is an approximate bound on the\n\
total number of bytes in the lines returned.\n\
");
static PyObject *
BZ2File_readlines(BZ2FileObject *self, PyObject *args)
PyDoc_STRVAR(BZ2File_xreadlines__doc__,
"xreadlines() -> self\n\
\n\
For backward compatibility. BZ2File objects now include the performance\n\
optimizations previously implemented in the xreadlines module.\n\
");
PyDoc_STRVAR(BZ2File_write__doc__,
"write(data) -> None\n\
\n\
Write the 'data' string to file. Note that due to buffering, close() may\n\
be needed before the file on disk reflects the data written.\n\
");
static PyObject *
BZ2File_write(BZ2FileObject *self, PyObject *args)
PyDoc_STRVAR(BZ2File_writelines__doc__,
"writelines(sequence_of_strings) -> None\n\
\n\
Write the sequence of strings to the file. Note that newlines are not\n\
added. The sequence can be any iterable object producing strings. This is\n\
equivalent to calling write() for each string.\n\
");
static PyObject *
BZ2File_writelines(BZ2FileObject *self, PyObject *seq)
PyDoc_STRVAR(BZ2File_seek__doc__,
"seek(offset [, whence]) -> None\n\
\n\
Move to new file position. Argument offset is a byte count. Optional\n\
argument whence defaults to 0 (offset from start of file, offset\n\
should be >= 0); other values are 1 (move relative to current position,\n\
positive or negative), and 2 (move relative to end of file, usually\n\
negative, although many platforms allow seeking beyond the end of a file).\n\
\n\
Note that seeking of bz2 files is emulated, and depending on the parameters\n\
the operation may be extremely slow.\n\
");
static PyObject *
BZ2File_seek(BZ2FileObject *self, PyObject *args)
PyDoc_STRVAR(BZ2File_tell__doc__,
"tell() -> int\n\
\n\
Return the current file position, an integer (may be a long integer).\n\
");
static PyObject *
BZ2File_tell(BZ2FileObject *self, PyObject *args)
PyDoc_STRVAR(BZ2File_close__doc__,
"close() -> None or (perhaps) an integer\n\
\n\
Close the file. Sets data attribute .closed to true. A closed file\n\
cannot be used for further I/O operations. close() may be called more\n\
than once without error.\n\
");
static PyObject *
BZ2File_close(BZ2FileObject *self)
PyDoc_STRVAR(BZ2File_enter_doc,
"__enter__() -> self.");
static PyObject *
BZ2File_enter(BZ2FileObject *self)
PyDoc_STRVAR(BZ2File_exit_doc,
"__exit__(*excinfo) -> None.  Closes the file.");
static PyObject *
BZ2File_exit(BZ2FileObject *self, PyObject *args)
static PyObject *BZ2File_getiter(BZ2FileObject *self);
static PyMethodDef BZ2File_methods[] = ;
static PyObject *
BZ2File_get_newlines(BZ2FileObject *self, void *closure)
static PyObject *
BZ2File_get_closed(BZ2FileObject *self, void *closure)
static PyObject *
BZ2File_get_mode(BZ2FileObject *self, void *closure)
static PyObject *
BZ2File_get_name(BZ2FileObject *self, void *closure)
static PyGetSetDef BZ2File_getset[] = ;
#undef OFF
#define OFF(x) offsetof(BZ2FileObject, x)
static PyMemberDef BZ2File_members[] = ;
static int
BZ2File_init(BZ2FileObject *self, PyObject *args, PyObject *kwargs)
static void
BZ2File_dealloc(BZ2FileObject *self)
static PyObject *
BZ2File_getiter(BZ2FileObject *self)
#define READAHEAD_BUFSIZE 8192
static PyObject *
BZ2File_iternext(BZ2FileObject *self)
PyDoc_VAR(BZ2File__doc__) =
PyDoc_STR(
"BZ2File(name [, mode='r', buffering=0, compresslevel=9]) -> file object\n\
\n\
Open a bz2 file. The mode can be 'r' or 'w', for reading (default) or\n\
writing. When opened for writing, the file will be created if it doesn't\n\
exist, and truncated otherwise. If the buffering argument is given, 0 means\n\
unbuffered, and larger numbers specify the buffer size. If compresslevel\n\
is given, must be a number between 1 and 9.\n\
")
PyDoc_STR(
"\n\
Add a 'U' to mode to open the file for input with universal newline\n\
support. Any line ending in the input file will be seen as a '\\n' in\n\
Python. Also, a file so opened gains the attribute 'newlines'; the value\n\
for this attribute is one of None (no newline read yet), '\\r', '\\n',\n\
'\\r\\n' or a tuple containing all the newline types seen. Universal\n\
newlines are available only when reading.\n\
")
;
static PyTypeObject BZ2File_Type = ;
PyDoc_STRVAR(BZ2Comp_compress__doc__,
"compress(data) -> string\n\
\n\
Provide more data to the compressor object. It will return chunks of\n\
compressed data whenever possible. When you've finished providing data\n\
to compress, call the flush() method to finish the compression process,\n\
and return what is left in the internal buffers.\n\
");
static PyObject *
BZ2Comp_compress(BZ2CompObject *self, PyObject *args)
PyDoc_STRVAR(BZ2Comp_flush__doc__,
"flush() -> string\n\
\n\
Finish the compression process and return what is left in internal buffers.\n\
You must not use the compressor object after calling this method.\n\
");
static PyObject *
BZ2Comp_flush(BZ2CompObject *self)
static PyMethodDef BZ2Comp_methods[] = ;
static int
BZ2Comp_init(BZ2CompObject *self, PyObject *args, PyObject *kwargs)
static void
BZ2Comp_dealloc(BZ2CompObject *self)
PyDoc_STRVAR(BZ2Comp__doc__,
"BZ2Compressor([compresslevel=9]) -> compressor object\n\
\n\
Create a new compressor object. This object may be used to compress\n\
data sequentially. If you want to compress data in one shot, use the\n\
compress() function instead. The compresslevel parameter, if given,\n\
must be a number between 1 and 9.\n\
");
static PyTypeObject BZ2Comp_Type = ;
#undef OFF
#define OFF(x) offsetof(BZ2DecompObject, x)
static PyMemberDef BZ2Decomp_members[] = ;
PyDoc_STRVAR(BZ2Decomp_decompress__doc__,
"decompress(data) -> string\n\
\n\
Provide more data to the decompressor object. It will return chunks\n\
of decompressed data whenever possible. If you try to decompress data\n\
after the end of stream is found, EOFError will be raised. If any data\n\
was found after the end of stream, it'll be ignored and saved in\n\
unused_data attribute.\n\
");
static PyObject *
BZ2Decomp_decompress(BZ2DecompObject *self, PyObject *args)
static PyMethodDef BZ2Decomp_methods[] = ;
static int
BZ2Decomp_init(BZ2DecompObject *self, PyObject *args, PyObject *kwargs)
static void
BZ2Decomp_dealloc(BZ2DecompObject *self)
PyDoc_STRVAR(BZ2Decomp__doc__,
"BZ2Decompressor() -> decompressor object\n\
\n\
Create a new decompressor object. This object may be used to decompress\n\
data sequentially. If you want to decompress data in one shot, use the\n\
decompress() function instead.\n\
");
static PyTypeObject BZ2Decomp_Type = ;
PyDoc_STRVAR(bz2_compress__doc__,
"compress(data [, compresslevel=9]) -> string\n\
\n\
Compress data in one shot. If you want to compress data sequentially,\n\
use an instance of BZ2Compressor instead. The compresslevel parameter, if\n\
given, must be a number between 1 and 9.\n\
");
static PyObject *
bz2_compress(PyObject *self, PyObject *args, PyObject *kwargs)
PyDoc_STRVAR(bz2_decompress__doc__,
"decompress(data) -> decompressed data\n\
\n\
Decompress data in one shot. If you want to decompress data sequentially,\n\
use an instance of BZ2Decompressor instead.\n\
");
static PyObject *
bz2_decompress(PyObject *self, PyObject *args)
static PyMethodDef bz2_methods[] = ;
PyDoc_STRVAR(bz2__doc__,
"The python bz2 module provides a comprehensive interface for\n\
the bz2 compression library. It implements a complete file\n\
interface, one shot (de)compression functions, and types for\n\
sequential (de)compression.\n\
");
PyMODINIT_FUNC
initbz2(void)
