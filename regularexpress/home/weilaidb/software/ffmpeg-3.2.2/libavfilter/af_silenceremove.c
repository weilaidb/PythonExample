enum SilenceMode ;
typedef struct SilenceRemoveContext  SilenceRemoveContext;
OFFSET offsetof(SilenceRemoveContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_AUDIO_PARAM
static const AVOption silenceremove_options[] = ;
AVFILTER_DEFINE_CLASS(silenceremove);
compute_peak
update_peak
compute_rms
update_rms
init
clear_window
config_input
flush
filter_frame
request_frame
query_formats
uninit
static const AVFilterPad silenceremove_inputs[] = ;
static const AVFilterPad silenceremove_outputs[] = ;
AVFilter ff_af_silenceremove = ;
