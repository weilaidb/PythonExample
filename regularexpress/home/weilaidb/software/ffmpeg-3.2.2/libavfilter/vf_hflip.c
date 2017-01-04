typedef struct FlipContext  FlipContext;
static const AVOption hflip_options[] = ;
AVFILTER_DEFINE_CLASS(hflip);
static int query_formats(AVFilterContext *ctx)
static int config_props(AVFilterLink *inlink)
typedef struct ThreadData  ThreadData;
static int filter_slice(AVFilterContext *ctx, void *arg, int job, int nb_jobs)
static int filter_frame(AVFilterLink *inlink, AVFrame *in)
static const AVFilterPad avfilter_vf_hflip_inputs[] = ;
static const AVFilterPad avfilter_vf_hflip_outputs[] = ;
AVFilter ff_vf_hflip = ;
