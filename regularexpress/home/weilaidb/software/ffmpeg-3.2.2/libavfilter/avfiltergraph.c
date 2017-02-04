OFFSET offsetof(AVFilterGraph, x)
#define FLAGS AV_OPT_FLAG_VIDEO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
static const AVOption filtergraph_options[] = ;
static const AVClass filtergraph_class = ;
#if !HAVE_THREADS
ff_graph_thread_free
ff_graph_thread_init
*avfilter_graph_alloc
ff_filter_graph_remove_filter
avfilter_graph_free
#if FF_API_AVFILTER_OPEN
avfilter_graph_add_filter
avfilter_graph_create_filter
avfilter_graph_set_auto_convert
*avfilter_graph_alloc_filter
graph_check_validity
graph_config_links
*avfilter_graph_get_filter
sanitize_channel_layouts
filter_query_formats
formats_declared
*clone_filter_formats
can_merge_formats
query_formats
get_fmt_score
find_best_sample_fmt_of_2
pick_format
REDUCE_FORMATS \
do  while (0)
reduce_formats_on_filter
reduce_formats
swap_samplerates_on_filter
swap_samplerates
#define CH_CENTER_PAIR (AV_CH_FRONT_LEFT_OF_CENTER | AV_CH_FRONT_RIGHT_OF_CENTER)
#define CH_FRONT_PAIR  (AV_CH_FRONT_LEFT           | AV_CH_FRONT_RIGHT)
#define CH_STEREO_PAIR (AV_CH_STEREO_LEFT          | AV_CH_STEREO_RIGHT)
#define CH_WIDE_PAIR   (AV_CH_WIDE_LEFT            | AV_CH_WIDE_RIGHT)
#define CH_SIDE_PAIR   (AV_CH_SIDE_LEFT            | AV_CH_SIDE_RIGHT)
#define CH_DIRECT_PAIR (AV_CH_SURROUND_DIRECT_LEFT | AV_CH_SURROUND_DIRECT_RIGHT)
#define CH_BACK_PAIR   (AV_CH_BACK_LEFT            | AV_CH_BACK_RIGHT)
static const uint64_t ch_subst[][2] = ;
swap_channel_layouts_on_filter
swap_channel_layouts
swap_sample_fmts_on_filter
swap_sample_fmts
pick_formats
graph_config_formats
graph_config_pointers
graph_insert_fifos
avfilter_graph_config
avfilter_graph_send_command
avfilter_graph_queue_command
heap_bubble_up
heap_bubble_down
ff_avfilter_graph_update_heap
avfilter_graph_request_oldest
*graph_run_once_find_filter
ff_filter_graph_run_once
