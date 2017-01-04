typedef struct FPSContext  FPSContext;
#define OFFSET(x) offsetof(FPSContext, x)
#define V AV_OPT_FLAG_VIDEO_PARAM
#define F AV_OPT_FLAG_FILTERING_PARAM
static const AVOption fps_options[] = ;
AVFILTER_DEFINE_CLASS(fps);
static av_cold int init(AVFilterContext *ctx)
static void flush_fifo(AVFifoBuffer *fifo)
static av_cold void uninit(AVFilterContext *ctx)
static int config_props(AVFilterLink* link)
static int request_frame(AVFilterLink *outlink)
static int write_to_fifo(AVFifoBuffer *fifo, AVFrame *buf)
static int filter_frame(AVFilterLink *inlink, AVFrame *buf)
static const AVFilterPad avfilter_vf_fps_inputs[] = ;
static const AVFilterPad avfilter_vf_fps_outputs[] = ;
AVFilter ff_vf_fps = ;
