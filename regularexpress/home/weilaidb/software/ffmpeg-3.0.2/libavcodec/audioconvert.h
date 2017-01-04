#define AVCODEC_AUDIOCONVERT_H
#if FF_API_AUDIO_CONVERT
struct AVAudioConvert;
typedef struct AVAudioConvert AVAudioConvert;
attribute_deprecated
AVAudioConvert *av_audio_convert_alloc(enum AVSampleFormat out_fmt, int out_channels,
enum AVSampleFormat in_fmt, int in_channels,
const float *matrix, int flags);
attribute_deprecated
void av_audio_convert_free(AVAudioConvert *ctx);
attribute_deprecated
int av_audio_convert(AVAudioConvert *ctx,
void * const out[6], const int out_stride[6],
const void * const  in[6], const int  in_stride[6], int len);
