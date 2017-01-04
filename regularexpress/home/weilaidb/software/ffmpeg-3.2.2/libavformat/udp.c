#define _DEFAULT_SOURCE
#define _BSD_SOURCE
#if HAVE_UDPLITE_H
#define UDPLITE_SEND_CSCOV                               10
#define UDPLITE_RECV_CSCOV                               11
#define IPPROTO_UDPLITE                                  136
#if HAVE_PTHREAD_CANCEL
#define HAVE_PTHREAD_CANCEL 0
#define IPV6_ADD_MEMBERSHIP IPV6_JOIN_GROUP
#define IPV6_DROP_MEMBERSHIP IPV6_LEAVE_GROUP
#define UDP_TX_BUF_SIZE 32768
#define UDP_MAX_PKT_SIZE 65536
#define UDP_HEADER_SIZE 8
typedef struct UDPContext  UDPContext;
#define OFFSET(x) offsetof(UDPContext, x)
#define D AV_OPT_FLAG_DECODING_PARAM
#define E AV_OPT_FLAG_ENCODING_PARAM
static const AVOption options[] = ;
static const AVClass udp_class = ;
static const AVClass udplite_context_class = ;
static void log_net_error(void *ctx, int level, const char* prefix)
static int udp_set_multicast_ttl(int sockfd, int mcastTTL,
struct sockaddr *addr)
static int udp_join_multicast_group(int sockfd, struct sockaddr *addr,struct sockaddr *local_addr)
static int udp_leave_multicast_group(int sockfd, struct sockaddr *addr,struct sockaddr *local_addr)
static struct addrinfo *udp_resolve_host(URLContext *h,
const char *hostname, int port,
int type, int family, int flags)
static int udp_set_multicast_sources(URLContext *h,
int sockfd, struct sockaddr *addr,
int addr_len, char **sources,
int nb_sources, int include)
static int udp_set_url(URLContext *h,
struct sockaddr_storage *addr,
const char *hostname, int port)
static int udp_socket_create(URLContext *h, struct sockaddr_storage *addr,
socklen_t *addr_len, const char *localaddr)
static int udp_port(struct sockaddr_storage *addr, int addr_len)
int ff_udp_set_remote_url(URLContext *h, const char *uri)
int ff_udp_get_local_port(URLContext *h)
static int udp_get_file_handle(URLContext *h)
#if HAVE_PTHREAD_CANCEL
static void *circular_buffer_task_rx( void *_URLContext)
static void *circular_buffer_task_tx( void *_URLContext)
static int parse_source_list(char *buf, char **sources, int *num_sources,
int max_sources)
static int udp_open(URLContext *h, const char *uri, int flags)
static int udplite_open(URLContext *h, const char *uri, int flags)
static int udp_read(URLContext *h, uint8_t *buf, int size)
static int udp_write(URLContext *h, const uint8_t *buf, int size)
static int udp_close(URLContext *h)
const URLProtocol ff_udp_protocol = ;
const URLProtocol ff_udplite_protocol = ;
