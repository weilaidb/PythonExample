typedef struct ChromakeyContext  ChromakeyContext;
static uint8_t do_chromakey_pixel(ChromakeyContext *ctx, uint8_t u[9], uint8_t v[9])
static av_always_inline void get_pixel_uv(AVFrame *frame, int hsub_log2, int vsub_log2, int x, int y, uint8_t *u, uint8_t *v)
static int do_chromakey_slice(AVFilterContext *avctx, void *arg, int jobnr, int nb_jobs)
static int filter_frame(AVFilterLink *link, AVFrame *frame)
#define FIXNUM(x) lrint((x) * (1 << 10))
#define RGB_TO_U(rgb) (((- FIXNUM(0.16874) * rgb[0] - FIXNUM(0.33126) * rgb[1] + FIXNUM(0.50000) * rgb[2] + (1 << 9) - 1) >> 10) + 128)
#define RGB_TO_V(rgb) (((  FIXNUM(0.50000) * rgb[0] - FIXNUM(0.41869) * rgb[1] - FIXNUM(0.08131) * rgb[2] + (1 << 9) - 1) >> 10) + 128)
static av_cold int initialize_chromakey(AVFilterContext *avctx)
static av_cold int query_formats(AVFilterContext *avctx)
static av_cold int config_input(AVFilterLink *inlink)
static const AVFilterPad chromakey_inputs[] = ;
static const AVFilterPad chromakey_outputs[] = ;
#define OFFSET(x) offsetof(ChromakeyContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
static const AVOption chromakey_options[] = ;
AVFILTER_DEFINE_CLASS(chromakey);
AVFilter ff_vf_chromakey = ;
