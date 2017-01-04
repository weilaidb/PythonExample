enum VectorscopeMode ;
typedef struct VectorscopeContext  VectorscopeContext;
#define OFFSET(x) offsetof(VectorscopeContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
static const AVOption vectorscope_options[] = ;
AVFILTER_DEFINE_CLASS(vectorscope);
static const enum AVPixelFormat out_yuv8_pix_fmts[] = ;
static const enum AVPixelFormat out_yuv9_pix_fmts[] = ;
static const enum AVPixelFormat out_yuv10_pix_fmts[] = ;
static const enum AVPixelFormat out_yuv12_pix_fmts[] = ;
static const enum AVPixelFormat out_rgb8_pix_fmts[] = ;
static const enum AVPixelFormat out_rgb9_pix_fmts[] = ;
static const enum AVPixelFormat out_rgb10_pix_fmts[] = ;
static const enum AVPixelFormat out_rgb12_pix_fmts[] = ;
static const enum AVPixelFormat in1_pix_fmts[] = ;
static const enum AVPixelFormat in2_pix_fmts[] = ;
static int query_formats(AVFilterContext *ctx)
static int config_output(AVFilterLink *outlink)
static void envelope_instant16(VectorscopeContext *s, AVFrame *out)
static void envelope_peak16(VectorscopeContext *s, AVFrame *out)
static void envelope_instant(VectorscopeContext *s, AVFrame *out)
static void envelope_peak(VectorscopeContext *s, AVFrame *out)
static void envelope16(VectorscopeContext *s, AVFrame *out)
static void envelope(VectorscopeContext *s, AVFrame *out)
static void vectorscope16(VectorscopeContext *s, AVFrame *in, AVFrame *out, int pd)
static void vectorscope8(VectorscopeContext *s, AVFrame *in, AVFrame *out, int pd)
const static char *positions_name[] = ;
const static uint16_t positions[][14][3] = ;
static void draw_dots(uint8_t *dst, int L, int v, float o)
static void draw_dots16(uint16_t *dst, int L, int v, float o)
static void none_graticule(VectorscopeContext *s, AVFrame *out, int X, int Y, int D, int P)
static void draw_htext(AVFrame *out, int x, int y, float o1, float o2, const char *txt, const uint8_t color[4])
static void draw_htext16(AVFrame *out, int x, int y, float o1, float o2, const char *txt, const uint16_t color[4])
static void color_graticule16(VectorscopeContext *s, AVFrame *out, int X, int Y, int D, int P)
static void color_graticule(VectorscopeContext *s, AVFrame *out, int X, int Y, int D, int P)
static void green_graticule16(VectorscopeContext *s, AVFrame *out, int X, int Y, int D, int P)
static void green_graticule(VectorscopeContext *s, AVFrame *out, int X, int Y, int D, int P)
static int filter_frame(AVFilterLink *inlink, AVFrame *in)
static int config_input(AVFilterLink *inlink)
static av_cold void uninit(AVFilterContext *ctx)
static const AVFilterPad inputs[] = ;
static const AVFilterPad outputs[] = ;
AVFilter ff_vf_vectorscope = ;
