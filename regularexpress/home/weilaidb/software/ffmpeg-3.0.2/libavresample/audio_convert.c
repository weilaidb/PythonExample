enum ConvFuncType ;
typedef void (conv_func_flat)(uint8_t *out, const uint8_t *in, int len);
typedef void (conv_func_interleave)(uint8_t *out, uint8_t *const *in,
int len, int channels);
typedef void (conv_func_deinterleave)(uint8_t **out, const uint8_t *in, int len,
int channels);
struct AudioConvert ;
void ff_audio_convert_set_func(AudioConvert *ac, enum AVSampleFormat out_fmt,
enum AVSampleFormat in_fmt, int channels,
int ptr_align, int samples_align,
const char *descr, void *conv)
#define CONV_FUNC_NAME(dst_fmt, src_fmt) conv_ ## src_fmt ## _to_ ## dst_fmt
#define CONV_LOOP(otype, expr)                                              \
do  while (po < end);                                                     \
#define CONV_FUNC_FLAT(ofmt, otype, ifmt, itype, expr)                      \
static void CONV_FUNC_NAME(ofmt, ifmt)(uint8_t *out, const uint8_t *in,     \
int len)                             \
#define CONV_FUNC_INTERLEAVE(ofmt, otype, ifmt, itype, expr)                \
static void CONV_FUNC_NAME(ofmt, ifmt)(uint8_t *out, const uint8_t **in,    \
int len, int channels)               \
#define CONV_FUNC_DEINTERLEAVE(ofmt, otype, ifmt, itype, expr)              \
static void CONV_FUNC_NAME(ofmt, ifmt)(uint8_t **out, const uint8_t *in,    \
int len, int channels)               \
#define CONV_FUNC_GROUP(ofmt, otype, ifmt, itype, expr) \
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
#define SET_CONV_FUNC_GROUP(ofmt, ifmt)                                                             \
ff_audio_convert_set_func(ac, ofmt,      ifmt,      0, 1, 1, "C", CONV_FUNC_NAME(ofmt,      ifmt)); \
ff_audio_convert_set_func(ac, ofmt ## P, ifmt,      0, 1, 1, "C", CONV_FUNC_NAME(ofmt ## P, ifmt)); \
ff_audio_convert_set_func(ac, ofmt,      ifmt ## P, 0, 1, 1, "C", CONV_FUNC_NAME(ofmt,      ifmt ## P));
static void set_generic_function(AudioConvert *ac)
void ff_audio_convert_free(AudioConvert **ac)
AudioConvert *ff_audio_convert_alloc(AVAudioResampleContext *avr,
enum AVSampleFormat out_fmt,
enum AVSampleFormat in_fmt,
int channels, int sample_rate,
int apply_map)
int ff_audio_convert(AudioConvert *ac, AudioData *out, AudioData *in)
