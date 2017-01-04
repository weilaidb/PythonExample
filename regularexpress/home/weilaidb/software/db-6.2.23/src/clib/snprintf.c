#if !defined(HAVE_SNPRINTF) || !defined(HAVE_VSNPRINTF)
static void sprintf_overflow __P((void));
static int  sprintf_retcharpnt __P((void));
int
snprintf(char *str, size_t n, const char *fmt, ...)
int
vsnprintf(str, n, fmt, ap)
char *str;
size_t n;
const char *fmt;
va_list ap;
#if !defined(HAVE_SNPRINTF) || !defined(HAVE_VSNPRINTF)
static void
sprintf_overflow()
static int
sprintf_retcharpnt()
