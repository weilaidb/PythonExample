typedef struct QPContext  QPContext;
#define OFFSET(x) offsetof(QPContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
static const AVOption qp_options[] = ;
AVFILTER_DEFINE_CLASS(qp);
static int config_input(AVFilterLink *inlink)
static int filter_frame(AVFilterLink *inlink, AVFrame *in)
static const AVFilterPad qp_inputs[] = ;
static const AVFilterPad qp_outputs[] = ;
AVFilter ff_vf_qp = ;
