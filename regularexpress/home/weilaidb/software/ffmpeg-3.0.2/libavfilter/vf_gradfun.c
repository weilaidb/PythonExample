DECLARE_ALIGNED(16, static const uint16_t, dither)[8][8] = ;
void ff_gradfun_filter_line_c(uint8_t *dst, const uint8_t *src, const uint16_t *dc, int width, int thresh, const uint16_t *dithers)
void ff_gradfun_blur_line_c(uint16_t *dc, uint16_t *buf, const uint16_t *buf1, const uint8_t *src, int src_linesize, int width)
static void filter(GradFunContext *ctx, uint8_t *dst, const uint8_t *src, int width, int height, int dst_linesize, int src_linesize, int r)
static av_cold int init(AVFilterContext *ctx)
static av_cold void uninit(AVFilterContext *ctx)
static int query_formats(AVFilterContext *ctx)
static int config_input(AVFilterLink *inlink)
static int filter_frame(AVFilterLink *inlink, AVFrame *in)
#define OFFSET(x) offsetof(GradFunContext, x)
#define FLAGS AV_OPT_FLAG_VIDEO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
static const AVOption gradfun_options[] = ;
AVFILTER_DEFINE_CLASS(gradfun);
static const AVFilterPad avfilter_vf_gradfun_inputs[] = ;
static const AVFilterPad avfilter_vf_gradfun_outputs[] = ;
AVFilter ff_vf_gradfun = ;
