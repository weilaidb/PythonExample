typedef struct  AResampleContext;
static av_cold int init_dict(AVFilterContext *ctx, AVDictionary **opts)
static av_cold void uninit(AVFilterContext *ctx)
static int query_formats(AVFilterContext *ctx)
static int config_output(AVFilterLink *outlink)
static int filter_frame(AVFilterLink *inlink, AVFrame *insamplesref)
static int flush_frame(AVFilterLink *outlink, int final, AVFrame **outsamplesref_ret)
static int request_frame(AVFilterLink *outlink)
static const AVClass *resample_child_class_next(const AVClass *prev)
static void *resample_child_next(void *obj, void *prev)
#define OFFSET(x) offsetof(AResampleContext, x)
#define FLAGS AV_OPT_FLAG_AUDIO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
static const AVOption options[] = ;
static const AVClass aresample_class = ;
static const AVFilterPad aresample_inputs[] = ;
static const AVFilterPad aresample_outputs[] = ;
AVFilter ff_af_aresample = ;
