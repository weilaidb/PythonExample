typedef struct  BlackDetectContext;
#define OFFSET(x) offsetof(BlackDetectContext, x)
#define FLAGS AV_OPT_FLAG_VIDEO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
static const AVOption blackdetect_options[] = ;
AVFILTER_DEFINE_CLASS(blackdetect);
#define YUVJ_FORMATS \
AV_PIX_FMT_YUVJ411P, AV_PIX_FMT_YUVJ420P, AV_PIX_FMT_YUVJ422P, AV_PIX_FMT_YUVJ444P, AV_PIX_FMT_YUVJ440P
static const enum AVPixelFormat yuvj_formats[] = ;
static int query_formats(AVFilterContext *ctx)
static int config_input(AVFilterLink *inlink)
static void check_black_end(AVFilterContext *ctx)
static int request_frame(AVFilterLink *outlink)
static int filter_frame(AVFilterLink *inlink, AVFrame *picref)
static const AVFilterPad blackdetect_inputs[] = ;
static const AVFilterPad blackdetect_outputs[] = ;
AVFilter ff_vf_blackdetect = ;
