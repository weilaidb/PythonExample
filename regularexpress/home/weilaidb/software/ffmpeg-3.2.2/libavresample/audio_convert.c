enum ConvFuncType ;
typedef void (conv_func_flat)(uint8_t *out, const uint8_t *in, int len);
typedef void (conv_func_interleave)(uint8_t *out, uint8_t *const *in,
int len, int channels);
typedef void (conv_func_deinterleave)(uint8_t **out, const uint8_t *in, int len,
int channels);
struct AudioConvert ;
ff_audio_convert_set_func
CONV_FUNC_NAME conv_ ## src_fmt ## _to_ ## dst_fmt
CONV_LOOP                                              \
do  while (po < end);                                                     \
CONV_FUNC_FLAT                      \
CONV_FUNC_NAME(uint8_t *out, const uint8_t *in,     \
int len)                             \
CONV_FUNC_INTERLEAVE                \
CONV_FUNC_NAME(uint8_t *out, const uint8_t **in,    \
int len, int channels)               \
CONV_FUNC_DEINTERLEAVE              \
CONV_FUNC_NAME(uint8_t **out, const uint8_t *in,    \
int len, int channels)               \
CONV_FUNC_GROUP \
CONV_FUNC_FLAT(        ofmt,      otype, ifmt,      itype, expr) \
CONV_FUNC_INTERLEAVE(  ofmt,      otype, ifmt ## P, itype, expr) \
CONV_FUNC_DEINTERLEAVE(ofmt ## P, otype, ifmt,      itype, expr)
CONV_FUNC_GROUP(AV_SAMPLE_FMT_U8,  uint8_t, AV_SAMPLE_FMT_U8,  uint8_t,  *(const uint8_t *)pi)
CONV_FUNC_GROUP(AV_SAMPLE_FMT_S16, int16_t, AV_SAMPLE_FMT_U8,  uint8_t, (*(const uint8_t *)pi - 0x80) <<  8)
CONV_FUNC_GROUP(AV_SAMPLE_FMT_S32, int32_t, AV_SAMPLE_FMT_U8,  uint8_t, (*(const uint8_t *)pi - 0x80) << 24)
CONV_FUNC_GROUP(AV_SAMPLE_FMT_FLT, float,   AV_SAMPLE_FMT_U8,  uint8_t, (*(const uint8_t *)pi - 0x80) * (1.0f / (1 << 7)))
CONV_FUNC_GROUP(AV_SAMPLE_FMT_DBL, double,  AV_SAMPLE_FMT_U8,  uint8_t, (*(const uint8_t *)pi - 0x80) * (1.0  / (1 << 7)))
CONV_FUNC_GROUP(AV_SAMPLE_FMT_U8,  uint8_t, AV_SAMPLE_FMT_S16, int16_t, (*(const int16_t *)pi >> 8) + 0x80)
CONV_FUNC_GROUP(AV_SAMPLE_FMT_S16, int16_t, AV_SAMPLE_FMT_S16, int16_t,  *(const int16_t *)pi)
CONV_FUNC_GROUP(AV_SAMPLE_FMT_S32, int32_t, AV_SAMPLE_FMT_S16, int16_t,  *(const int16_t *)pi << 16)
CONV_FUNC_GROUP(AV_SAMPLE_FMT_FLT, float,   AV_SAMPLE_FMT_S16, int16_t,  *(const int16_t *)pi * (1.0f / (1 << 15)))
CONV_FUNC_GROUP(AV_SAMPLE_FMT_DBL, double,  AV_SAMPLE_FMT_S16, int16_t,  *(const int16_t *)pi * (1.0  / (1 << 15)))
CONV_FUNC_GROUP(AV_SAMPLE_FMT_U8,  uint8_t, AV_SAMPLE_FMT_S32, int32_t, (*(const int32_t *)pi >> 24) + 0x80)
CONV_FUNC_GROUP(AV_SAMPLE_FMT_S16, int16_t, AV_SAMPLE_FMT_S32, int32_t,  *(const int32_t *)pi >> 16)
CONV_FUNC_GROUP(AV_SAMPLE_FMT_S32, int32_t, AV_SAMPLE_FMT_S32, int32_t,  *(const int32_t *)pi)
CONV_FUNC_GROUP(AV_SAMPLE_FMT_FLT, float,   AV_SAMPLE_FMT_S32, int32_t,  *(const int32_t *)pi * (1.0f / (1U << 31)))
CONV_FUNC_GROUP(AV_SAMPLE_FMT_DBL, double,  AV_SAMPLE_FMT_S32, int32_t,  *(const int32_t *)pi * (1.0  / (1U << 31)))
CONV_FUNC_GROUP(AV_SAMPLE_FMT_U8,  uint8_t, AV_SAMPLE_FMT_FLT, float,   av_clip_uint8(  lrintf(*(const float *)pi * (1  <<  7)) + 0x80))
CONV_FUNC_GROUP(AV_SAMPLE_FMT_S16, int16_t, AV_SAMPLE_FMT_FLT, float,   av_clip_int16(  lrintf(*(const float *)pi * (1  << 15))))
CONV_FUNC_GROUP(AV_SAMPLE_FMT_S32, int32_t, AV_SAMPLE_FMT_FLT, float,   av_clipl_int32(llrintf(*(const float *)pi * (1U << 31))))
CONV_FUNC_GROUP(AV_SAMPLE_FMT_FLT, float,   AV_SAMPLE_FMT_FLT, float,   *(const float *)pi)
CONV_FUNC_GROUP(AV_SAMPLE_FMT_DBL, double,  AV_SAMPLE_FMT_FLT, float,   *(const float *)pi)
CONV_FUNC_GROUP(AV_SAMPLE_FMT_U8,  uint8_t, AV_SAMPLE_FMT_DBL, double,  av_clip_uint8(  lrint(*(const double *)pi * (1  <<  7)) + 0x80))
CONV_FUNC_GROUP(AV_SAMPLE_FMT_S16, int16_t, AV_SAMPLE_FMT_DBL, double,  av_clip_int16(  lrint(*(const double *)pi * (1  << 15))))
CONV_FUNC_GROUP(AV_SAMPLE_FMT_S32, int32_t, AV_SAMPLE_FMT_DBL, double,  av_clipl_int32(llrint(*(const double *)pi * (1U << 31))))
CONV_FUNC_GROUP(AV_SAMPLE_FMT_FLT, float,   AV_SAMPLE_FMT_DBL, double,  *(const double *)pi)
CONV_FUNC_GROUP(AV_SAMPLE_FMT_DBL, double,  AV_SAMPLE_FMT_DBL, double,  *(const double *)pi)
SET_CONV_FUNC_GROUP                                                             \
ff_audio_convert_set_func(ac, ofmt,      ifmt,      0, 1, 1, , CONV_FUNC_NAME(ofmt,      ifmt)); \
ff_audio_convert_set_func(ac, ofmt ## P, ifmt,      0, 1, 1, , CONV_FUNC_NAME(ofmt ## P, ifmt)); \
ff_audio_convert_set_func(ac, ofmt,      ifmt ## P, 0, 1, 1, , CONV_FUNC_NAME(ofmt,      ifmt ## P));
set_generic_function
ff_audio_convert_free
*ff_audio_convert_alloc
ff_audio_convert
