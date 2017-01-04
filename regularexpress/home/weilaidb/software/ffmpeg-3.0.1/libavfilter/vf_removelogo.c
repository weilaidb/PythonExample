typedef struct  RemovelogoContext;
#define OFFSET(x) offsetof(RemovelogoContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
static const AVOption removelogo_options[] = ;
AVFILTER_DEFINE_CLASS(removelogo);
#define apply_mask_fudge_factor(x) (((x) >> 2) + (x))
static void convert_mask_to_strength_mask(uint8_t *data, int linesize,
int w, int h, int min_val,
int *max_mask_size)
static int query_formats(AVFilterContext *ctx)
static int load_mask(uint8_t **mask, int *w, int *h,
const char *filename, void *log_ctx)
static void generate_half_size_image(const uint8_t *src_data, int src_linesize,
uint8_t *dst_data, int dst_linesize,
int src_w, int src_h,
int *max_mask_size)
static av_cold int init(AVFilterContext *ctx)
static int config_props_input(AVFilterLink *inlink)
static unsigned int blur_pixel(int ***mask,
const uint8_t *mask_data, int mask_linesize,
uint8_t       *image_data, int image_linesize,
int w, int h, int x, int y)
static void blur_image(int ***mask,
const uint8_t *src_data,  int src_linesize,
uint8_t *dst_data,  int dst_linesize,
const uint8_t *mask_data, int mask_linesize,
int w, int h, int direct,
FFBoundingBox *bbox)
static int filter_frame(AVFilterLink *inlink, AVFrame *inpicref)
static av_cold void uninit(AVFilterContext *ctx)
static const AVFilterPad removelogo_inputs[] = ;
static const AVFilterPad removelogo_outputs[] = ;
AVFilter ff_vf_removelogo = ;
