#if HAVE_POLL_H
typedef struct RTPContext  RTPContext;
#define OFFSET(x) offsetof(RTPContext, x)
#define D AV_OPT_FLAG_DECODING_PARAM
#define E AV_OPT_FLAG_ENCODING_PARAM
static const AVOption options[] = ;
static const AVClass rtp_class = ;
int ff_rtp_set_remote_url(URLContext *h, const char *uri)
static struct addrinfo* rtp_resolve_host(const char *hostname, int port,
int type, int family, int flags)
static int compare_addr(const struct sockaddr_storage *a,
const struct sockaddr_storage *b)
static int get_port(const struct sockaddr_storage *ss)
static void set_port(struct sockaddr_storage *ss, int port)
static int rtp_check_source_lists(RTPContext *s, struct sockaddr_storage *source_addr_ptr)
static av_printf_format(3, 4) void url_add_option(char *buf, int buf_size, const char *fmt, ...)
static void build_udp_url(RTPContext *s,
char *buf, int buf_size,
const char *hostname,
int port, int local_port,
const char *include_sources,
const char *exclude_sources)
static void rtp_parse_addr_list(URLContext *h, char *buf,
struct sockaddr_storage ***address_list_ptr,
int *address_list_size_ptr)
static int rtp_open(URLContext *h, const char *uri, int flags)
static int rtp_read(URLContext *h, uint8_t *buf, int size)
static int rtp_write(URLContext *h, const uint8_t *buf, int size)
static int rtp_close(URLContext *h)
int ff_rtp_get_local_rtp_port(URLContext *h)
int ff_rtp_get_local_rtcp_port(URLContext *h)
static int rtp_get_file_handle(URLContext *h)
static int rtp_get_multi_file_handle(URLContext *h, int **handles,
int *numhandles)
URLProtocol ff_rtp_protocol = ;
