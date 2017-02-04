#if FF_API_AVCODEC_RESAMPLE
#define FILTER_SHIFT 15
typedef int16_t FELEM;
typedef int32_t FELEM2;
typedef int64_t FELEML;
#define FELEM_MAX INT16_MAX
#define FELEM_MIN INT16_MIN
#define WINDOW_TYPE 9
#elif !defined(CONFIG_RESAMPLE_AUDIOPHILE_KIDDY_MODE)
#define FILTER_SHIFT 30
#define FELEM int32_t
#define FELEM2 int64_t
#define FELEML int64_t
#define FELEM_MAX INT32_MAX
#define FELEM_MIN INT32_MIN
#define WINDOW_TYPE 12
#define FILTER_SHIFT 0
typedef double FELEM;
typedef double FELEM2;
typedef double FELEML;
#define WINDOW_TYPE 24
typedef struct AVResampleContextAVResampleContext;
bessel
build_filter
*av_resample_init
av_resample_close
av_resample_compensate
av_resample
