static const char *const var_names[] = ;
enum var_name ;
static int query_formats(AVFilterContext *ctx)
typedef struct PadContext  PadContext;
static int config_input(AVFilterLink *inlink)
static int config_output(AVFilterLink *outlink)
static AVFrame *get_video_buffer(AVFilterLink *inlink, int w, int h)
static int buffer_needs_copy(PadContext *s, AVFrame *frame, AVBufferRef *buf)
static int frame_needs_copy(PadContext *s, AVFrame *frame)
static int filter_frame(AVFilterLink *inlink, AVFrame *in)
#define OFFSET(x) offsetof(PadContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
static const AVOption pad_options[] = ;
AVFILTER_DEFINE_CLASS(pad);
static const AVFilterPad avfilter_vf_pad_inputs[] = ;
static const AVFilterPad avfilter_vf_pad_outputs[] = ;
AVFilter ff_vf_pad = ;
