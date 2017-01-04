typedef struct  ZMQContext;
#define OFFSET(x) offsetof(ZMQContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM | AV_OPT_FLAG_AUDIO_PARAM | AV_OPT_FLAG_VIDEO_PARAM
static const AVOption options[] = {
{ "bind_address", "set bind address", OFFSET(bind_address), AV_OPT_TYPE_STRING, {.str = "tcp:
{ "b",            "set bind address", OFFSET(bind_address), AV_OPT_TYPE_STRING, ;
static av_cold int init(AVFilterContext *ctx)
static void av_cold uninit(AVFilterContext *ctx)
typedef struct  Command;
#define SPACES " \f\t\n\r"
static int parse_command(Command *cmd, const char *command_str, void *log_ctx)
static int recv_msg(AVFilterContext *ctx, char **buf, int *buf_size)
static int filter_frame(AVFilterLink *inlink, AVFrame *ref)
#if CONFIG_ZMQ_FILTER
#define zmq_options options
AVFILTER_DEFINE_CLASS(zmq);
static const AVFilterPad zmq_inputs[] = ;
static const AVFilterPad zmq_outputs[] = ;
AVFilter ff_vf_zmq = ;
#if CONFIG_AZMQ_FILTER
#define azmq_options options
AVFILTER_DEFINE_CLASS(azmq);
static const AVFilterPad azmq_inputs[] = ;
static const AVFilterPad azmq_outputs[] = ;
AVFilter ff_af_azmq = ;
