typedef struct ThreadData  ThreadData;
#define OFFSET(x) offsetof(NoiseContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
#define NOISE_PARAMS(name, x, param)                                                                                             \
,        \
,        \
,        \
, \
,      \
,                            \
,                     \
,                            \
,
static const AVOption noise_options[] = ;
AVFILTER_DEFINE_CLASS(noise);
static const int8_t patt[4] = ;
#define RAND_N(range) ((int) ((double) range * av_lfg_get(lfg) / (UINT_MAX + 1.0)))
static av_cold int init_noise(NoiseContext *n, int comp)
static int query_formats(AVFilterContext *ctx)
static int config_input(AVFilterLink *inlink)
void ff_line_noise_c(uint8_t *dst, const uint8_t *src, const int8_t *noise,
int len, int shift)
void ff_line_noise_avg_c(uint8_t *dst, const uint8_t *src,
int len, const int8_t * const *shift)
static void noise(uint8_t *dst, const uint8_t *src,
int dst_linesize, int src_linesize,
int width, int start, int end, NoiseContext *n, int comp)
static int filter_slice(AVFilterContext *ctx, void *arg, int jobnr, int nb_jobs)
static int filter_frame(AVFilterLink *inlink, AVFrame *inpicref)
static av_cold int init(AVFilterContext *ctx)
static av_cold void uninit(AVFilterContext *ctx)
static const AVFilterPad noise_inputs[] = ;
static const AVFilterPad noise_outputs[] = ;
AVFilter ff_vf_noise = ;
