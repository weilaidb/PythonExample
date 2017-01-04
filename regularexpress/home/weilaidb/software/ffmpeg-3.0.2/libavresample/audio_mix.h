#define AVRESAMPLE_AUDIO_MIX_H
typedef void (mix_func)(uint8_t **src, void **matrix, int len, int out_ch,
int in_ch);
void ff_audio_mix_set_func(AudioMix *am, enum AVSampleFormat fmt,
enum AVMixCoeffType coeff_type, int in_channels,
int out_channels, int ptr_align, int samples_align,
const char *descr, void *mix_func);
AudioMix *ff_audio_mix_alloc(AVAudioResampleContext *avr);
void ff_audio_mix_free(AudioMix **am);
int ff_audio_mix(AudioMix *am, AudioData *src);
int ff_audio_mix_get_matrix(AudioMix *am, double *matrix, int stride);
int ff_audio_mix_set_matrix(AudioMix *am, const double *matrix, int stride);
void ff_audio_mix_init_x86(AudioMix *am);
