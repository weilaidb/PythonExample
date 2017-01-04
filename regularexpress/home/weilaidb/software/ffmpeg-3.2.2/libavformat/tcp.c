#if HAVE_POLL_H
typedef struct TCPContext  TCPContext;
#define OFFSET(x) offsetof(TCPContext, x)
#define D AV_OPT_FLAG_DECODING_PARAM
#define E AV_OPT_FLAG_ENCODING_PARAM
static const AVOption options[] = ;
static const AVClass tcp_class = ;
static int tcp_open(URLContext *h, const char *uri, int flags)
static int tcp_accept(URLContext *s, URLContext **c)
static int tcp_read(URLContext *h, uint8_t *buf, int size)
static int tcp_write(URLContext *h, const uint8_t *buf, int size)
static int tcp_shutdown(URLContext *h, int flags)
static int tcp_close(URLContext *h)
static int tcp_get_file_handle(URLContext *h)
const URLProtocol ff_tcp_protocol = ;
