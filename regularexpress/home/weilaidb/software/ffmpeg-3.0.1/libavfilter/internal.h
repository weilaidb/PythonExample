#define AVFILTER_INTERNAL_H
typedef struct AVFilterCommand  AVFilterCommand;
void ff_avfilter_graph_update_heap(AVFilterGraph *graph, AVFilterLink *link);
struct AVFilterPad ;
struct AVFilterGraphInternal ;
struct AVFilterInternal ;
int ff_fmt_is_in(int fmt, const int *fmts);
av_warn_unused_result
int ff_parse_pixel_format(enum AVPixelFormat *ret, const char *arg, void *log_ctx);
av_warn_unused_result
int ff_parse_sample_rate(int *ret, const char *arg, void *log_ctx);
av_warn_unused_result
int ff_parse_time_base(AVRational *ret, const char *arg, void *log_ctx);
av_warn_unused_result
int ff_parse_sample_format(int *ret, const char *arg, void *log_ctx);
av_warn_unused_result
int ff_parse_channel_layout(int64_t *ret, int *nret, const char *arg,
void *log_ctx);
void ff_update_link_current_pts(AVFilterLink *link, int64_t pts);
void ff_avfilter_link_set_in_status(AVFilterLink *link, int status, int64_t pts);
void ff_avfilter_link_set_out_status(AVFilterLink *link, int status, int64_t pts);
void ff_command_queue_pop(AVFilterContext *filter);
#    define ff_tlog(pctx, ...) av_log(pctx, AV_LOG_DEBUG, __VA_ARGS__)
#    define ff_tlog(pctx, ...) do  while (0)
#define FF_TPRINTF_START(ctx, func) ff_tlog(NULL, "%-16s: ", #func)
char *ff_get_ref_perms_string(char *buf, size_t buf_size, int perms);
void ff_tlog_ref(void *ctx, AVFrame *ref, int end);
void ff_tlog_link(void *ctx, AVFilterLink *link, int end);
int ff_insert_pad(unsigned idx, unsigned *count, size_t padidx_off,
AVFilterPad **pads, AVFilterLink ***links,
AVFilterPad *newpad);
static inline int ff_insert_inpad(AVFilterContext *f, unsigned index,
AVFilterPad *p)
static inline int ff_insert_outpad(AVFilterContext *f, unsigned index,
AVFilterPad *p)
int ff_poll_frame(AVFilterLink *link);
int ff_request_frame(AVFilterLink *link);
int ff_request_frame_to_filter(AVFilterLink *link);
#define AVFILTER_DEFINE_CLASS(fname)            \
static const AVClass fname##_class =
#define FF_INLINK_IDX(link)  ((int)((link)->dstpad - (link)->dst->input_pads))
#define FF_OUTLINK_IDX(link) ((int)((link)->srcpad - (link)->src->output_pads))
int ff_filter_frame(AVFilterLink *link, AVFrame *frame);
AVFilterContext *ff_filter_alloc(const AVFilter *filter, const char *inst_name);
void ff_filter_graph_remove_filter(AVFilterGraph *graph, AVFilterContext *filter);
int ff_filter_graph_run_once(AVFilterGraph *graph);
static inline int ff_norm_qscale(int qscale, int type)
