#define AVUTIL_AVSTRING_H
int av_strstart(const char *str, const char *pfx, const char **ptr);
int av_stristart(const char *str, const char *pfx, const char **ptr);
char *av_stristr(const char *haystack, const char *needle);
char *av_strnstr(const char *haystack, const char *needle, size_t hay_length);
size_t av_strlcpy(char *dst, const char *src, size_t size);
size_t av_strlcat(char *dst, const char *src, size_t size);
size_t av_strlcatf(char *dst, size_t size, const char *fmt, ...) av_printf_format(3, 4);
static inline size_t av_strnlen(const char *s, size_t len)
char *av_asprintf(const char *fmt, ...) av_printf_format(1, 2);
char *av_d2str(double d);
char *av_get_token(const char **buf, const char *term);
char *av_strtok(char *s, const char *delim, char **saveptr);
static inline av_const int av_isdigit(int c)
static inline av_const int av_isgraph(int c)
static inline av_const int av_isspace(int c)
static inline av_const int av_toupper(int c)
static inline av_const int av_tolower(int c)
static inline av_const int av_isxdigit(int c)
int av_strcasecmp(const char *a, const char *b);
int av_strncasecmp(const char *a, const char *b, size_t n);
const char *av_basename(const char *path);
const char *av_dirname(char *path);
int av_match_name(const char *name, const char *names);
char *av_append_path_component(const char *path, const char *component);
enum AVEscapeMode ;
#define AV_ESCAPE_FLAG_WHITESPACE (1 << 0)
#define AV_ESCAPE_FLAG_STRICT (1 << 1)
av_warn_unused_result
int av_escape(char **dst, const char *src, const char *special_chars,
enum AVEscapeMode mode, int flags);
#define AV_UTF8_FLAG_ACCEPT_INVALID_BIG_CODES          1
#define AV_UTF8_FLAG_ACCEPT_NON_CHARACTERS             2
#define AV_UTF8_FLAG_ACCEPT_SURROGATES                 4
#define AV_UTF8_FLAG_EXCLUDE_XML_INVALID_CONTROL_CODES 8
#define AV_UTF8_FLAG_ACCEPT_ALL \
AV_UTF8_FLAG_ACCEPT_INVALID_BIG_CODES|AV_UTF8_FLAG_ACCEPT_NON_CHARACTERS|AV_UTF8_FLAG_ACCEPT_SURROGATES
av_warn_unused_result
int av_utf8_decode(int32_t *codep, const uint8_t **bufp, const uint8_t *buf_end,
unsigned int flags);
int av_match_list(const char *name, const char *list, char separator);
