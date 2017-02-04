typedef struct NContext  NContext;
query_formats
uninit
line_copy8
erosion
dilation
deflate
inflate
config_input
filter_frame
static const AVFilterPad neighbor_inputs[] = ;
static const AVFilterPad neighbor_outputs[] = ;
OFFSET offsetof(NContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
DEFINE_NEIGHBOR_FILTER          \
AVFILTER_DEFINE_CLASS(name_);                                \
\
AVFilter ff_vf_##name_ =
#if CONFIG_EROSION_FILTER
static const AVOption erosion_options[] = ;
DEFINE_NEIGHBOR_FILTER(erosion, );
#if CONFIG_DILATION_FILTER
static const AVOption dilation_options[] = ;
DEFINE_NEIGHBOR_FILTER(dilation, );
#if CONFIG_DEFLATE_FILTER
static const AVOption deflate_options[] = ;
DEFINE_NEIGHBOR_FILTER(deflate, );
#if CONFIG_INFLATE_FILTER
static const AVOption inflate_options[] = ;
DEFINE_NEIGHBOR_FILTER(inflate, );
