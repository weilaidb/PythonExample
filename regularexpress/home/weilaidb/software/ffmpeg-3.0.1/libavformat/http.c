#if CONFIG_ZLIB
#define BUFFER_SIZE   MAX_URL_SIZE
#define MAX_REDIRECTS 8
#define HTTP_SINGLE   1
#define HTTP_MUTLI    2
typedef enum HandshakeState;
typedef struct HTTPContext  HTTPContext;
#define OFFSET(x) offsetof(HTTPContext, x)
#define D AV_OPT_FLAG_DECODING_PARAM
#define E AV_OPT_FLAG_ENCODING_PARAM
#define DEFAULT_USER_AGENT "Lavf/" AV_STRINGIFY(LIBAVFORMAT_VERSION)
static const AVOption options[] = ;
static int http_connect(URLContext *h, const char *path, const char *local_path,
const char *hoststr, const char *auth,
const char *proxyauth, int *new_location);
static int http_read_header(URLContext *h, int *new_location);
void ff_http_init_auth_state(URLContext *dest, const URLContext *src)
static int http_open_cnx_internal(URLContext *h, AVDictionary **options)
static int http_open_cnx(URLContext *h, AVDictionary **options)
int ff_http_do_new_request(URLContext *h, const char *uri)
int ff_http_averror(int status_code, int default_averror)
static int http_write_reply(URLContext* h, int status_code)
static void handle_http_errors(URLContext *h, int error)
static int http_handshake(URLContext *c)
static int http_listen(URLContext *h, const char *uri, int flags,
AVDictionary **options)
static int http_open(URLContext *h, const char *uri, int flags,
AVDictionary **options)
static int http_accept(URLContext *s, URLContext **c)
static int http_getc(HTTPContext *s)
static int http_get_line(HTTPContext *s, char *line, int line_size)
static int check_http_code(URLContext *h, int http_code, const char *end)
static int parse_location(HTTPContext *s, const char *p)
static void parse_content_range(URLContext *h, const char *p)
static int parse_content_encoding(URLContext *h, const char *p)
static int parse_icy(HTTPContext *s, const char *tag, const char *p)
static int parse_cookie(HTTPContext *s, const char *p, AVDictionary **cookies)
static int cookie_string(AVDictionary *dict, char **cookies)
static int process_line(URLContext *h, char *line, int line_count,
int *new_location)
static int get_cookies(HTTPContext *s, char **cookies, const char *path,
const char *domain)
static inline int has_header(const char *str, const char *header)
static int http_read_header(URLContext *h, int *new_location)
static int http_connect(URLContext *h, const char *path, const char *local_path,
const char *hoststr, const char *auth,
const char *proxyauth, int *new_location)
static int http_buf_read(URLContext *h, uint8_t *buf, int size)
#if CONFIG_ZLIB
#define DECOMPRESS_BUF_SIZE (256 * 1024)
static int http_buf_read_compressed(URLContext *h, uint8_t *buf, int size)
static int64_t http_seek_internal(URLContext *h, int64_t off, int whence, int force_reconnect);
static int http_read_stream(URLContext *h, uint8_t *buf, int size)
static int http_read_stream_all(URLContext *h, uint8_t *buf, int size)
static void update_metadata(HTTPContext *s, char *data)
static int store_icy(URLContext *h, int size)
static int http_read(URLContext *h, uint8_t *buf, int size)
static int http_write(URLContext *h, const uint8_t *buf, int size)
static int http_shutdown(URLContext *h, int flags)
static int http_close(URLContext *h)
static int64_t http_seek_internal(URLContext *h, int64_t off, int whence, int force_reconnect)
static int64_t http_seek(URLContext *h, int64_t off, int whence)
static int http_get_file_handle(URLContext *h)
#define HTTP_CLASS(flavor)                          \
static const AVClass flavor ## _context_class =
#if CONFIG_HTTP_PROTOCOL
HTTP_CLASS(http);
URLProtocol ff_http_protocol = ;
#if CONFIG_HTTPS_PROTOCOL
HTTP_CLASS(https);
URLProtocol ff_https_protocol = ;
#if CONFIG_HTTPPROXY_PROTOCOL
static int http_proxy_close(URLContext *h)
static int http_proxy_open(URLContext *h, const char *uri, int flags)
static int http_proxy_write(URLContext *h, const uint8_t *buf, int size)
URLProtocol ff_httpproxy_protocol = ;
