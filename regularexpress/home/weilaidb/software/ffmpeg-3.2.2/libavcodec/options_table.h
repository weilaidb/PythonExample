#define AVCODEC_OPTIONS_TABLE_H
OFFSET offsetof(AVCodecContext,x)
#define DEFAULT 0
#define V AV_OPT_FLAG_VIDEO_PARAM
#define A AV_OPT_FLAG_AUDIO_PARAM
#define S AV_OPT_FLAG_SUBTITLE_PARAM
#define E AV_OPT_FLAG_ENCODING_PARAM
#define D AV_OPT_FLAG_DECODING_PARAM
#define AV_CODEC_DEFAULT_BITRATE 200*1000
static const AVOption avcodec_options[] = ;
#undef A
#undef V
#undef S
#undef E
#undef D
#undef DEFAULT
#undef OFFSET
