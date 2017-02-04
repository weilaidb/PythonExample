#define FF_BUFQUEUE_SIZE 256
#define TYPE_ALL 2
typedef struct  ConcatContext;
OFFSET offsetof(ConcatContext, x)
#define A AV_OPT_FLAG_AUDIO_PARAM
#define F AV_OPT_FLAG_FILTERING_PARAM
#define V AV_OPT_FLAG_VIDEO_PARAM
static const AVOption concat_options[] = ;
AVFILTER_DEFINE_CLASS(concat);
query_formats
config_output
push_frame
process_frame
*get_video_buffer
*get_audio_buffer
filter_frame
close_input
find_next_delta_ts
send_silence
flush_segment
request_frame
init
uninit
AVFilter ff_avf_concat = ;
