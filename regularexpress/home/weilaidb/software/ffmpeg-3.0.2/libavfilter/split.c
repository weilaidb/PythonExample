typedef struct SplitContext  SplitContext;
static av_cold int split_init(AVFilterContext *ctx)
static av_cold void split_uninit(AVFilterContext *ctx)
static int filter_frame(AVFilterLink *inlink, AVFrame *frame)
#define OFFSET(x) offsetof(SplitContext, x)
#define FLAGS AV_OPT_FLAG_AUDIO_PARAM | AV_OPT_FLAG_VIDEO_PARAM
static const AVOption options[] = ;
#define split_options options
AVFILTER_DEFINE_CLASS(split);
#define asplit_options options
AVFILTER_DEFINE_CLASS(asplit);
static const AVFilterPad avfilter_vf_split_inputs[] = ;
AVFilter ff_vf_split = ;
static const AVFilterPad avfilter_af_asplit_inputs[] = ;
AVFilter ff_af_asplit = ;
