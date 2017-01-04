struct weighted_avg ;
#define WEIGHT_LUT_NBITS 9
#define WEIGHT_LUT_SIZE  (1<<WEIGHT_LUT_NBITS)
typedef struct  NLMeansContext;
#define OFFSET(x) offsetof(NLMeansContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
static const AVOption nlmeans_options[] = ;
AVFILTER_DEFINE_CLASS(nlmeans);
static int query_formats(AVFilterContext *ctx)
static inline int get_integral_patch_value(const uint32_t *ii, int ii_lz_32, int x, int y, int p)
static void compute_safe_ssd_integral_image_c(uint32_t *dst, int dst_linesize_32,
const uint8_t *s1, int linesize1,
const uint8_t *s2, int linesize2,
int w, int h)
static inline void compute_unsafe_ssd_integral_image(uint32_t *dst, int dst_linesize_32,
int startx, int starty,
const uint8_t *src, int linesize,
int offx, int offy, int r, int sw, int sh,
int w, int h)
static void compute_ssd_integral_image(uint32_t *ii, int ii_linesize_32,
const uint8_t *src, int linesize, int offx, int offy,
int e, int w, int h)
static int config_input(AVFilterLink *inlink)
struct thread_data ;
static int nlmeans_slice(AVFilterContext *ctx, void *arg, int jobnr, int nb_jobs)
static int nlmeans_plane(AVFilterContext *ctx, int w, int h, int p, int r,
uint8_t *dst, int dst_linesize,
const uint8_t *src, int src_linesize)
static int filter_frame(AVFilterLink *inlink, AVFrame *in)
#define CHECK_ODD_FIELD(field, name) do  while (0)
static av_cold int init(AVFilterContext *ctx)
static av_cold void uninit(AVFilterContext *ctx)
static const AVFilterPad nlmeans_inputs[] = ;
static const AVFilterPad nlmeans_outputs[] = ;
AVFilter ff_vf_nlmeans = ;
