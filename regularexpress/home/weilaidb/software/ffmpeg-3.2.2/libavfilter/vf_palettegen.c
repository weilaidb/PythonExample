struct color_ref ;
struct range_box ;
struct hist_node ;
enum ;
#define NBITS 5
#define HIST_SIZE (1<<(3*NBITS))
typedef struct  PaletteGenContext;
#define OFFSET(x) offsetof(PaletteGenContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
static const AVOption palettegen_options[] = ;
AVFILTER_DEFINE_CLASS(palettegen);
static int query_formats(AVFilterContext *ctx)
typedef int (*cmp_func)(const void *, const void *);
#define DECLARE_CMP_FUNC(name, pos)                     \
static int cmp_##name(const void *pa, const void *pb)   \
DECLARE_CMP_FUNC(r, 0)
DECLARE_CMP_FUNC(g, 1)
DECLARE_CMP_FUNC(b, 2)
static const cmp_func cmp_funcs[] = ;
static int cmp_color(const void *a, const void *b)
static av_always_inline int diff(const uint32_t a, const uint32_t b)
static int get_next_box_id_to_split(PaletteGenContext *s)
static uint32_t get_avg_color(struct color_ref * const *refs,
const struct range_box *box)
static void split_box(PaletteGenContext *s, struct range_box *box, int n)
static void write_palette(AVFilterContext *ctx, AVFrame *out)
static struct color_ref **load_color_refs(const struct hist_node *hist, int nb_refs)
static double set_colorquant_ratio_meta(AVFrame *out, int nb_out, int nb_in)
static AVFrame *get_palette_frame(AVFilterContext *ctx)
static inline unsigned color_hash(uint32_t color)
static int color_inc(struct hist_node *hist, uint32_t color)
static int update_histogram_diff(struct hist_node *hist,
const AVFrame *f1, const AVFrame *f2)
static int update_histogram_frame(struct hist_node *hist, const AVFrame *f)
static int filter_frame(AVFilterLink *inlink, AVFrame *in)
static int request_frame(AVFilterLink *outlink)
static int config_output(AVFilterLink *outlink)
static av_cold void uninit(AVFilterContext *ctx)
static const AVFilterPad palettegen_inputs[] = ;
static const AVFilterPad palettegen_outputs[] = ;
AVFilter ff_vf_palettegen = ;
