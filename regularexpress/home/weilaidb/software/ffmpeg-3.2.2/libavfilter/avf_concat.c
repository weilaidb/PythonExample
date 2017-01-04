#define FF_BUFQUEUE_SIZE 256
#define TYPE_ALL 2
typedef struct  ConcatContext;
#define OFFSET(x) offsetof(ConcatContext, x)
#define A AV_OPT_FLAG_AUDIO_PARAM
#define F AV_OPT_FLAG_FILTERING_PARAM
#define V AV_OPT_FLAG_VIDEO_PARAM
static const AVOption concat_options[] = ;
AVFILTER_DEFINE_CLASS(concat);
static int query_formats(AVFilterContext *ctx)
static int config_output(AVFilterLink *outlink)
static int push_frame(AVFilterContext *ctx, unsigned in_no, AVFrame *buf)
static int process_frame(AVFilterLink *inlink, AVFrame *buf)
static AVFrame *get_video_buffer(AVFilterLink *inlink, int w, int h)
static AVFrame *get_audio_buffer(AVFilterLink *inlink, int nb_samples)
static int filter_frame(AVFilterLink *inlink, AVFrame *buf)
static void close_input(AVFilterContext *ctx, unsigned in_no)
static void find_next_delta_ts(AVFilterContext *ctx, int64_t *seg_delta)
static int send_silence(AVFilterContext *ctx, unsigned in_no, unsigned out_no,
int64_t seg_delta)
static int flush_segment(AVFilterContext *ctx)
static int request_frame(AVFilterLink *outlink)
static av_cold int init(AVFilterContext *ctx)
static av_cold void uninit(AVFilterContext *ctx)
AVFilter ff_avf_concat = ;
