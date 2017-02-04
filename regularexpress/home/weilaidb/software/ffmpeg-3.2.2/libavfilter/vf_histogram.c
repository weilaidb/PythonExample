typedef struct HistogramContext  HistogramContext;
OFFSET offsetof(HistogramContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
static const AVOption histogram_options[] = ;
AVFILTER_DEFINE_CLASS(histogram);
static const enum AVPixelFormat levels_in_pix_fmts[] = ;
static const enum AVPixelFormat levels_out_yuv8_pix_fmts[] = ;
static const enum AVPixelFormat levels_out_yuv9_pix_fmts[] = ;
static const enum AVPixelFormat levels_out_yuv10_pix_fmts[] = ;
static const enum AVPixelFormat levels_out_yuv12_pix_fmts[] = ;
static const enum AVPixelFormat levels_out_rgb8_pix_fmts[] = ;
static const enum AVPixelFormat levels_out_rgb9_pix_fmts[] = ;
static const enum AVPixelFormat levels_out_rgb10_pix_fmts[] = ;
static const enum AVPixelFormat levels_out_rgb12_pix_fmts[] = ;
query_formats
static const uint8_t black_yuva_color[4] = ;
static const uint8_t black_gbrp_color[4] = ;
static const uint8_t white_yuva_color[4] = ;
static const uint8_t white_gbrp_color[4] = ;
config_input
config_output
filter_frame
static const AVFilterPad inputs[] = ;
static const AVFilterPad outputs[] = ;
AVFilter ff_vf_histogram = ;
