typedef struct W3FDIFContext  W3FDIFContext;
#define OFFSET(x) offsetof(W3FDIFContext, x)
#define FLAGS AV_OPT_FLAG_VIDEO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
#define CONST(name, help, val, unit)
static const AVOption w3fdif_options[] = ;
AVFILTER_DEFINE_CLASS(w3fdif);
static int query_formats(AVFilterContext *ctx)
static void filter_simple_low(int32_t *work_line,
uint8_t *in_lines_cur[2],
const int16_t *coef, int linesize)
static void filter_complex_low(int32_t *work_line,
uint8_t *in_lines_cur[4],
const int16_t *coef, int linesize)
static void filter_simple_high(int32_t *work_line,
uint8_t *in_lines_cur[3],
uint8_t *in_lines_adj[3],
const int16_t *coef, int linesize)
static void filter_complex_high(int32_t *work_line,
uint8_t *in_lines_cur[5],
uint8_t *in_lines_adj[5],
const int16_t *coef, int linesize)
static void filter_scale(uint8_t *out_pixel, const int32_t *work_pixel, int linesize)
static int config_input(AVFilterLink *inlink)
static int config_output(AVFilterLink *outlink)
static const int8_t   n_coef_lf[2] = ;
static const int16_t coef_lf[2][4] = ;
static const int8_t   n_coef_hf[2] = ;
static const int16_t coef_hf[2][5] = ;
typedef struct ThreadData  ThreadData;
static int deinterlace_slice(AVFilterContext *ctx, void *arg, int jobnr, int nb_jobs)
static int filter(AVFilterContext *ctx, int is_second)
static int filter_frame(AVFilterLink *inlink, AVFrame *frame)
static int request_frame(AVFilterLink *outlink)
static av_cold void uninit(AVFilterContext *ctx)
static const AVFilterPad w3fdif_inputs[] = ;
static const AVFilterPad w3fdif_outputs[] = ;
AVFilter ff_vf_w3fdif = ;
