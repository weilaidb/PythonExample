typedef struct ChannelStats  ChannelStats;
typedef struct  AudioStatsContext;
#define OFFSET(x) offsetof(AudioStatsContext, x)
#define FLAGS AV_OPT_FLAG_AUDIO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
static const AVOption astats_options[] = ;
AVFILTER_DEFINE_CLASS(astats);
static int query_formats(AVFilterContext *ctx)
static void reset_stats(AudioStatsContext *s)
static int config_output(AVFilterLink *outlink)
static void bit_depth(AudioStatsContext *s, uint64_t mask, uint64_t imask, AVRational *depth)
static inline void update_stat(AudioStatsContext *s, ChannelStats *p, double d, double nd, int64_t i)
static void set_meta(AVDictionary **metadata, int chan, const char *key,
const char *fmt, double val)
#define LINEAR_TO_DB(x) (log10(x) * 20)
static void set_metadata(AudioStatsContext *s, AVDictionary **metadata)
static int filter_frame(AVFilterLink *inlink, AVFrame *buf)
static void print_stats(AVFilterContext *ctx)
static av_cold void uninit(AVFilterContext *ctx)
static const AVFilterPad astats_inputs[] = ;
static const AVFilterPad astats_outputs[] = ;
AVFilter ff_af_astats = ;
