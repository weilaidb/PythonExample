#define DEFAULT_LENGTH 300
typedef struct ReverseContext  ReverseContext;
static av_cold int init(AVFilterContext *ctx)
static av_cold void uninit(AVFilterContext *ctx)
static int filter_frame(AVFilterLink *inlink, AVFrame *in)
#if CONFIG_REVERSE_FILTER
static int request_frame(AVFilterLink *outlink)
static const AVFilterPad reverse_inputs[] = ;
static const AVFilterPad reverse_outputs[] = ;
AVFilter ff_vf_reverse = ;
#if CONFIG_AREVERSE_FILTER
static int query_formats(AVFilterContext *ctx)
static int areverse_request_frame(AVFilterLink *outlink)
static const AVFilterPad areverse_inputs[] = ;
static const AVFilterPad areverse_outputs[] = ;
AVFilter ff_af_areverse = ;
