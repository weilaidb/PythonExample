enum VectorScopeMode ;
enum VectorScopeDraw ;
enum VectorScopeScale ;
typedef struct AudioVectorScopeContext  AudioVectorScopeContext;
#define OFFSET(x) offsetof(AudioVectorScopeContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
static const AVOption avectorscope_options[] = ;
AVFILTER_DEFINE_CLASS(avectorscope);
static void draw_dot(AudioVectorScopeContext *s, unsigned x, unsigned y)
static void draw_line(AudioVectorScopeContext *s, int x0, int y0, int x1, int y1)
static void fade(AudioVectorScopeContext *s)
static int query_formats(AVFilterContext *ctx)
static int config_input(AVFilterLink *inlink)
static int config_output(AVFilterLink *outlink)
static int filter_frame(AVFilterLink *inlink, AVFrame *insamples)
static av_cold void uninit(AVFilterContext *ctx)
static const AVFilterPad audiovectorscope_inputs[] = ;
static const AVFilterPad audiovectorscope_outputs[] = ;
AVFilter ff_avf_avectorscope = ;
