typedef struct  OWDenoiseContext;
OFFSET offsetof(OWDenoiseContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
static const AVOption owdenoise_options[] = ;
AVFILTER_DEFINE_CLASS(owdenoise);
DECLARE_ALIGNED(8, static const uint8_t, dither)[8][8] = ;
static const double coeff[2][5] = ;
static const double icoeff[2][5] = ;
decompose
compose
decompose2D
compose2D
decompose2D2
compose2D2
filter
filter_frame
query_formats
config_input
uninit
static const AVFilterPad owdenoise_inputs[] = ;
static const AVFilterPad owdenoise_outputs[] = ;
AVFilter ff_vf_owdenoise = ;
