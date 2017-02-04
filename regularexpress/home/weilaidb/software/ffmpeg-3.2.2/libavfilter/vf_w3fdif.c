typedef struct W3FDIFContext  W3FDIFContext;
OFFSET offsetof(W3FDIFContext, x)
#define FLAGS AV_OPT_FLAG_VIDEO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
CONST
static const AVOption w3fdif_options[] = ;
AVFILTER_DEFINE_CLASS(w3fdif);
query_formats
filter_simple_low
filter_complex_low
filter_simple_high
filter_complex_high
filter_scale
config_input
config_output
static const int8_t   n_coef_lf[2] = ;
static const int16_t coef_lf[2][4] = ;
static const int8_t   n_coef_hf[2] = ;
static const int16_t coef_hf[2][5] = ;
typedef struct ThreadData  ThreadData;
deinterlace_slice
filter
filter_frame
request_frame
uninit
static const AVFilterPad w3fdif_inputs[] = ;
static const AVFilterPad w3fdif_outputs[] = ;
AVFilter ff_vf_w3fdif = ;
