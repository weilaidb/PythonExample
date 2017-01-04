#define PY_SSIZE_T_CLEAN
PyDoc_STRVAR(register__doc__,
"register(search_function)\n\
\n\
Register a codec search function. Search functions are expected to take\n\
one argument, the encoding name in all lower case letters, and return\n\
a tuple of functions (encoder, decoder, stream_reader, stream_writer)\n\
(or a CodecInfo object).");
static
PyObject *codec_register(PyObject *self, PyObject *search_function)
PyDoc_STRVAR(lookup__doc__,
"lookup(encoding) -> CodecInfo\n\
\n\
Looks up a codec tuple in the Python codec registry and returns\n\
a CodecInfo object.");
static
PyObject *codec_lookup(PyObject *self, PyObject *args)
PyDoc_STRVAR(encode__doc__,
"encode(obj, [encoding[,errors]]) -> object\n\
\n\
Encodes obj using the codec registered for encoding. encoding defaults\n\
to the default encoding. errors may be given to set a different error\n\
handling scheme. Default is 'strict' meaning that encoding errors raise\n\
a ValueError. Other possible values are 'ignore', 'replace' and\n\
'xmlcharrefreplace' as well as any other name registered with\n\
codecs.register_error that can handle ValueErrors.");
static PyObject *
codec_encode(PyObject *self, PyObject *args)
PyDoc_STRVAR(decode__doc__,
"decode(obj, [encoding[,errors]]) -> object\n\
\n\
Decodes obj using the codec registered for encoding. encoding defaults\n\
to the default encoding. errors may be given to set a different error\n\
handling scheme. Default is 'strict' meaning that encoding errors raise\n\
a ValueError. Other possible values are 'ignore' and 'replace'\n\
as well as any other name registered with codecs.register_error that is\n\
able to handle ValueErrors.");
static PyObject *
codec_decode(PyObject *self, PyObject *args)
static
PyObject *codec_tuple(PyObject *unicode,
Py_ssize_t len)
static PyObject *
escape_decode(PyObject *self,
PyObject *args)
static PyObject *
escape_encode(PyObject *self,
PyObject *args)
static PyObject *
unicode_internal_decode(PyObject *self,
PyObject *args)
static PyObject *
utf_7_decode(PyObject *self,
PyObject *args)
static PyObject *
utf_8_decode(PyObject *self,
PyObject *args)
static PyObject *
utf_16_decode(PyObject *self,
PyObject *args)
static PyObject *
utf_16_le_decode(PyObject *self,
PyObject *args)
static PyObject *
utf_16_be_decode(PyObject *self,
PyObject *args)
static PyObject *
utf_16_ex_decode(PyObject *self,
PyObject *args)
static PyObject *
utf_32_decode(PyObject *self,
PyObject *args)
static PyObject *
utf_32_le_decode(PyObject *self,
PyObject *args)
static PyObject *
utf_32_be_decode(PyObject *self,
PyObject *args)
static PyObject *
utf_32_ex_decode(PyObject *self,
PyObject *args)
static PyObject *
unicode_escape_decode(PyObject *self,
PyObject *args)
static PyObject *
raw_unicode_escape_decode(PyObject *self,
PyObject *args)
static PyObject *
latin_1_decode(PyObject *self,
PyObject *args)
static PyObject *
ascii_decode(PyObject *self,
PyObject *args)
static PyObject *
charmap_decode(PyObject *self,
PyObject *args)
#if defined(MS_WINDOWS) && defined(HAVE_USABLE_WCHAR_T)
static PyObject *
mbcs_decode(PyObject *self,
PyObject *args)
static PyObject *
readbuffer_encode(PyObject *self,
PyObject *args)
static PyObject *
charbuffer_encode(PyObject *self,
PyObject *args)
static PyObject *
unicode_internal_encode(PyObject *self,
PyObject *args)
static PyObject *
utf_7_encode(PyObject *self,
PyObject *args)
static PyObject *
utf_8_encode(PyObject *self,
PyObject *args)
static PyObject *
utf_16_encode(PyObject *self,
PyObject *args)
static PyObject *
utf_16_le_encode(PyObject *self,
PyObject *args)
static PyObject *
utf_16_be_encode(PyObject *self,
PyObject *args)
static PyObject *
utf_32_encode(PyObject *self,
PyObject *args)
static PyObject *
utf_32_le_encode(PyObject *self,
PyObject *args)
static PyObject *
utf_32_be_encode(PyObject *self,
PyObject *args)
static PyObject *
unicode_escape_encode(PyObject *self,
PyObject *args)
static PyObject *
raw_unicode_escape_encode(PyObject *self,
PyObject *args)
static PyObject *
latin_1_encode(PyObject *self,
PyObject *args)
static PyObject *
ascii_encode(PyObject *self,
PyObject *args)
static PyObject *
charmap_encode(PyObject *self,
PyObject *args)
static PyObject*
charmap_build(PyObject *self, PyObject *args)
#if defined(MS_WINDOWS) && defined(HAVE_USABLE_WCHAR_T)
static PyObject *
mbcs_encode(PyObject *self,
PyObject *args)
PyDoc_STRVAR(register_error__doc__,
"register_error(errors, handler)\n\
\n\
Register the specified error handler under the name\n\
errors. handler must be a callable object, that\n\
will be called with an exception instance containing\n\
information about the location of the encoding/decoding\n\
error and must return a (replacement, new position) tuple.");
static PyObject *register_error(PyObject *self, PyObject *args)
PyDoc_STRVAR(lookup_error__doc__,
"lookup_error(errors) -> handler\n\
\n\
Return the error handler for the specified error handling name\n\
or raise a LookupError, if no handler exists under this name.");
static PyObject *lookup_error(PyObject *self, PyObject *args)
static PyMethodDef _codecs_functions[] = ;
PyMODINIT_FUNC
init_codecs(void)
