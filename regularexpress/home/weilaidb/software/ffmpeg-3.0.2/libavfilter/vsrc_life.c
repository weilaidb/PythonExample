typedef struct  LifeContext;
#define ALIVE_CELL 0xFF
#define OFFSET(x) offsetof(LifeContext, x)
#define FLAGS AV_OPT_FLAG_VIDEO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
static const AVOption life_options[] = ;
AVFILTER_DEFINE_CLASS(life);
static int parse_rule(uint16_t *born_rule, uint16_t *stay_rule,
const char *rule_str, void *log_ctx)
static void show_life_grid(AVFilterContext *ctx)
static int init_pattern_from_file(AVFilterContext *ctx)
static av_cold int init(AVFilterContext *ctx)
static av_cold void uninit(AVFilterContext *ctx)
static int config_props(AVFilterLink *outlink)
static void evolve(AVFilterContext *ctx)
static void fill_picture_monoblack(AVFilterContext *ctx, AVFrame *picref)
#define FAST_DIV255(x) ((((x) + 128) * 257) >> 16)
static void fill_picture_rgb(AVFilterContext *ctx, AVFrame *picref)
static int request_frame(AVFilterLink *outlink)
static int query_formats(AVFilterContext *ctx)
static const AVFilterPad life_outputs[] = ;
AVFilter ff_vsrc_life = ;
