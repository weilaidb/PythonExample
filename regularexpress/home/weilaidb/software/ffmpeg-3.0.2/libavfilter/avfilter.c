const char av_filter_ffversion[] = "FFmpeg version " FFMPEG_VERSION;
static int ff_filter_frame_framed(AVFilterLink *link, AVFrame *frame);
void ff_tlog_ref(void *ctx, AVFrame *ref, int end)
unsigned avfilter_version(void)
const char *avfilter_configuration(void)
const char *avfilter_license(void)
void ff_command_queue_pop(AVFilterContext *filter)
int ff_insert_pad(unsigned idx, unsigned *count, size_t padidx_off,
AVFilterPad **pads, AVFilterLink ***links,
AVFilterPad *newpad)
int avfilter_link(AVFilterContext *src, unsigned srcpad,
AVFilterContext *dst, unsigned dstpad)
void avfilter_link_free(AVFilterLink **link)
int avfilter_link_get_channels(AVFilterLink *link)
void ff_avfilter_link_set_in_status(AVFilterLink *link, int status, int64_t pts)
void ff_avfilter_link_set_out_status(AVFilterLink *link, int status, int64_t pts)
void avfilter_link_set_closed(AVFilterLink *link, int closed)
int avfilter_insert_filter(AVFilterLink *link, AVFilterContext *filt,
unsigned filt_srcpad_idx, unsigned filt_dstpad_idx)
int avfilter_config_links(AVFilterContext *filter)
void ff_tlog_link(void *ctx, AVFilterLink *link, int end)
int ff_request_frame(AVFilterLink *link)
int ff_request_frame_to_filter(AVFilterLink *link)
int ff_poll_frame(AVFilterLink *link)
static const char *const var_names[] = ;
enum ;
static int set_enable_expr(AVFilterContext *ctx, const char *expr)
void ff_update_link_current_pts(AVFilterLink *link, int64_t pts)
int avfilter_process_command(AVFilterContext *filter, const char *cmd, const char *arg, char *res, int res_len, int flags)
static AVFilter *first_filter;
static AVFilter **last_filter = &first_filter;
#if !FF_API_NOCONST_GET_NAME
const
AVFilter *avfilter_get_by_name(const char *name)
int avfilter_register(AVFilter *filter)
const AVFilter *avfilter_next(const AVFilter *prev)
#if FF_API_OLD_FILTER_REGISTER
AVFilter **av_filter_next(AVFilter **filter)
void avfilter_uninit(void)
int avfilter_pad_count(const AVFilterPad *pads)
static const char *default_filter_name(void *filter_ctx)
static void *filter_child_next(void *obj, void *prev)
static const AVClass *filter_child_class_next(const AVClass *prev)
#define OFFSET(x) offsetof(AVFilterContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM
static const AVOption avfilter_options[] = ;
static const AVClass avfilter_class = ;
static int default_execute(AVFilterContext *ctx, avfilter_action_func *func, void *arg,
int *ret, int nb_jobs)
AVFilterContext *ff_filter_alloc(const AVFilter *filter, const char *inst_name)
#if FF_API_AVFILTER_OPEN
int avfilter_open(AVFilterContext **filter_ctx, AVFilter *filter, const char *inst_name)
static void free_link(AVFilterLink *link)
void avfilter_free(AVFilterContext *filter)
static int process_options(AVFilterContext *ctx, AVDictionary **options,
const char *args)
#if FF_API_AVFILTER_INIT_FILTER
int avfilter_init_filter(AVFilterContext *filter, const char *args, void *opaque)
int avfilter_init_dict(AVFilterContext *ctx, AVDictionary **options)
int avfilter_init_str(AVFilterContext *filter, const char *args)
const char *avfilter_pad_get_name(const AVFilterPad *pads, int pad_idx)
enum AVMediaType avfilter_pad_get_type(const AVFilterPad *pads, int pad_idx)
static int default_filter_frame(AVFilterLink *link, AVFrame *frame)
static int ff_filter_frame_framed(AVFilterLink *link, AVFrame *frame)
static int ff_filter_frame_needs_framing(AVFilterLink *link, AVFrame *frame)
int ff_filter_frame(AVFilterLink *link, AVFrame *frame)
const AVClass *avfilter_get_class(void)
