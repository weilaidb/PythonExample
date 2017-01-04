static const char * const var_names[] = ;
enum var_name ;
typedef struct  RotContext;
typedef struct ThreadData  ThreadData;
#define OFFSET(x) offsetof(RotContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
static const AVOption rotate_options[] = ;
AVFILTER_DEFINE_CLASS(rotate);
static av_cold int init(AVFilterContext *ctx)
static av_cold void uninit(AVFilterContext *ctx)
static int query_formats(AVFilterContext *ctx)
static double get_rotated_w(void *opaque, double angle)
static double get_rotated_h(void *opaque, double angle)
static double (* const func1[])(void *, double) = ;
static const char * const func1_names[] = ;
static int config_props(AVFilterLink *outlink)
#define FIXP (1<<16)
#define FIXP2 (1<<20)
#define INT_PI 3294199
static int64_t int_sin(int64_t a)
static uint8_t *interpolate_bilinear(uint8_t *dst_color,
const uint8_t *src, int src_linesize, int src_linestep,
int x, int y, int max_x, int max_y)
static av_always_inline void copy_elem(uint8_t *pout, const uint8_t *pin, int elem_size)
static av_always_inline void simple_rotate_internal(uint8_t *dst, const uint8_t *src, int src_linesize, int angle, int elem_size, int len)
static av_always_inline void simple_rotate(uint8_t *dst, const uint8_t *src, int src_linesize, int angle, int elem_size, int len)
#define TS2T(ts, tb) ((ts) == AV_NOPTS_VALUE ? NAN : (double)(ts)*av_q2d(tb))
static int filter_slice(AVFilterContext *ctx, void *arg, int job, int nb_jobs)
static int filter_frame(AVFilterLink *inlink, AVFrame *in)
static int process_command(AVFilterContext *ctx, const char *cmd, const char *args,
char *res, int res_len, int flags)
static const AVFilterPad rotate_inputs[] = ;
static const AVFilterPad rotate_outputs[] = ;
AVFilter ff_vf_rotate = ;
