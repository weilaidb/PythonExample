typedef struct BufferSourceContext  BufferSourceContext;
CHECK_VIDEO_PARAM_CHANGE\
if (c->w != width || c->h != height || c->pix_fmt != format)
CHECK_AUDIO_PARAM_CHANGE\
if (c->sample_fmt != format || c->sample_rate != srate ||\
c->channel_layout != ch_layout || c->channels != ch_count)
*av_buffersrc_parameters_alloc
av_buffersrc_parameters_set
av_buffersrc_write_frame
av_buffersrc_add_frame
av_buffersrc_add_frame_internal;
av_buffersrc_add_frame_flags
av_buffersrc_add_frame_internal
init_video
av_buffersrc_get_nb_failed_requests
OFFSET offsetof(BufferSourceContext, x)
#define A AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_AUDIO_PARAM
#define V AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
static const AVOption buffer_options[] = ;
AVFILTER_DEFINE_CLASS(buffer);
static const AVOption abuffer_options[] = ;
AVFILTER_DEFINE_CLASS(abuffer);
init_audio
uninit
query_formats
config_props
request_frame
poll_frame
static const AVFilterPad avfilter_vsrc_buffer_outputs[] = ;
AVFilter ff_vsrc_buffer = ;
static const AVFilterPad avfilter_asrc_abuffer_outputs[] = ;
AVFilter ff_asrc_abuffer = ;
