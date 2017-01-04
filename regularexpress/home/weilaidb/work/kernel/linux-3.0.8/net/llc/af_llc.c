static u16 llc_ui_sap_last_autoport = LLC_SAP_DYN_START;
static u16 llc_ui_sap_link_no_max[256];
static struct sockaddr_llc llc_ui_addrnull;
static const struct proto_ops llc_ui_ops;
static int llc_ui_wait_for_conn(struct sock *sk, long timeout);
static int llc_ui_wait_for_disc(struct sock *sk, long timeout);
static int llc_ui_wait_for_busy_core(struct sock *sk, long timeout);
#define LLC_CMSG_PKTINFO	1
static inline u16 llc_ui_next_link_no(int sap)
static inline __be16 llc_proto_type(u16 arphrd)
static inline u8 llc_ui_addr_null(struct sockaddr_llc *addr)
static inline u8 llc_ui_header_len(struct sock *sk, struct sockaddr_llc *addr)
static int llc_ui_send_data(struct sock* sk, struct sk_buff *skb, int noblock)
static void llc_ui_sk_init(struct socket *sock, struct sock *sk)
static struct proto llc_proto = ;
static int llc_ui_create(struct net *net, struct socket *sock, int protocol,
int kern)
static int llc_ui_release(struct socket *sock)
static int llc_ui_autoport(void)
static int llc_ui_autobind(struct socket *sock, struct sockaddr_llc *addr)
static int llc_ui_bind(struct socket *sock, struct sockaddr *uaddr, int addrlen)
static int llc_ui_shutdown(struct socket *sock, int how)
static int llc_ui_connect(struct socket *sock, struct sockaddr *uaddr,
int addrlen, int flags)
static int llc_ui_listen(struct socket *sock, int backlog)
static int llc_ui_wait_for_disc(struct sock *sk, long timeout)
static int llc_ui_wait_for_conn(struct sock *sk, long timeout)
static int llc_ui_wait_for_busy_core(struct sock *sk, long timeout)
static int llc_wait_data(struct sock *sk, long timeo)
static void llc_cmsg_rcv(struct msghdr *msg, struct sk_buff *skb)
static int llc_ui_accept(struct socket *sock, struct socket *newsock, int flags)
static int llc_ui_recvmsg(struct kiocb *iocb, struct socket *sock,
struct msghdr *msg, size_t len, int flags)
static int llc_ui_sendmsg(struct kiocb *iocb, struct socket *sock,
struct msghdr *msg, size_t len)
static int llc_ui_getname(struct socket *sock, struct sockaddr *uaddr,
int *uaddrlen, int peer)
static int llc_ui_ioctl(struct socket *sock, unsigned int cmd,
unsigned long arg)
static int llc_ui_setsockopt(struct socket *sock, int level, int optname,
char __user *optval, unsigned int optlen)
static int llc_ui_getsockopt(struct socket *sock, int level, int optname,
char __user *optval, int __user *optlen)
static const struct net_proto_family llc_ui_family_ops = ;
static const struct proto_ops llc_ui_ops = ;
static const char llc_proc_err_msg[] __initconst =
KERN_CRIT "LLC: Unable to register the proc_fs entries\n";
static const char llc_sysctl_err_msg[] __initconst =
KERN_CRIT "LLC: Unable to register the sysctl entries\n";
static const char llc_sock_err_msg[] __initconst =
KERN_CRIT "LLC: Unable to register the network family\n";
static int __init llc2_init(void)
static void __exit llc2_exit(void)
module_init(llc2_init);
module_exit(llc2_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Procom 1997, Jay Schullist 2001, Arnaldo C. Melo 2001-2003");
MODULE_DESCRIPTION("IEEE 802.2 PF_LLC support");
MODULE_ALIAS_NETPROTO(PF_LLC);
