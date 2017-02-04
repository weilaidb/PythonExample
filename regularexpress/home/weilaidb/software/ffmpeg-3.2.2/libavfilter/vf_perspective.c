#define SUB_PIXEL_BITS  8
#define SUB_PIXELS      (1 << SUB_PIXEL_BITS)
#define COEFF_BITS      11
#define LINEAR 0
#define CUBIC  1
typedef struct PerspectiveContext  PerspectiveContext;
OFFSET offsetof(PerspectiveContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
enum PERSPECTIVESense ;
enum EvalMode ;
static const AVOption perspective_options[] = ,
, 0, 0, FLAGS },
, 0, 0, FLAGS },
, 0, 0, FLAGS },
, 0, 0, FLAGS },
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
,
};
AVFILTER_DEFINE_CLASS(perspective);
query_formats
get_coeff
static const char *const var_names[] = ;
enum                                   ;
calc_persp_luts
config_input
typedef struct ThreadData  ThreadData;
resample_cubic
resample_linear
init
filter_frame
uninit
static const AVFilterPad perspective_inputs[] = ;
static const AVFilterPad perspective_outputs[] = ;
AVFilter ff_vf_perspective = ;
