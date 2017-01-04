#define INPUT_ON       1
#define INPUT_EOF      2
#define DURATION_LONGEST  0
#define DURATION_SHORTEST 1
#define DURATION_FIRST    2
typedef struct FrameInfo  FrameInfo;
typedef struct FrameList  FrameList;
static void frame_list_clear(FrameList *frame_list)
static int frame_list_next_frame_size(FrameList *frame_list)
static int64_t frame_list_next_pts(FrameList *frame_list)
static void frame_list_remove_samples(FrameList *frame_list, int nb_samples)
static int frame_list_add_frame(FrameList *frame_list, int nb_samples, int64_t pts)
typedef struct MixContext  MixContext;
#define OFFSET(x) offsetof(MixContext, x)
#define A AV_OPT_FLAG_AUDIO_PARAM
#define F AV_OPT_FLAG_FILTERING_PARAM
static const AVOption amix_options[] = ;
AVFILTER_DEFINE_CLASS(amix);
static void calculate_scales(MixContext *s, int nb_samples)
static int config_output(AVFilterLink *outlink)
static int calc_active_inputs(MixContext *s);
static int output_frame(AVFilterLink *outlink)
static int request_samples(AVFilterContext *ctx, int min_samples)
static int calc_active_inputs(MixContext *s)
static int request_frame(AVFilterLink *outlink)
static int filter_frame(AVFilterLink *inlink, AVFrame *buf)
static av_cold int init(AVFilterContext *ctx)
static av_cold void uninit(AVFilterContext *ctx)
static int query_formats(AVFilterContext *ctx)
static const AVFilterPad avfilter_af_amix_outputs[] = ;
AVFilter ff_af_amix = ;
