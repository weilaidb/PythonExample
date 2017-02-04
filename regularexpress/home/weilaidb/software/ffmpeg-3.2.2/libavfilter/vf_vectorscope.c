enum VectorscopeMode ;
typedef struct VectorscopeContext  VectorscopeContext;
OFFSET offsetof(VectorscopeContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
static const AVOption vectorscope_options[] = ;
AVFILTER_DEFINE_CLASS(vectorscope);
static const enum AVPixelFormat out_yuv8_pix_fmts[] = ;
static const enum AVPixelFormat out_yuv9_pix_fmts[] = ;
static const enum AVPixelFormat out_yuv10_pix_fmts[] = ;
static const enum AVPixelFormat out_yuv12_pix_fmts[] = ;
static const enum AVPixelFormat out_rgb8_pix_fmts[] = ;
static const enum AVPixelFormat out_rgb9_pix_fmts[] = ;
static const enum AVPixelFormat out_rgb10_pix_fmts[] = ;
static const enum AVPixelFormat out_rgb12_pix_fmts[] = ;
static const enum AVPixelFormat in1_pix_fmts[] = ;
static const enum AVPixelFormat in2_pix_fmts[] = ;
query_formats
config_output
envelope_instant16
envelope_peak16
envelope_instant
envelope_peak
envelope16
envelope
vectorscope16
vectorscope8
const static char *positions_name[] = ;
const static uint16_t positions[][14][3] = ;
draw_dots
draw_dots16
none_graticule
draw_htext
draw_htext16
color_graticule16
color_graticule
green_graticule16
green_graticule
filter_frame
config_input
uninit
static const AVFilterPad inputs[] = ;
static const AVFilterPad outputs[] = ;
AVFilter ff_vf_vectorscope = ;
