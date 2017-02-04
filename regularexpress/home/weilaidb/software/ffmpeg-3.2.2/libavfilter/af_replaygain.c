#define HISTOGRAM_SLOTS 12000
#define BUTTER_ORDER        2
#define YULE_ORDER         10
typedef struct ReplayGainFreqInfo  ReplayGainFreqInfo;
static const ReplayGainFreqInfo freqinfos[] =
;
typedef struct ReplayGainContext  ReplayGainContext;
query_formats
config_input
calc_stereo_peak
calc_stereo_rms
butter_filter_stereo_samples
yule_filter_stereo_samples
calc_replaygain
filter_frame
uninit
static const AVFilterPad replaygain_inputs[] = ;
static const AVFilterPad replaygain_outputs[] = ;
AVFilter ff_af_replaygain = ;
