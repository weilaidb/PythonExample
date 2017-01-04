enum FilterType ;
enum DisplayType ;
enum ScaleType ;
typedef struct GraticuleLine  GraticuleLine;
typedef struct GraticuleLines  GraticuleLines;
typedef struct WaveformContext  WaveformContext;
#define OFFSET(x) offsetof(WaveformContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
static const AVOption waveform_options[] = ;
AVFILTER_DEFINE_CLASS(waveform);
static const enum AVPixelFormat in_lowpass_pix_fmts[] = ;
static const enum AVPixelFormat in_color_pix_fmts[] = ;
static const enum AVPixelFormat in_flat_pix_fmts[] = ;
static const enum AVPixelFormat out_rgb8_lowpass_pix_fmts[] = ;
static const enum AVPixelFormat out_rgb9_lowpass_pix_fmts[] = ;
static const enum AVPixelFormat out_rgb10_lowpass_pix_fmts[] = ;
static const enum AVPixelFormat out_rgb12_lowpass_pix_fmts[] = ;
static const enum AVPixelFormat out_yuv8_lowpass_pix_fmts[] = ;
static const enum AVPixelFormat out_yuv9_lowpass_pix_fmts[] = ;
static const enum AVPixelFormat out_yuv10_lowpass_pix_fmts[] = ;
static const enum AVPixelFormat out_yuv12_lowpass_pix_fmts[] = ;
static const enum AVPixelFormat out_gray8_lowpass_pix_fmts[] = ;
static const enum AVPixelFormat flat_pix_fmts[] = ;
static int query_formats(AVFilterContext *ctx)
static void envelope_instant16(WaveformContext *s, AVFrame *out, int plane, int component, int offset)
static void envelope_instant(WaveformContext *s, AVFrame *out, int plane, int component, int offset)
static void envelope_peak16(WaveformContext *s, AVFrame *out, int plane, int component, int offset)
static void envelope_peak(WaveformContext *s, AVFrame *out, int plane, int component, int offset)
static void envelope16(WaveformContext *s, AVFrame *out, int plane, int component, int offset)
static void envelope(WaveformContext *s, AVFrame *out, int plane, int component, int offset)
static void update16(uint16_t *target, int max, int intensity, int limit)
static void update(uint8_t *target, int max, int intensity)
static av_always_inline void lowpass16(WaveformContext *s,
AVFrame *in, AVFrame *out,
int component, int intensity,
int offset_y, int offset_x,
int column, int mirror)
#define LOWPASS16_FUNC(name, column, mirror)               \
static void lowpass16_##name(WaveformContext *s,           \
AVFrame *in, AVFrame *out,    \
int component, int intensity, \
int offset_y, int offset_x,   \
int unused1, int unused2)     \
LOWPASS16_FUNC(column_mirror, 1, 1)
LOWPASS16_FUNC(column,        1, 0)
LOWPASS16_FUNC(row_mirror,    0, 1)
LOWPASS16_FUNC(row,           0, 0)
static av_always_inline void lowpass(WaveformContext *s,
AVFrame *in, AVFrame *out,
int component, int intensity,
int offset_y, int offset_x,
int column, int mirror)
#define LOWPASS_FUNC(name, column, mirror)               \
static void lowpass_##name(WaveformContext *s,           \
AVFrame *in, AVFrame *out,    \
int component, int intensity, \
int offset_y, int offset_x,   \
int unused1, int unused2)     \
LOWPASS_FUNC(column_mirror, 1, 1)
LOWPASS_FUNC(column,        1, 0)
LOWPASS_FUNC(row_mirror,    0, 1)
LOWPASS_FUNC(row,           0, 0)
static av_always_inline void flat16(WaveformContext *s,
AVFrame *in, AVFrame *out,
int component, int intensity,
int offset_y, int offset_x,
int column, int mirror)
static av_always_inline void flat(WaveformContext *s,
AVFrame *in, AVFrame *out,
int component, int intensity,
int offset_y, int offset_x,
int column, int mirror)
static av_always_inline void aflat16(WaveformContext *s,
AVFrame *in, AVFrame *out,
int component, int intensity,
int offset_y, int offset_x,
int column, int mirror)
static av_always_inline void aflat(WaveformContext *s,
AVFrame *in, AVFrame *out,
int component, int intensity,
int offset_y, int offset_x,
int column, int mirror)
static av_always_inline void chroma16(WaveformContext *s,
AVFrame *in, AVFrame *out,
int component, int intensity,
int offset_y, int offset_x,
int column, int mirror)
static av_always_inline void chroma(WaveformContext *s,
AVFrame *in, AVFrame *out,
int component, int intensity,
int offset_y, int offset_x,
int column, int mirror)
static av_always_inline void color16(WaveformContext *s,
AVFrame *in, AVFrame *out,
int component, int intensity,
int offset_y, int offset_x,
int column, int mirror)
static av_always_inline void color(WaveformContext *s,
AVFrame *in, AVFrame *out,
int component, int intensity,
int offset_y, int offset_x,
int column, int mirror)
static av_always_inline void acolor16(WaveformContext *s,
AVFrame *in, AVFrame *out,
int component, int intensity,
int offset_y, int offset_x,
int column, int mirror)
static av_always_inline void acolor(WaveformContext *s,
AVFrame *in, AVFrame *out,
int component, int intensity,
int offset_y, int offset_x,
int column, int mirror)
static const uint8_t black_yuva_color[4] = ;
static const uint8_t green_yuva_color[4] = ;
static const uint8_t black_gbrp_color[4] = ;
static const GraticuleLines aflat_digital8[] = ;
static const GraticuleLines aflat_digital9[] = ;
static const GraticuleLines aflat_digital10[] = ;
static const GraticuleLines aflat_digital12[] = ;
static const GraticuleLines aflat_millivolts8[] = ;
static const GraticuleLines aflat_millivolts9[] = ;
static const GraticuleLines aflat_millivolts10[] = ;
static const GraticuleLines aflat_millivolts12[] = ;
static const GraticuleLines aflat_ire8[] = ;
static const GraticuleLines aflat_ire9[] = ;
static const GraticuleLines aflat_ire10[] = ;
static const GraticuleLines aflat_ire12[] = ;
static const GraticuleLines flat_digital8[] = ;
static const GraticuleLines flat_digital9[] = ;
static const GraticuleLines flat_digital10[] = ;
static const GraticuleLines flat_digital12[] = ;
static const GraticuleLines flat_millivolts8[] = ;
static const GraticuleLines flat_millivolts9[] = ;
static const GraticuleLines flat_millivolts10[] = ;
static const GraticuleLines flat_millivolts12[] = ;
static const GraticuleLines flat_ire8[] = ;
static const GraticuleLines flat_ire9[] = ;
static const GraticuleLines flat_ire10[] = ;
static const GraticuleLines flat_ire12[] = ;
static const GraticuleLines digital8[] = ;
static const GraticuleLines digital9[] = ;
static const GraticuleLines digital10[] = ;
static const GraticuleLines digital12[] = ;
static const GraticuleLines millivolts8[] = ;
static const GraticuleLines millivolts9[] = ;
static const GraticuleLines millivolts10[] = ;
static const GraticuleLines millivolts12[] = ;
static const GraticuleLines ire8[] = ;
static const GraticuleLines ire9[] = ;
static const GraticuleLines ire10[] = ;
static const GraticuleLines ire12[] = ;
static const GraticuleLines chroma_digital8[] = ;
static const GraticuleLines chroma_digital9[] = ;
static const GraticuleLines chroma_digital10[] = ;
static const GraticuleLines chroma_digital12[] = ;
static void blend_vline(uint8_t *dst, int height, int linesize, float o1, float o2, int v, int step)
static void blend_vline16(uint16_t *dst, int height, int linesize, float o1, float o2, int v, int step)
static void blend_hline(uint8_t *dst, int width, float o1, float o2, int v, int step)
static void blend_hline16(uint16_t *dst, int width, float o1, float o2, int v, int step)
static void draw_htext(AVFrame *out, int x, int y, float o1, float o2, const char *txt, const uint8_t color[4])
static void draw_htext16(AVFrame *out, int x, int y, int mult, float o1, float o2, const char *txt, const uint8_t color[4])
static void draw_vtext(AVFrame *out, int x, int y, float o1, float o2, const char *txt, const uint8_t color[4])
static void draw_vtext16(AVFrame *out, int x, int y, int mult, float o1, float o2, const char *txt, const uint8_t color[4])
static void graticule_none(WaveformContext *s, AVFrame *out)
static void graticule_green_row(WaveformContext *s, AVFrame *out)
static void graticule16_green_row(WaveformContext *s, AVFrame *out)
static void graticule_green_column(WaveformContext *s, AVFrame *out)
static void graticule16_green_column(WaveformContext *s, AVFrame *out)
static int config_input(AVFilterLink *inlink)
static int config_output(AVFilterLink *outlink)
static int filter_frame(AVFilterLink *inlink, AVFrame *in)
static av_cold void uninit(AVFilterContext *ctx)
static const AVFilterPad inputs[] = ;
static const AVFilterPad outputs[] = ;
AVFilter ff_vf_waveform = ;
