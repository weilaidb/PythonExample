#define COMMAND_FLAG_ENTER 1
#define COMMAND_FLAG_LEAVE 2
*make_command_flags_str
typedef struct  Command;
typedef struct  Interval;
typedef struct  SendCmdContext;
OFFSET offsetof(SendCmdContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM | AV_OPT_FLAG_AUDIO_PARAM | AV_OPT_FLAG_VIDEO_PARAM
static const AVOption options[] = ;
#define SPACES
skip_comments
#define COMMAND_DELIMS
parse_command
parse_commands
#define DELIMS
parse_interval
parse_intervals
cmp_intervals
init
uninit
filter_frame
#if CONFIG_SENDCMD_FILTER
AVFILTER_DEFINE_CLASS;
static const AVFilterPad sendcmd_inputs[] = ;
static const AVFilterPad sendcmd_outputs[] = ;
AVFilter ff_vf_sendcmd = ;
#if CONFIG_ASENDCMD_FILTER
AVFILTER_DEFINE_CLASS;
static const AVFilterPad asendcmd_inputs[] = ;
static const AVFilterPad asendcmd_outputs[] = ;
AVFilter ff_af_asendcmd = ;
