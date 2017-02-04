typedef int (*hqxfunc_t)(AVFilterContext *ctx, void *arg, int jobnr, int nb_jobs);
typedef struct  HQXContext;
typedef struct ThreadData  ThreadData;
OFFSET offsetof(HQXContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
static const AVOption hqx_options[] = ;
AVFILTER_DEFINE_CLASS(hqx);
rgb2yuv
yuv_diff
interp_2px
interp_3px
P ((k_shuffled & (m)) == (r))
DROP4 ((z) > 4 ? (z)-1 : (z))
SHF (((x) >> ((rot) ? 7-DROP4(n) : DROP4(n)) & 1) << DROP4(p##n))
WDIFF yuv_diff(rgb2yuv(r2y, c1), rgb2yuv(r2y, c2))
INTERP_BOOTSTRAP                                           \
const int k_shuffled = SHF(k,rot,0) | SHF(k,rot,1) | SHF(k,rot,2)   \
| SHF(k,rot,3) |       0      | SHF(k,rot,5)   \
| SHF(k,rot,6) | SHF(k,rot,7) | SHF(k,rot,8);  \
\
const uint32_t w0 = w[p0], w1 = w[p1],                              \
w3 = w[p3], w4 = w[p4], w5 = w[p5],                  \
w7 = w[p7]
hq2x_interp_1x1
hq3x_interp_2x1
hq4x_interp_2x2
hqx_filter
HQX_FUNC \
static int hq##size##x(AVFilterContext *ctx, void *arg, int jobnr, int nb_jobs) \
HQX_FUNC(2)
HQX_FUNC(3)
HQX_FUNC(4)
query_formats
config_output
filter_frame
init
static const AVFilterPad hqx_inputs[] = ;
static const AVFilterPad hqx_outputs[] = ;
AVFilter ff_vf_hqx = ;
