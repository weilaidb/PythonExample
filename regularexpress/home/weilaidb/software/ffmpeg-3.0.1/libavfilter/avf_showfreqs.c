enum DisplayMode    ;
enum ChannelMode    ;
enum FrequencyScale ;
enum AmplitudeScale ;
typedef struct ShowFreqsContext  ShowFreqsContext;
#define OFFSET(x) offsetof(ShowFreqsContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
static const AVOption showfreqs_options[] = ;
AVFILTER_DEFINE_CLASS(showfreqs);
static int query_formats(AVFilterContext *ctx)
static av_cold int init(AVFilterContext *ctx)
static int config_output(AVFilterLink *outlink)
static inline void draw_dot(AVFrame *out, int x, int y, uint8_t fg[4])
static int get_sx(ShowFreqsContext *s, int f)
static float get_bsize(ShowFreqsContext *s, int f)
static inline void plot_freq(ShowFreqsContext *s, int ch,
double a, int f, uint8_t fg[4], int *prev_y,
AVFrame *out, AVFilterLink *outlink)
static int plot_freqs(AVFilterLink *inlink, AVFrame *in)
static int filter_frame(AVFilterLink *inlink, AVFrame *in)
static av_cold void uninit(AVFilterContext *ctx)
static const AVFilterPad showfreqs_inputs[] = ;
static const AVFilterPad showfreqs_outputs[] = ;
AVFilter ff_avf_showfreqs = ;
