#define PY_SSIZE_T_CLEAN
typedef struct  MultibyteEncodeBuffer;
typedef struct  MultibyteDecodeBuffer;
PyDoc_STRVAR(MultibyteCodec_Encode__doc__,
"I.encode(unicode[, errors]) -> (string, length consumed)\n\
\n\
Return an encoded string version of `unicode'. errors may be given to\n\
set a different error handling scheme. Default is 'strict' meaning that\n\
encoding errors raise a UnicodeEncodeError. Other possible values are\n\
'ignore', 'replace' and 'xmlcharrefreplace' as well as any other name\n\
registered with codecs.register_error that can handle UnicodeEncodeErrors.");
PyDoc_STRVAR(MultibyteCodec_Decode__doc__,
"I.decode(string[, errors]) -> (unicodeobject, length consumed)\n\
\n\
Decodes `string' using I, an MultibyteCodec instance. errors may be given\n\
to set a different error handling scheme. Default is 'strict' meaning\n\
that encoding errors raise a UnicodeDecodeError. Other possible values\n\
are 'ignore' and 'replace' as well as any other name registered with\n\
codecs.register_error that is able to handle UnicodeDecodeErrors.");
static char *codeckwarglist[] = ;
static char *incnewkwarglist[] = ;
static char *incrementalkwarglist[] = ;
static char *streamkwarglist[] = ;
static PyObject *multibytecodec_encode(MultibyteCodec *,
MultibyteCodec_State *, const Py_UNICODE **, Py_ssize_t,
PyObject *, int);
#define MBENC_RESET     MBENC_MAX<<1
static PyObject *
make_tuple(PyObject *object, Py_ssize_t len)
static PyObject *
internal_error_callback(const char *errors)
static PyObject *
call_error_callback(PyObject *errors, PyObject *exc)
static PyObject *
codecctx_errors_get(MultibyteStatefulCodecContext *self)
static int
codecctx_errors_set(MultibyteStatefulCodecContext *self, PyObject *value,
void *closure)
static PyGetSetDef codecctx_getsets[] = ;
static int
expand_encodebuffer(MultibyteEncodeBuffer *buf, Py_ssize_t esize)
#define REQUIRE_ENCODEBUFFER(buf, s) do  while(0)
static int
expand_decodebuffer(MultibyteDecodeBuffer *buf, Py_ssize_t esize)
#define REQUIRE_DECODEBUFFER(buf, s) do  while(0)
static int
multibytecodec_encerror(MultibyteCodec *codec,
MultibyteCodec_State *state,
MultibyteEncodeBuffer *buf,
PyObject *errors, Py_ssize_t e)
static int
multibytecodec_decerror(MultibyteCodec *codec,
MultibyteCodec_State *state,
MultibyteDecodeBuffer *buf,
PyObject *errors, Py_ssize_t e)
static PyObject *
multibytecodec_encode(MultibyteCodec *codec,
MultibyteCodec_State *state,
const Py_UNICODE **data, Py_ssize_t datalen,
PyObject *errors, int flags)
static PyObject *
MultibyteCodec_Encode(MultibyteCodecObject *self,
PyObject *args, PyObject *kwargs)
static PyObject *
MultibyteCodec_Decode(MultibyteCodecObject *self,
PyObject *args, PyObject *kwargs)
static struct PyMethodDef multibytecodec_methods[] = ;
static void
multibytecodec_dealloc(MultibyteCodecObject *self)
static PyTypeObject MultibyteCodec_Type = ;
#define STATEFUL_DCTX(o)        ((MultibyteStatefulDecoderContext *)(o))
#define STATEFUL_ECTX(o)        ((MultibyteStatefulEncoderContext *)(o))
static PyObject *
encoder_encode_stateful(MultibyteStatefulEncoderContext *ctx,
PyObject *unistr, int final)
static int
decoder_append_pending(MultibyteStatefulDecoderContext *ctx,
MultibyteDecodeBuffer *buf)
static int
decoder_prepare_buffer(MultibyteDecodeBuffer *buf, const char *data,
Py_ssize_t size)
static int
decoder_feed_buffer(MultibyteStatefulDecoderContext *ctx,
MultibyteDecodeBuffer *buf)
static PyObject *
mbiencoder_encode(MultibyteIncrementalEncoderObject *self,
PyObject *args, PyObject *kwargs)
static PyObject *
mbiencoder_reset(MultibyteIncrementalEncoderObject *self)
static struct PyMethodDef mbiencoder_methods[] = ;
static PyObject *
mbiencoder_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
static int
mbiencoder_init(PyObject *self, PyObject *args, PyObject *kwds)
static int
mbiencoder_traverse(MultibyteIncrementalEncoderObject *self,
visitproc visit, void *arg)
static void
mbiencoder_dealloc(MultibyteIncrementalEncoderObject *self)
static PyTypeObject MultibyteIncrementalEncoder_Type = ;
static PyObject *
mbidecoder_decode(MultibyteIncrementalDecoderObject *self,
PyObject *args, PyObject *kwargs)
static PyObject *
mbidecoder_reset(MultibyteIncrementalDecoderObject *self)
static struct PyMethodDef mbidecoder_methods[] = ;
static PyObject *
mbidecoder_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
static int
mbidecoder_init(PyObject *self, PyObject *args, PyObject *kwds)
static int
mbidecoder_traverse(MultibyteIncrementalDecoderObject *self,
visitproc visit, void *arg)
static void
mbidecoder_dealloc(MultibyteIncrementalDecoderObject *self)
static PyTypeObject MultibyteIncrementalDecoder_Type = ;
static PyObject *
mbstreamreader_iread(MultibyteStreamReaderObject *self,
const char *method, Py_ssize_t sizehint)
static PyObject *
mbstreamreader_read(MultibyteStreamReaderObject *self, PyObject *args)
static PyObject *
mbstreamreader_readline(MultibyteStreamReaderObject *self, PyObject *args)
static PyObject *
mbstreamreader_readlines(MultibyteStreamReaderObject *self, PyObject *args)
static PyObject *
mbstreamreader_reset(MultibyteStreamReaderObject *self)
static struct PyMethodDef mbstreamreader_methods[] = ;
static PyMemberDef mbstreamreader_members[] = ;
static PyObject *
mbstreamreader_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
static int
mbstreamreader_init(PyObject *self, PyObject *args, PyObject *kwds)
static int
mbstreamreader_traverse(MultibyteStreamReaderObject *self,
visitproc visit, void *arg)
static void
mbstreamreader_dealloc(MultibyteStreamReaderObject *self)
static PyTypeObject MultibyteStreamReader_Type = ;
static int
mbstreamwriter_iwrite(MultibyteStreamWriterObject *self,
PyObject *unistr)
static PyObject *
mbstreamwriter_write(MultibyteStreamWriterObject *self, PyObject *strobj)
static PyObject *
mbstreamwriter_writelines(MultibyteStreamWriterObject *self, PyObject *lines)
static PyObject *
mbstreamwriter_reset(MultibyteStreamWriterObject *self)
static PyObject *
mbstreamwriter_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
static int
mbstreamwriter_init(PyObject *self, PyObject *args, PyObject *kwds)
static int
mbstreamwriter_traverse(MultibyteStreamWriterObject *self,
visitproc visit, void *arg)
static void
mbstreamwriter_dealloc(MultibyteStreamWriterObject *self)
static struct PyMethodDef mbstreamwriter_methods[] = ;
static PyMemberDef mbstreamwriter_members[] = ;
static PyTypeObject MultibyteStreamWriter_Type = ;
static PyObject *
__create_codec(PyObject *ignore, PyObject *arg)
static struct PyMethodDef __methods[] = ;
PyMODINIT_FUNC
init_multibytecodec(void)
