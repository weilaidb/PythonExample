typedef struct AudioPhaserContext  AudioPhaserContext;
#define OFFSET(x) offsetof(AudioPhaserContext, x)
#define FLAGS AV_OPT_FLAG_AUDIO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
static const AVOption aphaser_options[] = ;
AVFILTER_DEFINE_CLASS(aphaser);
static av_cold int init(AVFilterContext *ctx)
static int query_formats(AVFilterContext *ctx)
#define MOD(a, b) (((a) >= (b)) ? (a) - (b) : (a))
#define PHASER_PLANAR(name, type)                                      \
static void phaser_## name ##p(AudioPhaserContext *s,                  \
uint8_t * const *ssrc, uint8_t **ddst,  \
int nb_samples, int channels)           \
#define PHASER(name, type)                                              \
static void phaser_## name (AudioPhaserContext *s,                      \
uint8_t * const *ssrc, uint8_t **ddst,      \
int nb_samples, int channels)               \
PHASER_PLANAR(dbl, double)
PHASER_PLANAR(flt, float)
PHASER_PLANAR(s16, int16_t)
PHASER_PLANAR(s32, int32_t)
PHASER(dbl, double)
PHASER(flt, float)
PHASER(s16, int16_t)
PHASER(s32, int32_t)
static int config_output(AVFilterLink *outlink)
static int filter_frame(AVFilterLink *inlink, AVFrame *inbuf)
static av_cold void uninit(AVFilterContext *ctx)
static const AVFilterPad aphaser_inputs[] = ;
static const AVFilterPad aphaser_outputs[] = ;
AVFilter ff_af_aphaser = ;
