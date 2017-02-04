#define AVUTIL_AVSTRING_H
av_strstart;
av_stristart;
*av_stristr;
*av_strnstr;
av_strlcpy;
av_strlcat;
av_strlcatf av_printf_format(3, 4);
av_strnlen
*av_asprintf av_printf_format(1, 2);
*av_d2str;
*av_get_token;
*av_strtok;
av_isdigit
av_isgraph
av_isspace
av_toupper
av_tolower
av_isxdigit
av_strcasecmp;
av_strncasecmp;
*av_basename;
*av_dirname;
av_match_name;
*av_append_path_component;
enum AVEscapeMode ;
#define AV_ESCAPE_FLAG_WHITESPACE (1 << 0)
#define AV_ESCAPE_FLAG_STRICT (1 << 1)
av_warn_unused_result
av_escape;
#define AV_UTF8_FLAG_ACCEPT_INVALID_BIG_CODES          1
#define AV_UTF8_FLAG_ACCEPT_NON_CHARACTERS             2
#define AV_UTF8_FLAG_ACCEPT_SURROGATES                 4
#define AV_UTF8_FLAG_EXCLUDE_XML_INVALID_CONTROL_CODES 8
#define AV_UTF8_FLAG_ACCEPT_ALL \
AV_UTF8_FLAG_ACCEPT_INVALID_BIG_CODES|AV_UTF8_FLAG_ACCEPT_NON_CHARACTERS|AV_UTF8_FLAG_ACCEPT_SURROGATES
av_warn_unused_result
av_utf8_decode;
av_match_list;
