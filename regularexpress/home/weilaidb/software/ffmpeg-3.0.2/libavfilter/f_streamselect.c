typedef struct StreamSelectContext  StreamSelectContext;
#define OFFSET(x) offsetof(StreamSelectContext, x)
#define FLAGS AV_OPT_FLAG_VIDEO_PARAM | AV_OPT_FLAG_AUDIO_PARAM | AV_OPT_FLAG_FILTERING_PARAM
static const AVOption streamselect_options[] = ;
AVFILTER_DEFINE_CLASS(streamselect);
static int filter_frame(AVFilterLink *inlink, AVFrame *in)
static int process_frame(FFFrameSync *fs)
static int request_frame(AVFilterLink *outlink)
static int config_output(AVFilterLink *outlink)
static int parse_definition(AVFilterContext *ctx, int nb_pads, void *filter_frame, int is_audio)
static int parse_mapping(AVFilterContext *ctx, const char *map)
static int process_command(AVFilterContext *ctx, const char *cmd, const char *args,
char *res, int res_len, int flags)
static av_cold int init(AVFilterContext *ctx)
static av_cold void uninit(AVFilterContext *ctx)
static int query_formats(AVFilterContext *ctx)
AVFilter ff_vf_streamselect = ;
#define astreamselect_options streamselect_options
AVFILTER_DEFINE_CLASS(astreamselect);
AVFilter ff_af_astreamselect = ;
