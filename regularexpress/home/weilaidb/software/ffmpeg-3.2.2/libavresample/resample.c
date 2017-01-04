#define CONFIG_RESAMPLE_DBL
#undef CONFIG_RESAMPLE_DBL
#define CONFIG_RESAMPLE_FLT
#undef CONFIG_RESAMPLE_FLT
#define CONFIG_RESAMPLE_S32
#undef CONFIG_RESAMPLE_S32
static double bessel(double x)
static int build_filter(ResampleContext *c, double factor)
ResampleContext *ff_audio_resample_init(AVAudioResampleContext *avr)
void ff_audio_resample_free(ResampleContext **c)
int avresample_set_compensation(AVAudioResampleContext *avr, int sample_delta,
int compensation_distance)
static int resample(ResampleContext *c, void *dst, const void *src,
int *consumed, int src_size, int dst_size, int update_ctx,
int nearest_neighbour)
int ff_audio_resample(ResampleContext *c, AudioData *dst, AudioData *src)
int avresample_get_delay(AVAudioResampleContext *avr)
