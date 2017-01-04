typedef struct FormatContext  FormatContext;
static av_cold void uninit(AVFilterContext *ctx)
static av_cold int init(AVFilterContext *ctx)
static int query_formats(AVFilterContext *ctx)
#define OFFSET(x) offsetof(FormatContext, x)
static const AVOption options[] = ;
#if CONFIG_FORMAT_FILTER
#define format_options options
AVFILTER_DEFINE_CLASS(format);
static const AVFilterPad avfilter_vf_format_inputs[] = ;
static const AVFilterPad avfilter_vf_format_outputs[] = ;
AVFilter ff_vf_format = ;
#if CONFIG_NOFORMAT_FILTER
#define noformat_options options
AVFILTER_DEFINE_CLASS(noformat);
static const AVFilterPad avfilter_vf_noformat_inputs[] = ;
static const AVFilterPad avfilter_vf_noformat_outputs[] = ;
AVFilter ff_vf_noformat = ;
