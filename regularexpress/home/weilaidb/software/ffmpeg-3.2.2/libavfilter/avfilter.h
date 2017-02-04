#define AVFILTER_AVFILTER_H
avfilter_version;
*avfilter_configuration;
*avfilter_license;
typedef struct AVFilterContext AVFilterContext;
typedef struct AVFilterLink    AVFilterLink;
typedef struct AVFilterPad     AVFilterPad;
typedef struct AVFilterFormats AVFilterFormats;
avfilter_pad_count;
*avfilter_pad_get_name;
avfilter_pad_get_type;
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
avfilter_link;
avfilter_link_free;
avfilter_link_get_channels;
attribute_deprecated
avfilter_link_set_closed;
avfilter_config_links;
#define AVFILTER_CMD_FLAG_ONE   1
#define AVFILTER_CMD_FLAG_FAST  2
avfilter_process_command;
avfilter_register_all;
#if FF_API_OLD_FILTER_REGISTER
attribute_deprecated
avfilter_uninit;
avfilter_register;
#if !FF_API_NOCONST_GET_NAME
const
*avfilter_get_by_name;
*avfilter_next;
#if FF_API_OLD_FILTER_REGISTER
attribute_deprecated
**av_filter_next;
#if FF_API_AVFILTER_OPEN
attribute_deprecated
avfilter_open;
#if FF_API_AVFILTER_INIT_FILTER
attribute_deprecated
avfilter_init_filter;
avfilter_init_str;
avfilter_init_dict;
avfilter_free;
avfilter_insert_filter;
*avfilter_get_class;
typedef struct AVFilterGraphInternal AVFilterGraphInternal;
typedef int (avfilter_action_func)(AVFilterContext *ctx, void *arg, int jobnr, int nb_jobs);
typedef int (avfilter_execute_func)(AVFilterContext *ctx, avfilter_action_func *func,
void *arg, int *ret, int nb_jobs);
typedef struct AVFilterGraph  AVFilterGraph;
*avfilter_graph_alloc;
*avfilter_graph_alloc_filter;
*avfilter_graph_get_filter;
#if FF_API_AVFILTER_OPEN
attribute_deprecated
avfilter_graph_add_filter;
avfilter_graph_create_filter;
avfilter_graph_set_auto_convert;
enum ;
avfilter_graph_config;
avfilter_graph_free;
typedef struct AVFilterInOut  AVFilterInOut;
*avfilter_inout_alloc;
avfilter_inout_free;
avfilter_graph_parse;
avfilter_graph_parse_ptr;
avfilter_graph_parse2;
avfilter_graph_send_command;
avfilter_graph_queue_command;
*avfilter_graph_dump;
avfilter_graph_request_oldest;
