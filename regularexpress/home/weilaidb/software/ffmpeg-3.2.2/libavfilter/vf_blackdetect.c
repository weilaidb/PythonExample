typedef struct  BlackDetectContext;
OFFSET offsetof(BlackDetectContext, x)
#define FLAGS AV_OPT_FLAG_VIDEO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
static const AVOption blackdetect_options[] = ;
AVFILTER_DEFINE_CLASS(blackdetect);
#define YUVJ_FORMATS \
AV_PIX_FMT_YUVJ411P, AV_PIX_FMT_YUVJ420P, AV_PIX_FMT_YUVJ422P, AV_PIX_FMT_YUVJ444P, AV_PIX_FMT_YUVJ440P
static const enum AVPixelFormat yuvj_formats[] = ;
query_formats
config_input
check_black_end
request_frame
filter_frame
static const AVFilterPad blackdetect_inputs[] = ;
static const AVFilterPad blackdetect_outputs[] = ;
AVFilter ff_vf_blackdetect = ;
