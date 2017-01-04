#if CONFIG_SUBTITLES_FILTER
# include "libavcodec/avcodec.h"
# include "libavformat/avformat.h"
typedef struct  AssContext;
#define OFFSET(x) offsetof(AssContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
#define COMMON_OPTIONS \
, \
, \
, \
, \
static const int ass_libavfilter_log_level_map[] = ;
static void ass_log(int ass_level, const char *fmt, va_list args, void *ctx)
static av_cold int init(AVFilterContext *ctx)
static av_cold void uninit(AVFilterContext *ctx)
static int query_formats(AVFilterContext *ctx)
static int config_input(AVFilterLink *inlink)
#define AR(c)  ( (c)>>24)
#define AG(c)  (((c)>>16)&0xFF)
#define AB(c)  (((c)>>8) &0xFF)
#define AA(c)  ((0xFF-(c)) &0xFF)
static void overlay_ass_image(AssContext *ass, AVFrame *picref,
const ASS_Image *image)
static int filter_frame(AVFilterLink *inlink, AVFrame *picref)
static const AVFilterPad ass_inputs[] = ;
static const AVFilterPad ass_outputs[] = ;
#if CONFIG_ASS_FILTER
static const AVOption ass_options[] = ;
AVFILTER_DEFINE_CLASS(ass);
static av_cold int init_ass(AVFilterContext *ctx)
AVFilter ff_vf_ass = ;
#if CONFIG_SUBTITLES_FILTER
static const AVOption subtitles_options[] = ;
static const char * const font_mimetypes[] = ;
static int attachment_is_font(AVStream * st)
AVFILTER_DEFINE_CLASS(subtitles);
static av_cold int init_subtitles(AVFilterContext *ctx)
AVFilter ff_vf_subtitles = ;
