#define HISTOGRAM_SLOTS 12000
#define BUTTER_ORDER        2
#define YULE_ORDER         10
typedef struct ReplayGainFreqInfo  ReplayGainFreqInfo;
static const ReplayGainFreqInfo freqinfos[] =
;
typedef struct ReplayGainContext  ReplayGainContext;
static int query_formats(AVFilterContext *ctx)
static int config_input(AVFilterLink *inlink)
static void calc_stereo_peak(const float *samples, int nb_samples,
float *peak_p)
static double calc_stereo_rms(const float *samples, int nb_samples)
static void butter_filter_stereo_samples(ReplayGainContext *s,
float *samples, int nb_samples)
static void yule_filter_stereo_samples(ReplayGainContext *s, const float *src,
float *dst, int nb_samples)
static float calc_replaygain(uint32_t *histogram)
static int filter_frame(AVFilterLink *inlink, AVFrame *in)
static av_cold void uninit(AVFilterContext *ctx)
static const AVFilterPad replaygain_inputs[] = ;
static const AVFilterPad replaygain_outputs[] = ;
AVFilter ff_af_replaygain = ;
