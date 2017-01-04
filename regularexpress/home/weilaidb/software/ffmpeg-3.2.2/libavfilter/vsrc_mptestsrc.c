#define WIDTH 512
#define HEIGHT 512
enum test_type ;
typedef struct MPTestContext  MPTestContext;
#define OFFSET(x) offsetof(MPTestContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
static const AVOption mptestsrc_options[]= ;
AVFILTER_DEFINE_CLASS(mptestsrc);
static double c[64];
static void init_idct(void)
static void idct(uint8_t *dst, int dst_linesize, int src[64])
static void draw_dc(uint8_t *dst, int dst_linesize, int color, int w, int h)
static void draw_basis(uint8_t *dst, int dst_linesize, int amp, int freq, int dc)
static void draw_cbp(uint8_t *dst[3], int dst_linesize[3], int cbp, int amp, int dc)
static void dc_test(uint8_t *dst, int dst_linesize, int w, int h, int off)
static void freq_test(uint8_t *dst, int dst_linesize, int off)
static void amp_test(uint8_t *dst, int dst_linesize, int off)
static void cbp_test(uint8_t *dst[3], int dst_linesize[3], int off)
static void mv_test(uint8_t *dst, int dst_linesize, int off)
static void ring1_test(uint8_t *dst, int dst_linesize, int off)
static void ring2_test(uint8_t *dst, int dst_linesize, int off)
static av_cold int init(AVFilterContext *ctx)
static int config_props(AVFilterLink *outlink)
static int query_formats(AVFilterContext *ctx)
static int request_frame(AVFilterLink *outlink)
static const AVFilterPad mptestsrc_outputs[] = ;
AVFilter ff_vsrc_mptestsrc = ;
