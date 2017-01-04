typedef struct BufferSourceContext  BufferSourceContext;
#define CHECK_VIDEO_PARAM_CHANGE(s, c, width, height, format)\
if (c->w != width || c->h != height || c->pix_fmt != format)
#define CHECK_AUDIO_PARAM_CHANGE(s, c, srate, ch_layout, ch_count, format)\
if (c->sample_fmt != format || c->sample_rate != srate ||\
c->channel_layout != ch_layout || c->channels != ch_count)
AVBufferSrcParameters *av_buffersrc_parameters_alloc(void)
int av_buffersrc_parameters_set(AVFilterContext *ctx, AVBufferSrcParameters *param)
int attribute_align_arg av_buffersrc_write_frame(AVFilterContext *ctx, const AVFrame *frame)
int attribute_align_arg av_buffersrc_add_frame(AVFilterContext *ctx, AVFrame *frame)
static int av_buffersrc_add_frame_internal(AVFilterContext *ctx,
AVFrame *frame, int flags);
int attribute_align_arg av_buffersrc_add_frame_flags(AVFilterContext *ctx, AVFrame *frame, int flags)
static int av_buffersrc_add_frame_internal(AVFilterContext *ctx,
AVFrame *frame, int flags)
static av_cold int init_video(AVFilterContext *ctx)
unsigned av_buffersrc_get_nb_failed_requests(AVFilterContext *buffer_src)
#define OFFSET(x) offsetof(BufferSourceContext, x)
#define A AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_AUDIO_PARAM
#define V AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
static const AVOption buffer_options[] = ;
AVFILTER_DEFINE_CLASS(buffer);
static const AVOption abuffer_options[] = ;
AVFILTER_DEFINE_CLASS(abuffer);
static av_cold int init_audio(AVFilterContext *ctx)
static av_cold void uninit(AVFilterContext *ctx)
static int query_formats(AVFilterContext *ctx)
static int config_props(AVFilterLink *link)
static int request_frame(AVFilterLink *link)
static int poll_frame(AVFilterLink *link)
static const AVFilterPad avfilter_vsrc_buffer_outputs[] = ;
AVFilter ff_vsrc_buffer = ;
static const AVFilterPad avfilter_asrc_abuffer_outputs[] = ;
AVFilter ff_asrc_abuffer = ;
