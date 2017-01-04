typedef struct SidechainCompressContext  SidechainCompressContext;
#define OFFSET(x) offsetof(SidechainCompressContext, x)
#define A AV_OPT_FLAG_AUDIO_PARAM
#define F AV_OPT_FLAG_FILTERING_PARAM
static const AVOption options[] = ;
#define sidechaincompress_options options
AVFILTER_DEFINE_CLASS(sidechaincompress);
#define FAKE_INFINITY (65536.0 * 65536.0)
#define IS_FAKE_INFINITY(value) (fabs(value-FAKE_INFINITY) < 1.0)
static double output_gain(double lin_slope, double ratio, double thres,
double knee, double knee_start, double knee_stop,
double compressed_knee_stop, int detection)
static int compressor_config_output(AVFilterLink *outlink)
static void compressor(SidechainCompressContext *s,
const double *src, double *dst, const double *scsrc, int nb_samples,
double level_in, double level_sc,
AVFilterLink *inlink, AVFilterLink *sclink)
#if CONFIG_SIDECHAINCOMPRESS_FILTER
static int filter_frame(AVFilterLink *link, AVFrame *frame)
static int request_frame(AVFilterLink *outlink)
static int query_formats(AVFilterContext *ctx)
static int config_output(AVFilterLink *outlink)
static av_cold void uninit(AVFilterContext *ctx)
static const AVFilterPad sidechaincompress_inputs[] = ;
static const AVFilterPad sidechaincompress_outputs[] = ;
AVFilter ff_af_sidechaincompress = ;
#if CONFIG_ACOMPRESSOR_FILTER
static int acompressor_filter_frame(AVFilterLink *inlink, AVFrame *in)
static int acompressor_query_formats(AVFilterContext *ctx)
#define acompressor_options options
AVFILTER_DEFINE_CLASS(acompressor);
static const AVFilterPad acompressor_inputs[] = ;
static const AVFilterPad acompressor_outputs[] = ;
AVFilter ff_af_acompressor = ;
