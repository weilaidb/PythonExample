static int _PyCodecRegistry_Init(void);
int PyCodec_Register(PyObject *search_function)
static
PyObject *normalizestring(const char *string)
PyObject *_PyCodec_Lookup(const char *encoding)
static
PyObject *args_tuple(PyObject *object,
const char *errors)
static
PyObject *codec_getitem(const char *encoding, int index)
static
PyObject *codec_makeincrementalcodec(PyObject *codec_info,
const char *errors,
const char *attrname)
static
PyObject *codec_getincrementalcodec(const char *encoding,
const char *errors,
const char *attrname)
static
PyObject *codec_getstreamcodec(const char *encoding,
PyObject *stream,
const char *errors,
const int index)
PyObject *_PyCodecInfo_GetIncrementalDecoder(PyObject *codec_info,
const char *errors)
PyObject *_PyCodecInfo_GetIncrementalEncoder(PyObject *codec_info,
const char *errors)
PyObject *PyCodec_Encoder(const char *encoding)
PyObject *PyCodec_Decoder(const char *encoding)
PyObject *PyCodec_IncrementalEncoder(const char *encoding,
const char *errors)
PyObject *PyCodec_IncrementalDecoder(const char *encoding,
const char *errors)
PyObject *PyCodec_StreamReader(const char *encoding,
PyObject *stream,
const char *errors)
PyObject *PyCodec_StreamWriter(const char *encoding,
PyObject *stream,
const char *errors)
static PyObject *
_PyCodec_EncodeInternal(PyObject *object,
PyObject *encoder,
const char *encoding,
const char *errors)
static PyObject *
_PyCodec_DecodeInternal(PyObject *object,
PyObject *decoder,
const char *encoding,
const char *errors)
PyObject *PyCodec_Encode(PyObject *object,
const char *encoding,
const char *errors)
PyObject *PyCodec_Decode(PyObject *object,
const char *encoding,
const char *errors)
PyObject * _PyCodec_LookupTextEncoding(const char *encoding,
const char *alternate_command)
static
PyObject *codec_getitem_checked(const char *encoding,
const char *alternate_command,
int index)
static PyObject * _PyCodec_TextEncoder(const char *encoding)
static PyObject * _PyCodec_TextDecoder(const char *encoding)
PyObject *_PyCodec_EncodeText(PyObject *object,
const char *encoding,
const char *errors)
PyObject *_PyCodec_DecodeText(PyObject *object,
const char *encoding,
const char *errors)
int PyCodec_RegisterError(const char *name, PyObject *error)
PyObject *PyCodec_LookupError(const char *name)
static void wrong_exception_type(PyObject *exc)
PyObject *PyCodec_StrictErrors(PyObject *exc)
PyObject *PyCodec_IgnoreErrors(PyObject *exc)
PyObject *PyCodec_ReplaceErrors(PyObject *exc)
PyObject *PyCodec_XMLCharRefReplaceErrors(PyObject *exc)
static Py_UNICODE hexdigits[] = ;
PyObject *PyCodec_BackslashReplaceErrors(PyObject *exc)
static PyObject *strict_errors(PyObject *self, PyObject *exc)
static PyObject *ignore_errors(PyObject *self, PyObject *exc)
static PyObject *replace_errors(PyObject *self, PyObject *exc)
static PyObject *xmlcharrefreplace_errors(PyObject *self, PyObject *exc)
static PyObject *backslashreplace_errors(PyObject *self, PyObject *exc)
static int _PyCodecRegistry_Init(void)
