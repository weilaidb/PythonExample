typedef struct ConvolutionContext  ConvolutionContext;
OFFSET offsetof(ConvolutionContext, x)
#define FLAGS AV_OPT_FLAG_VIDEO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
static const AVOption convolution_options[] = ,
, 0, 0, FLAGS },
, 0, 0, FLAGS },
, 0, 0, FLAGS },
,
,
,
,
,
,
,
,
};
AVFILTER_DEFINE_CLASS(convolution);
static const int same3x3[9] = ;
static const int same5x5[25] = ;
query_formats
line_copy8
line_copy16
typedef struct ThreadData  ThreadData;
filter16_prewitt
filter16_sobel
filter_prewitt
filter_sobel
filter16_3x3
filter16_5x5
filter_3x3
filter_5x5
config_input
filter_frame
init
uninit
static const AVFilterPad convolution_inputs[] = ;
static const AVFilterPad convolution_outputs[] = ;
#if CONFIG_CONVOLUTION_FILTER
AVFilter ff_vf_convolution = ;
#if CONFIG_PREWITT_FILTER
static const AVOption prewitt_options[] = ;
AVFILTER_DEFINE_CLASS(prewitt);
AVFilter ff_vf_prewitt = ;
#if CONFIG_SOBEL_FILTER
static const AVOption sobel_options[] = ;
AVFILTER_DEFINE_CLASS(sobel);
AVFilter ff_vf_sobel = ;
