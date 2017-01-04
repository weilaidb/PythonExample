#define SQR(a) ((a)*(a))
enum Outer;
enum Inner;
typedef struct Point  Point;
typedef struct  MBContext;
#define OFFSET(x) offsetof(MBContext, x)
#define FLAGS AV_OPT_FLAG_VIDEO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
static const AVOption mandelbrot_options[] = ;
AVFILTER_DEFINE_CLASS(mandelbrot);
static av_cold int init(AVFilterContext *ctx)
static av_cold void uninit(AVFilterContext *ctx)
static int query_formats(AVFilterContext *ctx)
static int config_props(AVFilterLink *inlink)
static void fill_from_cache(AVFilterContext *ctx, uint32_t *color, int *in_cidx, int *out_cidx, double py, double scale)
static int interpol(MBContext *s, uint32_t *color, int x, int y, int linesize)
static void draw_mandelbrot(AVFilterContext *ctx, uint32_t *color, int linesize, int64_t pts)
static int request_frame(AVFilterLink *link)
static const AVFilterPad mandelbrot_outputs[] = ;
AVFilter ff_vsrc_mandelbrot = ;
