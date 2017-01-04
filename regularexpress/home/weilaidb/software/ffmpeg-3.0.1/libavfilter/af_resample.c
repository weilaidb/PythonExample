typedef struct ResampleContext  ResampleContext;
static av_cold int init(AVFilterContext *ctx, AVDictionary **opts)
static av_cold void uninit(AVFilterContext *ctx)
static int query_formats(AVFilterContext *ctx)
static int config_output(AVFilterLink *outlink)
static int request_frame(AVFilterLink *outlink)
static int filter_frame(AVFilterLink *inlink, AVFrame *in)
static const AVClass *resample_child_class_next(const AVClass *prev)
static void *resample_child_next(void *obj, void *prev)
static const AVClass resample_class = ;
static const AVFilterPad avfilter_af_resample_inputs[] = ;
static const AVFilterPad avfilter_af_resample_outputs[] = ;
AVFilter ff_af_resample = ;
