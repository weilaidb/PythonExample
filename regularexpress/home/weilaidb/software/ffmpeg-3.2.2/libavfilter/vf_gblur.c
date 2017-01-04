typedef struct GBlurContext  GBlurContext;
#define OFFSET(x) offsetof(GBlurContext, x)
#define FLAGS AV_OPT_FLAG_VIDEO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
static const AVOption gblur_options[] = ;
AVFILTER_DEFINE_CLASS(gblur);
typedef struct ThreadData  ThreadData;
static int filter_horizontally(AVFilterContext *ctx, void *arg, int jobnr, int nb_jobs)
static int filter_vertically(AVFilterContext *ctx, void *arg, int jobnr, int nb_jobs)
static int filter_postscale(AVFilterContext *ctx, void *arg, int jobnr, int nb_jobs)
static void gaussianiir2d(AVFilterContext *ctx, int plane)
static int query_formats(AVFilterContext *ctx)
static int config_input(AVFilterLink *inlink)
static void set_params(float sigma, int steps, float *postscale, float *boundaryscale, float *nu)
static int filter_frame(AVFilterLink *inlink, AVFrame *in)
static av_cold void uninit(AVFilterContext *ctx)
static const AVFilterPad gblur_inputs[] = ;
static const AVFilterPad gblur_outputs[] = ;
AVFilter ff_vf_gblur = ;
