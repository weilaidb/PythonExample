static const char *const var_names[] = ;
enum var_name ;
typedef struct SetPTSContext  SetPTSContext;
init
config_input
D2TS  (isnan(d) ? AV_NOPTS_VALUE : (int64_t)(d))
TS2D ((ts) == AV_NOPTS_VALUE ? NAN : (double)(ts))
TS2T ((ts) == AV_NOPTS_VALUE ? NAN : (double)(ts)*av_q2d(tb))
#define BUF_SIZE 64
*double2int64str
d2istr double2int64str((char[BUF_SIZE]), v)
filter_frame
uninit
OFFSET offsetof(SetPTSContext, x)
#define FLAGS AV_OPT_FLAG_VIDEO_PARAM | AV_OPT_FLAG_AUDIO_PARAM | AV_OPT_FLAG_FILTERING_PARAM
static const AVOption options[] = ,
};
#if CONFIG_SETPTS_FILTER
AVFILTER_DEFINE_CLASS;
static const AVFilterPad avfilter_vf_setpts_inputs[] = ;
static const AVFilterPad avfilter_vf_setpts_outputs[] = ;
AVFilter ff_vf_setpts = ;
#if CONFIG_ASETPTS_FILTER
AVFILTER_DEFINE_CLASS;
static const AVFilterPad asetpts_inputs[] = ;
static const AVFilterPad asetpts_outputs[] = ;
AVFilter ff_af_asetpts = ;
