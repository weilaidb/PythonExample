typedef struct StackContext  StackContext;
static int query_formats(AVFilterContext *ctx)
static int filter_frame(AVFilterLink *inlink, AVFrame *in)
static av_cold int init(AVFilterContext *ctx)
static int process_frame(FFFrameSync *fs)
static int config_output(AVFilterLink *outlink)
static int request_frame(AVFilterLink *outlink)
static av_cold void uninit(AVFilterContext *ctx)
#define OFFSET(x) offsetof(StackContext, x)
#define FLAGS AV_OPT_FLAG_VIDEO_PARAM | AV_OPT_FLAG_FILTERING_PARAM
static const AVOption stack_options[] = ;
static const AVFilterPad outputs[] = ;
#if CONFIG_HSTACK_FILTER
#define hstack_options stack_options
AVFILTER_DEFINE_CLASS(hstack);
AVFilter ff_vf_hstack = ;
#if CONFIG_VSTACK_FILTER
#define vstack_options stack_options
AVFILTER_DEFINE_CLASS(vstack);
AVFilter ff_vf_vstack = ;
