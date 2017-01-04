#if CONFIG_LIBFREETYPE
#if CONFIG_LIBFONTCONFIG
#define BASEFREQ        20.01523126408007475
#define ENDFREQ         20495.59681441799654
#define TLENGTH         "384*tc/(384+tc*f)"
#define TLENGTH_MIN     0.001
#define VOLUME_MAX      100.0
#define FONTCOLOR       "st(0, (midi(f)-59.5)/12);" \
"st(1, if(between(ld(0),0,1), 0.5-0.5*cos(2*PI*ld(0)), 0));" \
"r(1-ld(1)) + b(ld(1))"
#define CSCHEME         "1|0.5|0|0|0.5|1"
#define PTS_STEP 10
#define PTS_TOLERANCE 1
#define OFFSET(x) offsetof(ShowCQTContext, x)
#define FLAGS (AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM)
static const AVOption showcqt_options[] = ;
AVFILTER_DEFINE_CLASS(showcqt);
static void common_uninit(ShowCQTContext *s)
static double *create_freq_table(double base, double end, int n)
static double clip_with_log(void *log_ctx, const char *name,
double val, double min, double max,
double nan_replace, int idx)
static double a_weighting(void *p, double f)
static double b_weighting(void *p, double f)
static double c_weighting(void *p, double f)
static int init_volume(ShowCQTContext *s)
static void cqt_calc(FFTComplex *dst, const FFTComplex *src, const Coeffs *coeffs,
int len, int fft_len)
static int init_cqt(ShowCQTContext *s)
static AVFrame *alloc_frame_empty(enum AVPixelFormat format, int w, int h)
static enum AVPixelFormat convert_axis_pixel_format(enum AVPixelFormat format)
static int init_axis_empty(ShowCQTContext *s)
static int init_axis_from_file(ShowCQTContext *s)
static double midi(void *p, double f)
static double r_func(void *p, double x)
static double g_func(void *p, double x)
static double b_func(void *p, double x)
static int init_axis_color(ShowCQTContext *s, AVFrame *tmp, int half)
static int render_freetype(ShowCQTContext *s, AVFrame *tmp, char *fontfile)
static int render_fontconfig(ShowCQTContext *s, AVFrame *tmp, char* font)
static int render_default_font(AVFrame *tmp)
static int init_axis_from_font(ShowCQTContext *s)
static float calculate_gamma(float v, float g)
static void rgb_from_cqt(ColorFloat *c, const FFTComplex *v, float g, int len, float cscheme[6])
static void yuv_from_cqt(ColorFloat *c, const FFTComplex *v, float gamma, int len, float cm[3][3], float cscheme[6])
static void draw_bar_rgb(AVFrame *out, const float *h, const float *rcp_h,
const ColorFloat *c, int bar_h)
#define DRAW_BAR_WITH_CHROMA(x) \
do  while (0)
#define DRAW_BAR_WITHOUT_CHROMA(x) \
do  while (0)
static void draw_bar_yuv(AVFrame *out, const float *h, const float *rcp_h,
const ColorFloat *c, int bar_h)
static void draw_axis_rgb(AVFrame *out, AVFrame *axis, const ColorFloat *c, int off)
#define BLEND_WITH_CHROMA(c) \
do  while (0)
#define BLEND_WITHOUT_CHROMA(c, alpha_inc) \
do  while (0)
#define BLEND_CHROMA2(c) \
do  while (0)
#define BLEND_CHROMA2x2(c) \
do  while (0)
static void draw_axis_yuv(AVFrame *out, AVFrame *axis, const ColorFloat *c, int off)
static void draw_sono(AVFrame *out, AVFrame *sono, int off, int idx)
static void update_sono_rgb(AVFrame *sono, const ColorFloat *c, int idx)
static void update_sono_yuv(AVFrame *sono, const ColorFloat *c, int idx)
static void process_cqt(ShowCQTContext *s)
static int plot_cqt(AVFilterContext *ctx, AVFrame **frameout)
static void init_colormatrix(ShowCQTContext *s)
static int init_cscheme(ShowCQTContext *s)
static av_cold int init(AVFilterContext *ctx)
static av_cold void uninit(AVFilterContext *ctx)
static int query_formats(AVFilterContext *ctx)
static int config_output(AVFilterLink *outlink)
static int filter_frame(AVFilterLink *inlink, AVFrame *insamples)
static int request_frame(AVFilterLink *outlink)
static const AVFilterPad showcqt_inputs[] = ;
static const AVFilterPad showcqt_outputs[] = ;
AVFilter ff_avf_showcqt = ;
