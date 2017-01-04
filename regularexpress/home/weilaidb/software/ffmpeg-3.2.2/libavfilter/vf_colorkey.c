typedef struct ColorkeyContext  ColorkeyContext;
static uint8_t do_colorkey_pixel(ColorkeyContext *ctx, uint8_t r, uint8_t g, uint8_t b)
static int do_colorkey_slice(AVFilterContext *avctx, void *arg, int jobnr, int nb_jobs)
static int filter_frame(AVFilterLink *link, AVFrame *frame)
static av_cold int config_output(AVFilterLink *outlink)
static av_cold int query_formats(AVFilterContext *avctx)
static const AVFilterPad colorkey_inputs[] = ;
static const AVFilterPad colorkey_outputs[] = ;
#define OFFSET(x) offsetof(ColorkeyContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
static const AVOption colorkey_options[] = ;
AVFILTER_DEFINE_CLASS(colorkey);
AVFilter ff_vf_colorkey = ;
