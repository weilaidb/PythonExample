#define COMMAND_FLAG_ENTER 1
#define COMMAND_FLAG_LEAVE 2
static inline char *make_command_flags_str(AVBPrint *pbuf, int flags)
typedef struct  Command;
typedef struct  Interval;
typedef struct  SendCmdContext;
#define OFFSET(x) offsetof(SendCmdContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM | AV_OPT_FLAG_AUDIO_PARAM | AV_OPT_FLAG_VIDEO_PARAM
static const AVOption options[] = ;
#define SPACES " \f\t\n\r"
static void skip_comments(const char **buf)
#define COMMAND_DELIMS " \f\t\n\r,;"
static int parse_command(Command *cmd, int cmd_count, int interval_count,
const char **buf, void *log_ctx)
static int parse_commands(Command **cmds, int *nb_cmds, int interval_count,
const char **buf, void *log_ctx)
#define DELIMS " \f\t\n\r,;"
static int parse_interval(Interval *interval, int interval_count,
const char **buf, void *log_ctx)
static int parse_intervals(Interval **intervals, int *nb_intervals,
const char *buf, void *log_ctx)
static int cmp_intervals(const void *a, const void *b)
static av_cold int init(AVFilterContext *ctx)
static av_cold void uninit(AVFilterContext *ctx)
static int filter_frame(AVFilterLink *inlink, AVFrame *ref)
#if CONFIG_SENDCMD_FILTER
#define sendcmd_options options
AVFILTER_DEFINE_CLASS(sendcmd);
static const AVFilterPad sendcmd_inputs[] = ;
static const AVFilterPad sendcmd_outputs[] = ;
AVFilter ff_vf_sendcmd = ;
#if CONFIG_ASENDCMD_FILTER
#define asendcmd_options options
AVFILTER_DEFINE_CLASS(asendcmd);
static const AVFilterPad asendcmd_inputs[] = ;
static const AVFilterPad asendcmd_outputs[] = ;
AVFilter ff_af_asendcmd = ;
