defined
#define X264_API_IMPORTS 1
typedef struct X264Context  X264Context;
X264_log
encode_nals
avfmt2_num_planes
reconfig_encoder
X264_frame
X264_close
OPT_STR                                                   \
do  while (0)
convert_pix_fmt
PARSE_X264_OPT\
x264_param_parse < 0)
X264_init
static const enum AVPixelFormat pix_fmts_8bit[] = ;
static const enum AVPixelFormat pix_fmts_9bit[] = ;
static const enum AVPixelFormat pix_fmts_10bit[] = ;
#if CONFIG_LIBX264RGB_ENCODER
static const enum AVPixelFormat pix_fmts_8bit_rgb[] = ;
X264_init_static
OFFSET offsetof(X264Context, x)
#define VE AV_OPT_FLAG_VIDEO_PARAM | AV_OPT_FLAG_ENCODING_PARAM
static const AVOption options[] = ,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
#if X264_BUILD >= 144
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
};
static const AVCodecDefault x264_defaults[] = ;
#if CONFIG_LIBX264_ENCODER
static const AVClass x264_class = ;
AVCodec ff_libx264_encoder = ;
#if CONFIG_LIBX264RGB_ENCODER
static const AVClass rgbclass = ;
AVCodec ff_libx264rgb_encoder = ;
#if CONFIG_LIBX262_ENCODER
static const AVClass X262_class = ;
AVCodec ff_libx262_encoder = ;
