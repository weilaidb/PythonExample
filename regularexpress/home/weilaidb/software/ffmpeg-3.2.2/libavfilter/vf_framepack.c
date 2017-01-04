#define LEFT  0
#define RIGHT 1
typedef struct FramepackContext  FramepackContext;
static const enum AVPixelFormat formats_supported[] = ;
static int query_formats(AVFilterContext *ctx)
static av_cold void framepack_uninit(AVFilterContext *ctx)
static int config_output(AVFilterLink *outlink)
static void horizontal_frame_pack(AVFilterLink *outlink,
AVFrame *out,
int interleaved)
static void vertical_frame_pack(AVFilterLink *outlink,
AVFrame *out,
int interleaved)
static av_always_inline void spatial_frame_pack(AVFilterLink *outlink,
AVFrame *dst)
static int try_push_frame(AVFilterContext *ctx);
static int filter_frame_left(AVFilterLink *inlink, AVFrame *frame)
static int filter_frame_right(AVFilterLink *inlink, AVFrame *frame)
static int request_frame(AVFilterLink *outlink)
static int try_push_frame(AVFilterContext *ctx)
#define OFFSET(x) offsetof(FramepackContext, x)
#define V AV_OPT_FLAG_VIDEO_PARAM
static const AVOption framepack_options[] = ;
AVFILTER_DEFINE_CLASS(framepack);
static const AVFilterPad framepack_inputs[] = ;
static const AVFilterPad framepack_outputs[] = ;
AVFilter ff_vf_framepack = ;
