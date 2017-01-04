#define AVFILTER_AVFILTER_H
unsigned avfilter_version(void);
const char *avfilter_configuration(void);
const char *avfilter_license(void);
typedef struct AVFilterContext AVFilterContext;
typedef struct AVFilterLink    AVFilterLink;
typedef struct AVFilterPad     AVFilterPad;
typedef struct AVFilterFormats AVFilterFormats;
int avfilter_pad_count(const AVFilterPad *pads);
const char *avfilter_pad_get_name(const AVFilterPad *pads, int pad_idx);
enum AVMediaType avfilter_pad_get_type(const AVFilterPad *pads, int pad_idx);
#define AVFILTER_FLAG_DYNAMIC_INPUTS        (1 << 0)
#define AVFILTER_FLAG_DYNAMIC_OUTPUTS       (1 << 1)
#define AVFILTER_FLAG_SLICE_THREADS         (1 << 2)
#define AVFILTER_FLAG_SUPPORT_TIMELINE_GENERIC  (1 << 16)
#define AVFILTER_FLAG_SUPPORT_TIMELINE_INTERNAL (1 << 17)
#define AVFILTER_FLAG_SUPPORT_TIMELINE (AVFILTER_FLAG_SUPPORT_TIMELINE_GENERIC | AVFILTER_FLAG_SUPPORT_TIMELINE_INTERNAL)
typedef struct AVFilter  AVFilter;
#define AVFILTER_THREAD_SLICE (1 << 0)
typedef struct AVFilterInternal AVFilterInternal;
struct AVFilterContext ;
struct AVFilterLink ;
int avfilter_link(AVFilterContext *src, unsigned srcpad,
AVFilterContext *dst, unsigned dstpad);
void avfilter_link_free(AVFilterLink **link);
int avfilter_link_get_channels(AVFilterLink *link);
attribute_deprecated
void avfilter_link_set_closed(AVFilterLink *link, int closed);
int avfilter_config_links(AVFilterContext *filter);
#define AVFILTER_CMD_FLAG_ONE   1
#define AVFILTER_CMD_FLAG_FAST  2
int avfilter_process_command(AVFilterContext *filter, const char *cmd, const char *arg, char *res, int res_len, int flags);
void avfilter_register_all(void);
#if FF_API_OLD_FILTER_REGISTER
attribute_deprecated
void avfilter_uninit(void);
int avfilter_register(AVFilter *filter);
#if !FF_API_NOCONST_GET_NAME
const
AVFilter *avfilter_get_by_name(const char *name);
const AVFilter *avfilter_next(const AVFilter *prev);
#if FF_API_OLD_FILTER_REGISTER
attribute_deprecated
AVFilter **av_filter_next(AVFilter **filter);
#if FF_API_AVFILTER_OPEN
attribute_deprecated
int avfilter_open(AVFilterContext **filter_ctx, AVFilter *filter, const char *inst_name);
#if FF_API_AVFILTER_INIT_FILTER
attribute_deprecated
int avfilter_init_filter(AVFilterContext *filter, const char *args, void *opaque);
int avfilter_init_str(AVFilterContext *ctx, const char *args);
int avfilter_init_dict(AVFilterContext *ctx, AVDictionary **options);
void avfilter_free(AVFilterContext *filter);
int avfilter_insert_filter(AVFilterLink *link, AVFilterContext *filt,
unsigned filt_srcpad_idx, unsigned filt_dstpad_idx);
const AVClass *avfilter_get_class(void);
typedef struct AVFilterGraphInternal AVFilterGraphInternal;
typedef int (avfilter_action_func)(AVFilterContext *ctx, void *arg, int jobnr, int nb_jobs);
typedef int (avfilter_execute_func)(AVFilterContext *ctx, avfilter_action_func *func,
void *arg, int *ret, int nb_jobs);
typedef struct AVFilterGraph  AVFilterGraph;
AVFilterGraph *avfilter_graph_alloc(void);
AVFilterContext *avfilter_graph_alloc_filter(AVFilterGraph *graph,
const AVFilter *filter,
const char *name);
AVFilterContext *avfilter_graph_get_filter(AVFilterGraph *graph, const char *name);
#if FF_API_AVFILTER_OPEN
attribute_deprecated
int avfilter_graph_add_filter(AVFilterGraph *graphctx, AVFilterContext *filter);
int avfilter_graph_create_filter(AVFilterContext **filt_ctx, const AVFilter *filt,
const char *name, const char *args, void *opaque,
AVFilterGraph *graph_ctx);
void avfilter_graph_set_auto_convert(AVFilterGraph *graph, unsigned flags);
enum ;
int avfilter_graph_config(AVFilterGraph *graphctx, void *log_ctx);
void avfilter_graph_free(AVFilterGraph **graph);
typedef struct AVFilterInOut  AVFilterInOut;
AVFilterInOut *avfilter_inout_alloc(void);
void avfilter_inout_free(AVFilterInOut **inout);
int avfilter_graph_parse(AVFilterGraph *graph, const char *filters,
AVFilterInOut *inputs, AVFilterInOut *outputs,
void *log_ctx);
int avfilter_graph_parse_ptr(AVFilterGraph *graph, const char *filters,
AVFilterInOut **inputs, AVFilterInOut **outputs,
void *log_ctx);
int avfilter_graph_parse2(AVFilterGraph *graph, const char *filters,
AVFilterInOut **inputs,
AVFilterInOut **outputs);
int avfilter_graph_send_command(AVFilterGraph *graph, const char *target, const char *cmd, const char *arg, char *res, int res_len, int flags);
int avfilter_graph_queue_command(AVFilterGraph *graph, const char *target, const char *cmd, const char *arg, int flags, double ts);
char *avfilter_graph_dump(AVFilterGraph *graph, const char *options);
int avfilter_graph_request_oldest(AVFilterGraph *graph);
