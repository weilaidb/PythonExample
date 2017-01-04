typedef struct ChanDelay  ChanDelay;
typedef struct AudioDelayContext  AudioDelayContext;
#define OFFSET(x) offsetof(AudioDelayContext, x)
#define A AV_OPT_FLAG_AUDIO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
static const AVOption adelay_options[] = ;
AVFILTER_DEFINE_CLASS(adelay);
static int query_formats(AVFilterContext *ctx)
#define DELAY(name, type, fill)                                           \
static void delay_channel_## name ##p(ChanDelay *d, int nb_samples,       \
const uint8_t *ssrc, uint8_t *ddst) \
DELAY(u8,  uint8_t, 0x80)
DELAY(s16, int16_t, 0)
DELAY(s32, int32_t, 0)
DELAY(flt, float,   0)
DELAY(dbl, double,  0)
static int config_input(AVFilterLink *inlink)
static int filter_frame(AVFilterLink *inlink, AVFrame *frame)
static int request_frame(AVFilterLink *outlink)
static av_cold void uninit(AVFilterContext *ctx)
static const AVFilterPad adelay_inputs[] = ;
static const AVFilterPad adelay_outputs[] = ;
AVFilter ff_af_adelay = ;
