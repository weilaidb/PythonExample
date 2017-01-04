typedef struct  VolDetectContext;
static int query_formats(AVFilterContext *ctx)
static int filter_frame(AVFilterLink *inlink, AVFrame *samples)
#define MAX_DB 91
static inline double logdb(uint64_t v)
static void print_stats(AVFilterContext *ctx)
static av_cold void uninit(AVFilterContext *ctx)
static const AVFilterPad volumedetect_inputs[] = ;
static const AVFilterPad volumedetect_outputs[] = ;
AVFilter ff_af_volumedetect = ;
