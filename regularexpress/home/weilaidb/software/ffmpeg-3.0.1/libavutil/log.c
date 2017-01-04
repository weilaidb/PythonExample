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
#if defined(_WIN32) && !defined(__MINGW32CE__) && HAVE_SETCONSOLETEXTATTRIBUTE
static const uint8_t color[16 + AV_CLASS_CATEGORY_NB] = ;
static int16_t background, attr_orig;
static HANDLE con;
static const uint32_t color[16 + AV_CLASS_CATEGORY_NB] = ;
static int use_color = -1;
static void check_color_terminal(void)
static void colored_fputs(int level, int tint, const char *str)
const char *av_default_item_name(void *ptr)
AVClassCategory av_default_get_category(void *ptr)
static void sanitize(uint8_t *line)
static int get_category(void *ptr)
static const char *get_level_str(int level)
static void format_line(void *avcl, int level, const char *fmt, va_list vl,
AVBPrint part[4], int *print_prefix, int type[2])
void av_log_format_line(void *ptr, int level, const char *fmt, va_list vl,
char *line, int line_size, int *print_prefix)
void av_log_default_callback(void* ptr, int level, const char* fmt, va_list vl)
static void (*av_log_callback)(void*, int, const char*, va_list) =
av_log_default_callback;
void av_log(void* avcl, int level, const char *fmt, ...)
void av_vlog(void* avcl, int level, const char *fmt, va_list vl)
int av_log_get_level(void)
void av_log_set_level(int level)
void av_log_set_flags(int arg)
int av_log_get_flags(void)
void av_log_set_callback(void (*callback)(void*, int, const char*, va_list))
static void missing_feature_sample(int sample, void *avc, const char *msg,
va_list argument_list)
void avpriv_request_sample(void *avc, const char *msg, ...)
void avpriv_report_missing_feature(void *avc, const char *msg, ...)
int main(int argc, char **argv)
