#define AVRESAMPLE_AUDIO_CONVERT_H
void ff_audio_convert_set_func(AudioConvert *ac, enum AVSampleFormat out_fmt,
enum AVSampleFormat in_fmt, int channels,
int ptr_align, int samples_align,
const char *descr, void *conv);
AudioConvert *ff_audio_convert_alloc(AVAudioResampleContext *avr,
enum AVSampleFormat out_fmt,
enum AVSampleFormat in_fmt,
int channels, int sample_rate,
int apply_map);
void ff_audio_convert_free(AudioConvert **ac);
int ff_audio_convert(AudioConvert *ac, AudioData *out, AudioData *in);
void ff_audio_convert_init_aarch64(AudioConvert *ac);
void ff_audio_convert_init_arm(AudioConvert *ac);
void ff_audio_convert_init_x86(AudioConvert *ac);
