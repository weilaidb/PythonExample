typedef struct InputParam  InputParam;
typedef struct MergePlanesContext  MergePlanesContext;
#define OFFSET(x) offsetof(MergePlanesContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
static const AVOption mergeplanes_options[] = ;
AVFILTER_DEFINE_CLASS(mergeplanes);
static int filter_frame(AVFilterLink *inlink, AVFrame *in)
static av_cold int init(AVFilterContext *ctx)
static int query_formats(AVFilterContext *ctx)
static int process_frame(FFFrameSync *fs)
static int config_output(AVFilterLink *outlink)
static int request_frame(AVFilterLink *outlink)
static av_cold void uninit(AVFilterContext *ctx)
static const AVFilterPad mergeplanes_outputs[] = ;
AVFilter ff_vf_mergeplanes = ;
