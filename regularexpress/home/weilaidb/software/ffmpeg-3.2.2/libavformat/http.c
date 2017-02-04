#if CONFIG_ZLIB
#define BUFFER_SIZE   MAX_URL_SIZE
#define MAX_REDIRECTS 8
#define HTTP_SINGLE   1
#define HTTP_MUTLI    2
typedef enum HandshakeState;
typedef struct HTTPContext  HTTPContext;
OFFSET offsetof(HTTPContext, x)
#define D AV_OPT_FLAG_DECODING_PARAM
#define E AV_OPT_FLAG_ENCODING_PARAM
AV_STRINGIFY
static const AVOption options[] = ;
http_connect;
http_read_header;
ff_http_init_auth_state
http_open_cnx_internal
http_open_cnx
ff_http_do_new_request
ff_http_averror
http_write_reply
handle_http_errors
http_handshake
http_listen
http_open
http_accept
http_getc
http_get_line
check_http_code
parse_location
parse_content_range
parse_content_encoding
parse_icy
parse_cookie
cookie_string
process_line
get_cookies
has_header
http_read_header
http_connect
http_buf_read
#if CONFIG_ZLIB
#define DECOMPRESS_BUF_SIZE (256 * 1024)
http_buf_read_compressed
http_seek_internal;
http_read_stream
http_read_stream_all
update_metadata
store_icy
http_read
http_write
http_shutdown
http_close
http_seek_internal
http_seek
http_get_file_handle
HTTP_CLASS                          \
static const AVClass flavor ## _context_class =
HTTP_CLASS;
const URLProtocol ff_http_protocol = ;
HTTP_CLASS;
const URLProtocol ff_https_protocol = ;
#if CONFIG_HTTPPROXY_PROTOCOL
http_proxy_close
http_proxy_open
http_proxy_write
const URLProtocol ff_httpproxy_protocol = ;
