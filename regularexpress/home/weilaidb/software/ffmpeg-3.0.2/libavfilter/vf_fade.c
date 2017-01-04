#define R 0
#define G 1
#define B 2
#define A 3
#define Y 0
#define U 1
#define V 2
#define FADE_IN  0
#define FADE_OUT 1
typedef struct FadeContext  FadeContext;
static av_cold int init(AVFilterContext *ctx)
static int query_formats(AVFilterContext *ctx)
const static enum AVPixelFormat studio_level_pix_fmts[] = ;
static int config_props(AVFilterLink *inlink)
static av_always_inline void filter_rgb(FadeContext *s, const AVFrame *frame,
int slice_start, int slice_end,
int do_alpha, int step)
static int filter_slice_rgb(AVFilterContext *ctx, void *arg, int jobnr,
int nb_jobs)
static int filter_slice_luma(AVFilterContext *ctx, void *arg, int jobnr,
int nb_jobs)
static int filter_slice_chroma(AVFilterContext *ctx, void *arg, int jobnr,
int nb_jobs)
static int filter_slice_alpha(AVFilterContext *ctx, void *arg, int jobnr,
int nb_jobs)
static int filter_frame(AVFilterLink *inlink, AVFrame *frame)
#define OFFSET(x) offsetof(FadeContext, x)
#define FLAGS AV_OPT_FLAG_VIDEO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
static const AVOption fade_options[] = ;
AVFILTER_DEFINE_CLASS(fade);
static const AVFilterPad avfilter_vf_fade_inputs[] = ;
static const AVFilterPad avfilter_vf_fade_outputs[] = ;
AVFilter ff_vf_fade = ;
