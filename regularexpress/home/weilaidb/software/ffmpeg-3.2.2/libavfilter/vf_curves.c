#define R 0
#define G 1
#define B 2
#define A 3
struct keypoint ;
#define NB_COMP 3
enum preset ;
typedef struct  CurvesContext;
typedef struct ThreadData  ThreadData;
OFFSET offsetof(CurvesContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
static const AVOption curves_options[] = ;
AVFILTER_DEFINE_CLASS(curves);
static const struct  curves_presets[] = ;
*make_point
parse_points_str
get_nb_points
CLIP (nbits == 8 ? av_clip_uint8(v) : av_clip_uint16(v))
interpolate
DECLARE_INTERPOLATE_FUNC                                     \
static int interpolate##nbits(void *log_ctx, uint16_t *y,                   \
const struct keypoint *points)                \
DECLARE_INTERPOLATE_FUNC(8)
DECLARE_INTERPOLATE_FUNC(16)
parse_psfile
dump_curves
curves_init
query_formats
config_input
filter_slice
filter_frame
curves_uninit
static const AVFilterPad curves_inputs[] = ;
static const AVFilterPad curves_outputs[] = ;
AVFilter ff_vf_curves = ;
