typedef struct TestSourceContext  TestSourceContext;
#define OFFSET(x) offsetof(TestSourceContext, x)
#define FLAGS AV_OPT_FLAG_VIDEO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
#define SIZE_OPTIONS \
,\
,\
#define COMMON_OPTIONS_NOSIZE \
,\
,\
,\
,\
,
#define COMMON_OPTIONS SIZE_OPTIONS COMMON_OPTIONS_NOSIZE
static const AVOption options[] = ;
static av_cold int init(AVFilterContext *ctx)
static av_cold void uninit(AVFilterContext *ctx)
static int config_props(AVFilterLink *outlink)
static int request_frame(AVFilterLink *outlink)
#if CONFIG_COLOR_FILTER
static const AVOption color_options[] = ;
AVFILTER_DEFINE_CLASS(color);
static void color_fill_picture(AVFilterContext *ctx, AVFrame *picref)
static av_cold int color_init(AVFilterContext *ctx)
static int color_query_formats(AVFilterContext *ctx)
static int color_config_props(AVFilterLink *inlink)
static int color_process_command(AVFilterContext *ctx, const char *cmd, const char *args,
char *res, int res_len, int flags)
static const AVFilterPad color_outputs[] = ;
AVFilter ff_vsrc_color = ;
#if CONFIG_HALDCLUTSRC_FILTER
static const AVOption haldclutsrc_options[] = ;
AVFILTER_DEFINE_CLASS(haldclutsrc);
static void haldclutsrc_fill_picture(AVFilterContext *ctx, AVFrame *frame)
static av_cold int haldclutsrc_init(AVFilterContext *ctx)
static int haldclutsrc_query_formats(AVFilterContext *ctx)
static int haldclutsrc_config_props(AVFilterLink *outlink)
static const AVFilterPad haldclutsrc_outputs[] = ;
AVFilter ff_vsrc_haldclutsrc = ;
#if CONFIG_NULLSRC_FILTER
#define nullsrc_options options
AVFILTER_DEFINE_CLASS(nullsrc);
static void nullsrc_fill_picture(AVFilterContext *ctx, AVFrame *picref)
static av_cold int nullsrc_init(AVFilterContext *ctx)
static const AVFilterPad nullsrc_outputs[] = ;
AVFilter ff_vsrc_nullsrc = ;
#if CONFIG_TESTSRC_FILTER
static const AVOption testsrc_options[] = ;
AVFILTER_DEFINE_CLASS(testsrc);
static void draw_rectangle(unsigned val, uint8_t *dst, int dst_linesize, int segment_width,
int x, int y, int w, int h)
static void draw_digit(int digit, uint8_t *dst, int dst_linesize,
int segment_width)
#define GRADIENT_SIZE (6 * 256)
static void test_fill_picture(AVFilterContext *ctx, AVFrame *frame)
static av_cold int test_init(AVFilterContext *ctx)
static int test_query_formats(AVFilterContext *ctx)
static const AVFilterPad avfilter_vsrc_testsrc_outputs[] = ;
AVFilter ff_vsrc_testsrc = ;
#if CONFIG_TESTSRC2_FILTER
static const AVOption testsrc2_options[] = ;
AVFILTER_DEFINE_CLASS(testsrc2);
static void set_color(TestSourceContext *s, FFDrawColor *color, uint32_t argb)
static uint32_t color_gradient(unsigned index)
static void draw_text(TestSourceContext *s, AVFrame *frame, FFDrawColor *color,
int x0, int y0, const uint8_t *text)
static void test2_fill_picture(AVFilterContext *ctx, AVFrame *frame)
static av_cold int test2_init(AVFilterContext *ctx)
static int test2_query_formats(AVFilterContext *ctx)
static int test2_config_props(AVFilterLink *inlink)
static const AVFilterPad avfilter_vsrc_testsrc2_outputs[] = ;
AVFilter ff_vsrc_testsrc2 = ;
#if CONFIG_RGBTESTSRC_FILTER
#define rgbtestsrc_options options
AVFILTER_DEFINE_CLASS(rgbtestsrc);
#define R 0
#define G 1
#define B 2
#define A 3
static void rgbtest_put_pixel(uint8_t *dst, int dst_linesize,
int x, int y, int r, int g, int b, enum AVPixelFormat fmt,
uint8_t rgba_map[4])
static void rgbtest_fill_picture(AVFilterContext *ctx, AVFrame *frame)
static av_cold int rgbtest_init(AVFilterContext *ctx)
static int rgbtest_query_formats(AVFilterContext *ctx)
static int rgbtest_config_props(AVFilterLink *outlink)
static const AVFilterPad avfilter_vsrc_rgbtestsrc_outputs[] = ;
AVFilter ff_vsrc_rgbtestsrc = ;
#if CONFIG_YUVTESTSRC_FILTER
#define yuvtestsrc_options options
AVFILTER_DEFINE_CLASS(yuvtestsrc);
static void yuvtest_fill_picture8(AVFilterContext *ctx, AVFrame *frame)
static void yuvtest_fill_picture16(AVFilterContext *ctx, AVFrame *frame)
static av_cold int yuvtest_init(AVFilterContext *ctx)
static int yuvtest_query_formats(AVFilterContext *ctx)
static int yuvtest_config_props(AVFilterLink *outlink)
static const AVFilterPad avfilter_vsrc_yuvtestsrc_outputs[] = ;
AVFilter ff_vsrc_yuvtestsrc = ;
#if CONFIG_SMPTEBARS_FILTER || CONFIG_SMPTEHDBARS_FILTER
static const uint8_t rainbow[7][4] = ;
static const uint8_t rainbowhd[7][4] = ;
static const uint8_t wobnair[7][4] = ;
static const uint8_t white[4] = ;
static const uint8_t neg4ire[4] = ;
static const uint8_t pos4ire[4] = ;
static const uint8_t i_pixel[4] = ;
static const uint8_t q_pixel[4] = ;
static const uint8_t gray40[4] = ;
static const uint8_t gray15[4] = ;
static const uint8_t   cyan[4] = ;
static const uint8_t yellow[4] = ;
static const uint8_t   blue[4] = ;
static const uint8_t    red[4] = ;
static const uint8_t black0[4] = ;
static const uint8_t black2[4] = ;
static const uint8_t black4[4] = ;
static const uint8_t   neg2[4] = ;
static void draw_bar(TestSourceContext *test, const uint8_t color[4],
int x, int y, int w, int h,
AVFrame *frame)
static int smptebars_query_formats(AVFilterContext *ctx)
static const AVFilterPad smptebars_outputs[] = ;
#if CONFIG_SMPTEBARS_FILTER
#define smptebars_options options
AVFILTER_DEFINE_CLASS(smptebars);
static void smptebars_fill_picture(AVFilterContext *ctx, AVFrame *picref)
static av_cold int smptebars_init(AVFilterContext *ctx)
AVFilter ff_vsrc_smptebars = ;
#if CONFIG_SMPTEHDBARS_FILTER
#define smptehdbars_options options
AVFILTER_DEFINE_CLASS(smptehdbars);
static void smptehdbars_fill_picture(AVFilterContext *ctx, AVFrame *picref)
static av_cold int smptehdbars_init(AVFilterContext *ctx)
AVFilter ff_vsrc_smptehdbars = ;
#if CONFIG_ALLYUV_FILTER
static const AVOption allyuv_options[] = ;
AVFILTER_DEFINE_CLASS(allyuv);
static void allyuv_fill_picture(AVFilterContext *ctx, AVFrame *frame)
static av_cold int allyuv_init(AVFilterContext *ctx)
static int allyuv_query_formats(AVFilterContext *ctx)
static const AVFilterPad avfilter_vsrc_allyuv_outputs[] = ;
AVFilter ff_vsrc_allyuv = ;
#if CONFIG_ALLRGB_FILTER
static const AVOption allrgb_options[] = ;
AVFILTER_DEFINE_CLASS(allrgb);
static void allrgb_fill_picture(AVFilterContext *ctx, AVFrame *frame)
static av_cold int allrgb_init(AVFilterContext *ctx)
static int allrgb_config_props(AVFilterLink *outlink)
static int allrgb_query_formats(AVFilterContext *ctx)
static const AVFilterPad avfilter_vsrc_allrgb_outputs[] = ;
AVFilter ff_vsrc_allrgb = ;
