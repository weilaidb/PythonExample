enum FilterType ;
typedef struct WaveformContext  WaveformContext;
#define OFFSET(x) offsetof(WaveformContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
static const AVOption waveform_options[] = ;
AVFILTER_DEFINE_CLASS(waveform);
static const enum AVPixelFormat lowpass_pix_fmts[] = ;
static const enum AVPixelFormat flat_pix_fmts[] = ;
static const enum AVPixelFormat color_pix_fmts[] = ;
static int query_formats(AVFilterContext *ctx)
static void envelope_instant16(WaveformContext *s, AVFrame *out, int plane, int component)
static void envelope_instant(WaveformContext *s, AVFrame *out, int plane, int component)
static void envelope_peak16(WaveformContext *s, AVFrame *out, int plane, int component)
static void envelope_peak(WaveformContext *s, AVFrame *out, int plane, int component)
static void envelope16(WaveformContext *s, AVFrame *out, int plane, int component)
static void envelope(WaveformContext *s, AVFrame *out, int plane, int component)
static void update16(uint16_t *target, int max, int intensity, int limit)
static void update(uint8_t *target, int max, int intensity)
static void lowpass16(WaveformContext *s, AVFrame *in, AVFrame *out,
int component, int intensity, int offset, int column)
static void lowpass(WaveformContext *s, AVFrame *in, AVFrame *out,
int component, int intensity, int offset, int column)
static void flat(WaveformContext *s, AVFrame *in, AVFrame *out,
int component, int intensity, int offset, int column)
static void aflat(WaveformContext *s, AVFrame *in, AVFrame *out,
int component, int intensity, int offset, int column)
static void chroma(WaveformContext *s, AVFrame *in, AVFrame *out,
int component, int intensity, int offset, int column)
static void achroma(WaveformContext *s, AVFrame *in, AVFrame *out,
int component, int intensity, int offset, int column)
static void color16(WaveformContext *s, AVFrame *in, AVFrame *out,
int component, int intensity, int offset, int column)
static void color(WaveformContext *s, AVFrame *in, AVFrame *out,
int component, int intensity, int offset, int column)
static const uint8_t black_yuva_color[4] = ;
static const uint8_t black_gbrp_color[4] = ;
static int config_input(AVFilterLink *inlink)
static int config_output(AVFilterLink *outlink)
static int filter_frame(AVFilterLink *inlink, AVFrame *in)
static av_cold void uninit(AVFilterContext *ctx)
static const AVFilterPad inputs[] = ;
static const AVFilterPad outputs[] = ;
AVFilter ff_vf_waveform = ;
