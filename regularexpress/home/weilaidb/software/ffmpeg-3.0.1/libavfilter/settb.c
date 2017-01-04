static const char *const var_names[] = ;
enum var_name ;
typedef struct SetTBContext  SetTBContext;
#define OFFSET(x) offsetof(SetTBContext, x)
#define DEFINE_OPTIONS(filt_name, filt_type)                                               \
static const AVOption filt_name##_options[] =
static int config_output_props(AVFilterLink *outlink)
static int filter_frame(AVFilterLink *inlink, AVFrame *frame)
#if CONFIG_SETTB_FILTER
DEFINE_OPTIONS(settb, VIDEO);
AVFILTER_DEFINE_CLASS(settb);
static const AVFilterPad avfilter_vf_settb_inputs[] = ;
static const AVFilterPad avfilter_vf_settb_outputs[] = ;
AVFilter ff_vf_settb = ;
#if CONFIG_ASETTB_FILTER
DEFINE_OPTIONS(asettb, AUDIO);
AVFILTER_DEFINE_CLASS(asettb);
static const AVFilterPad avfilter_af_asettb_inputs[] = ;
static const AVFilterPad avfilter_af_asettb_outputs[] = ;
AVFilter ff_af_asettb = ;
