static const char *const var_names[] = ;
enum var_name ;
typedef struct LutContext  LutContext;
#define Y 0
#define U 1
#define V 2
#define R 0
#define G 1
#define B 2
#define A 3
#define OFFSET(x) offsetof(LutContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
static const AVOption options[] = ;
static av_cold void uninit(AVFilterContext *ctx)
#define YUV_FORMATS                                         \
AV_PIX_FMT_YUV444P,  AV_PIX_FMT_YUV422P,  AV_PIX_FMT_YUV420P,    \
AV_PIX_FMT_YUV411P,  AV_PIX_FMT_YUV410P,  AV_PIX_FMT_YUV440P,    \
AV_PIX_FMT_YUVA420P, AV_PIX_FMT_YUVA422P, AV_PIX_FMT_YUVA444P,   \
AV_PIX_FMT_YUVJ444P, AV_PIX_FMT_YUVJ422P, AV_PIX_FMT_YUVJ420P,   \
AV_PIX_FMT_YUVJ440P,                                             \
AV_PIX_FMT_YUV444P9LE, AV_PIX_FMT_YUV422P9LE, AV_PIX_FMT_YUV420P9LE, \
AV_PIX_FMT_YUV444P10LE, AV_PIX_FMT_YUV422P10LE, AV_PIX_FMT_YUV420P10LE, AV_PIX_FMT_YUV440P10LE, \
AV_PIX_FMT_YUV444P12LE, AV_PIX_FMT_YUV422P12LE, AV_PIX_FMT_YUV420P12LE, AV_PIX_FMT_YUV440P12LE, \
AV_PIX_FMT_YUV444P14LE, AV_PIX_FMT_YUV422P14LE, AV_PIX_FMT_YUV420P14LE, \
AV_PIX_FMT_YUV444P16LE, AV_PIX_FMT_YUV422P16LE, AV_PIX_FMT_YUV420P16LE, \
AV_PIX_FMT_YUVA444P16LE, AV_PIX_FMT_YUVA422P16LE, AV_PIX_FMT_YUVA420P16LE
#define RGB_FORMATS                             \
AV_PIX_FMT_ARGB,         AV_PIX_FMT_RGBA,         \
AV_PIX_FMT_ABGR,         AV_PIX_FMT_BGRA,         \
AV_PIX_FMT_RGB24,        AV_PIX_FMT_BGR24,        \
AV_PIX_FMT_RGB48LE,      AV_PIX_FMT_RGBA64LE,     \
AV_PIX_FMT_GBRP,         AV_PIX_FMT_GBRAP,        \
AV_PIX_FMT_GBRP9LE,      AV_PIX_FMT_GBRP10LE,     \
AV_PIX_FMT_GBRP12LE,     AV_PIX_FMT_GBRP14LE,     \
AV_PIX_FMT_GBRP16LE,     AV_PIX_FMT_GBRAP12LE,    \
AV_PIX_FMT_GBRAP16LE
static const enum AVPixelFormat yuv_pix_fmts[] = ;
static const enum AVPixelFormat rgb_pix_fmts[] = ;
static const enum AVPixelFormat all_pix_fmts[] = ;
static int query_formats(AVFilterContext *ctx)
static double clip(void *opaque, double val)
static double compute_gammaval(void *opaque, double gamma)
static double compute_gammaval709(void *opaque, double gamma)
static double (* const funcs1[])(void *, double) = ;
static const char * const funcs1_names[] = ;
static int config_props(AVFilterLink *inlink)
static int filter_frame(AVFilterLink *inlink, AVFrame *in)
static const AVFilterPad inputs[] = ;
static const AVFilterPad outputs[] = ;
#define DEFINE_LUT_FILTER(name_, description_)                          \
AVFilter ff_vf_##name_ =
#if CONFIG_LUT_FILTER
#define lut_options options
AVFILTER_DEFINE_CLASS(lut);
static int lut_init(AVFilterContext *ctx)
DEFINE_LUT_FILTER(lut, "Compute and apply a lookup table to the RGB/YUV input video.");
#if CONFIG_LUTYUV_FILTER
#define lutyuv_options options
AVFILTER_DEFINE_CLASS(lutyuv);
static av_cold int lutyuv_init(AVFilterContext *ctx)
DEFINE_LUT_FILTER(lutyuv, "Compute and apply a lookup table to the YUV input video.");
#if CONFIG_LUTRGB_FILTER
#define lutrgb_options options
AVFILTER_DEFINE_CLASS(lutrgb);
static av_cold int lutrgb_init(AVFilterContext *ctx)
DEFINE_LUT_FILTER(lutrgb, "Compute and apply a lookup table to the RGB input video.");
#if CONFIG_NEGATE_FILTER
static const AVOption negate_options[] = ;
AVFILTER_DEFINE_CLASS(negate);
static av_cold int negate_init(AVFilterContext *ctx)
DEFINE_LUT_FILTER(negate, "Negate input video.");
