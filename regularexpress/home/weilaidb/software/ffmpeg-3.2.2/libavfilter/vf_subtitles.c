#if CONFIG_SUBTITLES_FILTER
# include
# include
typedef struct  AssContext;
OFFSET offsetof(AssContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
#define COMMON_OPTIONS \
, \
, \
, \
, \
static const int ass_libavfilter_log_level_map[] = ;
ass_log
init
uninit
query_formats
config_input
AR  ( (c)>>24)
AG  (((c)>>16)&0xFF)
AB  (((c)>>8) &0xFF)
AA  ((0xFF-(c)) &0xFF)
overlay_ass_image
filter_frame
static const AVFilterPad ass_inputs[] = ;
static const AVFilterPad ass_outputs[] = ;
#if CONFIG_ASS_FILTER
static const AVOption ass_options[] = ;
AVFILTER_DEFINE_CLASS(ass);
init_ass
AVFilter ff_vf_ass = ;
#if CONFIG_SUBTITLES_FILTER
static const AVOption subtitles_options[] = ;
static const char * const font_mimetypes[] = ;
attachment_is_font
AVFILTER_DEFINE_CLASS(subtitles);
init_subtitles
AVFilter ff_vf_subtitles = ;
