static u_int	*debug;
static struct proto mISDN_proto = ;
#define _pms(sk)	((struct mISDN_sock *)sk)
static struct mISDN_sock_list	data_sockets = ;
static struct mISDN_sock_list	base_sockets = ;
#define L2_HEADER_LEN	4
static inline struct sk_buff *
_l2_alloc_skb(unsigned int len, gfp_t gfp_mask)
static void
mISDN_sock_link(struct mISDN_sock_list *l, struct sock *sk)
static void mISDN_sock_unlink(struct mISDN_sock_list *l, struct sock *sk)
static int
mISDN_send(struct mISDNchannel *ch, struct sk_buff *skb)
static int
mISDN_ctrl(struct mISDNchannel *ch, u_int cmd, void *arg)
static inline void
mISDN_sock_cmsg(struct sock *sk, struct msghdr *msg, struct sk_buff *skb)
static int
mISDN_sock_recvmsg(struct kiocb *iocb, struct socket *sock,
struct msghdr *msg, size_t len, int flags)
static int
mISDN_sock_sendmsg(struct kiocb *iocb, struct socket *sock,
struct msghdr *msg, size_t len)
static int
data_sock_release(struct socket *sock)
static int
data_sock_ioctl_bound(struct sock *sk, unsigned int cmd, void __user *p)
static int
data_sock_ioctl(struct socket *sock, unsigned int cmd, unsigned long arg)
static int data_sock_setsockopt(struct socket *sock, int level, int optname,
char __user *optval, unsigned int len)
static int data_sock_getsockopt(struct socket *sock, int level, int optname,
char __user *optval, int __user *optlen)
static int
data_sock_bind(struct socket *sock, struct sockaddr *addr, int addr_len)
static int
data_sock_getname(struct socket *sock, struct sockaddr *addr,
int *addr_len, int peer)
static const struct proto_ops data_sock_ops = ;
static int
data_sock_create(struct net *net, struct socket *sock, int protocol)
static int
base_sock_release(struct socket *sock)
static int
base_sock_ioctl(struct socket *sock, unsigned int cmd, unsigned long arg)
static int
base_sock_bind(struct socket *sock, struct sockaddr *addr, int addr_len)
static const struct proto_ops base_sock_ops = ;
static int
base_sock_create(struct net *net, struct socket *sock, int protocol)
static int
mISDN_sock_create(struct net *net, struct socket *sock, int proto, int kern)
static const struct net_proto_family mISDN_sock_family_ops = ;
int
misdn_sock_init(u_int *deb)
void
misdn_sock_cleanup(void)
