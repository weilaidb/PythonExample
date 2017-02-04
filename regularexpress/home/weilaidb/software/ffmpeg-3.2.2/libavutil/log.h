#define AVUTIL_LOG_H
typedef enum AVClassCategory;
AV_IS_INPUT_DEVICE \
(((category) == AV_CLASS_CATEGORY_DEVICE_VIDEO_INPUT) || \
((category) == AV_CLASS_CATEGORY_DEVICE_AUDIO_INPUT) || \
((category) == AV_CLASS_CATEGORY_DEVICE_INPUT))
AV_IS_OUTPUT_DEVICE \
(((category) == AV_CLASS_CATEGORY_DEVICE_VIDEO_OUTPUT) || \
((category) == AV_CLASS_CATEGORY_DEVICE_AUDIO_OUTPUT) || \
((category) == AV_CLASS_CATEGORY_DEVICE_OUTPUT))
struct AVOptionRanges;
typedef struct AVClass  AVClass;
#define AV_LOG_QUIET    -8
#define AV_LOG_PANIC     0
#define AV_LOG_FATAL     8
#define AV_LOG_ERROR    16
#define AV_LOG_WARNING  24
#define AV_LOG_INFO     32
#define AV_LOG_VERBOSE  40
#define AV_LOG_DEBUG    48
#define AV_LOG_TRACE    56
#define AV_LOG_MAX_OFFSET (AV_LOG_TRACE - AV_LOG_QUIET)
AV_LOG_C ((x) << 8)
av_log av_printf_format(3, 4);
av_vlog;
av_log_get_level;
av_log_set_level;
av_log_set_callback(void*, int, const char*, va_list));
av_log_default_callback;
av_default_item_name;
av_default_get_category;
av_log_format_line;
av_log_format_line2;
#if FF_API_DLOG
av_dlog av_log(pctx, AV_LOG_DEBUG, __VA_ARGS__)
av_dlog do  while (0)
#define AV_LOG_SKIP_REPEATED 1
#define AV_LOG_PRINT_LEVEL 2
av_log_set_flags;
av_log_get_flags;
