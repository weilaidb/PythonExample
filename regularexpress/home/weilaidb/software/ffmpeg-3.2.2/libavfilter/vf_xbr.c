#define LB_MASK       0x00FEFEFE
#define RED_BLUE_MASK 0x00FF00FF
#define GREEN_MASK    0x0000FF00
typedef int (*xbrfunc_t)(AVFilterContext *ctx, void *arg, int jobnr, int nb_jobs);
typedef struct  XBRContext;
typedef struct ThreadData  ThreadData;
OFFSET offsetof(XBRContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
static const AVOption xbr_options[] = ;
AVFILTER_DEFINE_CLASS(xbr);
pixel_diff
ALPHA_BLEND_128_W ((((a) & LB_MASK) >> 1) + (((b) & LB_MASK) >> 1))
ALPHA_BLEND_BASE (  (RED_BLUE_MASK & (((a) & RED_BLUE_MASK) + (((((b) & RED_BLUE_MASK) - ((a) & RED_BLUE_MASK)) * (m)) >> (s)))) \
| (GREEN_MASK    & (((a) & GREEN_MASK)    + (((((b) & GREEN_MASK)    - ((a) & GREEN_MASK))    * (m)) >> (s)))))
ALPHA_BLEND_32_W  ALPHA_BLEND_BASE(a, b, 1, 3)
ALPHA_BLEND_64_W  ALPHA_BLEND_BASE(a, b, 1, 2)
ALPHA_BLEND_192_W ALPHA_BLEND_BASE(a, b, 3, 2)
ALPHA_BLEND_224_W ALPHA_BLEND_BASE(a, b, 7, 3)
df pixel_diff(A, B, r2y)
eq (df(A, B) < 155)
FILT2 do  while (0)
FILT3 do  while (0)
FILT4 do  while (0)
xbr_filter
XBR_FUNC \
static int xbr##size##x(AVFilterContext *ctx, void *arg, int jobnr, int nb_jobs) \
XBR_FUNC(2)
XBR_FUNC(3)
XBR_FUNC(4)
config_output
query_formats
filter_frame
init
static const AVFilterPad xbr_inputs[] = ;
static const AVFilterPad xbr_outputs[] = ;
AVFilter ff_vf_xbr = ;
