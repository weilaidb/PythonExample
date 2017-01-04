MODULE_AUTHOR("Cast of dozens");
MODULE_DESCRIPTION("IPv6 protocol stack for Linux");
MODULE_LICENSE("GPL");
static struct list_head inetsw6[SOCK_MAX];
static DEFINE_SPINLOCK(inetsw6_lock);
struct ipv6_params ipv6_defaults = ;
static int disable_ipv6_mod = 0;
module_param_named(disable, disable_ipv6_mod, int, 0444);
MODULE_PARM_DESC(disable, "Disable IPv6 module such that it is non-functional");
module_param_named(disable_ipv6, ipv6_defaults.disable_ipv6, int, 0444);
MODULE_PARM_DESC(disable_ipv6, "Disable IPv6 on all interfaces");
module_param_named(autoconf, ipv6_defaults.autoconf, int, 0444);
MODULE_PARM_DESC(autoconf, "Enable IPv6 address autoconfiguration on all interfaces");
static __inline__ struct ipv6_pinfo *inet6_sk_generic(struct sock *sk)
static int inet6_create(struct net *net, struct socket *sock, int protocol,
int kern)
int inet6_bind(struct socket *sock, struct sockaddr *uaddr, int addr_len)
EXPORT_SYMBOL(inet6_bind);
int inet6_release(struct socket *sock)
EXPORT_SYMBOL(inet6_release);
void inet6_destroy_sock(struct sock *sk)
EXPORT_SYMBOL_GPL(inet6_destroy_sock);
int inet6_getname(struct socket *sock, struct sockaddr *uaddr,
int *uaddr_len, int peer)
EXPORT_SYMBOL(inet6_getname);
int inet6_ioctl(struct socket *sock, unsigned int cmd, unsigned long arg)
EXPORT_SYMBOL(inet6_ioctl);
const struct proto_ops inet6_stream_ops = ;
const struct proto_ops inet6_dgram_ops = ;
static const struct net_proto_family inet6_family_ops = ;
int inet6_register_protosw(struct inet_protosw *p)
EXPORT_SYMBOL(inet6_register_protosw);
void
inet6_unregister_protosw(struct inet_protosw *p)
EXPORT_SYMBOL(inet6_unregister_protosw);
int inet6_sk_rebuild_header(struct sock *sk)
EXPORT_SYMBOL_GPL(inet6_sk_rebuild_header);
int ipv6_opt_accepted(struct sock *sk, struct sk_buff *skb)
EXPORT_SYMBOL_GPL(ipv6_opt_accepted);
static int ipv6_gso_pull_exthdrs(struct sk_buff *skb, int proto)
static int ipv6_gso_send_check(struct sk_buff *skb)
static struct sk_buff *ipv6_gso_segment(struct sk_buff *skb, u32 features)
struct ipv6_gro_cb ;
#define IPV6_GRO_CB(skb) ((struct ipv6_gro_cb *)(skb)->cb)
static struct sk_buff **ipv6_gro_receive(struct sk_buff **head,
struct sk_buff *skb)
static int ipv6_gro_complete(struct sk_buff *skb)
static struct packet_type ipv6_packet_type __read_mostly = ;
static int __init ipv6_packet_init(void)
static void ipv6_packet_cleanup(void)
static int __net_init ipv6_init_mibs(struct net *net)
static void ipv6_cleanup_mibs(struct net *net)
static int __net_init inet6_net_init(struct net *net)
static void __net_exit inet6_net_exit(struct net *net)
static struct pernet_operations inet6_net_ops = ;
static int __init inet6_init(void)
module_init(inet6_init);
static void __exit inet6_exit(void)
module_exit(inet6_exit);
MODULE_ALIAS_NETPROTO(PF_INET6);
