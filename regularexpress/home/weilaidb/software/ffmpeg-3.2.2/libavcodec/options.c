FF_DISABLE_DEPRECATION_WARNINGS
FF_ENABLE_DEPRECATION_WARNINGS
context_to_name
*codec_child_next
*codec_child_class_next
get_category
static const AVClass av_codec_context_class = ;
init_context_defaults
#if FF_API_GET_CONTEXT_DEFAULTS
avcodec_get_context_defaults3
*avcodec_alloc_context3
avcodec_free_context
#if FF_API_COPY_CONTEXT
avcodec_copy_context
*avcodec_get_class
FOFFSET offsetof(AVFrame,x)
static const AVOption frame_options[]=;
static const AVClass av_frame_class = ;
*avcodec_get_frame_class
SROFFSET offsetof(AVSubtitleRect,x)
static const AVOption subtitle_rect_options[]=;
static const AVClass av_subtitle_rect_class = ;
*avcodec_get_subtitle_rect_class
dummy_init
dummy_close
dummy_encode
typedef struct Dummy12Context  Dummy12Context;
typedef struct Dummy3Context  Dummy3Context;
OFFSET offsetof(Dummy12Context, x)
#define VE AV_OPT_FLAG_VIDEO_PARAM | AV_OPT_FLAG_ENCODING_PARAM
static const AVOption dummy_options[] = ,
,
,
};
static const AVClass dummy_v1_class = ;
static const AVClass dummy_v2_class = ;
static AVCodec dummy_v1_encoder = ;
static AVCodec dummy_v2_encoder = ;
static AVCodec dummy_v3_encoder = ;
static AVCodec dummy_v4_encoder = ;
test_copy_print_codec
test_copy
main
