#if HAVE_UNISTD_H
#if HAVE_IO_H
#if HAVE_PTHREADS
static pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;
#define LINE_SZ 1024
#if HAVE_VALGRIND_VALGRIND_H
#define BACKTRACE_LOGLEVEL AV_LOG_ERROR
static int av_log_level = AV_LOG_INFO;
static int flags;
#define NB_LEVELS 8
defined && !defined(__MINGW32CE__) && HAVE_SETCONSOLETEXTATTRIBUTE
static const uint8_t color[16 + AV_CLASS_CATEGORY_NB] = ;
static int16_t background, attr_orig;
static HANDLE con;
static const uint32_t color[16 + AV_CLASS_CATEGORY_NB] = ;
static int use_color = -1;
check_color_terminal
colored_fputs
*av_default_item_name
av_default_get_category
sanitize
get_category
*get_level_str
format_line
av_log_format_line
av_log_format_line2
av_log_default_callback
static void (*av_log_callback)(void*, int, const char*, va_list) =
av_log_default_callback;
av_log
av_vlog
av_log_get_level
av_log_set_level
av_log_set_flags
av_log_get_flags
av_log_set_callback(void*, int, const char*, va_list))
missing_feature_sample
avpriv_request_sample
avpriv_report_missing_feature
