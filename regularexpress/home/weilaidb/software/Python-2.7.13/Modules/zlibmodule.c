#define PY_SSIZE_T_CLEAN
static PyThread_type_lock zlib_lock = NULL;
#define ENTER_ZLIB \
Py_BEGIN_ALLOW_THREADS \
PyThread_acquire_lock(zlib_lock, 1); \
Py_END_ALLOW_THREADS
#define LEAVE_ZLIB \
PyThread_release_lock(zlib_lock);
#define ENTER_ZLIB
#define LEAVE_ZLIB
#define DEFLATED   8
#if MAX_MEM_LEVEL >= 8
#  define DEF_MEM_LEVEL 8
#  define DEF_MEM_LEVEL  MAX_MEM_LEVEL
#define DEF_WBITS MAX_WBITS
#define DEFAULTALLOC (16*1024)
#define PyInit_zlib initzlib
static PyTypeObject Comptype;
static PyTypeObject Decomptype;
static PyObject *ZlibError;
typedef struct
compobject;
static void
zlib_error(z_stream zst, int err, char *msg)
PyDoc_STRVAR(compressobj__doc__,
"compressobj([level]) -- Return a compressor object.\n"
"\n"
"Optional arg level is the compression level, in 0-9 or -1.");
PyDoc_STRVAR(decompressobj__doc__,
"decompressobj([wbits]) -- Return a decompressor object.\n"
"\n"
"Optional arg wbits indicates the window buffer size and container format.");
static compobject *
newcompobject(PyTypeObject *type)
static void
arrange_input_buffer(z_stream *zst, Py_ssize_t *remains)
static Py_ssize_t
arrange_output_buffer_with_maximum(z_stream *zst, PyObject **buffer,
Py_ssize_t length,
Py_ssize_t max_length)
static Py_ssize_t
arrange_output_buffer(z_stream *zst, PyObject **buffer, Py_ssize_t length)
PyDoc_STRVAR(compress__doc__,
"compress(string[, level]) -- Returned compressed string.\n"
"\n"
"Optional arg level is the compression level, in 0-9.");
static PyObject *
PyZlib_compress(PyObject *self, PyObject *args)
PyDoc_STRVAR(decompress__doc__,
"decompress(string[, wbits[, bufsize]]) -- Return decompressed string.\n"
"\n"
"Optional arg wbits indicates the window buffer size and container format.\n"
"Optional arg bufsize is the initial output buffer size.");
static PyObject *
PyZlib_decompress(PyObject *self, PyObject *args)
static PyObject *
PyZlib_compressobj(PyObject *selfptr, PyObject *args)
static PyObject *
PyZlib_decompressobj(PyObject *selfptr, PyObject *args)
static void
Comp_dealloc(compobject *self)
static void
Decomp_dealloc(compobject *self)
PyDoc_STRVAR(comp_compress__doc__,
"compress(data) -- Return a string containing data compressed.\n"
"\n"
"After calling this function, some of the input data may still\n"
"be stored in internal buffers for later processing.\n"
"Call the flush() method to clear these buffers.");
static PyObject *
PyZlib_objcompress(compobject *self, PyObject *args)
static int
save_unconsumed_input(compobject *self, Byte *input, Py_ssize_t inplen,
int err)
PyDoc_STRVAR(decomp_decompress__doc__,
"decompress(data, max_length) -- Return a string containing the decompressed\n"
"version of the data.\n"
"\n"
"After calling this function, some of the input data may still be stored in\n"
"internal buffers for later processing.\n"
"Call the flush() method to clear these buffers.\n"
"If the max_length parameter is specified then the return value will be\n"
"no longer than max_length.  Unconsumed input data will be stored in\n"
"the unconsumed_tail attribute.");
static PyObject *
PyZlib_objdecompress(compobject *self, PyObject *args)
PyDoc_STRVAR(comp_flush__doc__,
"flush( [mode] ) -- Return a string containing any remaining compressed data.\n"
"\n"
"mode can be one of the constants Z_SYNC_FLUSH, Z_FULL_FLUSH, Z_FINISH; the\n"
"default value used when mode is not specified is Z_FINISH.\n"
"If mode == Z_FINISH, the compressor object can no longer be used after\n"
"calling the flush() method.  Otherwise, more data can still be compressed.");
static PyObject *
PyZlib_flush(compobject *self, PyObject *args)
PyDoc_STRVAR(comp_copy__doc__,
"copy() -- Return a copy of the compression object.");
static PyObject *
PyZlib_copy(compobject *self)
PyDoc_STRVAR(decomp_copy__doc__,
"copy() -- Return a copy of the decompression object.");
static PyObject *
PyZlib_uncopy(compobject *self)
PyDoc_STRVAR(decomp_flush__doc__,
"flush( [length] ) -- Return a string containing any remaining\n"
"decompressed data. length, if given, is the initial size of the\n"
"output buffer.\n"
"\n"
"The decompressor object can no longer be used after this call.");
static PyObject *
PyZlib_unflush(compobject *self, PyObject *args)
static PyMethodDef comp_methods[] =
;
static PyMethodDef Decomp_methods[] =
;
static PyObject *
Comp_getattr(compobject *self, char *name)
static PyObject *
Decomp_getattr(compobject *self, char *name)
PyDoc_STRVAR(adler32__doc__,
"adler32(string[, start]) -- Compute an Adler-32 checksum of string.\n"
"\n"
"An optional starting value can be specified.  The returned checksum is\n"
"a signed integer.");
static PyObject *
PyZlib_adler32(PyObject *self, PyObject *args)
;
static PyTypeObject Decomptype = ;
PyDoc_STRVAR(zlib_module_documentation,
"The functions in this module allow compression and decompression using the\n"
"zlib library, which is based on GNU zip.\n"
"\n"
"adler32(string[, start]) -- Compute an Adler-32 checksum.\n"
"compress(string[, level]) -- Compress string, with compression level in 0-9.\n"
"compressobj([level]) -- Return a compressor object.\n"
"crc32(string[, start]) -- Compute a CRC-32 checksum.\n"
"decompress(string,[wbits],[bufsize]) -- Decompresses a compressed string.\n"
"decompressobj([wbits]) -- Return a decompressor object.\n"
"\n"
"'wbits' is window buffer size and container format.\n"
"Compressor objects support compress() and flush() methods; decompressor\n"
"objects support decompress() and flush().");
PyMODINIT_FUNC
PyInit_zlib(void)
