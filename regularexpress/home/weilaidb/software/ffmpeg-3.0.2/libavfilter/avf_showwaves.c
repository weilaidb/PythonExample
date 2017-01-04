enum ShowWavesMode ;
enum ShowWavesScale ;
struct frame_node ;
typedef struct  ShowWavesContext;
#define OFFSET(x) offsetof(ShowWavesContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
static const AVOption showwaves_options[] = ;
AVFILTER_DEFINE_CLASS(showwaves);
static av_cold void uninit(AVFilterContext *ctx)
static int query_formats(AVFilterContext *ctx)
static int get_lin_h(int16_t sample, int height)
static int get_lin_h2(int16_t sample, int height)
static int get_log_h(int16_t sample, int height)
static int get_log_h2(int16_t sample, int height)
static void draw_sample_point_rgba(uint8_t *buf, int height, int linesize,
int16_t *prev_y,
const uint8_t color[4], int h)
static void draw_sample_line_rgba(uint8_t *buf, int height, int linesize,
int16_t *prev_y,
const uint8_t color[4], int h)
static void draw_sample_p2p_rgba(uint8_t *buf, int height, int linesize,
int16_t *prev_y,
const uint8_t color[4], int h)
static void draw_sample_cline_rgba(uint8_t *buf, int height, int linesize,
int16_t *prev_y,
const uint8_t color[4], int h)
static void draw_sample_point_gray(uint8_t *buf, int height, int linesize,
int16_t *prev_y,
const uint8_t color[4], int h)
static void draw_sample_line_gray(uint8_t *buf, int height, int linesize,
int16_t *prev_y,
const uint8_t color[4], int h)
static void draw_sample_p2p_gray(uint8_t *buf, int height, int linesize,
int16_t *prev_y,
const uint8_t color[4], int h)
static void draw_sample_cline_gray(uint8_t *buf, int height, int linesize,
int16_t *prev_y,
const uint8_t color[4], int h)
static int config_output(AVFilterLink *outlink)
inline static int push_frame(AVFilterLink *outlink)
static int push_single_pic(AVFilterLink *outlink)
static int request_frame(AVFilterLink *outlink)
static int alloc_out_frame(ShowWavesContext *showwaves, const int16_t *p,
const AVFilterLink *inlink, AVFilterLink *outlink,
const AVFrame *in)
static av_cold int init(AVFilterContext *ctx)
#if CONFIG_SHOWWAVES_FILTER
static int showwaves_filter_frame(AVFilterLink *inlink, AVFrame *insamples)
static const AVFilterPad showwaves_inputs[] = ;
static const AVFilterPad showwaves_outputs[] = ;
AVFilter ff_avf_showwaves = ;
#if CONFIG_SHOWWAVESPIC_FILTER
#define OFFSET(x) offsetof(ShowWavesContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
static const AVOption showwavespic_options[] = ;
AVFILTER_DEFINE_CLASS(showwavespic);
static int showwavespic_config_input(AVFilterLink *inlink)
static int showwavespic_filter_frame(AVFilterLink *inlink, AVFrame *insamples)
static const AVFilterPad showwavespic_inputs[] = ;
static const AVFilterPad showwavespic_outputs[] = ;
AVFilter ff_avf_showwavespic = ;
