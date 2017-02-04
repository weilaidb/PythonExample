enum DisplayScale   ;
enum AmplitudeScale ;
enum SlideMode      ;
enum DisplayMode    ;
enum HistogramMode  ;
typedef struct AudioHistogramContext  AudioHistogramContext;
OFFSET offsetof(AudioHistogramContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
static const AVOption ahistogram_options[] = ,
, 0, INT_MAX, FLAGS },
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
,
,
,
,
,
,
};
AVFILTER_DEFINE_CLASS(ahistogram);
query_formats
config_input
config_output
filter_frame
uninit
static const AVFilterPad audiovectorscope_inputs[] = ;
static const AVFilterPad audiovectorscope_outputs[] = ;
AVFilter ff_avf_ahistogram = ;
