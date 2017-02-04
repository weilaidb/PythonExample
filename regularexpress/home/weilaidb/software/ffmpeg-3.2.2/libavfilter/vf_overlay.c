static const char *const var_names[] = ;
enum var_name ;
enum EOFAction ;
static const char * const eof_action_str[] = ;
#define MAIN    0
#define OVERLAY 1
#define R 0
#define G 1
#define B 2
#define A 3
#define Y 0
#define U 1
#define V 2
enum EvalMode ;
enum OverlayFormat ;
typedef struct OverlayContext  OverlayContext;
uninit
normalize_xy
eval_expr
set_expr
process_command
query_formats
static const enum AVPixelFormat alpha_pix_fmts[] = ;
config_input_overlay
config_output
FAST_DIV255 ((((x) + 128) * 257) >> 16)
UNPREMULTIPLY_ALPHA ((((x) << 16) - ((x) << 9) + (x)) / ((((x) + (y)) << 8) - ((x) + (y)) - (y) * (x)))
blend_image_packed_rgb
blend_plane
alpha_composite
blend_image_yuv
blend_image_yuv420
blend_image_yuv422
blend_image_yuv444
config_input_main
*do_blend
filter_frame
request_frame
init
OFFSET offsetof(OverlayContext, x)
#define FLAGS AV_OPT_FLAG_VIDEO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
static const AVOption overlay_options[] = ,
, CHAR_MIN, CHAR_MAX, FLAGS },
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
AVFILTER_DEFINE_CLASS(overlay);
static const AVFilterPad avfilter_vf_overlay_inputs[] = ;
static const AVFilterPad avfilter_vf_overlay_outputs[] = ;
AVFilter ff_vf_overlay = ;
