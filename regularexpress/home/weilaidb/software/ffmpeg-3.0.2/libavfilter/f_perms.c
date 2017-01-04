enum mode ;
typedef struct  PermsContext;
#define OFFSET(x) offsetof(PermsContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM | AV_OPT_FLAG_AUDIO_PARAM | AV_OPT_FLAG_VIDEO_PARAM
static const AVOption options[] = ;
static av_cold int init(AVFilterContext *ctx)
enum perm                        ;
static const char * const perm_str[2] = ;
static int filter_frame(AVFilterLink *inlink, AVFrame *frame)
#if CONFIG_APERMS_FILTER
#define aperms_options options
AVFILTER_DEFINE_CLASS(aperms);
static const AVFilterPad aperms_inputs[] = ;
static const AVFilterPad aperms_outputs[] = ;
AVFilter ff_af_aperms = ;
#if CONFIG_PERMS_FILTER
#define perms_options options
AVFILTER_DEFINE_CLASS(perms);
static const AVFilterPad perms_inputs[] = ;
static const AVFilterPad perms_outputs[] = ;
AVFilter ff_vf_perms = ;
