static void apply_unsharp(      uint8_t *dst, int dst_stride,
const uint8_t *src, int src_stride,
int width, int height, UnsharpFilterParam *fp)
static int apply_unsharp_c(AVFilterContext *ctx, AVFrame *in, AVFrame *out)
static void set_filter_param(UnsharpFilterParam *fp, int msize_x, int msize_y, float amount)
static av_cold int init(AVFilterContext *ctx)
static int query_formats(AVFilterContext *ctx)
static int init_filter_param(AVFilterContext *ctx, UnsharpFilterParam *fp, const char *effect_type, int width)
static int config_props(AVFilterLink *link)
static void free_filter_param(UnsharpFilterParam *fp)
static av_cold void uninit(AVFilterContext *ctx)
static int filter_frame(AVFilterLink *link, AVFrame *in)
#define OFFSET(x) offsetof(UnsharpContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
#define MIN_SIZE 3
#define MAX_SIZE 23
static const AVOption unsharp_options[] = ;
AVFILTER_DEFINE_CLASS(unsharp);
static const AVFilterPad avfilter_vf_unsharp_inputs[] = ;
static const AVFilterPad avfilter_vf_unsharp_outputs[] = ;
AVFilter ff_vf_unsharp = ;
