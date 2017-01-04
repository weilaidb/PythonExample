#define AVRESAMPLE_RESAMPLE_H
struct ResampleContext ;
ResampleContext *ff_audio_resample_init(AVAudioResampleContext *avr);
void ff_audio_resample_free(ResampleContext **c);
int ff_audio_resample(ResampleContext *c, AudioData *dst, AudioData *src);
