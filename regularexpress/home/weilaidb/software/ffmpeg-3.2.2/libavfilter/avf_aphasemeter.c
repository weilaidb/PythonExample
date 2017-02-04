typedef struct AudioPhaseMeterContext  AudioPhaseMeterContext;
OFFSET offsetof(AudioPhaseMeterContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
static const AVOption aphasemeter_options[] = ,
, 0, INT_MAX, FLAGS },
, 0, 0, FLAGS },
, 0, 0, FLAGS },
,
,
,
, 0, 0, FLAGS },
};
AVFILTER_DEFINE_CLASS(aphasemeter);
query_formats
config_input
config_output
get_x
filter_frame
uninit
static const AVFilterPad inputs[] = ;
static const AVFilterPad outputs[] = ;
AVFilter ff_avf_aphasemeter = ;
