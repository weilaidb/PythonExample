#define AVFORMAT_NETWORK_H
#if HAVE_UNISTD_H
#if HAVE_WINSOCK2_H
#define EPROTONOSUPPORT WSAEPROTONOSUPPORT
#define ETIMEDOUT       WSAETIMEDOUT
#define ECONNREFUSED    WSAECONNREFUSED
#define EINPROGRESS     WSAEINPROGRESS
getsockopt getsockopt(a, b, c, (char*) d, e)
setsockopt setsockopt(a, b, c, (const char*) d, e)
ff_neterrno;
ff_neterrno AVERROR(errno)
#if HAVE_ARPA_INET_H
#if HAVE_POLL_H
ff_socket_nonblock;
extern int ff_network_inited_globally;
ff_network_init;
ff_network_close;
ff_tls_init;
ff_tls_deinit;
ff_network_wait_fd;
ff_network_wait_fd_timeout;
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
ff_getaddrinfo;
ff_freeaddrinfo;
ff_getnameinfo;
#define getaddrinfo ff_getaddrinfo
#define freeaddrinfo ff_freeaddrinfo
#define getnameinfo ff_getnameinfo
#if !HAVE_GETADDRINFO || HAVE_WINSOCK2_H
*ff_gai_strerror;
#undef gai_strerror
#define gai_strerror ff_gai_strerror
#define INADDR_LOOPBACK 0x7f000001
#define INET_ADDRSTRLEN 16
#define INET6_ADDRSTRLEN INET_ADDRSTRLEN
IN_MULTICAST ((((uint32_t)(a)) & 0xf0000000) == 0xe0000000)
IN6_IS_ADDR_MULTICAST (((uint8_t *) (a))[0] == 0xff)
ff_is_multicast_address;
#define POLLING_TIME 100
ff_listen_bind;
ff_listen;
ff_accept;
ff_listen_connect;
ff_http_match_no_proxy;
ff_socket;
