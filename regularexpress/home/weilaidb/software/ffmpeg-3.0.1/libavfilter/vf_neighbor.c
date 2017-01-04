typedef struct NContext  NContext;
static int query_formats(AVFilterContext *ctx)
static av_cold void uninit(AVFilterContext *ctx)
static inline void line_copy8(uint8_t *line, const uint8_t *srcp, int width, int mergin)
static void erosion(uint8_t *dst, const uint8_t *p1, int width,
int threshold, const uint8_t *coordinates[], int coord)
static void dilation(uint8_t *dst, const uint8_t *p1, int width,
int threshold, const uint8_t *coordinates[], int coord)
static void deflate(uint8_t *dst, const uint8_t *p1, int width,
int threshold, const uint8_t *coordinates[], int coord)
static void inflate(uint8_t *dst, const uint8_t *p1, int width,
int threshold, const uint8_t *coordinates[], int coord)
static int config_input(AVFilterLink *inlink)
static int filter_frame(AVFilterLink *inlink, AVFrame *in)
static const AVFilterPad neighbor_inputs[] = ;
static const AVFilterPad neighbor_outputs[] = ;
#define OFFSET(x) offsetof(NContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
#define DEFINE_NEIGHBOR_FILTER(name_, description_)          \
AVFILTER_DEFINE_CLASS(name_);                                \
\
AVFilter ff_vf_##name_ =
#if CONFIG_EROSION_FILTER
static const AVOption erosion_options[] = ;
DEFINE_NEIGHBOR_FILTER(erosion, "Apply erosion effect.");
#if CONFIG_DILATION_FILTER
static const AVOption dilation_options[] = ;
DEFINE_NEIGHBOR_FILTER(dilation, "Apply dilation effect.");
#if CONFIG_DEFLATE_FILTER
static const AVOption deflate_options[] = ;
DEFINE_NEIGHBOR_FILTER(deflate, "Apply deflate effect.");
#if CONFIG_INFLATE_FILTER
static const AVOption inflate_options[] = ;
DEFINE_NEIGHBOR_FILTER(inflate, "Apply inflate effect.");
