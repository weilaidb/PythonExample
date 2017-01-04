enum mode ;
static const AVClass *child_class_next(const AVClass *prev)
static void *child_next(void *obj, void *prev)
#define OFFSET(x) offsetof(SPPContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
static const AVOption spp_options[] = ;
static const AVClass spp_class = ;
DECLARE_ALIGNED(8, static const uint8_t, ldither)[8][8] = ;
static const uint8_t offset[127][2] = ;
static void hardthresh_c(int16_t dst[64], const int16_t src[64],
int qp, const uint8_t *permutation)
static void softthresh_c(int16_t dst[64], const int16_t src[64],
int qp, const uint8_t *permutation)
static void store_slice_c(uint8_t *dst, const int16_t *src,
int dst_linesize, int src_linesize,
int width, int height, int log2_scale,
const uint8_t dither[8][8])
static void store_slice16_c(uint16_t *dst, const int16_t *src,
int dst_linesize, int src_linesize,
int width, int height, int log2_scale,
const uint8_t dither[8][8], int depth)
static inline void add_block(uint16_t *dst, int linesize, const int16_t block[64])
static void filter(SPPContext *p, uint8_t *dst, uint8_t *src,
int dst_linesize, int src_linesize, int width, int height,
const uint8_t *qp_table, int qp_stride, int is_luma, int depth)
static int query_formats(AVFilterContext *ctx)
static int config_input(AVFilterLink *inlink)
static int filter_frame(AVFilterLink *inlink, AVFrame *in)
static int process_command(AVFilterContext *ctx, const char *cmd, const char *args,
char *res, int res_len, int flags)
static av_cold int init_dict(AVFilterContext *ctx, AVDictionary **opts)
static av_cold void uninit(AVFilterContext *ctx)
static const AVFilterPad spp_inputs[] = ;
static const AVFilterPad spp_outputs[] = ;
AVFilter ff_vf_spp = ;
