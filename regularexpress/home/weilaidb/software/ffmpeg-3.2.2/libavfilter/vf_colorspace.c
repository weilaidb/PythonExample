enum DitherMode ;
enum Colorspace ;
enum Whitepoint ;
enum WhitepointAdaptation ;
static const enum AVColorTransferCharacteristic default_trc[CS_NB + 1] = ;
static const enum AVColorPrimaries default_prm[CS_NB + 1] = ;
static const enum AVColorSpace default_csp[CS_NB + 1] = ;
struct ColorPrimaries ;
struct TransferCharacteristics ;
struct LumaCoefficients ;
struct WhitepointCoefficients ;
typedef struct ColorSpaceContext  ColorSpaceContext;
static const struct LumaCoefficients luma_coefficients[AVCOL_SPC_NB] = ;
*get_luma_coefficients
fill_rgb2yuv_table
static const struct TransferCharacteristics transfer_characteristics[AVCOL_TRC_NB] = ;
get_transfer_characteristics
static const struct WhitepointCoefficients whitepoint_coefficients[WP_NB] = ;
static const struct ColorPrimaries color_primaries[AVCOL_PRI_NB] = ;
*get_color_primaries
invert_matrix3x3
fill_gamma_table
fill_rgb2xyz_table
mul3x3
fill_whitepoint_conv_table
apply_lut
struct ThreadData ;
convert
get_range_off
create_filtergraph
init
uninit
filter_frame
query_formats
config_props
OFFSET offsetof(ColorSpaceContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM | AV_OPT_FLAG_VIDEO_PARAM
ENUM
static const AVOption colorspace_options[] = ;
AVFILTER_DEFINE_CLASS(colorspace);
static const AVFilterPad inputs[] = ;
static const AVFilterPad outputs[] = ;
AVFilter ff_vf_colorspace = ;
