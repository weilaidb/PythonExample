#if defined(TEMPLATE_RESAMPLE_DBL)
#    define RENAME(N) N ## _double
#    define FILTER_SHIFT 0
#    define DELEM  double
#    define FELEM  double
#    define FELEM2 double
#    define OUT(d, v) d = v
#elif    defined(TEMPLATE_RESAMPLE_FLT)
#    define RENAME(N) N ## _float
#    define FILTER_SHIFT 0
#    define DELEM  float
#    define FELEM  float
#    define FELEM2 float
#    define OUT(d, v) d = v
#elif defined(TEMPLATE_RESAMPLE_S32)
#    define RENAME(N) N ## _int32
#    define FILTER_SHIFT 30
#    define DELEM  int32_t
#    define FELEM  int32_t
#    define FELEM2 int64_t
#    define FELEM_MAX INT32_MAX
#    define FELEM_MIN INT32_MIN
#    define OUT(d, v) (v) = ((v) + (1<<(FILTER_SHIFT-1)))>>FILTER_SHIFT;\
(d) = av_clipl_int32(v)
#elif    defined(TEMPLATE_RESAMPLE_S16)
#    define RENAME(N) N ## _int16
#    define FILTER_SHIFT 15
#    define DELEM  int16_t
#    define FELEM  int16_t
#    define FELEM2 int32_t
#    define FELEML int64_t
#    define FELEM_MAX INT16_MAX
#    define FELEM_MIN INT16_MIN
#    define OUT(d, v) (v) = ((v) + (1<<(FILTER_SHIFT-1)))>>FILTER_SHIFT;\
(d) = av_clip_int16(v)
static void RENAME(resample_one)(void *dest, const void *source,
int dst_size, int64_t index2, int64_t incr)
static int RENAME(resample_common)(ResampleContext *c,
void *dest, const void *source,
int n, int update_ctx)
static int RENAME(resample_linear)(ResampleContext *c,
void *dest, const void *source,
int n, int update_ctx)
#undef RENAME
#undef FILTER_SHIFT
#undef DELEM
#undef FELEM
#undef FELEM2
#undef FELEML
#undef FELEM_MAX
#undef FELEM_MIN
#undef OUT
