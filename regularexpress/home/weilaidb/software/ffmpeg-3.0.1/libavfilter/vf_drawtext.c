#if HAVE_SYS_TIME_H
#if HAVE_UNISTD_H
#if CONFIG_LIBFONTCONFIG
#if CONFIG_LIBFRIBIDI
static const char *const var_names[] = ;
static const char *const fun2_names[] = ;
static double drand(void *opaque, double min, double max)
typedef double (*eval_func2)(void *, double a, double b);
static const eval_func2 fun2[] = ;
enum var_name ;
enum expansion_mode ;
typedef struct DrawTextContext  DrawTextContext;
#define OFFSET(x) offsetof(DrawTextContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
static const AVOption drawtext_options[]= ;
AVFILTER_DEFINE_CLASS(drawtext);
#undef __FTERRORS_H__
#define FT_ERROR_START_LIST ;
static const struct ft_error
ft_errors[] =
#define FT_ERRMSG(e) ft_errors[e].err_msg
typedef struct Glyph  Glyph;
static int glyph_cmp(const void *key, const void *b)
static int load_glyph(AVFilterContext *ctx, Glyph **glyph_ptr, uint32_t code)
static int load_font_file(AVFilterContext *ctx, const char *path, int index)
#if CONFIG_LIBFONTCONFIG
static int load_font_fontconfig(AVFilterContext *ctx)
static int load_font(AVFilterContext *ctx)
static int load_textfile(AVFilterContext *ctx)
static inline int is_newline(uint32_t c)
#if CONFIG_LIBFRIBIDI
static int shape_text(AVFilterContext *ctx)
static av_cold int init(AVFilterContext *ctx)
static int query_formats(AVFilterContext *ctx)
static int glyph_enu_free(void *opaque, void *elem)
static av_cold void uninit(AVFilterContext *ctx)
static int config_input(AVFilterLink *inlink)
static int command(AVFilterContext *ctx, const char *cmd, const char *arg, char *res, int res_len, int flags)
static int func_pict_type(AVFilterContext *ctx, AVBPrint *bp,
char *fct, unsigned argc, char **argv, int tag)
static int func_pts(AVFilterContext *ctx, AVBPrint *bp,
char *fct, unsigned argc, char **argv, int tag)
static int func_frame_num(AVFilterContext *ctx, AVBPrint *bp,
char *fct, unsigned argc, char **argv, int tag)
static int func_metadata(AVFilterContext *ctx, AVBPrint *bp,
char *fct, unsigned argc, char **argv, int tag)
static int func_strftime(AVFilterContext *ctx, AVBPrint *bp,
char *fct, unsigned argc, char **argv, int tag)
static int func_eval_expr(AVFilterContext *ctx, AVBPrint *bp,
char *fct, unsigned argc, char **argv, int tag)
static int func_eval_expr_int_format(AVFilterContext *ctx, AVBPrint *bp,
char *fct, unsigned argc, char **argv, int tag)
static const struct drawtext_function  functions[] = ;
static int eval_function(AVFilterContext *ctx, AVBPrint *bp, char *fct,
unsigned argc, char **argv)
static int expand_function(AVFilterContext *ctx, AVBPrint *bp, char **rtext)
if ((ret = eval_function(ctx, bp, argv[0], argc - 1, argv + 1)) < 0)
goto end;
ret = 0;
*rtext = (char *)text + 1;
end:
for (i = 0; i < argc; i++)
av_freep(&argv[i]);
return ret;
}
static int expand_text(AVFilterContext *ctx, char *text, AVBPrint *bp)
static int draw_glyphs(DrawTextContext *s, AVFrame *frame,
int width, int height,
FFDrawColor *color,
int x, int y, int borderw)
static void update_color_with_alpha(DrawTextContext *s, FFDrawColor *color, const FFDrawColor incolor)
static void update_alpha(DrawTextContext *s)
static int draw_text(AVFilterContext *ctx, AVFrame *frame,
int width, int height)
static int filter_frame(AVFilterLink *inlink, AVFrame *frame)
static const AVFilterPad avfilter_vf_drawtext_inputs[] = ;
static const AVFilterPad avfilter_vf_drawtext_outputs[] = ;
AVFilter ff_vf_drawtext = ;
