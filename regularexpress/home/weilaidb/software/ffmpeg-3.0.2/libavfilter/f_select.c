static const char *const var_names[] = ;
enum var_name ;
typedef struct SelectContext  SelectContext;
#define OFFSET(x) offsetof(SelectContext, x)
#define DEFINE_OPTIONS(filt_name, FLAGS)                            \
static const AVOption filt_name##_options[] =
static int request_frame(AVFilterLink *outlink);
static av_cold int init(AVFilterContext *ctx)
#define INTERLACE_TYPE_P 0
#define INTERLACE_TYPE_T 1
#define INTERLACE_TYPE_B 2
static int config_input(AVFilterLink *inlink)
static double get_scene_score(AVFilterContext *ctx, AVFrame *frame)
static double get_concatdec_select(AVFrame *frame, int64_t pts)
#define D2TS(d)  (isnan(d) ? AV_NOPTS_VALUE : (int64_t)(d))
#define TS2D(ts) ((ts) == AV_NOPTS_VALUE ? NAN : (double)(ts))
static void select_frame(AVFilterContext *ctx, AVFrame *frame)
static int filter_frame(AVFilterLink *inlink, AVFrame *frame)
static int request_frame(AVFilterLink *outlink)
static av_cold void uninit(AVFilterContext *ctx)
static int query_formats(AVFilterContext *ctx)
#if CONFIG_ASELECT_FILTER
DEFINE_OPTIONS(aselect, AV_OPT_FLAG_AUDIO_PARAM|AV_OPT_FLAG_FILTERING_PARAM);
AVFILTER_DEFINE_CLASS(aselect);
static av_cold int aselect_init(AVFilterContext *ctx)
static const AVFilterPad avfilter_af_aselect_inputs[] = ;
AVFilter ff_af_aselect = ;
#if CONFIG_SELECT_FILTER
DEFINE_OPTIONS(select, AV_OPT_FLAG_VIDEO_PARAM|AV_OPT_FLAG_FILTERING_PARAM);
AVFILTER_DEFINE_CLASS(select);
static av_cold int select_init(AVFilterContext *ctx)
static const AVFilterPad avfilter_vf_select_inputs[] = ;
AVFilter ff_vf_select = ;
