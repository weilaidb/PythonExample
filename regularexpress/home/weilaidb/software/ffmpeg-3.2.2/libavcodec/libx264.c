#if defined(_MSC_VER)
#define X264_API_IMPORTS 1
typedef struct X264Context  X264Context;
static void X264_log(void *p, int level, const char *fmt, va_list args)
static int encode_nals(AVCodecContext *ctx, AVPacket *pkt,
const x264_nal_t *nals, int nnal)
static int avfmt2_num_planes(int avfmt)
static void reconfig_encoder(AVCodecContext *ctx, const AVFrame *frame)
static int X264_frame(AVCodecContext *ctx, AVPacket *pkt, const AVFrame *frame,
int *got_packet)
static av_cold int X264_close(AVCodecContext *avctx)
#define OPT_STR(opt, param)                                                   \
do  while (0)
static int convert_pix_fmt(enum AVPixelFormat pix_fmt)
#define PARSE_X264_OPT(name, var)\
if (x4->var && x264_param_parse(&x4->params, name, x4->var) < 0)
static av_cold int X264_init(AVCodecContext *avctx)
static const enum AVPixelFormat pix_fmts_8bit[] = ;
static const enum AVPixelFormat pix_fmts_9bit[] = ;
static const enum AVPixelFormat pix_fmts_10bit[] = ;
#if CONFIG_LIBX264RGB_ENCODER
static const enum AVPixelFormat pix_fmts_8bit_rgb[] = ;
static av_cold void X264_init_static(AVCodec *codec)
#define OFFSET(x) offsetof(X264Context, x)
#define VE AV_OPT_FLAG_VIDEO_PARAM | AV_OPT_FLAG_ENCODING_PARAM
static const AVOption options[] = ;
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
