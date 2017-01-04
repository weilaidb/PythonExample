#define OFFSET(x) offsetof(RemoveGrainContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
static const AVOption removegrain_options[] = ;
AVFILTER_DEFINE_CLASS(removegrain);
static int query_formats(AVFilterContext *ctx)
#define REMOVE_GRAIN_SORT_AXIS       \
const int ma1 = FFMAX(a1, a8);   \
const int mi1 = FFMIN(a1, a8);   \
const int ma2 = FFMAX(a2, a7);   \
const int mi2 = FFMIN(a2, a7);   \
const int ma3 = FFMAX(a3, a6);   \
const int mi3 = FFMIN(a3, a6);   \
const int ma4 = FFMAX(a4, a5);   \
const int mi4 = FFMIN(a4, a5);
static int mode01(int c, int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
static int cmp_int(const void *p1, const void *p2)
static int mode02(int c, int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
static int mode03(int c, int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
static int mode04(int c, int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
static int mode05(int c, int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
static int mode06(int c, int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
static int mode07(int c, int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
static int mode08(int c, int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
static int mode09(int c, int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
static int mode10(int c, int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
static int mode1112(int c, int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
static int mode1314(int c, int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
static int mode1516(int c, int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
static int mode17(int c, int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
static int mode18(int c, int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
static int mode19(int c, int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
static int mode20(int c, int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
static int mode21(int c, int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
static int mode22(int c, int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
static int mode23(int c, int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
static int mode24(int c, int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
static int config_input(AVFilterLink *inlink)
typedef struct ThreadData  ThreadData;
static int filter_slice(AVFilterContext *ctx, void *arg, int jobnr, int nb_jobs)
static int filter_frame(AVFilterLink *inlink, AVFrame *in)
static const AVFilterPad removegrain_inputs[] = ;
static const AVFilterPad removegrain_outputs[] = ;
AVFilter ff_vf_removegrain = ;
