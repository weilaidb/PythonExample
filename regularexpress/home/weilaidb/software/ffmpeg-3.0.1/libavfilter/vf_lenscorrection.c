typedef struct LenscorrectionCtx  LenscorrectionCtx;
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
static const AVOption lenscorrection_options[] = ;
AVFILTER_DEFINE_CLASS(lenscorrection);
typedef struct ThreadData  ThreadData;
static int filter_slice(AVFilterContext *ctx, void *arg, int job, int nb_jobs)
static int query_formats(AVFilterContext *ctx)
static av_cold void uninit(AVFilterContext *ctx)
static int config_props(AVFilterLink *outlink)
static int filter_frame(AVFilterLink *inlink, AVFrame *in)
static const AVFilterPad lenscorrection_inputs[] = ;
static const AVFilterPad lenscorrection_outputs[] = ;
AVFilter ff_vf_lenscorrection = ;
