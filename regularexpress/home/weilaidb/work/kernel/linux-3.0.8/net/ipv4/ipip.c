#define HASH_SIZE  16
#define HASH(addr) (((__force u32)addr^((__force u32)addr>>4))&0xF)
static int ipip_net_id __read_mostly;
struct ipip_net ;
static int ipip_tunnel_init(struct net_device *dev);
static void ipip_tunnel_setup(struct net_device *dev);
static void ipip_dev_free(struct net_device *dev);
#define for_each_ip_tunnel_rcu(start) \
for (t = rcu_dereference(start); t; t = rcu_dereference(t->next))
struct pcpu_tstats ;
static struct net_device_stats *ipip_get_stats(struct net_device *dev)
static struct ip_tunnel * ipip_tunnel_lookup(struct net *net,
__be32 remote, __be32 local)
static struct ip_tunnel __rcu **__ipip_bucket(struct ipip_net *ipn,
struct ip_tunnel_parm *parms)
static inline struct ip_tunnel __rcu **ipip_bucket(struct ipip_net *ipn,
struct ip_tunnel *t)
static void ipip_tunnel_unlink(struct ipip_net *ipn, struct ip_tunnel *t)
static void ipip_tunnel_link(struct ipip_net *ipn, struct ip_tunnel *t)
static struct ip_tunnel * ipip_tunnel_locate(struct net *net,
struct ip_tunnel_parm *parms, int create)
static void ipip_tunnel_uninit(struct net_device *dev)
static int ipip_err(struct sk_buff *skb, u32 info)
static inline void ipip_ecn_decapsulate(const struct iphdr *outer_iph,
struct sk_buff *skb)
static int ipip_rcv(struct sk_buff *skb)
static netdev_tx_t ipip_tunnel_xmit(struct sk_buff *skb, struct net_device *dev)
static void ipip_tunnel_bind_dev(struct net_device *dev)
static int
ipip_tunnel_ioctl (struct net_device *dev, struct ifreq *ifr, int cmd)
static int ipip_tunnel_change_mtu(struct net_device *dev, int new_mtu)
static const struct net_device_ops ipip_netdev_ops = ;
static void ipip_dev_free(struct net_device *dev)
static void ipip_tunnel_setup(struct net_device *dev)
static int ipip_tunnel_init(struct net_device *dev)
static int __net_init ipip_fb_tunnel_init(struct net_device *dev)
static struct xfrm_tunnel ipip_handler __read_mostly = ;
static const char banner[] __initconst =
KERN_INFO "IPv4 over IPv4 tunneling driver\n";
static void ipip_destroy_tunnels(struct ipip_net *ipn, struct list_head *head)
static int __net_init ipip_init_net(struct net *net)
static void __net_exit ipip_exit_net(struct net *net)
static struct pernet_operations ipip_net_ops = ;
static int __init ipip_init(void)
static void __exit ipip_fini(void)
module_init(ipip_init);
module_exit(ipip_fini);
MODULE_LICENSE("GPL");
MODULE_ALIAS_NETDEV("tunl0");
