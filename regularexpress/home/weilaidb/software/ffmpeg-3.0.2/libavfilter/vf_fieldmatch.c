#define INPUT_MAIN     0
#define INPUT_CLEANSRC 1
enum fieldmatch_parity ;
enum matching_mode ;
enum comb_matching_mode ;
enum comb_dbg ;
typedef struct  FieldMatchContext;
#define OFFSET(x) offsetof(FieldMatchContext, x)
#define FLAGS AV_OPT_FLAG_VIDEO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
static const AVOption fieldmatch_options[] = ;
AVFILTER_DEFINE_CLASS(fieldmatch);
static int get_width(const FieldMatchContext *fm, const AVFrame *f, int plane)
static int get_height(const FieldMatchContext *fm, const AVFrame *f, int plane)
static int64_t luma_abs_diff(const AVFrame *f1, const AVFrame *f2)
static void fill_buf(uint8_t *data, int w, int h, int linesize, uint8_t v)
static int calc_combed_score(const FieldMatchContext *fm, const AVFrame *src)
static void build_abs_diff_mask(const uint8_t *prvp, int prv_linesize,
const uint8_t *nxtp, int nxt_linesize,
uint8_t *tbuffer,    int tbuf_linesize,
int width, int height)
static void build_diff_map(FieldMatchContext *fm,
const uint8_t *prvp, int prv_linesize,
const uint8_t *nxtp, int nxt_linesize,
uint8_t *dstp, int dst_linesize, int height,
int width, int plane)
enum ;
static int get_field_base(int match, int field)
static AVFrame *select_frame(FieldMatchContext *fm, int match)
static int compare_fields(FieldMatchContext *fm, int match1, int match2, int field)
static void copy_fields(const FieldMatchContext *fm, AVFrame *dst,
const AVFrame *src, int field)
static AVFrame *create_weave_frame(AVFilterContext *ctx, int match, int field,
const AVFrame *prv, AVFrame *src, const AVFrame *nxt)
static int checkmm(AVFilterContext *ctx, int *combs, int m1, int m2,
AVFrame **gen_frames, int field)
static const int fxo0m[] = ;
static const int fxo1m[] = ;
static int filter_frame(AVFilterLink *inlink, AVFrame *in)
static int request_inlink(AVFilterContext *ctx, int lid)
static int request_frame(AVFilterLink *outlink)
static int query_formats(AVFilterContext *ctx)
static int config_input(AVFilterLink *inlink)
static av_cold int fieldmatch_init(AVFilterContext *ctx)
static av_cold void fieldmatch_uninit(AVFilterContext *ctx)
static int config_output(AVFilterLink *outlink)
static const AVFilterPad fieldmatch_outputs[] = ;
AVFilter ff_vf_fieldmatch = ;
