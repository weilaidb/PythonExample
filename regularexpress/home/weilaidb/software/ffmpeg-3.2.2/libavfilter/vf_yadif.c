typedef struct ThreadData  ThreadData;
#define CHECK(j)\
\
CHECK( 1) CHECK( 2) }} }} \
}\
\
if (!(mode&2))  \
\
if (spatial_pred > d + diff) \
spatial_pred = d + diff; \
else if (spatial_pred < d - diff) \
spatial_pred = d - diff; \
\
dst[0] = spatial_pred; \
\
dst++; \
cur++; \
prev++; \
next++; \
prev2++; \
next2++; \
}
static void filter_line_c(void *dst1,
void *prev1, void *cur1, void *next1,
int w, int prefs, int mrefs, int parity, int mode)
#define MAX_ALIGN 8
static void filter_edges(void *dst1, void *prev1, void *cur1, void *next1,
int w, int prefs, int mrefs, int parity, int mode)
static void filter_line_c_16bit(void *dst1,
void *prev1, void *cur1, void *next1,
int w, int prefs, int mrefs, int parity,
int mode)
static void filter_edges_16bit(void *dst1, void *prev1, void *cur1, void *next1,
int w, int prefs, int mrefs, int parity, int mode)
static int filter_slice(AVFilterContext *ctx, void *arg, int jobnr, int nb_jobs)
static void filter(AVFilterContext *ctx, AVFrame *dstpic,
int parity, int tff)
static int return_frame(AVFilterContext *ctx, int is_second)
static int checkstride(YADIFContext *yadif, const AVFrame *a, const AVFrame *b)
static void fixstride(AVFilterLink *link, AVFrame *f)
static int filter_frame(AVFilterLink *link, AVFrame *frame)
static int request_frame(AVFilterLink *link)
static av_cold void uninit(AVFilterContext *ctx)
static int query_formats(AVFilterContext *ctx)
static int config_props(AVFilterLink *link)
#define OFFSET(x) offsetof(YADIFContext, x)
#define FLAGS AV_OPT_FLAG_VIDEO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
#define CONST(name, help, val, unit)
static const AVOption yadif_options[] = ;
AVFILTER_DEFINE_CLASS(yadif);
static const AVFilterPad avfilter_vf_yadif_inputs[] = ;
static const AVFilterPad avfilter_vf_yadif_outputs[] = ;
AVFilter ff_vf_yadif = ;
