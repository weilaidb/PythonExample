#define PY_SSIZE_T_CLEAN
PyDoc_STRVAR(textiobase_doc,
"Base class for text I/O.\n"
"\n"
"This class provides a character and line based interface to stream\n"
"I/O. There is no readinto method because Python's character strings\n"
"are immutable. There is no public constructor.\n"
);
static PyObject *
_unsupported(const char *message)
PyDoc_STRVAR(textiobase_detach_doc,
"Separate the underlying buffer from the TextIOBase and return it.\n"
"\n"
"After the underlying buffer has been detached, the TextIO is in an\n"
"unusable state.\n"
);
static PyObject *
textiobase_detach(PyObject *self)
PyDoc_STRVAR(textiobase_read_doc,
"Read at most n characters from stream.\n"
"\n"
"Read from underlying buffer until we have n characters or we hit EOF.\n"
"If n is negative or omitted, read until EOF.\n"
);
static PyObject *
textiobase_read(PyObject *self, PyObject *args)
PyDoc_STRVAR(textiobase_readline_doc,
"Read until newline or EOF.\n"
"\n"
"Returns an empty string if EOF is hit immediately.\n"
);
static PyObject *
textiobase_readline(PyObject *self, PyObject *args)
PyDoc_STRVAR(textiobase_write_doc,
"Write string to stream.\n"
"Returns the number of characters written (which is always equal to\n"
"the length of the string).\n"
);
static PyObject *
textiobase_write(PyObject *self, PyObject *args)
PyDoc_STRVAR(textiobase_encoding_doc,
"Encoding of the text stream.\n"
"\n"
"Subclasses should override.\n"
);
static PyObject *
textiobase_encoding_get(PyObject *self, void *context)
PyDoc_STRVAR(textiobase_newlines_doc,
"Line endings translated so far.\n"
"\n"
"Only line endings translated during reading are considered.\n"
"\n"
"Subclasses should override.\n"
);
static PyObject *
textiobase_newlines_get(PyObject *self, void *context)
PyDoc_STRVAR(textiobase_errors_doc,
"The error setting of the decoder or encoder.\n"
"\n"
"Subclasses should override.\n"
);
static PyObject *
textiobase_errors_get(PyObject *self, void *context)
static PyMethodDef textiobase_methods[] = ;
static PyGetSetDef textiobase_getset[] = ;
PyTypeObject PyTextIOBase_Type = ;
PyDoc_STRVAR(incrementalnewlinedecoder_doc,
"Codec used when reading a file in universal newlines mode.  It wraps\n"
"another incremental decoder, translating \\r\\n and \\r into \\n.  It also\n"
"records the types of newlines encountered.  When used with\n"
"translate=False, it ensures that the newline sequence is returned in\n"
"one piece. When used with decoder=None, it expects unicode strings as\n"
"decode input and translates newlines without first invoking an external\n"
"decoder.\n"
);
typedef struct  nldecoder_object;
static int
incrementalnewlinedecoder_init(nldecoder_object *self,
PyObject *args, PyObject *kwds)
static void
incrementalnewlinedecoder_dealloc(nldecoder_object *self)
static int
check_decoded(PyObject *decoded)
#define SEEN_CR   1
#define SEEN_LF   2
#define SEEN_CRLF 4
#define SEEN_ALL (SEEN_CR | SEEN_LF | SEEN_CRLF)
PyObject *
_PyIncrementalNewlineDecoder_decode(PyObject *_self,
PyObject *input, int final)
static PyObject *
incrementalnewlinedecoder_decode(nldecoder_object *self,
PyObject *args, PyObject *kwds)
static PyObject *
incrementalnewlinedecoder_getstate(nldecoder_object *self, PyObject *args)
static PyObject *
incrementalnewlinedecoder_setstate(nldecoder_object *self, PyObject *state)
static PyObject *
incrementalnewlinedecoder_reset(nldecoder_object *self, PyObject *args)
static PyObject *
incrementalnewlinedecoder_newlines_get(nldecoder_object *self, void *context)
static PyMethodDef incrementalnewlinedecoder_methods[] = ;
static PyGetSetDef incrementalnewlinedecoder_getset[] = ;
PyTypeObject PyIncrementalNewlineDecoder_Type = ;
PyDoc_STRVAR(textiowrapper_doc,
"Character and line based layer over a BufferedIOBase object, buffer.\n"
"\n"
"encoding gives the name of the encoding that the stream will be\n"
"decoded or encoded with. It defaults to locale.getpreferredencoding.\n"
"\n"
"errors determines the strictness of encoding and decoding (see the\n"
"codecs.register) and defaults to \"strict\".\n"
"\n"
"newline controls how line endings are handled. It can be None, '',\n"
"'\\n', '\\r', and '\\r\\n'.  It works as follows:\n"
"\n"
"* On input, if newline is None, universal newlines mode is\n"
"  enabled. Lines in the input can end in '\\n', '\\r', or '\\r\\n', and\n"
"  these are translated into '\\n' before being returned to the\n"
"  caller. If it is '', universal newline mode is enabled, but line\n"
"  endings are returned to the caller untranslated. If it has any of\n"
"  the other legal values, input lines are only terminated by the given\n"
"  string, and the line ending is returned to the caller untranslated.\n"
"\n"
"* On output, if newline is None, any '\\n' characters written are\n"
"  translated to the system default line separator, os.linesep. If\n"
"  newline is '', no translation takes place. If newline is any of the\n"
"  other legal values, any '\\n' characters written are translated to\n"
"  the given string.\n"
"\n"
"If line_buffering is True, a call to flush is implied when a call to\n"
"write contains a newline character."
);
typedef PyObject *
(*encodefunc_t)(PyObject *, PyObject *);
typedef struct
textio;
static PyObject *
ascii_encode(textio *self, PyObject *text)
static PyObject *
utf16be_encode(textio *self, PyObject *text)
static PyObject *
utf16le_encode(textio *self, PyObject *text)
static PyObject *
utf16_encode(textio *self, PyObject *text)
static PyObject *
utf32be_encode(textio *self, PyObject *text)
static PyObject *
utf32le_encode(textio *self, PyObject *text)
static PyObject *
utf32_encode(textio *self, PyObject *text)
static PyObject *
utf8_encode(textio *self, PyObject *text)
static PyObject *
latin1_encode(textio *self, PyObject *text)
typedef struct  encodefuncentry;
static encodefuncentry encodefuncs[] = ;
static int
textiowrapper_init(textio *self, PyObject *args, PyObject *kwds)
static void
_textiowrapper_clear(textio *self)
static void
textiowrapper_dealloc(textio *self)
static int
textiowrapper_traverse(textio *self, visitproc visit, void *arg)
static int
textiowrapper_clear(textio *self)
static PyObject *
textiowrapper_closed_get(textio *self, void *context);
#define CHECK_CLOSED(self) \
do  while (0)
#define CHECK_INITIALIZED(self) \
if (self->ok <= 0)
#define CHECK_ATTACHED(self) \
CHECK_INITIALIZED(self); \
if (self->detached)
#define CHECK_ATTACHED_INT(self) \
if (self->ok <= 0)  else if (self->detached)
static PyObject *
textiowrapper_detach(textio *self)
Py_LOCAL_INLINE(const Py_UNICODE *)
findchar(const Py_UNICODE *s, Py_ssize_t size, Py_UNICODE ch)
static int
_textiowrapper_writeflush(textio *self)
static PyObject *
textiowrapper_write(textio *self, PyObject *args)
static void
textiowrapper_set_decoded_chars(textio *self, PyObject *chars)
static PyObject *
textiowrapper_get_decoded_chars(textio *self, Py_ssize_t n)
static int
textiowrapper_read_chunk(textio *self)
static PyObject *
textiowrapper_read(textio *self, PyObject *args)
static Py_UNICODE *
find_control_char(Py_UNICODE *start, Py_UNICODE *end, Py_UNICODE ch)
Py_ssize_t
_PyIO_find_line_ending(
int translated, int universal, PyObject *readnl,
Py_UNICODE *start, Py_UNICODE *end, Py_ssize_t *consumed)
static PyObject *
_textiowrapper_readline(textio *self, Py_ssize_t limit)
static PyObject *
textiowrapper_readline(textio *self, PyObject *args)
typedef struct  cookie_type;
#define COOKIE_BUF_LEN      (sizeof(Py_off_t) + 3 * sizeof(int) + sizeof(char))
#if defined(WORDS_BIGENDIAN)
# define IS_LITTLE_ENDIAN   0
# define OFF_START_POS      (sizeof(char) + 3 * sizeof(int))
# define OFF_DEC_FLAGS      (sizeof(char) + 2 * sizeof(int))
# define OFF_BYTES_TO_FEED  (sizeof(char) + sizeof(int))
# define OFF_CHARS_TO_SKIP  (sizeof(char))
# define OFF_NEED_EOF       0
# define IS_LITTLE_ENDIAN   1
# define OFF_START_POS      0
# define OFF_DEC_FLAGS      (sizeof(Py_off_t))
# define OFF_BYTES_TO_FEED  (sizeof(Py_off_t) + sizeof(int))
# define OFF_CHARS_TO_SKIP  (sizeof(Py_off_t) + 2 * sizeof(int))
# define OFF_NEED_EOF       (sizeof(Py_off_t) + 3 * sizeof(int))
static int
textiowrapper_parse_cookie(cookie_type *cookie, PyObject *cookieObj)
static PyObject *
textiowrapper_build_cookie(cookie_type *cookie)
#undef IS_LITTLE_ENDIAN
static int
_textiowrapper_decoder_setstate(textio *self, cookie_type *cookie)
static int
_textiowrapper_encoder_setstate(textio *self, cookie_type *cookie)
static PyObject *
textiowrapper_seek(textio *self, PyObject *args)
static PyObject *
textiowrapper_tell(textio *self, PyObject *args)
static PyObject *
textiowrapper_truncate(textio *self, PyObject *args)
static PyObject *
textiowrapper_repr(textio *self)
static PyObject *
textiowrapper_fileno(textio *self, PyObject *args)
static PyObject *
textiowrapper_seekable(textio *self, PyObject *args)
static PyObject *
textiowrapper_readable(textio *self, PyObject *args)
static PyObject *
textiowrapper_writable(textio *self, PyObject *args)
static PyObject *
textiowrapper_isatty(textio *self, PyObject *args)
static PyObject *
textiowrapper_flush(textio *self, PyObject *args)
static PyObject *
textiowrapper_close(textio *self, PyObject *args)
static PyObject *
textiowrapper_iternext(textio *self)
static PyObject *
textiowrapper_name_get(textio *self, void *context)
static PyObject *
textiowrapper_closed_get(textio *self, void *context)
static PyObject *
textiowrapper_newlines_get(textio *self, void *context)
static PyObject *
textiowrapper_errors_get(textio *self, void *context)
static PyObject *
textiowrapper_chunk_size_get(textio *self, void *context)
static int
textiowrapper_chunk_size_set(textio *self, PyObject *arg, void *context)
static PyMethodDef textiowrapper_methods[] = ;
static PyMemberDef textiowrapper_members[] = ;
static PyGetSetDef textiowrapper_getset[] = ;
PyTypeObject PyTextIOWrapper_Type = ;
