#if FF_API_AVCODEC_RESAMPLE
FF_DISABLE_DEPRECATION_WARNINGS
#define MAX_CHANNELS 8
struct AVResampleContext;
*context_to_name
static const AVOption options[] = ;
static const AVClass audioresample_context_class = ;
struct ReSampleContext ;
stereo_to_mono
mono_to_stereo
surround_to_stereo
deinterleave
interleave
ac3_5p1_mux
SUPPORT_RESAMPLE \
ch8<<7 | ch7<<6 | ch6<<5 | ch5<<4 | ch4<<3 | ch3<<2 | ch2<<1 | ch1<<0
static const uint8_t supported_resampling[MAX_CHANNELS] = ;
*av_audio_resample_init
audio_resample
audio_resample_close
FF_ENABLE_DEPRECATION_WARNINGS
