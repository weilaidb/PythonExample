#define MAX_CHANNELS 63
#define PRE_B0  1.53512485958697
#define PRE_B1 -2.69169618940638
#define PRE_B2  1.19839281085285
#define PRE_A1 -1.69065929318241
#define PRE_A2  0.73248077421585
#define RLB_B0  1.0
#define RLB_B1 -2.0
#define RLB_B2  1.0
#define RLB_A1 -1.99004745483398
#define RLB_A2  0.99007225036621
#define ABS_THRES    -70
#define ABS_UP_THRES  10
#define HIST_GRAIN   100
#define HIST_SIZE  ((ABS_UP_THRES - ABS_THRES) * HIST_GRAIN + 1)
struct hist_entry ;
struct integrator ;
struct rect ;
typedef struct  EBUR128Context;
enum ;
#define OFFSET(x) offsetof(EBUR128Context, x)
#define A AV_OPT_FLAG_AUDIO_PARAM
#define V AV_OPT_FLAG_VIDEO_PARAM
#define F AV_OPT_FLAG_FILTERING_PARAM
static const AVOption ebur128_options[] = ;
AVFILTER_DEFINE_CLASS(ebur128);
static const uint8_t graph_colors[] = ;
static const uint8_t *get_graph_color(const EBUR128Context *ebur128, int v, int y)
static inline int lu_to_y(const EBUR128Context *ebur128, double v)
#define FONT8   0
#define FONT16  1
static const uint8_t font_colors[] = ;
static void drawtext(AVFrame *pic, int x, int y, int ftid, const uint8_t *color, const char *fmt, ...)
static void drawline(AVFrame *pic, int x, int y, int len, int step)
static int config_video_output(AVFilterLink *outlink)
static int config_audio_input(AVFilterLink *inlink)
static int config_audio_output(AVFilterLink *outlink)
#define ENERGY(loudness) (ff_exp10(((loudness) + 0.691) / 10.))
#define LOUDNESS(energy) (-0.691 + 10 * log10(energy))
#define DBFS(energy) (20 * log10(energy))
static struct hist_entry *get_histogram(void)
static av_cold int init(AVFilterContext *ctx)
#define HIST_POS(power) (int)(((power) - ABS_THRES) * HIST_GRAIN)
static int gate_update(struct integrator *integ, double power,
double loudness, int gate_thres)
static int filter_frame(AVFilterLink *inlink, AVFrame *insamples)
static int query_formats(AVFilterContext *ctx)
static av_cold void uninit(AVFilterContext *ctx)
static const AVFilterPad ebur128_inputs[] = ;
AVFilter ff_af_ebur128 = ;
