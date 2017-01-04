typedef struct DrawGraphContext  DrawGraphContext;
#define OFFSET(x) offsetof(DrawGraphContext, x)
#define FLAGS AV_OPT_FLAG_VIDEO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
static const AVOption drawgraph_options[] = ;
static const char *const var_names[] = ;
enum                                   ;
static av_cold int init(AVFilterContext *ctx)
static int query_formats(AVFilterContext *ctx)
static void clear_image(DrawGraphContext *s, AVFrame *out, AVFilterLink *outlink)
static inline void draw_dot(int fg, int x, int y, AVFrame *out)
static int filter_frame(AVFilterLink *inlink, AVFrame *in)
static int config_output(AVFilterLink *outlink)
static av_cold void uninit(AVFilterContext *ctx)
#if CONFIG_DRAWGRAPH_FILTER
AVFILTER_DEFINE_CLASS(drawgraph);
static const AVFilterPad drawgraph_inputs[] = ;
static const AVFilterPad drawgraph_outputs[] = ;
AVFilter ff_vf_drawgraph = ;
#if CONFIG_ADRAWGRAPH_FILTER
#define adrawgraph_options drawgraph_options
AVFILTER_DEFINE_CLASS(adrawgraph);
static const AVFilterPad adrawgraph_inputs[] = ;
static const AVFilterPad adrawgraph_outputs[] = ;
AVFilter ff_avf_adrawgraph = ;
