enum ShowWavesMode ;
enum ShowWavesScale ;
struct frame_node ;
typedef struct  ShowWavesContext;
OFFSET offsetof(ShowWavesContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
static const AVOption showwaves_options[] = ,
, 0, 0, FLAGS },
,
,
,
,
,
,
, 0, INT_MAX, FLAGS },
, 0, INT_MAX, FLAGS },
,
, 0, 0, FLAGS },
,
,
,
,
,
};
AVFILTER_DEFINE_CLASS(showwaves);
uninit
query_formats
get_lin_h
get_lin_h2
get_log_h
get_log_h2
get_sqrt_h
get_sqrt_h2
get_cbrt_h
get_cbrt_h2
draw_sample_point_rgba
draw_sample_line_rgba
draw_sample_p2p_rgba
draw_sample_cline_rgba
draw_sample_point_gray
draw_sample_line_gray
draw_sample_p2p_gray
draw_sample_cline_gray
config_output
push_frame
push_single_pic
request_frame
alloc_out_frame
init
#if CONFIG_SHOWWAVES_FILTER
showwaves_filter_frame
static const AVFilterPad showwaves_inputs[] = ;
static const AVFilterPad showwaves_outputs[] = ;
AVFilter ff_avf_showwaves = ;
#if CONFIG_SHOWWAVESPIC_FILTER
OFFSET offsetof(ShowWavesContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
static const AVOption showwavespic_options[] = ,
, 0, 0, FLAGS },
,
, 0, 0, FLAGS },
,
,
,
};
AVFILTER_DEFINE_CLASS(showwavespic);
showwavespic_config_input
showwavespic_filter_frame
static const AVFilterPad showwavespic_inputs[] = ;
static const AVFilterPad showwavespic_outputs[] = ;
AVFilter ff_avf_showwavespic = ;
