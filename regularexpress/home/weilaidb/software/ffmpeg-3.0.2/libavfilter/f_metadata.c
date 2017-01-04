enum MetadataMode ;
enum MetadataFunction ;
static const char *const var_names[] = ;
enum var_name ;
typedef struct MetadataContext  MetadataContext;
#define OFFSET(x) offsetof(MetadataContext, x)
#define DEFINE_OPTIONS(filt_name, FLAGS) \
static const AVOption filt_name##_options[] =
static int same_str(MetadataContext *s, const char *value1, const char *value2)
static int starts_with(MetadataContext *s, const char *value1, const char *value2)
static int equal(MetadataContext *s, const char *value1, const char *value2)
static int less(MetadataContext *s, const char *value1, const char *value2)
static int greater(MetadataContext *s, const char *value1, const char *value2)
static int parse_expr(MetadataContext *s, const char *value1, const char *value2)
static void print_log(AVFilterContext *ctx, const char *msg, ...)
static void print_file(AVFilterContext *ctx, const char *msg, ...)
static av_cold int init(AVFilterContext *ctx)
static av_cold void uninit(AVFilterContext *ctx)
static int filter_frame(AVFilterLink *inlink, AVFrame *frame)
#if CONFIG_AMETADATA_FILTER
DEFINE_OPTIONS(ametadata, AV_OPT_FLAG_AUDIO_PARAM|AV_OPT_FLAG_FILTERING_PARAM);
AVFILTER_DEFINE_CLASS(ametadata);
static const AVFilterPad ainputs[] = ;
static const AVFilterPad aoutputs[] = ;
AVFilter ff_af_ametadata = ;
#if CONFIG_METADATA_FILTER
DEFINE_OPTIONS(metadata, AV_OPT_FLAG_VIDEO_PARAM|AV_OPT_FLAG_FILTERING_PARAM);
AVFILTER_DEFINE_CLASS(metadata);
static const AVFilterPad inputs[] = ;
static const AVFilterPad outputs[] = ;
AVFilter ff_vf_metadata = ;
