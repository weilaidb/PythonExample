typedef struct MovieStream  MovieStream;
typedef struct MovieContext  MovieContext;
OFFSET offsetof(MovieContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM | AV_OPT_FLAG_AUDIO_PARAM | AV_OPT_FLAG_VIDEO_PARAM
static const AVOption movie_options[]= ;
movie_config_output_props;
movie_request_frame;
*find_stream
open_stream
guess_channel_layout
movie_common_init
movie_uninit
movie_query_formats
movie_config_output_props
*describe_frame_to_str
rewind_file
movie_push_frame
movie_request_frame
process_command
AVFILTER_DEFINE_CLASS;
AVFilter ff_avsrc_movie = ;
#if CONFIG_AMOVIE_FILTER
AVFILTER_DEFINE_CLASS;
AVFilter ff_avsrc_amovie = ;
