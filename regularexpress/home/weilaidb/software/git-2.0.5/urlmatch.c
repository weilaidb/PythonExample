#define URL_ALPHA "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"
#define URL_DIGIT "0123456789"
#define URL_ALPHADIGIT URL_ALPHA URL_DIGIT
#define URL_SCHEME_CHARS URL_ALPHADIGIT "+.-"
#define URL_HOST_CHARS URL_ALPHADIGIT ".-[:]"
#define URL_UNSAFE_CHARS " <>\"%|\\^`"
#define URL_GEN_RESERVED ":/?#[]@"
#define URL_SUB_RESERVED "!$&'()*+,;="
#define URL_RESERVED URL_GEN_RESERVED URL_SUB_RESERVED
static int append_normalized_escapes(struct strbuf *buf,
const char *from,
size_t from_len,
const char *esc_extra,
const char *esc_ok)
char *url_normalize(const char *url, struct url_info *out_info)
{
size_t url_len = strlen(url);
struct strbuf norm;
size_t spanned;
size_t scheme_len, user_off=0, user_len=0, passwd_off=0, passwd_len=0;
size_t host_off=0, host_len=0, port_len=0, path_off, path_len, result_len;
const char *slash_ptr, *at_ptr, *colon_ptr, *path_start;
char *result;
spanned = strspn(url, URL_SCHEME_CHARS);
if (!spanned || !isalpha(url[0]) || spanned + 3 > url_len ||
url[spanned] != ':' || url[spanned+1] != '/' || url[spanned+2] != '/')
static size_t url_match_prefix(const char *url,
const char *url_prefix,
size_t url_prefix_len)
int match_urls(const struct url_info *url,
const struct url_info *url_prefix,
int *exactusermatch)
int urlmatch_config_entry(const char *var, const char *value, void *cb)
