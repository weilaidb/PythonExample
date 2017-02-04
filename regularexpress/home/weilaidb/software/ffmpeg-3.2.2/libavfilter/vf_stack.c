typedef struct StackContext  StackContext;
query_formats
filter_frame
init
process_frame
config_output
request_frame
uninit
OFFSET offsetof(StackContext, x)
#define FLAGS AV_OPT_FLAG_VIDEO_PARAM | AV_OPT_FLAG_FILTERING_PARAM
static const AVOption stack_options[] = ;
static const AVFilterPad outputs[] = ;
#if CONFIG_HSTACK_FILTER
AVFILTER_DEFINE_CLASS;
AVFilter ff_vf_hstack = ;
#if CONFIG_VSTACK_FILTER
AVFILTER_DEFINE_CLASS;
AVFilter ff_vf_vstack = ;
