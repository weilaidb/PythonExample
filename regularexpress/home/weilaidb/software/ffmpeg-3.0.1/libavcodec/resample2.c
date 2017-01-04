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
static double bessel(double x)
static int build_filter(FELEM *filter, double factor, int tap_count, int phase_count, int scale, int type)
AVResampleContext *av_resample_init(int out_rate, int in_rate, int filter_size, int phase_shift, int linear, double cutoff)
void av_resample_close(AVResampleContext *c)
void av_resample_compensate(AVResampleContext *c, int sample_delta, int compensation_distance)
int av_resample(AVResampleContext *c, short *dst, short *src, int *consumed, int src_size, int dst_size, int update_ctx)
