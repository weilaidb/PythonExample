static struct ResampleContext *create(struct ResampleContext *c, int out_rate, int in_rate, int filter_size, int phase_shift, int linear,
double cutoff, enum AVSampleFormat format, enum SwrFilterType filter_type, double kaiser_beta, double precision, int cheby, int exact_rational)
static void destroy(struct ResampleContext * *c)
static int flush(struct SwrContext *s)
static int process(
struct ResampleContext * c, AudioData *dst, int dst_size,
AudioData *src, int src_size, int *consumed)
static int64_t get_delay(struct SwrContext *s, int64_t base)
static int invert_initial_buffer(struct ResampleContext *c, AudioData *dst, const AudioData *src,
int in_count, int *out_idx, int *out_sz)
static int64_t get_out_samples(struct SwrContext *s, int in_samples)
struct Resampler const swri_soxr_resampler=;
