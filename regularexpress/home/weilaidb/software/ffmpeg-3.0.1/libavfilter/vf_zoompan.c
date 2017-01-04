static const char *const var_names[] = ;
enum var_name ;
typedef struct ZPcontext  ZPContext;
#define OFFSET(x) offsetof(ZPContext, x)
#define FLAGS AV_OPT_FLAG_VIDEO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
static const AVOption zoompan_options[] = ;
AVFILTER_DEFINE_CLASS(zoompan);
static av_cold int init(AVFilterContext *ctx)
static int config_output(AVFilterLink *outlink)
static int output_single_frame(AVFilterContext *ctx, AVFrame *in, double *var_values, int i,
double *zoom, double *dx, double *dy)
static int filter_frame(AVFilterLink *inlink, AVFrame *in)
static int request_frame(AVFilterLink *outlink)
static int poll_frame(AVFilterLink *link)
static int query_formats(AVFilterContext *ctx)
static av_cold void uninit(AVFilterContext *ctx)
static const AVFilterPad inputs[] = ;
static const AVFilterPad outputs[] = ;
AVFilter ff_vf_zoompan = ;
