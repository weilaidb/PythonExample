enum DisplayMode  ;
enum DataMode     ;
enum DisplayScale ;
enum ColorMode    ;
enum SlideMode    ;
enum Orientation  ;
typedef struct  ShowSpectrumContext;
#define OFFSET(x) offsetof(ShowSpectrumContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
static const AVOption showspectrum_options[] = ;
AVFILTER_DEFINE_CLASS(showspectrum);
static const struct ColorTable  color_table[][8] = ;
static av_cold void uninit(AVFilterContext *ctx)
static int query_formats(AVFilterContext *ctx)
static int config_output(AVFilterLink *outlink)
static int run_channel_fft(AVFilterContext *ctx, void *arg, int jobnr, int nb_jobs)
#define RE(y, ch) s->fft_data[ch][y].re
#define IM(y, ch) s->fft_data[ch][y].im
#define MAGNITUDE(y, ch) hypot(RE(y, ch), IM(y, ch))
#define PHASE(y, ch) atan2(IM(y, ch), RE(y, ch))
static int calc_channel_magnitudes(AVFilterContext *ctx, void *arg, int jobnr, int nb_jobs)
static int calc_channel_phases(AVFilterContext *ctx, void *arg, int jobnr, int nb_jobs)
static void acalc_magnitudes(ShowSpectrumContext *s)
static void scale_magnitudes(ShowSpectrumContext *s, float scale)
static void color_range(ShowSpectrumContext *s, int ch,
float *yf, float *uf, float *vf)
static void pick_color(ShowSpectrumContext *s,
float yf, float uf, float vf,
float a, float *out)
static void clear_combine_buffer(ShowSpectrumContext *s, int size)
static int plot_channel(AVFilterContext *ctx, void *arg, int jobnr, int nb_jobs)
static int plot_spectrum_column(AVFilterLink *inlink, AVFrame *insamples)
#if CONFIG_SHOWSPECTRUM_FILTER
static int request_frame(AVFilterLink *outlink)
static int filter_frame(AVFilterLink *inlink, AVFrame *insamples)
static const AVFilterPad showspectrum_inputs[] = ;
static const AVFilterPad showspectrum_outputs[] = ;
AVFilter ff_avf_showspectrum = ;
#if CONFIG_SHOWSPECTRUMPIC_FILTER
static const AVOption showspectrumpic_options[] = ;
AVFILTER_DEFINE_CLASS(showspectrumpic);
static void drawtext(AVFrame *pic, int x, int y, const char *txt, int o)
static int showspectrumpic_request_frame(AVFilterLink *outlink)
static int showspectrumpic_filter_frame(AVFilterLink *inlink, AVFrame *insamples)
static const AVFilterPad showspectrumpic_inputs[] = ;
static const AVFilterPad showspectrumpic_outputs[] = ;
AVFilter ff_avf_showspectrumpic = ;
