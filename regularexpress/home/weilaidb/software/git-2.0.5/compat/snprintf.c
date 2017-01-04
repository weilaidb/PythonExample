#if defined(WIN32) && (!defined(__GNUC__) || __GNUC__ < 4)
#define SNPRINTF_SIZE_CORR 1
#define SNPRINTF_SIZE_CORR 0
#undef vsnprintf
int git_vsnprintf(char *str, size_t maxsize, const char *format, va_list ap)
int git_snprintf(char *str, size_t maxsize, const char *format, ...)
