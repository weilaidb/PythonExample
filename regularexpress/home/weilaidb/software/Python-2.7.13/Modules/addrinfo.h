#undef EAI_ADDRFAMILY
#undef EAI_AGAIN
#undef EAI_BADFLAGS
#undef EAI_FAIL
#undef EAI_FAMILY
#undef EAI_MEMORY
#undef EAI_NODATA
#undef EAI_NONAME
#undef EAI_SERVICE
#undef EAI_SOCKTYPE
#undef EAI_SYSTEM
#undef EAI_BADHINTS
#undef EAI_PROTOCOL
#undef EAI_MAX
#undef getaddrinfo
#define getaddrinfo fake_getaddrinfo
#define EAI_ADDRFAMILY   1
#define EAI_AGAIN        2
#define EAI_BADFLAGS     3
#define EAI_FAIL         4
#define EAI_FAMILY       5
#define EAI_MEMORY       6
#define EAI_NODATA       7
#define EAI_NONAME       8
#define EAI_SERVICE      9
#define EAI_SOCKTYPE    10
#define EAI_SYSTEM      11
#define EAI_BADHINTS    12
#define EAI_PROTOCOL    13
#define EAI_MAX         14
#undef AI_PASSIVE
#undef AI_CANONNAME
#undef AI_NUMERICHOST
#undef AI_MASK
#undef AI_ALL
#undef AI_V4MAPPED_CFG
#undef AI_ADDRCONFIG
#undef AI_V4MAPPED
#undef AI_DEFAULT
#define AI_PASSIVE      0x00000001
#define AI_CANONNAME    0x00000002
#define AI_NUMERICHOST  0x00000004
#define AI_MASK         (AI_PASSIVE | AI_CANONNAME | AI_NUMERICHOST)
#define AI_ALL          0x00000100
#define AI_V4MAPPED_CFG 0x00000200
#define AI_ADDRCONFIG   0x00000400
#define AI_V4MAPPED     0x00000800
#define AI_DEFAULT      (AI_V4MAPPED_CFG | AI_ADDRCONFIG)
#define NI_MAXHOST      1025
#define NI_MAXSERV      32
#define NI_NOFQDN       0x00000001
#define NI_NUMERICHOST  0x00000002
#define NI_NAMEREQD     0x00000004
#define NI_NUMERICSERV  0x00000008
#define NI_DGRAM        0x00000010
struct addrinfo ;
#define _SS_MAXSIZE     128
#define _SS_ALIGNSIZE   (sizeof(PY_LONG_LONG))
#define _SS_ALIGNSIZE   (sizeof(double))
#define _SS_PAD1SIZE    (_SS_ALIGNSIZE - sizeof(u_char) * 2)
#define _SS_PAD2SIZE    (_SS_MAXSIZE - sizeof(u_char) * 2 - \
_SS_PAD1SIZE - _SS_ALIGNSIZE)
struct sockaddr_storage ;
extern void freehostent Py_PROTO((struct hostent *));
