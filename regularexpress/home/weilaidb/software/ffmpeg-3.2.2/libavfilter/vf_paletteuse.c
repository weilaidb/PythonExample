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
OFFSET offsetof(PaletteUseContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
static const AVOption paletteuse_options[] = ;
AVFILTER_DEFINE_CLASS(paletteuse);
query_formats
dither_color
diff
colormap_nearest_bruteforce
struct nearest_color ;
colormap_nearest_node
colormap_nearest_recursive
struct stack_node ;
colormap_nearest_iterative
COLORMAP_NEAREST                                    \
search == COLOR_SEARCH_NNS_ITERATIVE ? colormap_nearest_iterative(root, target) :      \
search == COLOR_SEARCH_NNS_RECURSIVE ? colormap_nearest_recursive(root, target) :      \
colormap_nearest_bruteforce(palette, target)
color_get
get_dst_color_err
set_frame
#define INDENT 4
disp_node
disp_tree
debug_accuracy
struct color ;
struct color_rect ;
typedef int (*cmp_func)(const void *, const void *);
DECLARE_CMP_FUNC                     \
static int cmp_##name(const void *pa, const void *pb)   \
DECLARE_CMP_FUNC(r, 0)
DECLARE_CMP_FUNC(g, 1)
DECLARE_CMP_FUNC(b, 2)
static const cmp_func cmp_funcs[] = ;
get_next_color
colormap_insert
cmp_pal_entry
load_colormap
debug_mean_error
set_processing_window
*apply_palette
config_output
config_input_palette
load_palette
*load_apply_palette
filter_frame
DEFINE_SET_FRAME                             \
static int set_frame_##name(PaletteUseContext *s, AVFrame *out, AVFrame *in,    \
int x_start, int y_start, int w, int h)             \
DEFINE_SET_FRAME_COLOR_SEARCH                                 \
DEFINE_SET_FRAME(color_search_macro, color_search##_##none,            DITHERING_NONE)              \
DEFINE_SET_FRAME(color_search_macro, color_search##_##bayer,           DITHERING_BAYER)             \
DEFINE_SET_FRAME(color_search_macro, color_search##_##heckbert,        DITHERING_HECKBERT)          \
DEFINE_SET_FRAME(color_search_macro, color_search##_##floyd_steinberg, DITHERING_FLOYD_STEINBERG)   \
DEFINE_SET_FRAME(color_search_macro, color_search##_##sierra2,         DITHERING_SIERRA2)           \
DEFINE_SET_FRAME(color_search_macro, color_search##_##sierra2_4a,      DITHERING_SIERRA2_4A)        \
DEFINE_SET_FRAME_COLOR_SEARCH(nns_iterative, COLOR_SEARCH_NNS_ITERATIVE)
DEFINE_SET_FRAME_COLOR_SEARCH(nns_recursive, COLOR_SEARCH_NNS_RECURSIVE)
DEFINE_SET_FRAME_COLOR_SEARCH(bruteforce,    COLOR_SEARCH_BRUTEFORCE)
DITHERING_ENTRIES
static const set_frame_func set_frame_lut[NB_COLOR_SEARCHES][NB_DITHERING] = ;
dither_value
init
request_frame
uninit
static const AVFilterPad paletteuse_inputs[] = ;
static const AVFilterPad paletteuse_outputs[] = ;
AVFilter ff_vf_paletteuse = ;
