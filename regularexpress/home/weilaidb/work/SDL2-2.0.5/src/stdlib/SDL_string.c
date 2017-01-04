#if defined(__clang_analyzer__) && !defined(SDL_DISABLE_ANALYZE_MACROS)
#define SDL_DISABLE_ANALYZE_MACROS 1
#define _GNU_SOURCE 1
#define SDL_isupperhex(X)   (((X) >= 'A') && ((X) <= 'F'))
#define SDL_islowerhex(X)   (((X) >= 'a') && ((X) <= 'f'))
#define UTF8_IsLeadByte(c) ((c) >= 0xC0 && (c) <= 0xF4)
#define UTF8_IsTrailingByte(c) ((c) >= 0x80 && (c) <= 0xBF)
static int UTF8_TrailingBytes(unsigned char c)
#if !defined(HAVE_VSSCANF) || !defined(HAVE_STRTOL)
static size_t
SDL_ScanLong(const char *text, int radix, long *valuep)
#if !defined(HAVE_VSSCANF) || !defined(HAVE_STRTOUL) || !defined(HAVE_STRTOD)
static size_t
SDL_ScanUnsignedLong(const char *text, int radix, unsigned long *valuep)
static size_t
SDL_ScanUintPtrT(const char *text, int radix, uintptr_t * valuep)
#if !defined(HAVE_VSSCANF) || !defined(HAVE_STRTOLL)
static size_t
SDL_ScanLongLong(const char *text, int radix, Sint64 * valuep)
#if !defined(HAVE_VSSCANF) || !defined(HAVE_STRTOULL)
static size_t
SDL_ScanUnsignedLongLong(const char *text, int radix, Uint64 * valuep)
#if !defined(HAVE_VSSCANF) || !defined(HAVE_STRTOD)
static size_t
SDL_ScanFloat(const char *text, double *valuep)
void *
SDL_memset(SDL_OUT_BYTECAP(len) void *dst, int c, size_t len)
void *
SDL_memcpy(SDL_OUT_BYTECAP(len) void *dst, SDL_IN_BYTECAP(len) const void *src, size_t len)
void *
SDL_memmove(SDL_OUT_BYTECAP(len) void *dst, SDL_IN_BYTECAP(len) const void *src, size_t len)
int
SDL_memcmp(const void *s1, const void *s2, size_t len)
size_t
SDL_strlen(const char *string)
size_t
SDL_wcslen(const wchar_t * string)
size_t
SDL_wcslcpy(SDL_OUT_Z_CAP(maxlen) wchar_t *dst, const wchar_t *src, size_t maxlen)
size_t
SDL_wcslcat(SDL_INOUT_Z_CAP(maxlen) wchar_t *dst, const wchar_t *src, size_t maxlen)
size_t
SDL_strlcpy(SDL_OUT_Z_CAP(maxlen) char *dst, const char *src, size_t maxlen)
size_t SDL_utf8strlcpy(SDL_OUT_Z_CAP(dst_bytes) char *dst, const char *src, size_t dst_bytes)
size_t
SDL_strlcat(SDL_INOUT_Z_CAP(maxlen) char *dst, const char *src, size_t maxlen)
char *
SDL_strdup(const char *string)
char *
SDL_strrev(char *string)
char *
SDL_strupr(char *string)
char *
SDL_strlwr(char *string)
char *
SDL_strchr(const char *string, int c)
char *
SDL_strrchr(const char *string, int c)
char *
SDL_strstr(const char *haystack, const char *needle)
#if !defined(HAVE__LTOA) || !defined(HAVE__I64TOA) || \
!defined(HAVE__ULTOA) || !defined(HAVE__UI64TOA)
static const char ntoa_table[] = ;
char *
SDL_itoa(int value, char *string, int radix)
char *
SDL_uitoa(unsigned int value, char *string, int radix)
char *
SDL_ltoa(long value, char *string, int radix)
char *
SDL_ultoa(unsigned long value, char *string, int radix)
char *
SDL_lltoa(Sint64 value, char *string, int radix)
char *
SDL_ulltoa(Uint64 value, char *string, int radix)
int SDL_atoi(const char *string)
double SDL_atof(const char *string)
long
SDL_strtol(const char *string, char **endp, int base)
unsigned long
SDL_strtoul(const char *string, char **endp, int base)
Sint64
SDL_strtoll(const char *string, char **endp, int base)
Uint64
SDL_strtoull(const char *string, char **endp, int base)
double
SDL_strtod(const char *string, char **endp)
int
SDL_strcmp(const char *str1, const char *str2)
int
SDL_strncmp(const char *str1, const char *str2, size_t maxlen)
int
SDL_strcasecmp(const char *str1, const char *str2)
int
SDL_strncasecmp(const char *str1, const char *str2, size_t maxlen)
int
SDL_sscanf(const char *text, SDL_SCANF_FORMAT_STRING const char *fmt, ...)
int
SDL_vsscanf(const char *text, const char *fmt, va_list ap)
int
SDL_vsscanf(const char *text, const char *fmt, va_list ap)
int
SDL_snprintf(SDL_OUT_Z_CAP(maxlen) char *text, size_t maxlen, SDL_PRINTF_FORMAT_STRING const char *fmt, ...)
int SDL_vsnprintf(SDL_OUT_Z_CAP(maxlen) char *text, size_t maxlen, const char *fmt, va_list ap)
typedef enum
SDL_letter_case;
typedef struct
SDL_FormatInfo;
static size_t
SDL_PrintString(char *text, size_t maxlen, SDL_FormatInfo *info, const char *string)
static size_t
SDL_PrintLong(char *text, size_t maxlen, SDL_FormatInfo *info, long value)
static size_t
SDL_PrintUnsignedLong(char *text, size_t maxlen, SDL_FormatInfo *info, unsigned long value)
static size_t
SDL_PrintLongLong(char *text, size_t maxlen, SDL_FormatInfo *info, Sint64 value)
static size_t
SDL_PrintUnsignedLongLong(char *text, size_t maxlen, SDL_FormatInfo *info, Uint64 value)
static size_t
SDL_PrintFloat(char *text, size_t maxlen, SDL_FormatInfo *info, double arg)
int
SDL_vsnprintf(SDL_OUT_Z_CAP(maxlen) char *text, size_t maxlen, const char *fmt, va_list ap)
