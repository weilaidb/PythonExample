struct color_ref ;
struct range_box ;
struct hist_node ;
enum ;
#define NBITS 5
#define HIST_SIZE (1<<(3*NBITS))
typedef struct  PaletteGenContext;
OFFSET offsetof(PaletteGenContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
static const AVOption palettegen_options[] = ;
AVFILTER_DEFINE_CLASS(palettegen);
query_formats
typedef int (*cmp_func)(const void *, const void *);
DECLARE_CMP_FUNC                     \
static int cmp_##name(const void *pa, const void *pb)   \
DECLARE_CMP_FUNC(r, 0)
DECLARE_CMP_FUNC(g, 1)
DECLARE_CMP_FUNC(b, 2)
static const cmp_func cmp_funcs[] = ;
cmp_color
diff
get_next_box_id_to_split
get_avg_color
split_box
write_palette
**load_color_refs
set_colorquant_ratio_meta
*get_palette_frame
color_hash
color_inc
update_histogram_diff
update_histogram_frame
filter_frame
request_frame
config_output
uninit
static const AVFilterPad palettegen_inputs[] = ;
static const AVFilterPad palettegen_outputs[] = ;
AVFilter ff_vf_palettegen = ;
