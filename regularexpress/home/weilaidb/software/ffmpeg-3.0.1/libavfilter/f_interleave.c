typedef struct  InterleaveContext;
#define OFFSET(x) offsetof(InterleaveContext, x)
#define DEFINE_OPTIONS(filt_name, flags_)                           \
static const AVOption filt_name##_options[] =
inline static int push_frame(AVFilterContext *ctx)
static int filter_frame(AVFilterLink *inlink, AVFrame *frame)
static av_cold int init(AVFilterContext *ctx)
static av_cold void uninit(AVFilterContext *ctx)
static int config_output(AVFilterLink *outlink)
static int request_frame(AVFilterLink *outlink)
#if CONFIG_INTERLEAVE_FILTER
DEFINE_OPTIONS(interleave, AV_OPT_FLAG_VIDEO_PARAM|AV_OPT_FLAG_FILTERING_PARAM);
AVFILTER_DEFINE_CLASS(interleave);
static const AVFilterPad interleave_outputs[] = ;
AVFilter ff_vf_interleave = ;
#if CONFIG_AINTERLEAVE_FILTER
DEFINE_OPTIONS(ainterleave, AV_OPT_FLAG_AUDIO_PARAM|AV_OPT_FLAG_FILTERING_PARAM);
AVFILTER_DEFINE_CLASS(ainterleave);
static const AVFilterPad ainterleave_outputs[] = ;
AVFilter ff_af_ainterleave = ;
