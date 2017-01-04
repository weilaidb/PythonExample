#define MV_P_FOR  (1<<0)
#define MV_B_FOR  (1<<1)
#define MV_B_BACK (1<<2)
typedef struct  CodecViewContext;
#define OFFSET(x) offsetof(CodecViewContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
static const AVOption codecview_options[] = ;
AVFILTER_DEFINE_CLASS(codecview);
static int query_formats(AVFilterContext *ctx)
static int clip_line(int *sx, int *sy, int *ex, int *ey, int maxx)
static void draw_line(uint8_t *buf, int sx, int sy, int ex, int ey,
int w, int h, int stride, int color)
static void draw_arrow(uint8_t *buf, int sx, int sy, int ex,
int ey, int w, int h, int stride, int color, int tail, int direction)
static int filter_frame(AVFilterLink *inlink, AVFrame *frame)
static int config_input(AVFilterLink *inlink)
static const AVFilterPad codecview_inputs[] = ;
static const AVFilterPad codecview_outputs[] = ;
AVFilter ff_vf_codecview = ;
