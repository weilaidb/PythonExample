#define INPUT_MAIN     0
#define INPUT_CLEANSRC 1
enum fieldmatch_parity ;
enum matching_mode ;
enum comb_matching_mode ;
enum comb_dbg ;
typedef struct  FieldMatchContext;
OFFSET offsetof(FieldMatchContext, x)
#define FLAGS AV_OPT_FLAG_VIDEO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
static const AVOption fieldmatch_options[] = ;
AVFILTER_DEFINE_CLASS(fieldmatch);
get_width
get_height
luma_abs_diff
fill_buf
calc_combed_score
build_abs_diff_mask
build_diff_map
enum ;
get_field_base
*select_frame
compare_fields
copy_fields
*create_weave_frame
checkmm
static const int fxo0m[] = ;
static const int fxo1m[] = ;
filter_frame
request_inlink
request_frame
query_formats
config_input
fieldmatch_init
fieldmatch_uninit
config_output
static const AVFilterPad fieldmatch_outputs[] = ;
AVFilter ff_vf_fieldmatch = ;
