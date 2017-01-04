#define MAX_FRAMES 512
typedef struct RandomContext  RandomContext;
#define OFFSET(x) offsetof(RandomContext, x)
#define FLAGS AV_OPT_FLAG_VIDEO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
static const AVOption random_options[] = ;
AVFILTER_DEFINE_CLASS(random);
static av_cold int init(AVFilterContext *ctx)
static int filter_frame(AVFilterLink *inlink, AVFrame *in)
static int request_frame(AVFilterLink *outlink)
static const AVFilterPad random_inputs[] = ;
static const AVFilterPad random_outputs[] = ;
AVFilter ff_vf_random = ;
