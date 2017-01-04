#define _LINUX_NET_H
#define NPROTO		AF_MAX
#define SYS_SOCKET	1
#define SYS_BIND	2
#define SYS_CONNECT	3
#define SYS_LISTEN	4
#define SYS_ACCEPT	5
#define SYS_GETSOCKNAME	6
#define SYS_GETPEERNAME	7
#define SYS_SOCKETPAIR	8
#define SYS_SEND	9
#define SYS_RECV	10
#define SYS_SENDTO	11
#define SYS_RECVFROM	12
#define SYS_SHUTDOWN	13
#define SYS_SETSOCKOPT	14
#define SYS_GETSOCKOPT	15
#define SYS_SENDMSG	16
#define SYS_RECVMSG	17
#define SYS_ACCEPT4	18
#define SYS_RECVMMSG	19
#define SYS_SENDMMSG	20
typedef enum  socket_state;
#define __SO_ACCEPTCON	(1 << 16)
struct poll_table_struct;
struct pipe_inode_info;
struct inode;
struct net;
#define SOCK_ASYNC_NOSPACE	0
#define SOCK_ASYNC_WAITDATA	1
#define SOCK_NOSPACE		2
#define SOCK_PASSCRED		3
#define SOCK_PASSSEC		4
enum sock_type ;
#define SOCK_MAX (SOCK_PACKET + 1)
#define SOCK_TYPE_MASK 0xf
#define SOCK_CLOEXEC	O_CLOEXEC
#define SOCK_NONBLOCK	O_NONBLOCK
enum sock_shutdown_cmd ;
struct socket_wq  ____cacheline_aligned_in_smp;
struct socket ;
struct vm_area_struct;
struct page;
struct kiocb;
struct sockaddr;
struct msghdr;
struct module;
struct proto_ops ;
#define DECLARE_SOCKADDR(type, dst, src)	\
type dst = ()
struct net_proto_family ;
struct iovec;
struct kvec;
enum ;
extern int	     sock_wake_async(struct socket *sk, int how, int band);
extern int	     sock_register(const struct net_proto_family *fam);
extern void	     sock_unregister(int family);
extern int	     __sock_create(struct net *net, int family, int type, int proto,
struct socket **res, int kern);
extern int	     sock_create(int family, int type, int proto,
struct socket **res);
extern int	     sock_create_kern(int family, int type, int proto,
struct socket **res);
extern int	     sock_create_lite(int family, int type, int proto,
struct socket **res);
extern void	     sock_release(struct socket *sock);
extern int   	     sock_sendmsg(struct socket *sock, struct msghdr *msg,
size_t len);
extern int	     sock_recvmsg(struct socket *sock, struct msghdr *msg,
size_t size, int flags);
extern int 	     sock_map_fd(struct socket *sock, int flags);
extern struct socket *sockfd_lookup(int fd, int *err);
#define		     sockfd_put(sock) fput(sock->file)
extern int	     net_ratelimit(void);
#define net_random()		random32()
#define net_srandom(seed)	srandom32((__force u32)seed)
extern int   	     kernel_sendmsg(struct socket *sock, struct msghdr *msg,
struct kvec *vec, size_t num, size_t len);
extern int   	     kernel_recvmsg(struct socket *sock, struct msghdr *msg,
struct kvec *vec, size_t num,
size_t len, int flags);
extern int kernel_bind(struct socket *sock, struct sockaddr *addr,
int addrlen);
extern int kernel_listen(struct socket *sock, int backlog);
extern int kernel_accept(struct socket *sock, struct socket **newsock,
int flags);
extern int kernel_connect(struct socket *sock, struct sockaddr *addr,
int addrlen, int flags);
extern int kernel_getsockname(struct socket *sock, struct sockaddr *addr,
int *addrlen);
extern int kernel_getpeername(struct socket *sock, struct sockaddr *addr,
int *addrlen);
extern int kernel_getsockopt(struct socket *sock, int level, int optname,
char *optval, int *optlen);
extern int kernel_setsockopt(struct socket *sock, int level, int optname,
char *optval, unsigned int optlen);
extern int kernel_sendpage(struct socket *sock, struct page *page, int offset,
size_t size, int flags);
extern int kernel_sock_ioctl(struct socket *sock, int cmd, unsigned long arg);
extern int kernel_sock_shutdown(struct socket *sock,
enum sock_shutdown_cmd how);
#define MODULE_ALIAS_NETPROTO(proto) \
MODULE_ALIAS("net-pf-" __stringify(proto))
#define MODULE_ALIAS_NET_PF_PROTO(pf, proto) \
MODULE_ALIAS("net-pf-" __stringify(pf) "-proto-" __stringify(proto))
#define MODULE_ALIAS_NET_PF_PROTO_TYPE(pf, proto, type) \
MODULE_ALIAS("net-pf-" __stringify(pf) "-proto-" __stringify(proto) \
"-type-" __stringify(type))
