int is_urlschemechar(int first_flag, int ch)
int is_url(const char *url)
static int url_decode_char(const char *q)
static char *url_decode_internal(const char **query, int len,
const char *stop_at, struct strbuf *out,
int decode_plus)
char *url_decode(const char *url)
char *url_decode_mem(const char *url, int len)
char *url_decode_parameter_name(const char **query)
char *url_decode_parameter_value(const char **query)
void end_url_with_slash(struct strbuf *buf, const char *url)
void str_end_url_with_slash(const char *url, char **dest)
