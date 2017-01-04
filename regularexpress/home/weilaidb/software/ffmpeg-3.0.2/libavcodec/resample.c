#if FF_API_AVCODEC_RESAMPLE
FF_DISABLE_DEPRECATION_WARNINGS
#define MAX_CHANNELS 8
struct AVResampleContext;
static const char *context_to_name(void *ptr)
static const AVOption options[] = ;
static const AVClass audioresample_context_class = ;
struct ReSampleContext ;
static void stereo_to_mono(short *output, short *input, int n1)
static void mono_to_stereo(short *output, short *input, int n1)
static void surround_to_stereo(short **output, short *input, int channels, int samples)
static void deinterleave(short **output, short *input, int channels, int samples)
static void interleave(short *output, short **input, int channels, int samples)
static void ac3_5p1_mux(short *output, short *input1, short *input2, int n)
#define SUPPORT_RESAMPLE(ch1, ch2, ch3, ch4, ch5, ch6, ch7, ch8) \
ch8<<7 | ch7<<6 | ch6<<5 | ch5<<4 | ch4<<3 | ch3<<2 | ch2<<1 | ch1<<0
static const uint8_t supported_resampling[MAX_CHANNELS] = ;
ReSampleContext *av_audio_resample_init(int output_channels, int input_channels,
int output_rate, int input_rate,
enum AVSampleFormat sample_fmt_out,
enum AVSampleFormat sample_fmt_in,
int filter_length, int log2_phase_count,
int linear, double cutoff)
int audio_resample(ReSampleContext *s, short *output, short *input, int nb_samples)
void audio_resample_close(ReSampleContext *s)
FF_ENABLE_DEPRECATION_WARNINGS
