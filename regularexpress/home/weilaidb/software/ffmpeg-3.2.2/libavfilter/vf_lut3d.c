#define R 0
#define G 1
#define B 2
#define A 3
enum interp_mode ;
struct rgbvec ;
#define MAX_LEVEL 64
typedef struct LUT3DContext  LUT3DContext;
typedef struct ThreadData  ThreadData;
OFFSET offsetof(LUT3DContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
#define COMMON_OPTIONS \
, \
, \
, \
, \
lerpf
lerp
NEAR ((int)((x) + .5))
PREV ((int)(x))
NEXT (FFMIN((int)(x) + 1, lut3d->lutsize - 1))
interp_nearest
interp_trilinear
interp_tetrahedral
DEFINE_INTERP_FUNC                                                             \
static int interp_##nbits##_##name(AVFilterContext *ctx, void *arg, int jobnr, int nb_jobs)         \
DEFINE_INTERP_FUNC(nearest,     8)
DEFINE_INTERP_FUNC(trilinear,   8)
DEFINE_INTERP_FUNC(tetrahedral, 8)
DEFINE_INTERP_FUNC(nearest,     16)
DEFINE_INTERP_FUNC(trilinear,   16)
DEFINE_INTERP_FUNC(tetrahedral, 16)
#define MAX_LINE_SIZE 512
skip_line
NEXT_LINE do  while (loop_cond)
parse_dat
parse_cube
parse_3dl
parse_m3d
set_identity_matrix
query_formats
config_input
*apply_lut
filter_frame
#if CONFIG_LUT3D_FILTER
static const AVOption lut3d_options[] = ;
AVFILTER_DEFINE_CLASS(lut3d);
lut3d_init
static const AVFilterPad lut3d_inputs[] = ;
static const AVFilterPad lut3d_outputs[] = ;
AVFilter ff_vf_lut3d = ;
#if CONFIG_HALDCLUT_FILTER
update_clut
config_output
filter_frame_hald
request_frame
config_clut
*update_apply_clut
haldclut_init
haldclut_uninit
static const AVOption haldclut_options[] = ;
AVFILTER_DEFINE_CLASS(haldclut);
static const AVFilterPad haldclut_inputs[] = ;
static const AVFilterPad haldclut_outputs[] = ;
AVFilter ff_vf_haldclut = ;
