typedef struct BufferSinkContext  BufferSinkContext;
#define NB_ITEMS(list) (list ## _size / sizeof(*list))
#define FIFO_INIT_SIZE 8
#define FIFO_INIT_ELEMENT_SIZE sizeof(void *)
static av_cold void uninit(AVFilterContext *ctx)
static int add_buffer_ref(AVFilterContext *ctx, AVFrame *ref)
static int filter_frame(AVFilterLink *link, AVFrame *frame)
int attribute_align_arg av_buffersink_get_frame(AVFilterContext *ctx, AVFrame *frame)
int attribute_align_arg av_buffersink_get_frame_flags(AVFilterContext *ctx, AVFrame *frame, int flags)
static int read_from_fifo(AVFilterContext *ctx, AVFrame *frame,
int nb_samples)
int attribute_align_arg av_buffersink_get_samples(AVFilterContext *ctx,
AVFrame *frame, int nb_samples)
AVBufferSinkParams *av_buffersink_params_alloc(void)
AVABufferSinkParams *av_abuffersink_params_alloc(void)
static av_cold int common_init(AVFilterContext *ctx)
void av_buffersink_set_frame_size(AVFilterContext *ctx, unsigned frame_size)
AVRational av_buffersink_get_frame_rate(AVFilterContext *ctx)
static av_cold int vsink_init(AVFilterContext *ctx, void *opaque)
#define CHECK_LIST_SIZE(field) \
if (buf->field ## _size % sizeof(*buf->field))
static int vsink_query_formats(AVFilterContext *ctx)
static av_cold int asink_init(AVFilterContext *ctx, void *opaque)
static int asink_query_formats(AVFilterContext *ctx)
#define OFFSET(x) offsetof(BufferSinkContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
static const AVOption buffersink_options[] = ;
#undef FLAGS
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
static const AVOption abuffersink_options[] = ;
#undef FLAGS
AVFILTER_DEFINE_CLASS(buffersink);
AVFILTER_DEFINE_CLASS(abuffersink);
static const AVFilterPad avfilter_vsink_buffer_inputs[] = ;
AVFilter ff_vsink_buffer = ;
static const AVFilterPad avfilter_asink_abuffer_inputs[] = ;
AVFilter ff_asink_abuffer = ;
