typedef struct BlackFrameContext  BlackFrameContext;
static int query_formats(AVFilterContext *ctx)
#define SET_META(key, format, value) \
snprintf(buf, sizeof(buf), format, value);  \
av_dict_set(metadata, key, buf, 0)
static int filter_frame(AVFilterLink *inlink, AVFrame *frame)
#define OFFSET(x) offsetof(BlackFrameContext, x)
#define FLAGS AV_OPT_FLAG_VIDEO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
static const AVOption blackframe_options[] = ;
AVFILTER_DEFINE_CLASS(blackframe);
static const AVFilterPad avfilter_vf_blackframe_inputs[] = ;
static const AVFilterPad avfilter_vf_blackframe_outputs[] = ;
AVFilter ff_vf_blackframe = ;
