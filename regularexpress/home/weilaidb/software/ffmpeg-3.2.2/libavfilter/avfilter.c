const char av_filter_ffversion[] =  FFMPEG_VERSION;
ff_filter_frame_framed;
ff_tlog_ref
avfilter_version
*avfilter_configuration
*avfilter_license
ff_command_queue_pop
ff_insert_pad
avfilter_link
avfilter_link_free
avfilter_link_get_channels
ff_avfilter_link_set_in_status
ff_avfilter_link_set_out_status
avfilter_link_set_closed
avfilter_insert_filter
avfilter_config_links
ff_tlog_link
ff_request_frame
ff_request_frame_to_filter
ff_poll_frame
static const char *const var_names[] = ;
enum ;
set_enable_expr
ff_update_link_current_pts
avfilter_process_command
static AVFilter *first_filter;
static AVFilter **last_filter = &first_filter;
#if !FF_API_NOCONST_GET_NAME
const
*avfilter_get_by_name
avfilter_register
*avfilter_next
#if FF_API_OLD_FILTER_REGISTER
**av_filter_next
avfilter_uninit
avfilter_pad_count
*default_filter_name
*filter_child_next
*filter_child_class_next
OFFSET offsetof(AVFilterContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM
static const AVOption avfilter_options[] = ;
static const AVClass avfilter_class = ;
default_execute
*ff_filter_alloc
#if FF_API_AVFILTER_OPEN
avfilter_open
free_link
avfilter_free
ff_filter_get_nb_threads
process_options
#if FF_API_AVFILTER_INIT_FILTER
avfilter_init_filter
avfilter_init_dict
avfilter_init_str
*avfilter_pad_get_name
avfilter_pad_get_type
default_filter_frame
ff_filter_frame_framed
ff_filter_frame_needs_framing
ff_filter_frame
*avfilter_get_class
