typedef struct ShuffleFramesContext  ShuffleFramesContext;
static av_cold int init(AVFilterContext *ctx)
static int filter_frame(AVFilterLink *inlink, AVFrame *frame)
static av_cold void uninit(AVFilterContext *ctx)
#define OFFSET(x) offsetof(ShuffleFramesContext, x)
#define FLAGS (AV_OPT_FLAG_FILTERING_PARAM | AV_OPT_FLAG_VIDEO_PARAM)
static const AVOption shuffleframes_options[] = ;
AVFILTER_DEFINE_CLASS(shuffleframes);
static const AVFilterPad shuffleframes_inputs[] = ;
static const AVFilterPad shuffleframes_outputs[] = ;
AVFilter ff_vf_shuffleframes = ;
