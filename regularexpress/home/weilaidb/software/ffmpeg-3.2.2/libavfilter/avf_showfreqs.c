enum DisplayMode    ;
enum ChannelMode    ;
enum FrequencyScale ;
enum AmplitudeScale ;
typedef struct ShowFreqsContext  ShowFreqsContext;
OFFSET offsetof(ShowFreqsContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
static const AVOption showfreqs_options[] = ,
, 0, 0, FLAGS },
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
, 0, 0, FLAGS },
,
,
,
,
};
AVFILTER_DEFINE_CLASS(showfreqs);
query_formats
init
config_output
draw_dot
get_sx
get_bsize
plot_freq
plot_freqs
filter_frame
uninit
static const AVFilterPad showfreqs_inputs[] = ;
static const AVFilterPad showfreqs_outputs[] = ;
AVFilter ff_avf_showfreqs = ;
