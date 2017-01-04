enum EdgeMode ;
typedef struct DisplaceContext  DisplaceContext;
#define OFFSET(x) offsetof(DisplaceContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
static const AVOption displace_options[] = ;
AVFILTER_DEFINE_CLASS(displace);
static int query_formats(AVFilterContext *ctx)
static void displace_planar(DisplaceContext *s, const AVFrame *in,
const AVFrame *xpic, const AVFrame *ypic,
AVFrame *out)
static void displace_packed(DisplaceContext *s, const AVFrame *in,
const AVFrame *xpic, const AVFrame *ypic,
AVFrame *out)
static int process_frame(FFFrameSync *fs)
static int config_input(AVFilterLink *inlink)
static int config_output(AVFilterLink *outlink)
static int filter_frame(AVFilterLink *inlink, AVFrame *buf)
static int request_frame(AVFilterLink *outlink)
static av_cold void uninit(AVFilterContext *ctx)
static const AVFilterPad displace_inputs[] = ;
static const AVFilterPad displace_outputs[] = ;
AVFilter ff_vf_displace = ;
