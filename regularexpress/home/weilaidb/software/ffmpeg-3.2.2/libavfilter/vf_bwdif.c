static const uint16_t coef_lf[2] = ;
static const uint16_t coef_hf[3] = ;
static const uint16_t coef_sp[2] = ;
typedef struct ThreadData  ThreadData;
#define FILTER_INTRA() \
for (x = 0; x < w; x++)
#define FILTER1() \
for (x = 0; x < w; x++)
static void filter_intra(void *dst1, void *cur1, int w, int prefs, int mrefs,
int prefs3, int mrefs3, int parity, int clip_max)
static void filter_line_c(void *dst1, void *prev1, void *cur1, void *next1,
int w, int prefs, int mrefs, int prefs2, int mrefs2,
int prefs3, int mrefs3, int prefs4, int mrefs4,
int parity, int clip_max)
static void filter_edge(void *dst1, void *prev1, void *cur1, void *next1,
int w, int prefs, int mrefs, int prefs2, int mrefs2,
int parity, int clip_max, int spat)
static void filter_intra_16bit(void *dst1, void *cur1, int w, int prefs, int mrefs,
int prefs3, int mrefs3, int parity, int clip_max)
static void filter_line_c_16bit(void *dst1, void *prev1, void *cur1, void *next1,
int w, int prefs, int mrefs, int prefs2, int mrefs2,
int prefs3, int mrefs3, int prefs4, int mrefs4,
int parity, int clip_max)
static void filter_edge_16bit(void *dst1, void *prev1, void *cur1, void *next1,
int w, int prefs, int mrefs, int prefs2, int mrefs2,
int parity, int clip_max, int spat)
static int filter_slice(AVFilterContext *ctx, void *arg, int jobnr, int nb_jobs)
static void filter(AVFilterContext *ctx, AVFrame *dstpic,
int parity, int tff)
static int return_frame(AVFilterContext *ctx, int is_second)
static int checkstride(BWDIFContext *bwdif, const AVFrame *a, const AVFrame *b)
static void fixstride(AVFilterLink *link, AVFrame *f)
static int filter_frame(AVFilterLink *link, AVFrame *frame)
static int request_frame(AVFilterLink *link)
static av_cold void uninit(AVFilterContext *ctx)
static int query_formats(AVFilterContext *ctx)
static int config_props(AVFilterLink *link)
#define OFFSET(x) offsetof(BWDIFContext, x)
#define FLAGS AV_OPT_FLAG_VIDEO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
#define CONST(name, help, val, unit)
static const AVOption bwdif_options[] = ;
AVFILTER_DEFINE_CLASS(bwdif);
static const AVFilterPad avfilter_vf_bwdif_inputs[] = ;
static const AVFilterPad avfilter_vf_bwdif_outputs[] = ;
AVFilter ff_vf_bwdif = ;
