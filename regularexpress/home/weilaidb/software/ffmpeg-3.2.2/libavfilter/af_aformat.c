typedef struct AFormatContext  AFormatContext;
#define OFFSET(x) offsetof(AFormatContext, x)
#define A AV_OPT_FLAG_AUDIO_PARAM
#define F AV_OPT_FLAG_FILTERING_PARAM
static const AVOption aformat_options[] = ;
AVFILTER_DEFINE_CLASS(aformat);
#define PARSE_FORMATS(str, type, list, add_to_list, unref_fn, get_fmt, none, desc)    \
do  while (0)
static int get_sample_rate(const char *samplerate)
static av_cold int init(AVFilterContext *ctx)
static int query_formats(AVFilterContext *ctx)
static const AVFilterPad avfilter_af_aformat_inputs[] = ;
static const AVFilterPad avfilter_af_aformat_outputs[] = ;
AVFilter ff_af_aformat = ;
