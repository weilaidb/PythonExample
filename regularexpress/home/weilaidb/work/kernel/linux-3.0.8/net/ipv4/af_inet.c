static struct list_head inetsw[SOCK_MAX];
static DEFINE_SPINLOCK(inetsw_lock);
struct ipv4_config ipv4_config;
EXPORT_SYMBOL(ipv4_config);
void inet_sock_destruct(struct sock *sk)
EXPORT_SYMBOL(inet_sock_destruct);
static int inet_autobind(struct sock *sk)
int inet_listen(struct socket *sock, int backlog)
EXPORT_SYMBOL(inet_listen);
u32 inet_ehash_secret __read_mostly;
EXPORT_SYMBOL(inet_ehash_secret);
void build_ehash_secret(void)
EXPORT_SYMBOL(build_ehash_secret);
static inline int inet_netns_ok(struct net *net, int protocol)
static int inet_create(struct net *net, struct socket *sock, int protocol,
int kern)
int inet_release(struct socket *sock)
EXPORT_SYMBOL(inet_release);
int sysctl_ip_nonlocal_bind __read_mostly;
EXPORT_SYMBOL(sysctl_ip_nonlocal_bind);
int inet_bind(struct socket *sock, struct sockaddr *uaddr, int addr_len)
EXPORT_SYMBOL(inet_bind);
int inet_dgram_connect(struct socket *sock, struct sockaddr * uaddr,
int addr_len, int flags)
EXPORT_SYMBOL(inet_dgram_connect);
static long inet_wait_for_connect(struct sock *sk, long timeo)
int inet_stream_connect(struct socket *sock, struct sockaddr *uaddr,
int addr_len, int flags)
EXPORT_SYMBOL(inet_stream_connect);
int inet_accept(struct socket *sock, struct socket *newsock, int flags)
EXPORT_SYMBOL(inet_accept);
int inet_getname(struct socket *sock, struct sockaddr *uaddr,
int *uaddr_len, int peer)
EXPORT_SYMBOL(inet_getname);
int inet_sendmsg(struct kiocb *iocb, struct socket *sock, struct msghdr *msg,
size_t size)
EXPORT_SYMBOL(inet_sendmsg);
ssize_t inet_sendpage(struct socket *sock, struct page *page, int offset,
size_t size, int flags)
EXPORT_SYMBOL(inet_sendpage);
int inet_recvmsg(struct kiocb *iocb, struct socket *sock, struct msghdr *msg,
size_t size, int flags)
EXPORT_SYMBOL(inet_recvmsg);
int inet_shutdown(struct socket *sock, int how)
EXPORT_SYMBOL(inet_shutdown);
int inet_ioctl(struct socket *sock, unsigned int cmd, unsigned long arg)
EXPORT_SYMBOL(inet_ioctl);
int inet_compat_ioctl(struct socket *sock, unsigned int cmd, unsigned long arg)
const struct proto_ops inet_stream_ops = ;
EXPORT_SYMBOL(inet_stream_ops);
const struct proto_ops inet_dgram_ops = ;
EXPORT_SYMBOL(inet_dgram_ops);
static const struct proto_ops inet_sockraw_ops = ;
static const struct net_proto_family inet_family_ops = ;
static struct inet_protosw inetsw_array[] =
;
#define INETSW_ARRAY_LEN ARRAY_SIZE(inetsw_array)
void inet_register_protosw(struct inet_protosw *p)
EXPORT_SYMBOL(inet_register_protosw);
void inet_unregister_protosw(struct inet_protosw *p)
EXPORT_SYMBOL(inet_unregister_protosw);
int sysctl_ip_dynaddr __read_mostly;
static int inet_sk_reselect_saddr(struct sock *sk)
int inet_sk_rebuild_header(struct sock *sk)
EXPORT_SYMBOL(inet_sk_rebuild_header);
static int inet_gso_send_check(struct sk_buff *skb)
static struct sk_buff *inet_gso_segment(struct sk_buff *skb, u32 features)
static struct sk_buff **inet_gro_receive(struct sk_buff **head,
struct sk_buff *skb)
static int inet_gro_complete(struct sk_buff *skb)
int inet_ctl_sock_create(struct sock **sk, unsigned short family,
unsigned short type, unsigned char protocol,
struct net *net)
EXPORT_SYMBOL_GPL(inet_ctl_sock_create);
unsigned long snmp_fold_field(void __percpu *mib[], int offt)
EXPORT_SYMBOL_GPL(snmp_fold_field);
#if BITS_PER_LONG==32
u64 snmp_fold_field64(void __percpu *mib[], int offt, size_t syncp_offset)
EXPORT_SYMBOL_GPL(snmp_fold_field64);
int snmp_mib_init(void __percpu *ptr[2], size_t mibsize, size_t align)
EXPORT_SYMBOL_GPL(snmp_mib_init);
void snmp_mib_free(void __percpu *ptr[2])
EXPORT_SYMBOL_GPL(snmp_mib_free);
static const struct net_protocol igmp_protocol = ;
static const struct net_protocol tcp_protocol = ;
static const struct net_protocol udp_protocol = ;
static const struct net_protocol icmp_protocol = ;
static __net_init int ipv4_mib_init_net(struct net *net)
static __net_exit void ipv4_mib_exit_net(struct net *net)
static __net_initdata struct pernet_operations ipv4_mib_ops = ;
static int __init init_ipv4_mibs(void)
static int ipv4_proc_init(void);
static struct packet_type ip_packet_type __read_mostly = ;
static int __init inet_init(void)
fs_initcall(inet_init);
static int __init ipv4_proc_init(void)
static int __init ipv4_proc_init(void)
MODULE_ALIAS_NETPROTO(PF_INET);
