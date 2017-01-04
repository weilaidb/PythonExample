#define MAX_PLANES 4
typedef struct  FFTFILTContext;
static const char *const var_names[] = ;
enum                                   ;
enum ;
#define OFFSET(x) offsetof(FFTFILTContext, x)
#define FLAGS AV_OPT_FLAG_VIDEO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
static const AVOption fftfilt_options[] = ;
AVFILTER_DEFINE_CLASS(fftfilt);
static inline double lum(void *priv, double x, double y, int plane)
static double weight_Y(void *priv, double x, double y)
static double weight_U(void *priv, double x, double y)
static double weight_V(void *priv, double x, double y)
static void copy_rev (FFTSample *dest, int w, int w2)
static void rdft_horizontal(FFTFILTContext *s, AVFrame *in, int w, int h, int plane)
static void rdft_vertical(FFTFILTContext *s, int h, int plane)
static void irdft_vertical(FFTFILTContext *s, int h, int plane)
static void irdft_horizontal(FFTFILTContext *s, AVFrame *out, int w, int h, int plane)
static av_cold int initialize(AVFilterContext *ctx)
static int config_props(AVFilterLink *inlink)
static int filter_frame(AVFilterLink *inlink, AVFrame *in)
static av_cold void uninit(AVFilterContext *ctx)
static int query_formats(AVFilterContext *ctx)
static const AVFilterPad fftfilt_inputs[] = ;
static const AVFilterPad fftfilt_outputs[] = ;
AVFilter ff_vf_fftfilt = ;
