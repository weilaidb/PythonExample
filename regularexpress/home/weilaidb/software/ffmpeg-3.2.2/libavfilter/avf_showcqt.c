#if CONFIG_LIBFREETYPE
#if CONFIG_LIBFONTCONFIG
#define BASEFREQ        20.01523126408007475
#define ENDFREQ         20495.59681441799654
#define TLENGTH
#define TLENGTH_MIN     0.001
#define VOLUME_MAX      100.0
#define FONTCOLOR        \
\
#define CSCHEME
#define PTS_STEP 10
#define PTS_TOLERANCE 1
OFFSET offsetof(ShowCQTContext, x)
#define FLAGS (AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM)
static const AVOption showcqt_options[] = ,
,      0, 0,        FLAGS },
,             1, 1000,     FLAGS },
,             1, 1000,     FLAGS },
,             1, 1000,     FLAGS },
,
,
,
,
,      CHAR_MIN, CHAR_MAX, FLAGS },
,      CHAR_MIN, CHAR_MAX, FLAGS },
,  CHAR_MIN, CHAR_MAX, FLAGS },
,  CHAR_MIN, CHAR_MAX, FLAGS },
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
};
AVFILTER_DEFINE_CLASS(showcqt);
common_uninit
*create_freq_table
clip_with_log
a_weighting
b_weighting
c_weighting
init_volume
cqt_calc
init_cqt
*alloc_frame_empty
convert_axis_pixel_format
init_axis_empty
init_axis_from_file
midi
r_func
g_func
b_func
init_axis_color
render_freetype
render_fontconfig
render_default_font
init_axis_from_font
calculate_gamma
rgb_from_cqt
yuv_from_cqt
draw_bar_rgb
DRAW_BAR_WITH_CHROMA \
do  while (0)
DRAW_BAR_WITHOUT_CHROMA \
do  while (0)
draw_bar_yuv
draw_axis_rgb
BLEND_WITH_CHROMA \
do  while (0)
BLEND_WITHOUT_CHROMA \
do  while (0)
BLEND_CHROMA2 \
do  while (0)
BLEND_CHROMA2x2 \
do  while (0)
draw_axis_yuv
draw_sono
update_sono_rgb
update_sono_yuv
process_cqt
plot_cqt
init_colormatrix
init_cscheme
init
uninit
query_formats
config_output
filter_frame
request_frame
static const AVFilterPad showcqt_inputs[] = ;
static const AVFilterPad showcqt_outputs[] = ;
AVFilter ff_avf_showcqt = ;
