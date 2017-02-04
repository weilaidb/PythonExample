typedef struct BufferSinkContext  BufferSinkContext;
NB_ITEMS (list ## _size / sizeof(*list))
#define FIFO_INIT_SIZE 8
sizeof
uninit
add_buffer_ref
filter_frame
av_buffersink_get_frame
av_buffersink_get_frame_flags
read_from_fifo
av_buffersink_get_samples
*av_buffersink_params_alloc
*av_abuffersink_params_alloc
common_init
av_buffersink_set_frame_size
av_buffersink_get_frame_rate
vsink_init
CHECK_LIST_SIZE \
if (buf->field ## _size % sizeof(*buf->field))
vsink_query_formats
asink_init
asink_query_formats
OFFSET offsetof(BufferSinkContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
static const AVOption buffersink_options[] = ;
#undef FLAGS
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
static const AVOption abuffersink_options[] = ;
AVFILTER_DEFINE_CLASS;
AVFILTER_DEFINE_CLASS(abuffersink);
static const AVFilterPad avfilter_vsink_buffer_inputs[] = ;
AVFilter ff_vsink_buffer = ;
static const AVFilterPad avfilter_asink_abuffer_inputs[] = ;
AVFilter ff_asink_abuffer = ;
