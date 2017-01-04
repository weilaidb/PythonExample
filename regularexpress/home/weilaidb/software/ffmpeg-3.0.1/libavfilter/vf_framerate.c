#define DEBUG
#define N_SRCE 3
typedef struct FrameRateContext  FrameRateContext;
#define OFFSET(x) offsetof(FrameRateContext, x)
#define V AV_OPT_FLAG_VIDEO_PARAM
#define F AV_OPT_FLAG_FILTERING_PARAM
#define FRAMERATE_FLAG_SCD 01
static const AVOption framerate_options[] = ;
AVFILTER_DEFINE_CLASS(framerate);
static void next_source(AVFilterContext *ctx)
static av_always_inline int64_t sad_8x8_16(const uint16_t *src1, ptrdiff_t stride1,
const uint16_t *src2, ptrdiff_t stride2)
static double get_scene_score16(AVFilterContext *ctx, AVFrame *crnt, AVFrame *next)
static double get_scene_score(AVFilterContext *ctx, AVFrame *crnt, AVFrame *next)
static int blend_frames16(AVFilterContext *ctx, float interpolate,
AVFrame *copy_src1, AVFrame *copy_src2)
static int blend_frames8(AVFilterContext *ctx, float interpolate,
AVFrame *copy_src1, AVFrame *copy_src2)
static int process_work_frame(AVFilterContext *ctx, int stop)
static void set_srce_frame_dest_pts(AVFilterContext *ctx)
static void set_work_frame_pts(AVFilterContext *ctx)
static av_cold int init(AVFilterContext *ctx)
static av_cold void uninit(AVFilterContext *ctx)
static int query_formats(AVFilterContext *ctx)
static int config_input(AVFilterLink *inlink)
static int filter_frame(AVFilterLink *inlink, AVFrame *inpicref)
static int config_output(AVFilterLink *outlink)
static int request_frame(AVFilterLink *outlink)
static const AVFilterPad framerate_inputs[] = ;
static const AVFilterPad framerate_outputs[] = ;
AVFilter ff_vf_framerate = ;
