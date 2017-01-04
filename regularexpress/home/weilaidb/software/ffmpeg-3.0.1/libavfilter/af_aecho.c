typedef struct AudioEchoContext  AudioEchoContext;
#define OFFSET(x) offsetof(AudioEchoContext, x)
#define A AV_OPT_FLAG_AUDIO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
static const AVOption aecho_options[] = ;
AVFILTER_DEFINE_CLASS(aecho);
static void count_items(char *item_str, int *nb_items)
static void fill_items(char *item_str, int *nb_items, float *items)
static av_cold void uninit(AVFilterContext *ctx)
static av_cold int init(AVFilterContext *ctx)
static int query_formats(AVFilterContext *ctx)
#define MOD(a, b) (((a) >= (b)) ? (a) - (b) : (a))
#define ECHO(name, type, min, max)                                          \
static void echo_samples_## name ##p(AudioEchoContext *ctx,                 \
uint8_t **delayptrs,                   \
uint8_t * const *src, uint8_t **dst,   \
int nb_samples, int channels)          \
ECHO(dbl, double,  -1.0,      1.0      )
ECHO(flt, float,   -1.0,      1.0      )
ECHO(s16, int16_t, INT16_MIN, INT16_MAX)
ECHO(s32, int32_t, INT32_MIN, INT32_MAX)
static int config_output(AVFilterLink *outlink)
static int filter_frame(AVFilterLink *inlink, AVFrame *frame)
static int request_frame(AVFilterLink *outlink)
static const AVFilterPad aecho_inputs[] = ;
static const AVFilterPad aecho_outputs[] = ;
AVFilter ff_af_aecho = ;
