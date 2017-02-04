static const char *const var_names[] = ;
enum var_name ;
query_formats
typedef struct PadContext  PadContext;
config_input
config_output
*get_video_buffer
buffer_needs_copy
frame_needs_copy
filter_frame
OFFSET offsetof(PadContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
static const AVOption pad_options[] = ,
, CHAR_MIN, CHAR_MAX, FLAGS },
, CHAR_MIN, CHAR_MAX, FLAGS },
, CHAR_MIN, CHAR_MAX, FLAGS },
, CHAR_MIN, CHAR_MAX, FLAGS },
, CHAR_MIN, CHAR_MAX, FLAGS },
, .flags = FLAGS },
};
AVFILTER_DEFINE_CLASS(pad);
static const AVFilterPad avfilter_vf_pad_inputs[] = ;
static const AVFilterPad avfilter_vf_pad_outputs[] = ;
AVFilter ff_vf_pad = ;
