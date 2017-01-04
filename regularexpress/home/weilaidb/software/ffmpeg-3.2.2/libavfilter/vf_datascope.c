typedef struct DatascopeContext  DatascopeContext;
#define OFFSET(x) offsetof(DatascopeContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
static const AVOption datascope_options[] = ;
AVFILTER_DEFINE_CLASS(datascope);
static int query_formats(AVFilterContext *ctx)
static void draw_text(DatascopeContext *s, AVFrame *frame, FFDrawColor *color,
int x0, int y0, const uint8_t *text, int vertical)
static void pick_color8(FFDrawContext *draw, FFDrawColor *color, AVFrame *in, int x, int y, int *value)
static void pick_color16(FFDrawContext *draw, FFDrawColor *color, AVFrame *in, int x, int y, int *value)
static void reverse_color8(FFDrawContext *draw, FFDrawColor *color, FFDrawColor *reverse)
static void reverse_color16(FFDrawContext *draw, FFDrawColor *color, FFDrawColor *reverse)
typedef struct ThreadData  ThreadData;
static int filter_color2(AVFilterContext *ctx, void *arg, int jobnr, int nb_jobs)
static int filter_color(AVFilterContext *ctx, void *arg, int jobnr, int nb_jobs)
static int filter_mono(AVFilterContext *ctx, void *arg, int jobnr, int nb_jobs)
static int filter_frame(AVFilterLink *inlink, AVFrame *in)
static int config_input(AVFilterLink *inlink)
static int config_output(AVFilterLink *outlink)
static const AVFilterPad inputs[] = ;
static const AVFilterPad outputs[] = ;
AVFilter ff_vf_datascope = ;
