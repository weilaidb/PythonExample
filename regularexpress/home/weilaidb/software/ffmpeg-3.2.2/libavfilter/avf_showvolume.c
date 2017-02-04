static const char *const var_names[] = ;
enum                                   ;
typedef struct ShowVolumeContext  ShowVolumeContext;
OFFSET offsetof(ShowVolumeContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
static const AVOption showvolume_options[] = ,
, 0, INT_MAX, FLAGS },
,
,
,
,
, 0, 0, FLAGS },
,
,
,
,
,
,
};
AVFILTER_DEFINE_CLASS(showvolume);
init
query_formats
config_input
config_output
drawtext
filter_frame
uninit
static const AVFilterPad showvolume_inputs[] = ;
static const AVFilterPad showvolume_outputs[] = ;
AVFilter ff_avf_showvolume = ;
