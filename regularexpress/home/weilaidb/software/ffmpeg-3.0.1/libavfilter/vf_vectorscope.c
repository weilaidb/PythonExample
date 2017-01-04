enum VectorscopeMode ;
typedef struct VectorscopeContext  VectorscopeContext;
#define OFFSET(x) offsetof(VectorscopeContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
static const AVOption vectorscope_options[] = ;
AVFILTER_DEFINE_CLASS(vectorscope);
static const enum AVPixelFormat out_yuv8_pix_fmts[] = ;
static const enum AVPixelFormat out_yuv9_pix_fmts[] = ;
static const enum AVPixelFormat out_yuv10_pix_fmts[] = ;
static const enum AVPixelFormat out_rgb8_pix_fmts[] = ;
static const enum AVPixelFormat out_rgb9_pix_fmts[] = ;
static const enum AVPixelFormat out_rgb10_pix_fmts[] = ;
static const enum AVPixelFormat in1_pix_fmts[] = ;
static const enum AVPixelFormat in2_pix_fmts[] = ;
static int query_formats(AVFilterContext *ctx)
static const uint8_t black_yuva_color[4] = ;
static const uint8_t black_gbrp_color[4] = ;
static int config_output(AVFilterLink *outlink)
static void envelope_instant16(VectorscopeContext *s, AVFrame *out)
static void envelope_peak16(VectorscopeContext *s, AVFrame *out)
static void envelope_instant(VectorscopeContext *s, AVFrame *out)
static void envelope_peak(VectorscopeContext *s, AVFrame *out)
static void envelope16(VectorscopeContext *s, AVFrame *out)
static void envelope(VectorscopeContext *s, AVFrame *out)
static void vectorscope16(VectorscopeContext *s, AVFrame *in, AVFrame *out, int pd)
static void vectorscope8(VectorscopeContext *s, AVFrame *in, AVFrame *out, int pd)
static int filter_frame(AVFilterLink *inlink, AVFrame *in)
static int config_input(AVFilterLink *inlink)
static const AVFilterPad inputs[] = ;
static const AVFilterPad outputs[] = ;
AVFilter ff_vf_vectorscope = ;
