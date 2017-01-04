typedef struct  GEQContext;
enum ;
#define OFFSET(x) offsetof(GEQContext, x)
#define FLAGS AV_OPT_FLAG_VIDEO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
static const AVOption geq_options[] = ;
AVFILTER_DEFINE_CLASS(geq);
static inline double getpix(void *priv, double x, double y, int plane)
static double lum(void *priv, double x, double y)
static double  cb(void *priv, double x, double y)
static double  cr(void *priv, double x, double y)
static double alpha(void *priv, double x, double y)
static const char *const var_names[] = ;
enum                                   ;
static av_cold int geq_init(AVFilterContext *ctx)
static int geq_query_formats(AVFilterContext *ctx)
static int geq_config_props(AVFilterLink *inlink)
static int geq_filter_frame(AVFilterLink *inlink, AVFrame *in)
static av_cold void geq_uninit(AVFilterContext *ctx)
static const AVFilterPad geq_inputs[] = ;
static const AVFilterPad geq_outputs[] = ;
AVFilter ff_vf_geq = ;
