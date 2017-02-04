static const char *const var_names[] = ;
enum var_name ;
typedef struct LUT2Context  LUT2Context;
OFFSET offsetof(LUT2Context, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
static const AVOption lut2_options[] = ,
, .flags = FLAGS },
, .flags = FLAGS },
, .flags = FLAGS },
};
uninit
query_formats
config_inputx
config_inputy
lut2_8bit
lut2_16bit
process_frame
config_output
filter_frame
request_frame
static const AVFilterPad inputs[] = ;
static const AVFilterPad outputs[] = ;
AVFILTER_DEFINE_CLASS(lut2);
AVFilter ff_vf_lut2 = ;
