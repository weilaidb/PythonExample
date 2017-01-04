enum dithering_mode ;
enum color_search_method ;
enum diff_mode ;
struct color_node ;
#define NBITS 5
#define CACHE_SIZE (1<<(3*NBITS))
struct cached_color ;
struct cache_node ;
struct PaletteUseContext;
typedef int (*set_frame_func)(struct PaletteUseContext *s, AVFrame *out, AVFrame *in,
int x_start, int y_start, int width, int height);
typedef struct PaletteUseContext  PaletteUseContext;
#define OFFSET(x) offsetof(PaletteUseContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
static const AVOption paletteuse_options[] = ;
AVFILTER_DEFINE_CLASS(paletteuse);
static int query_formats(AVFilterContext *ctx)
static av_always_inline int dither_color(uint32_t px, int er, int eg, int eb, int scale, int shift)
static av_always_inline int diff(const uint8_t *c1, const uint8_t *c2)
static av_always_inline uint8_t colormap_nearest_bruteforce(const uint32_t *palette, const uint8_t *rgb)
struct nearest_color ;
static void colormap_nearest_node(const struct color_node *map,
const int node_pos,
const uint8_t *target,
struct nearest_color *nearest)
static av_always_inline uint8_t colormap_nearest_recursive(const struct color_node *node, const uint8_t *rgb)
struct stack_node ;
static av_always_inline uint8_t colormap_nearest_iterative(const struct color_node *root, const uint8_t *target)
#define COLORMAP_NEAREST(search, palette, root, target)                                    \
search == COLOR_SEARCH_NNS_ITERATIVE ? colormap_nearest_iterative(root, target) :      \
search == COLOR_SEARCH_NNS_RECURSIVE ? colormap_nearest_recursive(root, target) :      \
colormap_nearest_bruteforce(palette, target)
static av_always_inline int color_get(struct cache_node *cache, uint32_t color,
uint8_t r, uint8_t g, uint8_t b,
const struct color_node *map,
const uint32_t *palette,
const enum color_search_method search_method)
static av_always_inline int get_dst_color_err(struct cache_node *cache,
uint32_t c, const struct color_node *map,
const uint32_t *palette,
int *er, int *eg, int *eb,
const enum color_search_method search_method)
static av_always_inline int set_frame(PaletteUseContext *s, AVFrame *out, AVFrame *in,
int x_start, int y_start, int w, int h,
enum dithering_mode dither,
const enum color_search_method search_method)
#define INDENT 4
static void disp_node(AVBPrint *buf,
const struct color_node *map,
int parent_id, int node_id,
int depth)
static int disp_tree(const struct color_node *node, const char *fname)
static int debug_accuracy(const struct color_node *node, const uint32_t *palette,
const enum color_search_method search_method)
struct color ;
struct color_rect ;
typedef int (*cmp_func)(const void *, const void *);
#define DECLARE_CMP_FUNC(name, pos)                     \
static int cmp_##name(const void *pa, const void *pb)   \
DECLARE_CMP_FUNC(r, 0)
DECLARE_CMP_FUNC(g, 1)
DECLARE_CMP_FUNC(b, 2)
static const cmp_func cmp_funcs[] = ;
static int get_next_color(const uint8_t *color_used, const uint32_t *palette,
int *component, const struct color_rect *box)
static int colormap_insert(struct color_node *map,
uint8_t *color_used,
int *nb_used,
const uint32_t *palette,
const struct color_rect *box)
static int cmp_pal_entry(const void *a, const void *b)
static void load_colormap(PaletteUseContext *s)
static void debug_mean_error(PaletteUseContext *s, const AVFrame *in1,
const AVFrame *in2, int frame_count)
static void set_processing_window(enum diff_mode diff_mode,
const AVFrame *prv_src, const AVFrame *cur_src,
const AVFrame *prv_dst,       AVFrame *cur_dst,
int *xp, int *yp, int *wp, int *hp)
static AVFrame *apply_palette(AVFilterLink *inlink, AVFrame *in)
static int config_output(AVFilterLink *outlink)
static int config_input_palette(AVFilterLink *inlink)
static void load_palette(PaletteUseContext *s, const AVFrame *palette_frame)
static AVFrame *load_apply_palette(AVFilterContext *ctx, AVFrame *main,
const AVFrame *second)
static int filter_frame(AVFilterLink *inlink, AVFrame *in)
#define DEFINE_SET_FRAME(color_search, name, value)                             \
static int set_frame_##name(PaletteUseContext *s, AVFrame *out, AVFrame *in,    \
int x_start, int y_start, int w, int h)             \
#define DEFINE_SET_FRAME_COLOR_SEARCH(color_search, color_search_macro)                                 \
DEFINE_SET_FRAME(color_search_macro, color_search##_##none,            DITHERING_NONE)              \
DEFINE_SET_FRAME(color_search_macro, color_search##_##bayer,           DITHERING_BAYER)             \
DEFINE_SET_FRAME(color_search_macro, color_search##_##heckbert,        DITHERING_HECKBERT)          \
DEFINE_SET_FRAME(color_search_macro, color_search##_##floyd_steinberg, DITHERING_FLOYD_STEINBERG)   \
DEFINE_SET_FRAME(color_search_macro, color_search##_##sierra2,         DITHERING_SIERRA2)           \
DEFINE_SET_FRAME(color_search_macro, color_search##_##sierra2_4a,      DITHERING_SIERRA2_4A)        \
DEFINE_SET_FRAME_COLOR_SEARCH(nns_iterative, COLOR_SEARCH_NNS_ITERATIVE)
DEFINE_SET_FRAME_COLOR_SEARCH(nns_recursive, COLOR_SEARCH_NNS_RECURSIVE)
DEFINE_SET_FRAME_COLOR_SEARCH(bruteforce,    COLOR_SEARCH_BRUTEFORCE)
#define DITHERING_ENTRIES(color_search)
static const set_frame_func set_frame_lut[NB_COLOR_SEARCHES][NB_DITHERING] = ;
static int dither_value(int p)
static av_cold int init(AVFilterContext *ctx)
static int request_frame(AVFilterLink *outlink)
static av_cold void uninit(AVFilterContext *ctx)
static const AVFilterPad paletteuse_inputs[] = ;
static const AVFilterPad paletteuse_outputs[] = ;
AVFilter ff_vf_paletteuse = ;
