#define _CJKCODECS_H_
#define PY_SSIZE_T_CLEAN
#define UNIINV  0xFFFE
#define NOCHAR  0xFFFF
#define MULTIC  0xFFFE
#define DBCINV  0xFFFD
#define U UNIINV
#define N NOCHAR
#define M MULTIC
#define D DBCINV
struct dbcs_index ;
typedef struct dbcs_index decode_map;
struct widedbcs_index ;
typedef struct widedbcs_index widedecode_map;
struct unim_index ;
typedef struct unim_index encode_map;
struct unim_index_bytebased ;
struct dbcs_map ;
struct pair_encodemap ;
static const MultibyteCodec *codec_list;
static const struct dbcs_map *mapping_list;
#define CODEC_INIT(encoding)                                            \
static int encoding##_codec_init(const void *config)
#define ENCODER_INIT(encoding)                                          \
static int encoding##_encode_init(                                  \
MultibyteCodec_State *state, const void *config)
#define ENCODER(encoding)                                               \
static Py_ssize_t encoding##_encode(                                \
MultibyteCodec_State *state, const void *config,                \
const Py_UNICODE **inbuf, Py_ssize_t inleft,                    \
unsigned char **outbuf, Py_ssize_t outleft, int flags)
#define ENCODER_RESET(encoding)                                         \
static Py_ssize_t encoding##_encode_reset(                          \
MultibyteCodec_State *state, const void *config,                \
unsigned char **outbuf, Py_ssize_t outleft)
#define DECODER_INIT(encoding)                                          \
static int encoding##_decode_init(                                  \
MultibyteCodec_State *state, const void *config)
#define DECODER(encoding)                                               \
static Py_ssize_t encoding##_decode(                                \
MultibyteCodec_State *state, const void *config,                \
const unsigned char **inbuf, Py_ssize_t inleft,                 \
Py_UNICODE **outbuf, Py_ssize_t outleft)
#define DECODER_RESET(encoding)                                         \
static Py_ssize_t encoding##_decode_reset(                          \
MultibyteCodec_State *state, const void *config)
#if Py_UNICODE_SIZE == 4
#define UCS4INVALID(code)       \
if ((code) > 0xFFFF)        \
return 1;
#define UCS4INVALID(code)       \
if (0) ;
#define NEXT_IN(i)                              \
(*inbuf) += (i);                            \
(inleft) -= (i);
#define NEXT_OUT(o)                             \
(*outbuf) += (o);                           \
(outleft) -= (o);
#define NEXT(i, o)                              \
NEXT_IN(i) NEXT_OUT(o)
#define REQUIRE_INBUF(n)                        \
if (inleft < (n))                           \
return MBERR_TOOFEW;
#define REQUIRE_OUTBUF(n)                       \
if (outleft < (n))                          \
return MBERR_TOOSMALL;
#define IN1 ((*inbuf)[0])
#define IN2 ((*inbuf)[1])
#define IN3 ((*inbuf)[2])
#define IN4 ((*inbuf)[3])
#define OUT1(c) ((*outbuf)[0]) = (c);
#define OUT2(c) ((*outbuf)[1]) = (c);
#define OUT3(c) ((*outbuf)[2]) = (c);
#define OUT4(c) ((*outbuf)[3]) = (c);
#define WRITE1(c1)              \
REQUIRE_OUTBUF(1)           \
(*outbuf)[0] = (c1);
#define WRITE2(c1, c2)          \
REQUIRE_OUTBUF(2)           \
(*outbuf)[0] = (c1);        \
(*outbuf)[1] = (c2);
#define WRITE3(c1, c2, c3)      \
REQUIRE_OUTBUF(3)           \
(*outbuf)[0] = (c1);        \
(*outbuf)[1] = (c2);        \
(*outbuf)[2] = (c3);
#define WRITE4(c1, c2, c3, c4)  \
REQUIRE_OUTBUF(4)           \
(*outbuf)[0] = (c1);        \
(*outbuf)[1] = (c2);        \
(*outbuf)[2] = (c3);        \
(*outbuf)[3] = (c4);
#if Py_UNICODE_SIZE == 2
# define WRITEUCS4(c)                                           \
REQUIRE_OUTBUF(2)                                           \
(*outbuf)[0] = 0xd800 + (((c) - 0x10000) >> 10);            \
(*outbuf)[1] = 0xdc00 + (((c) - 0x10000) & 0x3ff);          \
NEXT_OUT(2)
# define WRITEUCS4(c)                                           \
REQUIRE_OUTBUF(1)                                           \
**outbuf = (Py_UNICODE)(c);                                 \
NEXT_OUT(1)
#define _TRYMAP_ENC(m, assi, val)                               \
((m)->map != NULL && (val) >= (m)->bottom &&                \
(val)<= (m)->top && ((assi) = (m)->map[(val) -          \
(m)->bottom]) != NOCHAR)
#define TRYMAP_ENC_COND(charset, assi, uni)                     \
_TRYMAP_ENC(&charset##_encmap[(uni) >> 8], assi, (uni) & 0xff)
#define TRYMAP_ENC(charset, assi, uni)                          \
if TRYMAP_ENC_COND(charset, assi, uni)
#define _TRYMAP_DEC(m, assi, val)                               \
((m)->map != NULL && (val) >= (m)->bottom &&                \
(val)<= (m)->top && ((assi) = (m)->map[(val) -          \
(m)->bottom]) != UNIINV)
#define TRYMAP_DEC(charset, assi, c1, c2)                       \
if _TRYMAP_DEC(&charset##_decmap[c1], assi, c2)
#define _TRYMAP_ENC_MPLANE(m, assplane, asshi, asslo, val)      \
((m)->map != NULL && (val) >= (m)->bottom &&                \
(val)<= (m)->top &&                                     \
((assplane) = (m)->map[((val) - (m)->bottom)*3]) != 0 && \
(((asshi) = (m)->map[((val) - (m)->bottom)*3 + 1]), 1) && \
(((asslo) = (m)->map[((val) - (m)->bottom)*3 + 2]), 1))
#define TRYMAP_ENC_MPLANE(charset, assplane, asshi, asslo, uni) \
if _TRYMAP_ENC_MPLANE(&charset##_encmap[(uni) >> 8], \
assplane, asshi, asslo, (uni) & 0xff)
#define TRYMAP_DEC_MPLANE(charset, assi, plane, c1, c2)         \
if _TRYMAP_DEC(&charset##_decmap[plane][c1], assi, c2)
#if Py_UNICODE_SIZE == 2
#define DECODE_SURROGATE(c)                                     \
if (c >> 10 == 0xd800 >> 10)
#define GET_INSIZE(c)   ((c) > 0xffff ? 2 : 1)
#define DECODE_SURROGATE(c)
#define GET_INSIZE(c)   1
#define BEGIN_MAPPINGS_LIST static const struct dbcs_map _mapping_list[] = ;                                 \
static const struct dbcs_map *mapping_list =        \
(const struct dbcs_map *)_mapping_list;
#define BEGIN_CODECS_LIST static const MultibyteCodec _codec_list[] = ;                                      \
static const MultibyteCodec *codec_list =           \
(const MultibyteCodec *)_codec_list;
static PyObject *
getmultibytecodec(void)
static PyObject *
getcodec(PyObject *self, PyObject *encoding)
static struct PyMethodDef __methods[] = ;
static int
register_maps(PyObject *module)
static DBCHAR
find_pairencmap(ucs2_t body, ucs2_t modifier,
const struct pair_encodemap *haystack, int haystacksize)
#define IMPORT_MAP(locale, charset, encmap, decmap) \
importmap("_codecs_" #locale, "__map_" #charset, \
(const void**)encmap, (const void**)decmap)
static int
importmap(const char *modname, const char *symbol,
const void **encmap, const void **decmap)
#define I_AM_A_MODULE_FOR(loc)                                          \
void                                                                \
init_codecs_##loc(void)                                             \
