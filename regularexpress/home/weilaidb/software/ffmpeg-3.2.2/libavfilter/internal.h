#define AVFILTER_INTERNAL_H
typedef struct AVFilterCommand  AVFilterCommand;
ff_avfilter_graph_update_heap;
struct AVFilterPad ;
struct AVFilterGraphInternal ;
struct AVFilterInternal ;
ff_fmt_is_in;
av_warn_unused_result
ff_parse_pixel_format;
av_warn_unused_result
ff_parse_sample_rate;
av_warn_unused_result
ff_parse_time_base;
av_warn_unused_result
ff_parse_sample_format;
av_warn_unused_result
ff_parse_channel_layout;
ff_update_link_current_pts;
ff_avfilter_link_set_in_status;
ff_avfilter_link_set_out_status;
ff_command_queue_pop;
ff_tlog av_log(pctx, AV_LOG_DEBUG, __VA_ARGS__)
ff_tlog do  while (0)
FF_TPRINTF_START ff_tlog(NULL, , #func)
*ff_get_ref_perms_string;
ff_tlog_ref;
ff_tlog_link;
ff_insert_pad;
ff_insert_inpad
ff_insert_outpad
ff_poll_frame;
ff_request_frame;
ff_request_frame_to_filter;
AVFILTER_DEFINE_CLASS            \
static const AVClass fname##_class =
FF_INLINK_IDX  ((int)((link)->dstpad - (link)->dst->input_pads))
FF_OUTLINK_IDX ((int)((link)->srcpad - (link)->src->output_pads))
ff_filter_frame;
*ff_filter_alloc;
ff_filter_graph_remove_filter;
ff_filter_graph_run_once;
ff_norm_qscale
ff_filter_get_nb_threads;
