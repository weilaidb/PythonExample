typedef struct MovieStream  MovieStream;
typedef struct MovieContext  MovieContext;
#define OFFSET(x) offsetof(MovieContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM | AV_OPT_FLAG_AUDIO_PARAM | AV_OPT_FLAG_VIDEO_PARAM
static const AVOption movie_options[]= ;
static int movie_config_output_props(AVFilterLink *outlink);
static int movie_request_frame(AVFilterLink *outlink);
static AVStream *find_stream(void *log, AVFormatContext *avf, const char *spec)
static int open_stream(void *log, MovieStream *st)
static int guess_channel_layout(MovieStream *st, int st_index, void *log_ctx)
static av_cold int movie_common_init(AVFilterContext *ctx)
static av_cold void movie_uninit(AVFilterContext *ctx)
static int movie_query_formats(AVFilterContext *ctx)
static int movie_config_output_props(AVFilterLink *outlink)
static char *describe_frame_to_str(char *dst, size_t dst_size,
AVFrame *frame, enum AVMediaType frame_type,
AVFilterLink *link)
static int rewind_file(AVFilterContext *ctx)
static int movie_push_frame(AVFilterContext *ctx, unsigned out_id)
static int movie_request_frame(AVFilterLink *outlink)
#if CONFIG_MOVIE_FILTER
AVFILTER_DEFINE_CLASS(movie);
AVFilter ff_avsrc_movie = ;
#if CONFIG_AMOVIE_FILTER
#define amovie_options movie_options
AVFILTER_DEFINE_CLASS(amovie);
AVFilter ff_avsrc_amovie = ;
