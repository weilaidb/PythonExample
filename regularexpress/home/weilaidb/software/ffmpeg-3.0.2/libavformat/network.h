#define AVFORMAT_NETWORK_H
#if HAVE_UNISTD_H
#if HAVE_WINSOCK2_H
#define EPROTONOSUPPORT WSAEPROTONOSUPPORT
#define ETIMEDOUT       WSAETIMEDOUT
#define ECONNREFUSED    WSAECONNREFUSED
#define EINPROGRESS     WSAEINPROGRESS
#define getsockopt(a, b, c, d, e) getsockopt(a, b, c, (char*) d, e)
#define setsockopt(a, b, c, d, e) setsockopt(a, b, c, (const char*) d, e)
int ff_neterrno(void);
#define ff_neterrno() AVERROR(errno)
#if HAVE_ARPA_INET_H
#if HAVE_POLL_H
int ff_socket_nonblock(int socket, int enable);
extern int ff_network_inited_globally;
int ff_network_init(void);
void ff_network_close(void);
int ff_tls_init(void);
void ff_tls_deinit(void);
int ff_network_wait_fd(int fd, int write);
int ff_network_wait_fd_timeout(int fd, int write, int64_t timeout, AVIOInterruptCB *int_cb);
int ff_inet_aton (const char * str, struct in_addr * add);
#if !HAVE_STRUCT_SOCKADDR_STORAGE
struct sockaddr_storage ;
typedef union sockaddr_union  sockaddr_union;
#define MSG_NOSIGNAL 0
#if !HAVE_STRUCT_ADDRINFO
struct addrinfo ;
#define EAI_AGAIN 2
#define EAI_BADFLAGS 3
#define EAI_FAIL 4
#define EAI_FAMILY 5
#define EAI_MEMORY 6
#define EAI_NODATA 7
#define EAI_NONAME 8
#define EAI_SERVICE 9
#define EAI_SOCKTYPE 10
#define AI_PASSIVE 1
#define AI_CANONNAME 2
#define AI_NUMERICHOST 4
#define NI_NOFQDN 1
#define NI_NUMERICHOST 2
#define NI_NAMERQD 4
#define NI_NUMERICSERV 8
#define NI_DGRAM 16
#if !HAVE_GETADDRINFO
int ff_getaddrinfo(const char *node, const char *service,
const struct addrinfo *hints, struct addrinfo **res);
void ff_freeaddrinfo(struct addrinfo *res);
int ff_getnameinfo(const struct sockaddr *sa, int salen,
char *host, int hostlen,
char *serv, int servlen, int flags);
#define getaddrinfo ff_getaddrinfo
#define freeaddrinfo ff_freeaddrinfo
#define getnameinfo ff_getnameinfo
#if !HAVE_GETADDRINFO || HAVE_WINSOCK2_H
const char *ff_gai_strerror(int ecode);
#undef gai_strerror
#define gai_strerror ff_gai_strerror
#define INADDR_LOOPBACK 0x7f000001
#define INET_ADDRSTRLEN 16
#define INET6_ADDRSTRLEN INET_ADDRSTRLEN
#define IN_MULTICAST(a) ((((uint32_t)(a)) & 0xf0000000) == 0xe0000000)
#define IN6_IS_ADDR_MULTICAST(a) (((uint8_t *) (a))[0] == 0xff)
int ff_is_multicast_address(struct sockaddr *addr);
#define POLLING_TIME 100
int ff_listen_bind(int fd, const struct sockaddr *addr,
socklen_t addrlen, int timeout,
URLContext *h);
int ff_listen(int fd, const struct sockaddr *addr, socklen_t addrlen);
int ff_accept(int fd, int timeout, URLContext *h);
int ff_listen_connect(int fd, const struct sockaddr *addr,
socklen_t addrlen, int timeout,
URLContext *h, int will_try_next);
int ff_http_match_no_proxy(const char *no_proxy, const char *hostname);
int ff_socket(int domain, int type, int protocol);
