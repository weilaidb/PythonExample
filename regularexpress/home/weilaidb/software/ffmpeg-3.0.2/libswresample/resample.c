static inline double eval_poly(const double *coeff, int size, double x)
static double bessel(double x)
static int build_filter(ResampleContext *c, void *filter, double factor, int tap_count, int alloc, int phase_count, int scale,
int filter_type, double kaiser_beta)
static ResampleContext *resample_init(ResampleContext *c, int out_rate, int in_rate, int filter_size, int phase_shift, int linear,
double cutoff0, enum AVSampleFormat format, enum SwrFilterType filter_type, double kaiser_beta,
double precision, int cheby)
static void resample_free(ResampleContext **c)
static int set_compensation(ResampleContext *c, int sample_delta, int compensation_distance)
static int swri_resample(ResampleContext *c,
uint8_t *dst, const uint8_t *src, int *consumed,
int src_size, int dst_size, int update_ctx)
static int multiple_resample(ResampleContext *c, AudioData *dst, int dst_size, AudioData *src, int src_size, int *consumed)
static int64_t get_delay(struct SwrContext *s, int64_t base)
static int64_t get_out_samples(struct SwrContext *s, int in_samples)
static int resample_flush(struct SwrContext *s)
static int invert_initial_buffer(ResampleContext *c, AudioData *dst, const AudioData *src,
int in_count, int *out_idx, int *out_sz)
struct Resampler const swri_resampler=;
