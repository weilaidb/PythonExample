enum CieSystem ;
enum ColorsSystems ;
typedef struct CiescopeContext  CiescopeContext;
OFFSET offsetof(CiescopeContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
static const AVOption ciescope_options[] = ;
AVFILTER_DEFINE_CLASS(ciescope);
static const enum AVPixelFormat in_pix_fmts[] = ;
static const enum AVPixelFormat out_pix_fmts[] = ;
query_formats
config_output
struct ColorSystem ;
static float const spectral_chromaticity[][3] = ;
#define C     0.310063, 0.316158
#define E     1.0/3.0, 1.0/3.0
#define D50   0.34570, 0.3585
#define D65   0.312713, 0.329016
#define GAMMA_REC709    0.
static const struct ColorSystem color_systems[] = ;
uv_to_xy
upvp_to_xy
xy_to_upvp
xy_to_uv
xyz_to_rgb
invert_matrix3x3
get_rgb2xyz_matrix
rgb_to_xy
constrain_rgb
gamma_correct
gamma_correct_rgb
Sz (((x) * (int)FFMIN(w, h)) / 512)
monochrome_color_location
find_tongue
draw_line
draw_rline
tongue_outline
fill_in_tongue
plot_white_point
draw_background
filter_rgb48
filter_rgba64
filter_rgb24
filter_rgba
filter_xyz
plot_gamuts
filter_frame
uninit
config_input
static const AVFilterPad inputs[] = ;
static const AVFilterPad outputs[] = ;
AVFilter ff_vf_ciescope = ;
