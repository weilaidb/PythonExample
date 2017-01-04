static const char *const var_names[] = ;
enum var_name ;
typedef struct SetPTSContext  SetPTSContext;
static av_cold int init(AVFilterContext *ctx)
static int config_input(AVFilterLink *inlink)
#define D2TS(d)  (isnan(d) ? AV_NOPTS_VALUE : (int64_t)(d))
#define TS2D(ts) ((ts) == AV_NOPTS_VALUE ? NAN : (double)(ts))
#define TS2T(ts, tb) ((ts) == AV_NOPTS_VALUE ? NAN : (double)(ts)*av_q2d(tb))
#define BUF_SIZE 64
static inline char *double2int64str(char *buf, double v)
#define d2istr(v) double2int64str((char[BUF_SIZE]), v)
static int filter_frame(AVFilterLink *inlink, AVFrame *frame)
static av_cold void uninit(AVFilterContext *ctx)
#define OFFSET(x) offsetof(SetPTSContext, x)
#define FLAGS AV_OPT_FLAG_VIDEO_PARAM | AV_OPT_FLAG_AUDIO_PARAM | AV_OPT_FLAG_FILTERING_PARAM
static const AVOption options[] = ;
#if CONFIG_SETPTS_FILTER
#define setpts_options options
AVFILTER_DEFINE_CLASS(setpts);
static const AVFilterPad avfilter_vf_setpts_inputs[] = ;
static const AVFilterPad avfilter_vf_setpts_outputs[] = ;
AVFilter ff_vf_setpts = ;
#if CONFIG_ASETPTS_FILTER
#define asetpts_options options
AVFILTER_DEFINE_CLASS(asetpts);
static const AVFilterPad asetpts_inputs[] = ;
static const AVFilterPad asetpts_outputs[] = ;
AVFilter ff_af_asetpts = ;
