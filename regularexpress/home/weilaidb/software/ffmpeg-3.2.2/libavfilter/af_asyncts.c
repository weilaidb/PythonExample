typedef struct ASyncContext  ASyncContext;
OFFSET offsetof(ASyncContext, x)
#define A AV_OPT_FLAG_AUDIO_PARAM
#define F AV_OPT_FLAG_FILTERING_PARAM
static const AVOption asyncts_options[] = ;
AVFILTER_DEFINE_CLASS(asyncts);
init
uninit
config_props
get_delay
handle_trimming
request_frame
write_to_fifo
filter_frame
static const AVFilterPad avfilter_af_asyncts_inputs[] = ;
static const AVFilterPad avfilter_af_asyncts_outputs[] = ;
AVFilter ff_af_asyncts = ;
