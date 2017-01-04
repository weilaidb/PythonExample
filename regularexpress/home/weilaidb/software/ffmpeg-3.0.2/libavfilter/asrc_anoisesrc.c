typedef struct  ANoiseSrcContext;
#define OFFSET(x) offsetof(ANoiseSrcContext, x)
#define FLAGS AV_OPT_FLAG_AUDIO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
static const AVOption anoisesrc_options[] = ;
AVFILTER_DEFINE_CLASS(anoisesrc);
static av_cold int query_formats(AVFilterContext *ctx)
static double white_filter(double white, double *buf)
;
static double pink_filter(double white, double *buf)
static double brown_filter(double white, double *buf)
static av_cold int config_props(AVFilterLink *outlink)
static int request_frame(AVFilterLink *outlink)
static const AVFilterPad anoisesrc_outputs[] = ;
AVFilter ff_asrc_anoisesrc = ;
