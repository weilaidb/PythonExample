static const char * const coeff_type_names[] = ;
struct AudioMix ;
void ff_audio_mix_set_func(AudioMix *am, enum AVSampleFormat fmt,
enum AVMixCoeffType coeff_type, int in_channels,
int out_channels, int ptr_align, int samples_align,
const char *descr, void *mix_func)
#define MIX_FUNC_NAME(fmt, cfmt) mix_any_ ## fmt ##_## cfmt ##_c
#define MIX_FUNC_GENERIC(fmt, cfmt, stype, ctype, sumtype, expr)            \
static void MIX_FUNC_NAME(fmt, cfmt)(stype **samples, ctype **matrix,       \
int len, int out_ch, int in_ch)        \
MIX_FUNC_GENERIC(FLTP, FLT, float,   float,   float,   sum)
MIX_FUNC_GENERIC(S16P, FLT, int16_t, float,   float,   av_clip_int16(lrintf(sum)))
MIX_FUNC_GENERIC(S16P, Q15, int16_t, int32_t, int64_t, av_clip_int16(sum >> 15))
MIX_FUNC_GENERIC(S16P, Q8,  int16_t, int16_t, int32_t, av_clip_int16(sum >>  8))
static void mix_2_to_1_fltp_flt_c(float **samples, float **matrix, int len,
int out_ch, int in_ch)
static void mix_2_to_1_s16p_flt_c(int16_t **samples, float **matrix, int len,
int out_ch, int in_ch)
static void mix_2_to_1_s16p_q8_c(int16_t **samples, int16_t **matrix, int len,
int out_ch, int in_ch)
static void mix_1_to_2_fltp_flt_c(float **samples, float **matrix, int len,
int out_ch, int in_ch)
static void mix_6_to_2_fltp_flt_c(float **samples, float **matrix, int len,
int out_ch, int in_ch)
static void mix_2_to_6_fltp_flt_c(float **samples, float **matrix, int len,
int out_ch, int in_ch)
static av_cold int mix_function_init(AudioMix *am)
AudioMix *ff_audio_mix_alloc(AVAudioResampleContext *avr)
void ff_audio_mix_free(AudioMix **am_p)
int ff_audio_mix(AudioMix *am, AudioData *src)
int ff_audio_mix_get_matrix(AudioMix *am, double *matrix, int stride)
static void reduce_matrix(AudioMix *am, const double *matrix, int stride)
int ff_audio_mix_set_matrix(AudioMix *am, const double *matrix, int stride)
