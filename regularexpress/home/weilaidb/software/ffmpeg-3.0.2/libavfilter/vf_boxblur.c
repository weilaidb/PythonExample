static const char *const var_names[] = ;
enum var_name ;
typedef struct FilterParam  FilterParam;
typedef struct BoxBlurContext  BoxBlurContext;
#define Y 0
#define U 1
#define V 2
#define A 3
static av_cold int init(AVFilterContext *ctx)
static av_cold void uninit(AVFilterContext *ctx)
static int query_formats(AVFilterContext *ctx)
static int config_input(AVFilterLink *inlink)
#define BLUR(type, depth)                                                   \
static inline void blur ## depth(type *dst, int dst_step, const type *src,  \
int src_step, int len, int radius)         \
BLUR(uint8_t,   8)
BLUR(uint16_t, 16)
#undef BLUR
static inline void blur(uint8_t *dst, int dst_step, const uint8_t *src, int src_step,
int len, int radius, int pixsize)
static inline void blur_power(uint8_t *dst, int dst_step, const uint8_t *src, int src_step,
int len, int radius, int power, uint8_t *temp[2], int pixsize)
static void hblur(uint8_t *dst, int dst_linesize, const uint8_t *src, int src_linesize,
int w, int h, int radius, int power, uint8_t *temp[2], int pixsize)
static void vblur(uint8_t *dst, int dst_linesize, const uint8_t *src, int src_linesize,
int w, int h, int radius, int power, uint8_t *temp[2], int pixsize)
static int filter_frame(AVFilterLink *inlink, AVFrame *in)
#define OFFSET(x) offsetof(BoxBlurContext, x)
#define FLAGS AV_OPT_FLAG_VIDEO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
static const AVOption boxblur_options[] = ;
AVFILTER_DEFINE_CLASS(boxblur);
static const AVFilterPad avfilter_vf_boxblur_inputs[] = ;
static const AVFilterPad avfilter_vf_boxblur_outputs[] = ;
AVFilter ff_vf_boxblur = ;
