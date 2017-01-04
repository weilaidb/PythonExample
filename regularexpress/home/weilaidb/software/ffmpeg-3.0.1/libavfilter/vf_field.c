enum FieldType ;
typedef struct  FieldContext;
#define OFFSET(x) offsetof(FieldContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
static const AVOption field_options[] = ;
AVFILTER_DEFINE_CLASS(field);
static int config_props_output(AVFilterLink *outlink)
static int filter_frame(AVFilterLink *inlink, AVFrame *inpicref)
static const AVFilterPad field_inputs[] = ;
static const AVFilterPad field_outputs[] = ;
AVFilter ff_vf_field = ;
