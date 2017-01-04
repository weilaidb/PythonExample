#define OFFSET(x) offsetof(AVFilterGraph, x)
#define FLAGS AV_OPT_FLAG_VIDEO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
static const AVOption filtergraph_options[] = ;
static const AVClass filtergraph_class = ;
#if !HAVE_THREADS
void ff_graph_thread_free(AVFilterGraph *graph)
int ff_graph_thread_init(AVFilterGraph *graph)
AVFilterGraph *avfilter_graph_alloc(void)
void ff_filter_graph_remove_filter(AVFilterGraph *graph, AVFilterContext *filter)
void avfilter_graph_free(AVFilterGraph **graph)
#if FF_API_AVFILTER_OPEN
int avfilter_graph_add_filter(AVFilterGraph *graph, AVFilterContext *filter)
int avfilter_graph_create_filter(AVFilterContext **filt_ctx, const AVFilter *filt,
const char *name, const char *args, void *opaque,
AVFilterGraph *graph_ctx)
void avfilter_graph_set_auto_convert(AVFilterGraph *graph, unsigned flags)
AVFilterContext *avfilter_graph_alloc_filter(AVFilterGraph *graph,
const AVFilter *filter,
const char *name)
static int graph_check_validity(AVFilterGraph *graph, AVClass *log_ctx)
static int graph_config_links(AVFilterGraph *graph, AVClass *log_ctx)
AVFilterContext *avfilter_graph_get_filter(AVFilterGraph *graph, const char *name)
static void sanitize_channel_layouts(void *log, AVFilterChannelLayouts *l)
static int filter_query_formats(AVFilterContext *ctx)
static int formats_declared(AVFilterContext *f)
static AVFilterFormats *clone_filter_formats(AVFilterFormats *arg)
static int can_merge_formats(AVFilterFormats *a_arg,
AVFilterFormats *b_arg,
enum AVMediaType type,
int is_sample_rate)
static int query_formats(AVFilterGraph *graph, AVClass *log_ctx)
static int get_fmt_score(enum AVSampleFormat dst_fmt, enum AVSampleFormat src_fmt)
static enum AVSampleFormat find_best_sample_fmt_of_2(enum AVSampleFormat dst_fmt1, enum AVSampleFormat dst_fmt2,
enum AVSampleFormat src_fmt)
static int pick_format(AVFilterLink *link, AVFilterLink *ref)
#define REDUCE_FORMATS(fmt_type, list_type, list, var, nb, add_format, unref_format) \
do  while (0)
static int reduce_formats_on_filter(AVFilterContext *filter)
static int reduce_formats(AVFilterGraph *graph)
static void swap_samplerates_on_filter(AVFilterContext *filter)
static void swap_samplerates(AVFilterGraph *graph)
#define CH_CENTER_PAIR (AV_CH_FRONT_LEFT_OF_CENTER | AV_CH_FRONT_RIGHT_OF_CENTER)
#define CH_FRONT_PAIR  (AV_CH_FRONT_LEFT           | AV_CH_FRONT_RIGHT)
#define CH_STEREO_PAIR (AV_CH_STEREO_LEFT          | AV_CH_STEREO_RIGHT)
#define CH_WIDE_PAIR   (AV_CH_WIDE_LEFT            | AV_CH_WIDE_RIGHT)
#define CH_SIDE_PAIR   (AV_CH_SIDE_LEFT            | AV_CH_SIDE_RIGHT)
#define CH_DIRECT_PAIR (AV_CH_SURROUND_DIRECT_LEFT | AV_CH_SURROUND_DIRECT_RIGHT)
#define CH_BACK_PAIR   (AV_CH_BACK_LEFT            | AV_CH_BACK_RIGHT)
static const uint64_t ch_subst[][2] = ;
static void swap_channel_layouts_on_filter(AVFilterContext *filter)
static void swap_channel_layouts(AVFilterGraph *graph)
static void swap_sample_fmts_on_filter(AVFilterContext *filter)
static void swap_sample_fmts(AVFilterGraph *graph)
static int pick_formats(AVFilterGraph *graph)
static int graph_config_formats(AVFilterGraph *graph, AVClass *log_ctx)
static int graph_config_pointers(AVFilterGraph *graph,
AVClass *log_ctx)
static int graph_insert_fifos(AVFilterGraph *graph, AVClass *log_ctx)
int avfilter_graph_config(AVFilterGraph *graphctx, void *log_ctx)
int avfilter_graph_send_command(AVFilterGraph *graph, const char *target, const char *cmd, const char *arg, char *res, int res_len, int flags)
int avfilter_graph_queue_command(AVFilterGraph *graph, const char *target, const char *command, const char *arg, int flags, double ts)
static void heap_bubble_up(AVFilterGraph *graph,
AVFilterLink *link, int index)
static void heap_bubble_down(AVFilterGraph *graph,
AVFilterLink *link, int index)
void ff_avfilter_graph_update_heap(AVFilterGraph *graph, AVFilterLink *link)
int avfilter_graph_request_oldest(AVFilterGraph *graph)
static AVFilterLink *graph_run_once_find_filter(AVFilterGraph *graph)
int ff_filter_graph_run_once(AVFilterGraph *graph)
