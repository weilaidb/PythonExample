enum color_range ;
enum correction_method ;
static const char *color_names[NB_RANGES] = ;
typedef int (*get_adjust_range_func)(int r, int g, int b, int min_val, int max_val);
struct process_range ;
typedef struct ThreadData  ThreadData;
typedef struct  SelectiveColorContext;
#define OFFSET(x) offsetof(SelectiveColorContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
#define RANGE_OPTION(color_name, range) \
static const AVOption selectivecolor_options[] = ;
AVFILTER_DEFINE_CLASS(selectivecolor);
static inline int get_mid_val(int r, int g, int b)
static int get_rgb_adjust_range(int r, int g, int b, int min_val, int max_val)
static int get_cmy_adjust_range(int r, int g, int b, int min_val, int max_val)
static int get_neutrals_adjust_range(int r, int g, int b, int min_val, int max_val)
static int get_whites_adjust_range(int r, int g, int b, int min_val, int max_val)
static int get_blacks_adjust_range(int r, int g, int b, int min_val, int max_val)
static int register_range(SelectiveColorContext *s, int range_id)
static int parse_psfile(AVFilterContext *ctx, const char *fname)
static av_cold int init(AVFilterContext *ctx)
static int query_formats(AVFilterContext *ctx)
static inline int comp_adjust(int adjust_range, float value, float adjust, float k, int correction_method)
static inline int selective_color(AVFilterContext *ctx, ThreadData *td,
int jobnr, int nb_jobs, int direct, int correction_method)
#define DEF_SELECTIVE_COLOR_FUNC(name, direct, correction_method)                           \
static int selective_color_##name(AVFilterContext *ctx, void *arg, int jobnr, int nb_jobs)  \
DEF_SELECTIVE_COLOR_FUNC(indirect_absolute, 0, CORRECTION_METHOD_ABSOLUTE)
DEF_SELECTIVE_COLOR_FUNC(indirect_relative, 0, CORRECTION_METHOD_RELATIVE)
DEF_SELECTIVE_COLOR_FUNC(  direct_absolute, 1, CORRECTION_METHOD_ABSOLUTE)
DEF_SELECTIVE_COLOR_FUNC(  direct_relative, 1, CORRECTION_METHOD_RELATIVE)
typedef int (*selective_color_func_type)(AVFilterContext *ctx, void *td, int jobnr, int nb_jobs);
static int filter_frame(AVFilterLink *inlink, AVFrame *in)
static const AVFilterPad selectivecolor_inputs[] = ;
static const AVFilterPad selectivecolor_outputs[] = ;
AVFilter ff_vf_selectivecolor = ;
