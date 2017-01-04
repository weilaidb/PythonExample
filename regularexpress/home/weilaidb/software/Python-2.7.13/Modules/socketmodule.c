#define MAC_OS_X_VERSION_10_5 1050
# pragma weak inet_aton
#define INVALID_SOCKET (-1)
#undef MAX
#define MAX(x, y) ((x) < (y) ? (y) : (x))
PyDoc_STRVAR(sock_doc,
"socket([family[, type[, proto]]]) -> socket object\n\
\n\
Open a socket of the given type.  The family argument specifies the\n\
address family; it defaults to AF_INET.  The type argument specifies\n\
whether this is a stream (SOCK_STREAM, this is the default)\n\
or datagram (SOCK_DGRAM) socket.  The protocol argument defaults to 0,\n\
specifying the default protocol.  Keyword arguments are accepted.\n\
\n\
A socket object represents one endpoint of a network connection.\n\
\n\
Methods of socket objects (keyword arguments not allowed):\n\
\n\
accept() -- accept a connection, returning new socket and client address\n\
bind(addr) -- bind the socket to a local address\n\
close() -- close the socket\n\
connect(addr) -- connect the socket to a remote address\n\
connect_ex(addr) -- connect, return an error code instead of an exception\n\
dup() -- return a new socket object identical to the current one [*]\n\
fileno() -- return underlying file descriptor\n\
getpeername() -- return remote address [*]\n\
getsockname() -- return local address\n\
getsockopt(level, optname[, buflen]) -- get socket options\n\
gettimeout() -- return timeout or None\n\
listen(n) -- start listening for incoming connections\n\
makefile([mode, [bufsize]]) -- return a file object for the socket [*]\n\
recv(buflen[, flags]) -- receive data\n\
recv_into(buffer[, nbytes[, flags]]) -- receive data (into a buffer)\n\
recvfrom(buflen[, flags]) -- receive data and sender\'s address\n\
recvfrom_into(buffer[, nbytes, [, flags])\n\
-- receive data and sender\'s address (into a buffer)\n\
sendall(data[, flags]) -- send all data\n\
send(data[, flags]) -- send data, may not send all of it\n\
sendto(data[, flags], addr) -- send data to a given address\n\
setblocking(0 | 1) -- set or clear the blocking I/O flag\n\
setsockopt(level, optname, value) -- set socket options\n\
settimeout(None | float) -- set or clear the timeout\n\
shutdown(how) -- shut down traffic in one or both directions\n\
\n\
[*] not available on all platforms!");
# undef HAVE_GETHOSTBYNAME_R_3_ARG
# undef HAVE_GETHOSTBYNAME_R_5_ARG
# undef HAVE_GETHOSTBYNAME_R_6_ARG
# undef HAVE_GETHOSTBYNAME_R
# if defined(_AIX) && !defined(_LINUX_SOURCE_COMPAT) || defined(__osf__)
#  define HAVE_GETHOSTBYNAME_R_3_ARG
# elif defined(__sun) || defined(__sgi)
#  define HAVE_GETHOSTBYNAME_R_5_ARG
# elif defined(linux)
# elif defined(_LINUX_SOURCE_COMPAT)
#  define HAVE_GETHOSTBYNAME_R_6_ARG
# else
#  undef HAVE_GETHOSTBYNAME_R
# endif
#if !defined(HAVE_GETHOSTBYNAME_R) && defined(WITH_THREAD) && \
!defined(MS_WINDOWS)
# define USE_GETHOSTBYNAME_LOCK
#if defined(WITH_THREAD) && ( \
(defined(__APPLE__) && \
MAC_OS_X_VERSION_MIN_REQUIRED < MAC_OS_X_VERSION_10_5) || \
(defined(__FreeBSD__) && __FreeBSD_version+0 < 503000) || \
(defined(__OpenBSD__) && OpenBSD+0 < 201311) || \
(defined(__NetBSD__) && __NetBSD_Version__+0 < 400000000) || \
defined(__VMS) || !defined(HAVE_GETADDRINFO))
#define USE_GETADDRINFO_LOCK
#define ACQUIRE_GETADDRINFO_LOCK PyThread_acquire_lock(netdb_lock, 1);
#define RELEASE_GETADDRINFO_LOCK PyThread_release_lock(netdb_lock);
#define ACQUIRE_GETADDRINFO_LOCK
#define RELEASE_GETADDRINFO_LOCK
#if defined(USE_GETHOSTBYNAME_LOCK) || defined(USE_GETADDRINFO_LOCK)
# include "pythread.h"
#if defined(PYCC_VACPP)
# include <types.h>
# include <io.h>
# include <sys/ioctl.h>
# include <utils.h>
# include <ctype.h>
#if defined(__VMS)
#  include <ioctl.h>
#if defined(PYOS_OS2)
# define  INCL_DOS
# define  INCL_DOSERRORS
# define  INCL_NOPMAPI
# include <os2.h>
#if defined(__sgi) && _COMPILER_VERSION>700 && !_SGIAPI
#undef _SGIAPI
#define _SGIAPI 1
#undef _XOPEN_SOURCE
#define HAVE_GETADDRINFO 1
#define HAVE_GETNAMEINFO 1
#define HAVE_INET_PTON
#if (defined(__sgi) || defined(sun)) && !defined(INET_ADDRSTRLEN)
#define INET_ADDRSTRLEN 16
#define PySocket_BUILDING_SOCKET
# include <netdb.h>
# ifdef __BEOS__
#  include <net/netdb.h>
# elif defined(PYOS_OS2) && defined(PYCC_VACPP)
#  include <netdb.h>
typedef size_t socklen_t;
# else
#   include <arpa/inet.h>
# endif
# ifndef RISCOS
#  include <fcntl.h>
# else
#  include <sys/ioctl.h>
#  include <socklib.h>
#  define NO_DUP
int h_errno;
#  define INET_ADDRSTRLEN 16
# endif
# ifdef HAVE_FCNTL_H
#  include <fcntl.h>
# endif
# define offsetof(type, member) ((size_t)(&((type *)0)->member))
# define O_NONBLOCK O_NDELAY
#if defined(__sgi) && _COMPILER_VERSION>700 && defined(_SS_ALIGNSIZE)
#elif defined(_MSC_VER) && _MSC_VER>1201
#  include "addrinfo.h"
#if !defined(NTDDI_VERSION) || (NTDDI_VERSION < NTDDI_LONGHORN)
int inet_pton(int af, const char *src, void *dst);
const char *inet_ntop(int af, const void *src, char *dst, socklen_t size);
#undef HAVE_GETADDRINFO
#define USE_INET_ATON_WEAKLINK
#if !defined(HAVE_GETADDRINFO)
#define getaddrinfo fake_getaddrinfo
#define gai_strerror fake_gai_strerror
#define freeaddrinfo fake_freeaddrinfo
#if !defined(HAVE_GETNAMEINFO)
#define getnameinfo fake_getnameinfo
#if defined(MS_WINDOWS) || defined(__BEOS__)
#define SOCKETCLOSE closesocket
#define NO_DUP
#define EAFNOSUPPORT WSAEAFNOSUPPORT
#define snprintf _snprintf
#if defined(PYOS_OS2) && !defined(PYCC_GCC)
#define SOCKETCLOSE soclose
#define NO_DUP
#define SOCKETCLOSE close
#if (defined(HAVE_BLUETOOTH_H) || defined(HAVE_BLUETOOTH_BLUETOOTH_H)) && !defined(__NetBSD__) && !defined(__DragonFly__)
#define USE_BLUETOOTH 1
#if defined(__FreeBSD__)
#define BTPROTO_L2CAP BLUETOOTH_PROTO_L2CAP
#define BTPROTO_RFCOMM BLUETOOTH_PROTO_RFCOMM
#define BTPROTO_HCI BLUETOOTH_PROTO_HCI
#define SOL_HCI SOL_HCI_RAW
#define HCI_FILTER SO_HCI_RAW_FILTER
#define sockaddr_l2 sockaddr_l2cap
#define sockaddr_rc sockaddr_rfcomm
#define hci_dev hci_node
#define _BT_L2_MEMB(sa, memb) ((sa)->l2cap_##memb)
#define _BT_RC_MEMB(sa, memb) ((sa)->rfcomm_##memb)
#define _BT_HCI_MEMB(sa, memb) ((sa)->hci_##memb)
#elif defined(__NetBSD__) || defined(__DragonFly__)
#define sockaddr_l2 sockaddr_bt
#define sockaddr_rc sockaddr_bt
#define sockaddr_hci sockaddr_bt
#define sockaddr_sco sockaddr_bt
#define SOL_HCI BTPROTO_HCI
#define HCI_DATA_DIR SO_HCI_DIRECTION
#define _BT_L2_MEMB(sa, memb) ((sa)->bt_##memb)
#define _BT_RC_MEMB(sa, memb) ((sa)->bt_##memb)
#define _BT_HCI_MEMB(sa, memb) ((sa)->bt_##memb)
#define _BT_SCO_MEMB(sa, memb) ((sa)->bt_##memb)
#define _BT_L2_MEMB(sa, memb) ((sa)->l2_##memb)
#define _BT_RC_MEMB(sa, memb) ((sa)->rc_##memb)
#define _BT_HCI_MEMB(sa, memb) ((sa)->hci_##memb)
#define _BT_SCO_MEMB(sa, memb) ((sa)->sco_##memb)
#define SEGMENT_SIZE (32 * 1024 -1)
#define SAS2SA(x)       ((struct sockaddr *)(x))
#if !defined(NI_MAXHOST)
#define NI_MAXHOST 1025
#if !defined(NI_MAXSERV)
#define NI_MAXSERV 32
static PyObject *socket_error;
static PyObject *socket_herror;
static PyObject *socket_gaierror;
static PyObject *socket_timeout;
static int taskwindow;
static PyTypeObject sock_type;
#if defined(HAVE_POLL_H)
#elif defined(HAVE_SYS_POLL_H)
#define IS_SELECTABLE(s) 1
#define IS_SELECTABLE(s) (_PyIsSelectable_fd((s)->sock_fd) || (s)->sock_timeout <= 0.0)
static PyObject*
select_error(void)
#define WSAEAGAIN WSAEWOULDBLOCK
#define CHECK_ERRNO(expected) \
(WSAGetLastError() == WSA ## expected)
#define CHECK_ERRNO(expected) \
(errno == expected)
static PyObject *
set_error(void)
static PyObject *
set_herror(int h_error)
static PyObject *
set_gaierror(int error)
static int
sendsegmented(int sock_fd, char *buf, int len, int flags)
static int
internal_setblocking(PySocketSockObject *s, int block)
static int
internal_select_ex(PySocketSockObject *s, int writing, double interval)
static int
internal_select(PySocketSockObject *s, int writing)
#define BEGIN_SELECT_LOOP(s) \
static double defaulttimeout = -1.0;
PyMODINIT_FUNC
init_sockobject(PySocketSockObject *s,
SOCKET_T fd, int family, int type, int proto)
static PySocketSockObject *
new_sockobject(SOCKET_T fd, int family, int type, int proto)
#if defined(USE_GETHOSTBYNAME_LOCK) || defined(USE_GETADDRINFO_LOCK)
static PyThread_type_lock netdb_lock;
static int
setipaddr(char *name, struct sockaddr *addr_ret, size_t addr_ret_size, int af)
static PyObject *
makeipaddr(struct sockaddr *addr, int addrlen)
static int
setbdaddr(char *name, bdaddr_t *bdaddr)
static PyObject *
makebdaddr(bdaddr_t *bdaddr)
static PyObject *
makesockaddr(int sockfd, struct sockaddr *addr, int addrlen, int proto)
static int
getsockaddrarg(PySocketSockObject *s, PyObject *args,
struct sockaddr *addr_ret, int *len_ret)
static int
getsockaddrlen(PySocketSockObject *s, socklen_t *len_ret)
static PyObject *
sock_accept(PySocketSockObject *s)
PyDoc_STRVAR(accept_doc,
"accept() -> (socket object, address info)\n\
\n\
Wait for an incoming connection.  Return a new socket representing the\n\
connection, and the address of the client.  For IP sockets, the address\n\
info is a pair (hostaddr, port).");
static PyObject *
sock_setblocking(PySocketSockObject *s, PyObject *arg)
PyDoc_STRVAR(setblocking_doc,
"setblocking(flag)\n\
\n\
Set the socket to blocking (flag is true) or non-blocking (false).\n\
setblocking(True) is equivalent to settimeout(None);\n\
setblocking(False) is equivalent to settimeout(0.0).");
static PyObject *
sock_settimeout(PySocketSockObject *s, PyObject *arg)
PyDoc_STRVAR(settimeout_doc,
"settimeout(timeout)\n\
\n\
Set a timeout on socket operations.  'timeout' can be a float,\n\
giving in seconds, or None.  Setting a timeout of None disables\n\
the timeout feature and is equivalent to setblocking(1).\n\
Setting a timeout of zero is the same as setblocking(0).");
static PyObject *
sock_gettimeout(PySocketSockObject *s)
PyDoc_STRVAR(gettimeout_doc,
"gettimeout() -> timeout\n\
\n\
Returns the timeout in seconds (float) associated with socket \n\
operations. A timeout of None indicates that timeouts on socket \n\
operations are disabled.");
static PyObject *
sock_sleeptaskw(PySocketSockObject *s,PyObject *arg)
PyDoc_STRVAR(sleeptaskw_doc,
"sleeptaskw(flag)\n\
\n\
Allow sleeps in taskwindows.");
static PyObject *
sock_setsockopt(PySocketSockObject *s, PyObject *args)
PyDoc_STRVAR(setsockopt_doc,
"setsockopt(level, option, value)\n\
\n\
Set a socket option.  See the Unix manual for level and option.\n\
The value argument can either be an integer or a string.");
static PyObject *
sock_getsockopt(PySocketSockObject *s, PyObject *args)
{
int level;
int optname;
int res;
PyObject *buf;
socklen_t buflen = 0;
PyErr_SetString(socket_error, "getsockopt not supported");
return NULL;
if (!PyArg_ParseTuple(args, "ii|i:getsockopt",
&level, &optname, &buflen))
return NULL;
if (buflen == 0)
if (buflen > 1024)
PyDoc_STRVAR(getsockopt_doc,
"getsockopt(level, option[, buffersize]) -> value\n\
\n\
Get a socket option.  See the Unix manual for level and option.\n\
If a nonzero buffersize argument is given, the return value is a\n\
string of that length; otherwise it is an integer.");
static PyObject *
sock_bind(PySocketSockObject *s, PyObject *addro)
PyDoc_STRVAR(bind_doc,
"bind(address)\n\
\n\
Bind the socket to a local address.  For IP sockets, the address is a\n\
pair (host, port); the host must refer to the local host. For raw packet\n\
sockets the address is a tuple (ifname, proto [,pkttype [,hatype]])");
static PyObject *
sock_close(PySocketSockObject *s)
PyDoc_STRVAR(close_doc,
"close()\n\
\n\
Close the socket.  It cannot be used after this call.");
static int
internal_connect(PySocketSockObject *s, struct sockaddr *addr, int addrlen,
int *timeoutp)
static PyObject *
sock_connect(PySocketSockObject *s, PyObject *addro)
PyDoc_STRVAR(connect_doc,
"connect(address)\n\
\n\
Connect the socket to a remote address.  For IP sockets, the address\n\
is a pair (host, port).");
static PyObject *
sock_connect_ex(PySocketSockObject *s, PyObject *addro)
PyDoc_STRVAR(connect_ex_doc,
"connect_ex(address) -> errno\n\
\n\
This is like connect(address), but returns an error code (the errno value)\n\
instead of raising an exception when an error occurs.");
static PyObject *
sock_fileno(PySocketSockObject *s)
PyDoc_STRVAR(fileno_doc,
"fileno() -> integer\n\
\n\
Return the integer file descriptor of the socket.");
static PyObject *
sock_dup(PySocketSockObject *s)
PyDoc_STRVAR(dup_doc,
"dup() -> socket object\n\
\n\
Return a new socket object connected to the same system resource.");
static PyObject *
sock_getsockname(PySocketSockObject *s)
PyDoc_STRVAR(getsockname_doc,
"getsockname() -> address info\n\
\n\
Return the address of the local endpoint.  For IP sockets, the address\n\
info is a pair (hostaddr, port).");
static PyObject *
sock_getpeername(PySocketSockObject *s)
PyDoc_STRVAR(getpeername_doc,
"getpeername() -> address info\n\
\n\
Return the address of the remote endpoint.  For IP sockets, the address\n\
info is a pair (hostaddr, port).");
static PyObject *
sock_listen(PySocketSockObject *s, PyObject *arg)
PyDoc_STRVAR(listen_doc,
"listen(backlog)\n\
\n\
Enable a server to accept connections.  The backlog argument must be at\n\
least 0 (if it is lower, it is set to 0); it specifies the number of\n\
unaccepted connections that the system will allow before refusing new\n\
connections.");
static PyObject *
sock_makefile(PySocketSockObject *s, PyObject *args)
PyDoc_STRVAR(makefile_doc,
"makefile([mode[, buffersize]]) -> file object\n\
\n\
Return a regular file object corresponding to the socket.\n\
The mode and buffersize arguments are as for the built-in open() function.");
static ssize_t
sock_recv_guts(PySocketSockObject *s, char* cbuf, int len, int flags)
static PyObject *
sock_recv(PySocketSockObject *s, PyObject *args)
PyDoc_STRVAR(recv_doc,
"recv(buffersize[, flags]) -> data\n\
\n\
Receive up to buffersize bytes from the socket.  For the optional flags\n\
argument, see the Unix manual.  When no data is available, block until\n\
at least one byte is available or until the remote end is closed.  When\n\
the remote end is closed and all data is read, return the empty string.");
static PyObject*
sock_recv_into(PySocketSockObject *s, PyObject *args, PyObject *kwds)
PyDoc_STRVAR(recv_into_doc,
"recv_into(buffer, [nbytes[, flags]]) -> nbytes_read\n\
\n\
A version of recv() that stores its data into a buffer rather than creating \n\
a new string.  Receive up to buffersize bytes from the socket.  If buffersize \n\
is not specified (or 0), receive up to the size available in the given buffer.\n\
\n\
See recv() for documentation about the flags.");
static ssize_t
sock_recvfrom_guts(PySocketSockObject *s, char* cbuf, int len, int flags,
PyObject** addr)
static PyObject *
sock_recvfrom(PySocketSockObject *s, PyObject *args)
PyDoc_STRVAR(recvfrom_doc,
"recvfrom(buffersize[, flags]) -> (data, address info)\n\
\n\
Like recv(buffersize, flags) but also return the sender's address info.");
static PyObject *
sock_recvfrom_into(PySocketSockObject *s, PyObject *args, PyObject* kwds)
PyDoc_STRVAR(recvfrom_into_doc,
"recvfrom_into(buffer[, nbytes[, flags]]) -> (nbytes, address info)\n\
\n\
Like recv_into(buffer[, nbytes[, flags]]) but also return the sender's address info.");
static PyObject *
sock_send(PySocketSockObject *s, PyObject *args)
PyDoc_STRVAR(send_doc,
"send(data[, flags]) -> count\n\
\n\
Send a data string to the socket.  For the optional flags\n\
argument, see the Unix manual.  Return the number of bytes\n\
sent; this may be less than len(data) if the network is busy.");
static PyObject *
sock_sendall(PySocketSockObject *s, PyObject *args)
PyDoc_STRVAR(sendall_doc,
"sendall(data[, flags])\n\
\n\
Send a data string to the socket.  For the optional flags\n\
argument, see the Unix manual.  This calls send() repeatedly\n\
until all data is sent.  If an error occurs, it's impossible\n\
to tell how much data has been sent.");
static PyObject *
sock_sendto(PySocketSockObject *s, PyObject *args)
PyDoc_STRVAR(sendto_doc,
"sendto(data[, flags], address) -> count\n\
\n\
Like send(data, flags) but allows specifying the destination address.\n\
For IP sockets, the address is a pair (hostaddr, port).");
static PyObject *
sock_shutdown(PySocketSockObject *s, PyObject *arg)
PyDoc_STRVAR(shutdown_doc,
"shutdown(flag)\n\
\n\
Shut down the reading side of the socket (flag == SHUT_RD), the writing side\n\
of the socket (flag == SHUT_WR), or both ends (flag == SHUT_RDWR).");
#if defined(MS_WINDOWS) && defined(SIO_RCVALL)
static PyObject*
sock_ioctl(PySocketSockObject *s, PyObject *arg)
PyDoc_STRVAR(sock_ioctl_doc,
"ioctl(cmd, option) -> long\n\
\n\
Control the socket with WSAIoctl syscall. Currently supported 'cmd' values are\n\
SIO_RCVALL:  'option' must be one of the socket.RCVALL_* constants.\n\
SIO_KEEPALIVE_VALS:  'option' is a tuple of (onoff, timeout, interval).");
static PyMethodDef sock_methods[] = ;
static PyMemberDef sock_memberlist[] = ;
static void
sock_dealloc(PySocketSockObject *s)
static PyObject *
sock_repr(PySocketSockObject *s)
static PyObject *
sock_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
static int
sock_initobj(PyObject *self, PyObject *args, PyObject *kwds)
static PyTypeObject sock_type = ;
static PyObject *
socket_gethostname(PyObject *self, PyObject *unused)
PyDoc_STRVAR(gethostname_doc,
"gethostname() -> string\n\
\n\
Return the current host name.");
static PyObject *
socket_gethostbyname(PyObject *self, PyObject *args)
PyDoc_STRVAR(gethostbyname_doc,
"gethostbyname(host) -> address\n\
\n\
Return the IP address (a string of the form '255.255.255.255') for a host.");
static PyObject *
gethost_common(struct hostent *h, struct sockaddr *addr, int alen, int af)
static PyObject *
socket_gethostbyname_ex(PyObject *self, PyObject *args)
PyDoc_STRVAR(ghbn_ex_doc,
"gethostbyname_ex(host) -> (name, aliaslist, addresslist)\n\
\n\
Return the true host name, a list of aliases, and a list of IP addresses,\n\
for a host.  The host argument is a string giving a host name or IP number.");
static PyObject *
socket_gethostbyaddr(PyObject *self, PyObject *args)
PyDoc_STRVAR(gethostbyaddr_doc,
"gethostbyaddr(host) -> (name, aliaslist, addresslist)\n\
\n\
Return the true host name, a list of aliases, and a list of IP addresses,\n\
for a host.  The host argument is a string giving a host name or IP number.");
static PyObject *
socket_getservbyname(PyObject *self, PyObject *args)
PyDoc_STRVAR(getservbyname_doc,
"getservbyname(servicename[, protocolname]) -> integer\n\
\n\
Return a port number from a service name and protocol name.\n\
The optional protocol name, if given, should be 'tcp' or 'udp',\n\
otherwise any protocol will match.");
static PyObject *
socket_getservbyport(PyObject *self, PyObject *args)
PyDoc_STRVAR(getservbyport_doc,
"getservbyport(port[, protocolname]) -> string\n\
\n\
Return the service name from a port number and protocol name.\n\
The optional protocol name, if given, should be 'tcp' or 'udp',\n\
otherwise any protocol will match.");
static PyObject *
socket_getprotobyname(PyObject *self, PyObject *args)
PyDoc_STRVAR(getprotobyname_doc,
"getprotobyname(name) -> integer\n\
\n\
Return the protocol number for the named protocol.  (Rarely used.)");
static PyObject *
socket_socketpair(PyObject *self, PyObject *args)
PyDoc_STRVAR(socketpair_doc,
"socketpair([family[, type[, proto]]]) -> (socket object, socket object)\n\
\n\
Create a pair of socket objects from the sockets returned by the platform\n\
socketpair() function.\n\
The arguments are the same as for socket() except the default family is\n\
AF_UNIX if defined on the platform; otherwise, the default is AF_INET.");
static PyObject *
socket_fromfd(PyObject *self, PyObject *args)
PyDoc_STRVAR(fromfd_doc,
"fromfd(fd, family, type[, proto]) -> socket object\n\
\n\
Create a socket object from a duplicate of the given\n\
file descriptor.\n\
The remaining arguments are the same as for socket().");
static PyObject *
socket_ntohs(PyObject *self, PyObject *args)
PyDoc_STRVAR(ntohs_doc,
"ntohs(integer) -> integer\n\
\n\
Convert a 16-bit integer from network to host byte order.");
static PyObject *
socket_ntohl(PyObject *self, PyObject *arg)
PyDoc_STRVAR(ntohl_doc,
"ntohl(integer) -> integer\n\
\n\
Convert a 32-bit integer from network to host byte order.");
static PyObject *
socket_htons(PyObject *self, PyObject *args)
PyDoc_STRVAR(htons_doc,
"htons(integer) -> integer\n\
\n\
Convert a 16-bit integer from host to network byte order.");
static PyObject *
socket_htonl(PyObject *self, PyObject *arg)
PyDoc_STRVAR(htonl_doc,
"htonl(integer) -> integer\n\
\n\
Convert a 32-bit integer from host to network byte order.");
PyDoc_STRVAR(inet_aton_doc,
"inet_aton(string) -> packed 32-bit IP representation\n\
\n\
Convert an IP address in string format (123.45.67.89) to the 32-bit packed\n\
binary format used in low-level network functions.");
static PyObject*
socket_inet_aton(PyObject *self, PyObject *args)
PyDoc_STRVAR(inet_ntoa_doc,
"inet_ntoa(packed_ip) -> ip_address_string\n\
\n\
Convert an IP address from 32-bit packed binary format to string format");
static PyObject*
socket_inet_ntoa(PyObject *self, PyObject *args)
PyDoc_STRVAR(inet_pton_doc,
"inet_pton(af, ip) -> packed IP address string\n\
\n\
Convert an IP address from string format to a packed string suitable\n\
for use with low-level network functions.");
static PyObject *
socket_inet_pton(PyObject *self, PyObject *args)
PyDoc_STRVAR(inet_ntop_doc,
"inet_ntop(af, packed_ip) -> string formatted IP address\n\
\n\
Convert a packed IP address of the given family to string format.");
static PyObject *
socket_inet_ntop(PyObject *self, PyObject *args)
static PyObject *
socket_getaddrinfo(PyObject *self, PyObject *args)
PyDoc_STRVAR(getaddrinfo_doc,
"getaddrinfo(host, port [, family, socktype, proto, flags])\n\
-> list of (family, socktype, proto, canonname, sockaddr)\n\
\n\
Resolve host and port into addrinfo struct.");
static PyObject *
socket_getnameinfo(PyObject *self, PyObject *args)
PyDoc_STRVAR(getnameinfo_doc,
"getnameinfo(sockaddr, flags) --> (host, port)\n\
\n\
Get host and port for a sockaddr.");
static PyObject *
socket_getdefaulttimeout(PyObject *self)
PyDoc_STRVAR(getdefaulttimeout_doc,
"getdefaulttimeout() -> timeout\n\
\n\
Returns the default timeout in seconds (float) for new socket objects.\n\
A value of None indicates that new socket objects have no timeout.\n\
When the socket module is first imported, the default is None.");
static PyObject *
socket_setdefaulttimeout(PyObject *self, PyObject *arg)
PyDoc_STRVAR(setdefaulttimeout_doc,
"setdefaulttimeout(timeout)\n\
\n\
Set the default timeout in seconds (float) for new socket objects.\n\
A value of None indicates that new socket objects have no timeout.\n\
When the socket module is first imported, the default is None.");
static PyMethodDef socket_methods[] = ;
#define OS_INIT_DEFINED
static int
os_init(void)
#define OS_INIT_DEFINED
static void
os_cleanup(void)
static int
os_init(void)
#define OS_INIT_DEFINED
static int
os_init(void)
static int
os_init(void)
static
PySocketModule_APIObject PySocketModuleAPI =
;
PyDoc_STRVAR(socket_doc,
"Implementation module for socket operations.\n\
\n\
See the socket module for documentation.");
PyMODINIT_FUNC
init_socket(void)
#if !defined(NTDDI_VERSION) || (NTDDI_VERSION < NTDDI_LONGHORN)
int
inet_pton(int af, const char *src, void *dst)
const char *
inet_ntop(int af, const void *src, char *dst, socklen_t size)
