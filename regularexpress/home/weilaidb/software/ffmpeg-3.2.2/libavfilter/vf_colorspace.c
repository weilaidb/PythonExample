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
static const struct LumaCoefficients *get_luma_coefficients(enum AVColorSpace csp)
static void fill_rgb2yuv_table(const struct LumaCoefficients *coeffs,
double rgb2yuv[3][3])
static const struct TransferCharacteristics transfer_characteristics[AVCOL_TRC_NB] = ;
static const struct TransferCharacteristics *
get_transfer_characteristics(enum AVColorTransferCharacteristic trc)
static const struct WhitepointCoefficients whitepoint_coefficients[WP_NB] = ;
static const struct ColorPrimaries color_primaries[AVCOL_PRI_NB] = ;
static const struct ColorPrimaries *get_color_primaries(enum AVColorPrimaries prm)
static void invert_matrix3x3(const double in[3][3], double out[3][3])
static int fill_gamma_table(ColorSpaceContext *s)
static void fill_rgb2xyz_table(const struct ColorPrimaries *coeffs,
double rgb2xyz[3][3])
static void mul3x3(double dst[3][3], const double src1[3][3], const double src2[3][3])
static void fill_whitepoint_conv_table(double out[3][3], enum WhitepointAdaptation wp_adapt,
enum Whitepoint src, enum Whitepoint dst)
static void apply_lut(int16_t *buf[3], ptrdiff_t stride,
int w, int h, const int16_t *lut)
struct ThreadData ;
static int convert(AVFilterContext *ctx, void *data, int job_nr, int n_jobs)
static int get_range_off(AVFilterContext *ctx, int *off,
int *y_rng, int *uv_rng,
enum AVColorRange rng, int depth)
static int create_filtergraph(AVFilterContext *ctx,
const AVFrame *in, const AVFrame *out)
static int init(AVFilterContext *ctx)
static void uninit(AVFilterContext *ctx)
static int filter_frame(AVFilterLink *link, AVFrame *in)
static int query_formats(AVFilterContext *ctx)
static int config_props(AVFilterLink *outlink)
#define OFFSET(x) offsetof(ColorSpaceContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM | AV_OPT_FLAG_VIDEO_PARAM
#define ENUM(x, y, z)
static const AVOption colorspace_options[] = ;
AVFILTER_DEFINE_CLASS(colorspace);
static const AVFilterPad inputs[] = ;
static const AVFilterPad outputs[] = ;
AVFilter ff_vf_colorspace = ;
