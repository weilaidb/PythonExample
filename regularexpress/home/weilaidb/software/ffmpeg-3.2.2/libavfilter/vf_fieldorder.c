typedef struct FieldOrderContext  FieldOrderContext;
static int query_formats(AVFilterContext *ctx)
static int config_input(AVFilterLink *inlink)
static int filter_frame(AVFilterLink *inlink, AVFrame *frame)
#define OFFSET(x) offsetof(FieldOrderContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
static const AVOption fieldorder_options[] = ;
AVFILTER_DEFINE_CLASS(fieldorder);
static const AVFilterPad avfilter_vf_fieldorder_inputs[] = ;
static const AVFilterPad avfilter_vf_fieldorder_outputs[] = ;
AVFilter ff_vf_fieldorder = ;
