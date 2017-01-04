typedef struct PSNRContext  PSNRContext;
#define OFFSET(x) offsetof(PSNRContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
static const AVOption psnr_options[] = ;
AVFILTER_DEFINE_CLASS(psnr);
static inline unsigned pow2(unsigned base)
static inline double get_psnr(double mse, uint64_t nb_frames, int max)
static uint64_t sse_line_8bit(const uint8_t *main_line,  const uint8_t *ref_line, int outw)
static uint64_t sse_line_16bit(const uint8_t *_main_line, const uint8_t *_ref_line, int outw)
static inline
void compute_images_mse(PSNRContext *s,
const uint8_t *main_data[4], const int main_linesizes[4],
const uint8_t *ref_data[4], const int ref_linesizes[4],
int w, int h, double mse[4])
static void set_meta(AVDictionary **metadata, const char *key, char comp, float d)
static AVFrame *do_psnr(AVFilterContext *ctx, AVFrame *main,
const AVFrame *ref)
static av_cold int init(AVFilterContext *ctx)
static int query_formats(AVFilterContext *ctx)
static int config_input_ref(AVFilterLink *inlink)
static int config_output(AVFilterLink *outlink)
static int filter_frame(AVFilterLink *inlink, AVFrame *inpicref)
static int request_frame(AVFilterLink *outlink)
static av_cold void uninit(AVFilterContext *ctx)
static const AVFilterPad psnr_inputs[] = ;
static const AVFilterPad psnr_outputs[] = ;
AVFilter ff_vf_psnr = ;
