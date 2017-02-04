static const char *const var_names[] = ;
enum var_name ;
typedef struct ZPcontext  ZPContext;
OFFSET offsetof(ZPContext, x)
#define FLAGS AV_OPT_FLAG_VIDEO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
static const AVOption zoompan_options[] = ,
, .flags = FLAGS },
, .flags = FLAGS },
, .flags = FLAGS },
, .flags = FLAGS },
, .flags = FLAGS },
, 0, INT_MAX, .flags = FLAGS },
};
AVFILTER_DEFINE_CLASS(zoompan);
init
config_output
output_single_frame
filter_frame
request_frame
poll_frame
query_formats
uninit
static const AVFilterPad inputs[] = ;
static const AVFilterPad outputs[] = ;
AVFilter ff_vf_zoompan = ;
