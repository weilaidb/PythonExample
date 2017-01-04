enum SilenceMode ;
typedef struct SilenceRemoveContext  SilenceRemoveContext;
#define OFFSET(x) offsetof(SilenceRemoveContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_AUDIO_PARAM
static const AVOption silenceremove_options[] = ;
AVFILTER_DEFINE_CLASS(silenceremove);
static double compute_peak(SilenceRemoveContext *s, double sample)
static void update_peak(SilenceRemoveContext *s, double sample)
static double compute_rms(SilenceRemoveContext *s, double sample)
static void update_rms(SilenceRemoveContext *s, double sample)
static av_cold int init(AVFilterContext *ctx)
static void clear_window(SilenceRemoveContext *s)
static int config_input(AVFilterLink *inlink)
static void flush(AVFrame *out, AVFilterLink *outlink,
int *nb_samples_written, int *ret)
static int filter_frame(AVFilterLink *inlink, AVFrame *in)
static int request_frame(AVFilterLink *outlink)
static int query_formats(AVFilterContext *ctx)
static av_cold void uninit(AVFilterContext *ctx)
static const AVFilterPad silenceremove_inputs[] = ;
static const AVFilterPad silenceremove_outputs[] = ;
AVFilter ff_af_silenceremove = ;
