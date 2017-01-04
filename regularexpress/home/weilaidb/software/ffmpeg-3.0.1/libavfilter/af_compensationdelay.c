typedef struct CompensationDelayContext  CompensationDelayContext;
#define OFFSET(x) offsetof(CompensationDelayContext, x)
#define A AV_OPT_FLAG_AUDIO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
static const AVOption compensationdelay_options[] = ;
AVFILTER_DEFINE_CLASS(compensationdelay);
#define COMP_DELAY_MAX_DISTANCE            (100.0 * 100.0 + 100.0 * 1.0 + 1.0)
#define COMP_DELAY_SOUND_SPEED_KM_H(temp)  1.85325 * (643.95 * sqrt(((temp + 273.15) / 273.15)))
#define COMP_DELAY_SOUND_SPEED_CM_S(temp)  (COMP_DELAY_SOUND_SPEED_KM_H(temp) * (1000.0 * 100.0) / (60.0 * 60.0))
#define COMP_DELAY_SOUND_FRONT_DELAY(temp) (1.0 / COMP_DELAY_SOUND_SPEED_CM_S(temp))
#define COMP_DELAY_MAX_DELAY               (COMP_DELAY_MAX_DISTANCE * COMP_DELAY_SOUND_FRONT_DELAY(50))
static int query_formats(AVFilterContext *ctx)
static int config_input(AVFilterLink *inlink)
static int filter_frame(AVFilterLink *inlink, AVFrame *in)
static av_cold void uninit(AVFilterContext *ctx)
static const AVFilterPad compensationdelay_inputs[] = ;
static const AVFilterPad compensationdelay_outputs[] = ;
AVFilter ff_af_compensationdelay = ;
