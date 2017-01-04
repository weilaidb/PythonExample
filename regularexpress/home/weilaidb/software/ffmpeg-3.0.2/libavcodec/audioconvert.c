#if FF_API_AUDIO_CONVERT
struct AVAudioConvert ;
AVAudioConvert *av_audio_convert_alloc(enum AVSampleFormat out_fmt, int out_channels,
enum AVSampleFormat in_fmt, int in_channels,
const float *matrix, int flags)
void av_audio_convert_free(AVAudioConvert *ctx)
int av_audio_convert(AVAudioConvert *ctx,
void * const out[6], const int out_stride[6],
const void * const  in[6], const int  in_stride[6], int len)
