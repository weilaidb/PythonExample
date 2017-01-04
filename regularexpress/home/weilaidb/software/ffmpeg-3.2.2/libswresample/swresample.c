#define ALIGN 32
const char swr_ffversion[] = "FFmpeg version " FFMPEG_VERSION;
unsigned swresample_version(void)
const char *swresample_configuration(void)
const char *swresample_license(void)
int swr_set_channel_mapping(struct SwrContext *s, const int *channel_map)
struct SwrContext *swr_alloc_set_opts(struct SwrContext *s,
int64_t out_ch_layout, enum AVSampleFormat out_sample_fmt, int out_sample_rate,
int64_t  in_ch_layout, enum AVSampleFormat  in_sample_fmt, int  in_sample_rate,
int log_offset, void *log_ctx)
static void set_audiodata_fmt(AudioData *a, enum AVSampleFormat fmt)
static void free_temp(AudioData *a)
static void clear_context(SwrContext *s)
av_cold void swr_free(SwrContext **ss)
av_cold void swr_close(SwrContext *s)
av_cold int swr_init(struct SwrContext *s)
int swri_realloc_audio(AudioData *a, int count)
static void copy(AudioData *out, AudioData *in,
int count)
static void fill_audiodata(AudioData *out, uint8_t *in_arg [SWR_CH_MAX])
static void reversefill_audiodata(AudioData *out, uint8_t *in_arg [SWR_CH_MAX])
static void buf_set(AudioData *out, AudioData *in, int count)
static int resample(SwrContext *s, AudioData *out_param, int out_count,
const AudioData * in_param, int in_count)
static int swr_convert_internal(struct SwrContext *s, AudioData *out, int out_count,
AudioData *in , int  in_count)
int swr_is_initialized(struct SwrContext *s)
int attribute_align_arg swr_convert(struct SwrContext *s, uint8_t *out_arg[SWR_CH_MAX], int out_count,
const uint8_t *in_arg [SWR_CH_MAX], int  in_count)
int swr_drop_output(struct SwrContext *s, int count)
int swr_inject_silence(struct SwrContext *s, int count)
int64_t swr_get_delay(struct SwrContext *s, int64_t base)
int swr_get_out_samples(struct SwrContext *s, int in_samples)
int swr_set_compensation(struct SwrContext *s, int sample_delta, int compensation_distance)
int64_t swr_next_pts(struct SwrContext *s, int64_t pts)
