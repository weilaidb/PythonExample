typedef struct  ANullContext;
#define OFFSET(x) offsetof(ANullContext, x)
#define FLAGS AV_OPT_FLAG_AUDIO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
static const AVOption anullsrc_options[]= ;
AVFILTER_DEFINE_CLASS(anullsrc);
static av_cold int init(AVFilterContext *ctx)
static int query_formats(AVFilterContext *ctx)
static int config_props(AVFilterLink *outlink)
static int request_frame(AVFilterLink *outlink)
static const AVFilterPad avfilter_asrc_anullsrc_outputs[] = ;
AVFilter ff_asrc_anullsrc = ;
