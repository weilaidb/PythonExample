enum StereoCode ;
typedef struct StereoComponent  StereoComponent;
static const int ana_coeff[][3][6] = ;
typedef struct Stereo3DContext  Stereo3DContext;
#define OFFSET(x) offsetof(Stereo3DContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
static const AVOption stereo3d_options[] = ;
AVFILTER_DEFINE_CLASS(stereo3d);
static const enum AVPixelFormat anaglyph_pix_fmts[] = ;
static const enum AVPixelFormat other_pix_fmts[] = ;
static int query_formats(AVFilterContext *ctx)
static inline uint8_t ana_convert(const int *coeff, const uint8_t *left, const uint8_t *right)
static void anaglyph_ic(uint8_t *dst, uint8_t *lsrc, uint8_t *rsrc,
ptrdiff_t dst_linesize, ptrdiff_t l_linesize, ptrdiff_t r_linesize,
int width, int height,
const int *ana_matrix_r, const int *ana_matrix_g, const int *ana_matrix_b)
static void anaglyph(uint8_t *dst, uint8_t *lsrc, uint8_t *rsrc,
ptrdiff_t dst_linesize, ptrdiff_t l_linesize, ptrdiff_t r_linesize,
int width, int height,
const int *ana_matrix_r, const int *ana_matrix_g, const int *ana_matrix_b)
static int config_output(AVFilterLink *outlink)
typedef struct ThreadData  ThreadData;
static int filter_slice(AVFilterContext *ctx, void *arg, int jobnr, int nb_jobs)
static void interleave_cols_to_any(Stereo3DContext *s, int *out_off, int p, AVFrame *in, AVFrame *out, int d)
static int filter_frame(AVFilterLink *inlink, AVFrame *inpicref)
static av_cold void uninit(AVFilterContext *ctx)
static const AVFilterPad stereo3d_inputs[] = ;
static const AVFilterPad stereo3d_outputs[] = ;
AVFilter ff_vf_stereo3d = ;
