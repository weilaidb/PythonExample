typedef struct CropDetectContext  CropDetectContext;
static int query_formats(AVFilterContext *ctx)
static int checkline(void *ctx, const unsigned char *src, int stride, int len, int bpp)
static av_cold int init(AVFilterContext *ctx)
static int config_input(AVFilterLink *inlink)
#define SET_META(key, value) \
av_dict_set_int(metadata, key, value, 0)
static int filter_frame(AVFilterLink *inlink, AVFrame *frame)
#define OFFSET(x) offsetof(CropDetectContext, x)
#define FLAGS AV_OPT_FLAG_VIDEO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
static const AVOption cropdetect_options[] = ;
AVFILTER_DEFINE_CLASS(cropdetect);
static const AVFilterPad avfilter_vf_cropdetect_inputs[] = ;
static const AVFilterPad avfilter_vf_cropdetect_outputs[] = ;
AVFilter ff_vf_cropdetect = ;
