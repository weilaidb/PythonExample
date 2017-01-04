#if defined(__MINGW32__)
#define EOVERFLOW EFBIG
int avpriv_snprintf(char *s, size_t n, const char *fmt, ...)
int avpriv_vsnprintf(char *s, size_t n, const char *fmt,
va_list ap)
