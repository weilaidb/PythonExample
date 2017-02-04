#define MAX_PLANES 4
typedef struct  FFTFILTContext;
static const char *const var_names[] = ;
enum                                   ;
enum ;
OFFSET offsetof(FFTFILTContext, x)
#define FLAGS AV_OPT_FLAG_VIDEO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
static const AVOption fftfilt_options[] = ,
,
,
,
};
AVFILTER_DEFINE_CLASS(fftfilt);
lum
weight_Y
weight_U
weight_V
static void copy_rev (FFTSample *dest, int w, int w2)
rdft_horizontal
rdft_vertical
irdft_vertical
irdft_horizontal
initialize
config_props
filter_frame
uninit
query_formats
static const AVFilterPad fftfilt_inputs[] = ;
static const AVFilterPad fftfilt_outputs[] = ;
AVFilter ff_vf_fftfilt = ;
