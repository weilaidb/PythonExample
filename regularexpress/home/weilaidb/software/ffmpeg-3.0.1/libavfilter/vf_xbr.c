#define LB_MASK       0x00FEFEFE
#define RED_BLUE_MASK 0x00FF00FF
#define GREEN_MASK    0x0000FF00
typedef int (*xbrfunc_t)(AVFilterContext *ctx, void *arg, int jobnr, int nb_jobs);
typedef struct  XBRContext;
typedef struct ThreadData  ThreadData;
#define OFFSET(x) offsetof(XBRContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
static const AVOption xbr_options[] = ;
AVFILTER_DEFINE_CLASS(xbr);
static uint32_t pixel_diff(uint32_t x, uint32_t y, const uint32_t *r2y)
#define ALPHA_BLEND_128_W(a, b) ((((a) & LB_MASK) >> 1) + (((b) & LB_MASK) >> 1))
#define ALPHA_BLEND_BASE(a, b, m, s) (  (RED_BLUE_MASK & (((a) & RED_BLUE_MASK) + (((((b) & RED_BLUE_MASK) - ((a) & RED_BLUE_MASK)) * (m)) >> (s)))) \
| (GREEN_MASK    & (((a) & GREEN_MASK)    + (((((b) & GREEN_MASK)    - ((a) & GREEN_MASK))    * (m)) >> (s)))))
#define ALPHA_BLEND_32_W(a, b)  ALPHA_BLEND_BASE(a, b, 1, 3)
#define ALPHA_BLEND_64_W(a, b)  ALPHA_BLEND_BASE(a, b, 1, 2)
#define ALPHA_BLEND_192_W(a, b) ALPHA_BLEND_BASE(a, b, 3, 2)
#define ALPHA_BLEND_224_W(a, b) ALPHA_BLEND_BASE(a, b, 7, 3)
#define df(A, B) pixel_diff(A, B, r2y)
#define eq(A, B) (df(A, B) < 155)
#define FILT2(PE, PI, PH, PF, PG, PC, PD, PB, PA, G5, C4, G0, D0, C1, B1, F4, I4, H5, I5, A0, A1,   \
N0, N1, N2, N3) do  while (0)
#define FILT3(PE, PI, PH, PF, PG, PC, PD, PB, PA, G5, C4, G0, D0, C1, B1, F4, I4, H5, I5, A0, A1,   \
N0, N1, N2, N3, N4, N5, N6, N7, N8) do  while (0)
#define FILT4(PE, PI, PH, PF, PG, PC, PD, PB, PA, G5, C4, G0, D0, C1, B1, F4, I4, H5, I5, A0, A1,   \
N15, N14, N11, N3, N7, N10, N13, N12, N9, N6, N2, N1, N5, N8, N4, N0) do  while (0)
static av_always_inline void xbr_filter(const ThreadData *td, int jobnr, int nb_jobs, int n)
#define XBR_FUNC(size) \
static int xbr##size##x(AVFilterContext *ctx, void *arg, int jobnr, int nb_jobs) \
XBR_FUNC(2)
XBR_FUNC(3)
XBR_FUNC(4)
static int config_output(AVFilterLink *outlink)
static int query_formats(AVFilterContext *ctx)
static int filter_frame(AVFilterLink *inlink, AVFrame *in)
static int init(AVFilterContext *ctx)
static const AVFilterPad xbr_inputs[] = ;
static const AVFilterPad xbr_outputs[] = ;
AVFilter ff_vf_xbr = ;
