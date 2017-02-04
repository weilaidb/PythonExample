enum mode ;
typedef struct  PermsContext;
OFFSET offsetof(PermsContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM | AV_OPT_FLAG_AUDIO_PARAM | AV_OPT_FLAG_VIDEO_PARAM
static const AVOption options[] = ;
init
enum perm                        ;
static const char * const perm_str[2] = ;
filter_frame
#if CONFIG_APERMS_FILTER
AVFILTER_DEFINE_CLASS;
static const AVFilterPad aperms_inputs[] = ;
static const AVFilterPad aperms_outputs[] = ;
AVFilter ff_af_aperms = ;
#if CONFIG_PERMS_FILTER
AVFILTER_DEFINE_CLASS;
static const AVFilterPad perms_inputs[] = ;
static const AVFilterPad perms_outputs[] = ;
AVFilter ff_vf_perms = ;
