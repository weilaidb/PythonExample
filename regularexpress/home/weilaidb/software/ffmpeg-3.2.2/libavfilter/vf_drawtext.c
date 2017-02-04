#if HAVE_SYS_TIME_H
#if HAVE_UNISTD_H
#if CONFIG_LIBFONTCONFIG
#if CONFIG_LIBFRIBIDI
static const char *const var_names[] = ;
static const char *const fun2_names[] = ;
drand
typedef double (*eval_func2)(void *, double a, double b);
static const eval_func2 fun2[] = ;
enum var_name ;
enum expansion_mode ;
typedef struct DrawTextContext  DrawTextContext;
OFFSET offsetof(DrawTextContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
static const AVOption drawtext_options[]= ,
, CHAR_MIN, CHAR_MAX, FLAGS},
, CHAR_MIN, CHAR_MAX, FLAGS},
, CHAR_MIN, CHAR_MAX, FLAGS},
, CHAR_MIN, CHAR_MAX, FLAGS},
,
,
,
,   CHAR_MIN, CHAR_MAX, FLAGS},
,   CHAR_MIN, CHAR_MAX, FLAGS},
,
,
,
,
,
#if CONFIG_LIBFONTCONFIG
,           .flags = FLAGS },
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
,          .flags = FLAGS },
,
,
#if CONFIG_LIBFRIBIDI
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
AVFILTER_DEFINE_CLASS(drawtext);
#undef __FTERRORS_H__
#define FT_ERROR_START_LIST ;
static const struct ft_error
ft_errors[] =
FT_ERRMSG ft_errors[e].err_msg
typedef struct Glyph  Glyph;
glyph_cmp
load_glyph
load_font_file
#if CONFIG_LIBFONTCONFIG
load_font_fontconfig
load_font
load_textfile
is_newline
#if CONFIG_LIBFRIBIDI
shape_text
init
query_formats
glyph_enu_free
uninit
config_input
command
func_pict_type
func_pts
func_frame_num
func_metadata
func_strftime
func_eval_expr
func_eval_expr_int_format
static const struct drawtext_function  functions[] = ;
eval_function
expand_function
expand_text
draw_glyphs
update_color_with_alpha
update_alpha
draw_text
filter_frame
static const AVFilterPad avfilter_vf_drawtext_inputs[] = ;
static const AVFilterPad avfilter_vf_drawtext_outputs[] = ;
AVFilter ff_vf_drawtext = ;
