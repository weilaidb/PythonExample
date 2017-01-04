typedef int (*hqxfunc_t)(AVFilterContext *ctx, void *arg, int jobnr, int nb_jobs);
typedef struct  HQXContext;
typedef struct ThreadData  ThreadData;
#define OFFSET(x) offsetof(HQXContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
static const AVOption hqx_options[] = ;
AVFILTER_DEFINE_CLASS(hqx);
static av_always_inline uint32_t rgb2yuv(const uint32_t *r2y, uint32_t c)
static av_always_inline int yuv_diff(uint32_t yuv1, uint32_t yuv2)
static av_always_inline uint32_t interp_2px(uint32_t c1, int w1, uint32_t c2, int w2, int s)
static av_always_inline uint32_t interp_3px(uint32_t c1, int w1, uint32_t c2, int w2, uint32_t c3, int w3, int s)
#define P(m, r) ((k_shuffled & (m)) == (r))
#define DROP4(z) ((z) > 4 ? (z)-1 : (z))
#define SHF(x, rot, n) (((x) >> ((rot) ? 7-DROP4(n) : DROP4(n)) & 1) << DROP4(p##n))
#define WDIFF(c1, c2) yuv_diff(rgb2yuv(r2y, c1), rgb2yuv(r2y, c2))
#define INTERP_BOOTSTRAP(rot)                                           \
const int k_shuffled = SHF(k,rot,0) | SHF(k,rot,1) | SHF(k,rot,2)   \
| SHF(k,rot,3) |       0      | SHF(k,rot,5)   \
| SHF(k,rot,6) | SHF(k,rot,7) | SHF(k,rot,8);  \
\
const uint32_t w0 = w[p0], w1 = w[p1],                              \
w3 = w[p3], w4 = w[p4], w5 = w[p5],                  \
w7 = w[p7]
static av_always_inline uint32_t hq2x_interp_1x1(const uint32_t *r2y, int k,
const uint32_t *w,
int p0, int p1, int p2,
int p3, int p4, int p5,
int p6, int p7, int p8)
static av_always_inline void hq3x_interp_2x1(uint32_t *dst, int dst_linesize,
const uint32_t *r2y, int k,
const uint32_t *w,
int pos00, int pos01,
int p0, int p1, int p2,
int p3, int p4, int p5,
int p6, int p7, int p8,
int rotate)
static av_always_inline void hq4x_interp_2x2(uint32_t *dst, int dst_linesize,
const uint32_t *r2y, int k,
const uint32_t *w,
int pos00, int pos01,
int pos10, int pos11,
int p0, int p1, int p2,
int p3, int p4, int p5,
int p6, int p7, int p8)
static av_always_inline void hqx_filter(const ThreadData *td, int jobnr, int nb_jobs, int n)
#define HQX_FUNC(size) \
static int hq##size##x(AVFilterContext *ctx, void *arg, int jobnr, int nb_jobs) \
HQX_FUNC(2)
HQX_FUNC(3)
HQX_FUNC(4)
static int query_formats(AVFilterContext *ctx)
static int config_output(AVFilterLink *outlink)
static int filter_frame(AVFilterLink *inlink, AVFrame *in)
static av_cold int init(AVFilterContext *ctx)
static const AVFilterPad hqx_inputs[] = ;
static const AVFilterPad hqx_outputs[] = ;
AVFilter ff_vf_hqx = ;
