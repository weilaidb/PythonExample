#define AVUTIL_LOG_H
typedef enum AVClassCategory;
#define AV_IS_INPUT_DEVICE(category) \
(((category) == AV_CLASS_CATEGORY_DEVICE_VIDEO_INPUT) || \
((category) == AV_CLASS_CATEGORY_DEVICE_AUDIO_INPUT) || \
((category) == AV_CLASS_CATEGORY_DEVICE_INPUT))
#define AV_IS_OUTPUT_DEVICE(category) \
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
#define AV_LOG_C(x) ((x) << 8)
void av_log(void *avcl, int level, const char *fmt, ...) av_printf_format(3, 4);
void av_vlog(void *avcl, int level, const char *fmt, va_list vl);
int av_log_get_level(void);
void av_log_set_level(int level);
void av_log_set_callback(void (*callback)(void*, int, const char*, va_list));
void av_log_default_callback(void *avcl, int level, const char *fmt,
va_list vl);
const char* av_default_item_name(void* ctx);
AVClassCategory av_default_get_category(void *ptr);
void av_log_format_line(void *ptr, int level, const char *fmt, va_list vl,
char *line, int line_size, int *print_prefix);
#if FF_API_DLOG
#    define av_dlog(pctx, ...) av_log(pctx, AV_LOG_DEBUG, __VA_ARGS__)
#    define av_dlog(pctx, ...) do  while (0)
#define AV_LOG_SKIP_REPEATED 1
#define AV_LOG_PRINT_LEVEL 2
void av_log_set_flags(int arg);
int av_log_get_flags(void);
