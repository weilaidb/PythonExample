enum FilterType ;
enum DisplayType ;
enum ScaleType ;
typedef struct GraticuleLine  GraticuleLine;
typedef struct GraticuleLines  GraticuleLines;
typedef struct WaveformContext  WaveformContext;
OFFSET offsetof(WaveformContext, x)
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
query_formats
envelope_instant16
envelope_instant
envelope_peak16
envelope_peak
envelope16
envelope
update16
update
lowpass16
LOWPASS16_FUNC               \
static void lowpass16_##name(WaveformContext *s,           \
AVFrame *in, AVFrame *out,    \
int component, int intensity, \
int offset_y, int offset_x,   \
int unused1, int unused2)     \
LOWPASS16_FUNC(column_mirror, 1, 1)
LOWPASS16_FUNC(column,        1, 0)
LOWPASS16_FUNC(row_mirror,    0, 1)
LOWPASS16_FUNC(row,           0, 0)
lowpass
LOWPASS_FUNC               \
static void lowpass_##name(WaveformContext *s,           \
AVFrame *in, AVFrame *out,    \
int component, int intensity, \
int offset_y, int offset_x,   \
int unused1, int unused2)     \
LOWPASS_FUNC(column_mirror, 1, 1)
LOWPASS_FUNC(column,        1, 0)
LOWPASS_FUNC(row_mirror,    0, 1)
LOWPASS_FUNC(row,           0, 0)
flat16
flat
aflat16
aflat
chroma16
chroma
color16
color
acolor16
acolor
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
blend_vline
blend_vline16
blend_hline
blend_hline16
draw_htext
draw_htext16
draw_vtext
draw_vtext16
graticule_none
graticule_green_row
graticule16_green_row
graticule_green_column
graticule16_green_column
config_input
config_output
filter_frame
uninit
static const AVFilterPad inputs[] = ;
static const AVFilterPad outputs[] = ;
AVFilter ff_vf_waveform = ;
