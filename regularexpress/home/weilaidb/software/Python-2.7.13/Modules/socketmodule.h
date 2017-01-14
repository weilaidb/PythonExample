#   include <socket.h>
# else
#   include <sys/socket.h>
# endif
# include <netinet/in.h>
# if !(defined(__BEOS__) || defined(__CYGWIN__) || (defined(PYOS_OS2) && defined(PYCC_VACPP)))
#  include <netinet/tcp.h>
# endif
# include <winsock2.h>
# include <ws2tcpip.h>
# ifdef SIO_GET_MULTICAST_FILTER
#  include <MSTcpIP.h>
#  define HAVE_ADDRINFO
#  define HAVE_SOCKADDR_STORAGE
#  define HAVE_GETADDRINFO
#  define HAVE_GETNAMEINFO
#  define ENABLE_IPV6
# else
typedef int socklen_t;
# endif
# include <sys/un.h>
# undef AF_UNIX
# ifdef HAVE_ASM_TYPES_H
#  include <asm/types.h>
# endif
# include <linux/netlink.h>
#  undef AF_NETLINK
# include <sys/ioctl.h>
# include <net/if.h>
# include <netpacket/packet.h>
# include <linux/tipc.h>
#define Py__SOCKET_H
#define PySocket_MODULE_NAME
#define PySocket_CAPI_NAME
#define PySocket_CAPSULE_NAME  (PySocket_MODULE_NAME  PySocket_CAPI_NAME)
typedef SOCKET SOCKET_T;
#       ifdef MS_WIN64
#               define SIZEOF_SOCKET_T 8
#       else
#               define SIZEOF_SOCKET_T 4
#       endif
typedef int SOCKET_T;
#       define SIZEOF_SOCKET_T SIZEOF_INT
typedef union sock_addr  sock_addr_t;
typedef struct  PySocketSockObject;
typedef struct  PySocketModule_APIObject;
static
PySocketModule_APIObject PySocketModule;
# define DPRINTF if (0) printf
static
int PySocketModule_ImportModuleAndAPI(void)
