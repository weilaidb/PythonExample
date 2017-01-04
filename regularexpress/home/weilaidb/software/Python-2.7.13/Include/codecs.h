#define Py_CODECREGISTRY_H
PyAPI_FUNC(int) PyCodec_Register(
PyObject *search_function
);
PyAPI_FUNC(PyObject *) _PyCodec_Lookup(
const char *encoding
);
PyAPI_FUNC(PyObject *) PyCodec_Encode(
PyObject *object,
const char *encoding,
const char *errors
);
PyAPI_FUNC(PyObject *) PyCodec_Decode(
PyObject *object,
const char *encoding,
const char *errors
);
PyAPI_FUNC(PyObject *) _PyCodec_LookupTextEncoding(
const char *encoding,
const char *alternate_command
);
PyAPI_FUNC(PyObject *) _PyCodec_EncodeText(
PyObject *object,
const char *encoding,
const char *errors
);
PyAPI_FUNC(PyObject *) _PyCodec_DecodeText(
PyObject *object,
const char *encoding,
const char *errors
);
PyAPI_FUNC(PyObject *) _PyCodecInfo_GetIncrementalDecoder(
PyObject *codec_info,
const char *errors
);
PyAPI_FUNC(PyObject *) _PyCodecInfo_GetIncrementalEncoder(
PyObject *codec_info,
const char *errors
);
PyAPI_FUNC(PyObject *) PyCodec_Encoder(
const char *encoding
);
PyAPI_FUNC(PyObject *) PyCodec_Decoder(
const char *encoding
);
PyAPI_FUNC(PyObject *) PyCodec_IncrementalEncoder(
const char *encoding,
const char *errors
);
PyAPI_FUNC(PyObject *) PyCodec_IncrementalDecoder(
const char *encoding,
const char *errors
);
PyAPI_FUNC(PyObject *) PyCodec_StreamReader(
const char *encoding,
PyObject *stream,
const char *errors
);
PyAPI_FUNC(PyObject *) PyCodec_StreamWriter(
const char *encoding,
PyObject *stream,
const char *errors
);
PyAPI_FUNC(int) PyCodec_RegisterError(const char *name, PyObject *error);
PyAPI_FUNC(PyObject *) PyCodec_LookupError(const char *name);
PyAPI_FUNC(PyObject *) PyCodec_StrictErrors(PyObject *exc);
PyAPI_FUNC(PyObject *) PyCodec_IgnoreErrors(PyObject *exc);
PyAPI_FUNC(PyObject *) PyCodec_ReplaceErrors(PyObject *exc);
PyAPI_FUNC(PyObject *) PyCodec_XMLCharRefReplaceErrors(PyObject *exc);
PyAPI_FUNC(PyObject *) PyCodec_BackslashReplaceErrors(PyObject *exc);
