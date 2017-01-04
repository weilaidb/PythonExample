typedef enum  PassthroughType;
enum TransposeDir ;
typedef struct TransContext  TransContext;
static int query_formats(AVFilterContext *ctx)
static int config_props_output(AVFilterLink *outlink)
static AVFrame *get_video_buffer(AVFilterLink *inlink, int w, int h)
typedef struct ThreadData  ThreadData;
static int filter_slice(AVFilterContext *ctx, void *arg, int jobnr,
int nb_jobs)
static int filter_frame(AVFilterLink *inlink, AVFrame *in)
#define OFFSET(x) offsetof(TransContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
static const AVOption transpose_options[] = ;
AVFILTER_DEFINE_CLASS(transpose);
static const AVFilterPad avfilter_vf_transpose_inputs[] = ;
static const AVFilterPad avfilter_vf_transpose_outputs[] = ;
AVFilter ff_vf_transpose = ;
