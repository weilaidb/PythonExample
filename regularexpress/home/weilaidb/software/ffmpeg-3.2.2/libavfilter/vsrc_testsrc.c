typedef struct TestSourceContext  TestSourceContext;
OFFSET offsetof(TestSourceContext, x)
#define FLAGS AV_OPT_FLAG_VIDEO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
#define SIZE_OPTIONS \
, 0, 0, FLAGS },\
, 0, 0, FLAGS },\
#define COMMON_OPTIONS_NOSIZE \
, 0, INT_MAX, FLAGS },\
, 0, INT_MAX, FLAGS },\
,\
,\
,
#define COMMON_OPTIONS SIZE_OPTIONS COMMON_OPTIONS_NOSIZE
static const AVOption options[] = ;
init
uninit
config_props
request_frame
#if CONFIG_COLOR_FILTER
static const AVOption color_options[] = ,
, CHAR_MIN, CHAR_MAX, FLAGS },
COMMON_OPTIONS
};
AVFILTER_DEFINE_CLASS(color);
color_fill_picture
color_init
color_query_formats
color_config_props
color_process_command
static const AVFilterPad color_outputs[] = ;
AVFilter ff_vsrc_color = ;
#if CONFIG_HALDCLUTSRC_FILTER
static const AVOption haldclutsrc_options[] = ;
AVFILTER_DEFINE_CLASS(haldclutsrc);
haldclutsrc_fill_picture
haldclutsrc_init
haldclutsrc_query_formats
haldclutsrc_config_props
static const AVFilterPad haldclutsrc_outputs[] = ;
AVFilter ff_vsrc_haldclutsrc = ;
#if CONFIG_NULLSRC_FILTER
AVFILTER_DEFINE_CLASS;
nullsrc_fill_picture
nullsrc_init
static const AVFilterPad nullsrc_outputs[] = ;
AVFilter ff_vsrc_nullsrc = ;
#if CONFIG_TESTSRC_FILTER
static const AVOption testsrc_options[] = ;
AVFILTER_DEFINE_CLASS(testsrc);
draw_rectangle
draw_digit
#define GRADIENT_SIZE (6 * 256)
test_fill_picture
test_init
test_query_formats
static const AVFilterPad avfilter_vsrc_testsrc_outputs[] = ;
AVFilter ff_vsrc_testsrc = ;
#if CONFIG_TESTSRC2_FILTER
static const AVOption testsrc2_options[] = ;
AVFILTER_DEFINE_CLASS(testsrc2);
set_color
color_gradient
draw_text
test2_fill_picture
test2_init
test2_query_formats
test2_config_props
static const AVFilterPad avfilter_vsrc_testsrc2_outputs[] = ;
AVFilter ff_vsrc_testsrc2 = ;
#if CONFIG_RGBTESTSRC_FILTER
AVFILTER_DEFINE_CLASS;
#define R 0
#define G 1
#define B 2
#define A 3
rgbtest_put_pixel
rgbtest_fill_picture
rgbtest_init
rgbtest_query_formats
rgbtest_config_props
static const AVFilterPad avfilter_vsrc_rgbtestsrc_outputs[] = ;
AVFilter ff_vsrc_rgbtestsrc = ;
#if CONFIG_YUVTESTSRC_FILTER
AVFILTER_DEFINE_CLASS;
yuvtest_fill_picture8
yuvtest_fill_picture16
yuvtest_init
yuvtest_query_formats
yuvtest_config_props
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
draw_bar
smptebars_query_formats
static const AVFilterPad smptebars_outputs[] = ;
#if CONFIG_SMPTEBARS_FILTER
AVFILTER_DEFINE_CLASS;
smptebars_fill_picture
smptebars_init
AVFilter ff_vsrc_smptebars = ;
#if CONFIG_SMPTEHDBARS_FILTER
AVFILTER_DEFINE_CLASS;
smptehdbars_fill_picture
smptehdbars_init
AVFilter ff_vsrc_smptehdbars = ;
#if CONFIG_ALLYUV_FILTER
static const AVOption allyuv_options[] = ;
AVFILTER_DEFINE_CLASS(allyuv);
allyuv_fill_picture
allyuv_init
allyuv_query_formats
static const AVFilterPad avfilter_vsrc_allyuv_outputs[] = ;
AVFilter ff_vsrc_allyuv = ;
#if CONFIG_ALLRGB_FILTER
static const AVOption allrgb_options[] = ;
AVFILTER_DEFINE_CLASS(allrgb);
allrgb_fill_picture
allrgb_init
allrgb_config_props
allrgb_query_formats
static const AVFilterPad avfilter_vsrc_allrgb_outputs[] = ;
AVFilter ff_vsrc_allrgb = ;
