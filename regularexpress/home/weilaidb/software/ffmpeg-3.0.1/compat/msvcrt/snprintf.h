#define COMPAT_MSVCRT_SNPRINTF_H
int avpriv_snprintf(char *s, size_t n, const char *fmt, ...);
int avpriv_vsnprintf(char *s, size_t n, const char *fmt, va_list ap);
#undef snprintf
#undef _snprintf
#undef vsnprintf
#define snprintf avpriv_snprintf
#define _snprintf avpriv_snprintf
#define vsnprintf avpriv_vsnprintf
