static const char *const var_names[] = ;
enum var_name ;
enum EvalMode ;
typedef struct ScaleContext  ScaleContext;
AVFilter ff_vf_scale2ref;
init_dict
uninit
query_formats
*parse_yuv_type
config_props
config_props_ref
request_frame
request_frame_ref
scale_slice
filter_frame
filter_frame_ref
process_command
*child_class_next
OFFSET offsetof(ScaleContext, x)
#define FLAGS AV_OPT_FLAG_VIDEO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
static const AVOption scale_options[] = ,
,
,
,
, .flags = FLAGS },
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
static const AVClass scale_class = ;
static const AVFilterPad avfilter_vf_scale_inputs[] = ;
static const AVFilterPad avfilter_vf_scale_outputs[] = ;
AVFilter ff_vf_scale = ;
static const AVClass scale2ref_class = ;
static const AVFilterPad avfilter_vf_scale2ref_inputs[] = ;
static const AVFilterPad avfilter_vf_scale2ref_outputs[] = ;
AVFilter ff_vf_scale2ref = ;
