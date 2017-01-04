#define F_HAVE_BREAKS   1
#define F_HAVE_AFFINITY 2
#define BREAK_LEFT  1
#define BREAK_RIGHT 2
#define OFFSET(x) offsetof(PullupContext, x)
#define FLAGS AV_OPT_FLAG_VIDEO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
static const AVOption pullup_options[] = ;
AVFILTER_DEFINE_CLASS(pullup);
static int query_formats(AVFilterContext *ctx)
#define ABS(a) (((a) ^ ((a) >> 31)) - ((a) >> 31))
static int diff_c(const uint8_t *a, const uint8_t *b, ptrdiff_t s)
static int comb_c(const uint8_t *a, const uint8_t *b, ptrdiff_t s)
static int var_c(const uint8_t *a, const uint8_t *b, ptrdiff_t s)
static int alloc_metrics(PullupContext *s, PullupField *f)
static void free_field_queue(PullupField *head)
static PullupField *make_field_queue(PullupContext *s, int len)
static int config_input(AVFilterLink *inlink)
static PullupBuffer *pullup_lock_buffer(PullupBuffer *b, int parity)
static void pullup_release_buffer(PullupBuffer *b, int parity)
static int alloc_buffer(PullupContext *s, PullupBuffer *b)
static PullupBuffer *pullup_get_buffer(PullupContext *s, int parity)
static int queue_length(PullupField *begin, PullupField *end)
static int find_first_break(PullupField *f, int max)
static void compute_breaks(PullupContext *s, PullupField *f0)
static void compute_affinity(PullupContext *s, PullupField *f)
static int decide_frame_length(PullupContext *s)
static PullupFrame *pullup_get_frame(PullupContext *s)
static void pullup_release_frame(PullupFrame *f)
static void compute_metric(PullupContext *s, int *dest,
PullupField *fa, int pa, PullupField *fb, int pb,
int (*func)(const uint8_t *, const uint8_t *, ptrdiff_t))
static int check_field_queue(PullupContext *s)
static void pullup_submit_field(PullupContext *s, PullupBuffer *b, int parity)
static void copy_field(PullupContext *s,
PullupBuffer *dst, PullupBuffer *src, int parity)
static void pullup_pack_frame(PullupContext *s, PullupFrame *fr)
static int filter_frame(AVFilterLink *inlink, AVFrame *in)
static av_cold void uninit(AVFilterContext *ctx)
static const AVFilterPad pullup_inputs[] = ;
static const AVFilterPad pullup_outputs[] = ;
AVFilter ff_vf_pullup = ;
