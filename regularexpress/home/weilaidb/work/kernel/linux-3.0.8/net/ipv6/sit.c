#define HASH_SIZE  16
#define HASH(addr) (((__force u32)addr^((__force u32)addr>>4))&0xF)
static int ipip6_tunnel_init(struct net_device *dev);
static void ipip6_tunnel_setup(struct net_device *dev);
static void ipip6_dev_free(struct net_device *dev);
static int sit_net_id __read_mostly;
struct sit_net ;
#define for_each_ip_tunnel_rcu(start) \
for (t = rcu_dereference(start); t; t = rcu_dereference(t->next))
struct pcpu_tstats ;
static struct net_device_stats *ipip6_get_stats(struct net_device *dev)
static struct ip_tunnel * ipip6_tunnel_lookup(struct net *net,
struct net_device *dev, __be32 remote, __be32 local)
static struct ip_tunnel __rcu **__ipip6_bucket(struct sit_net *sitn,
struct ip_tunnel_parm *parms)
static inline struct ip_tunnel __rcu **ipip6_bucket(struct sit_net *sitn,
struct ip_tunnel *t)
static void ipip6_tunnel_unlink(struct sit_net *sitn, struct ip_tunnel *t)
static void ipip6_tunnel_link(struct sit_net *sitn, struct ip_tunnel *t)
static void ipip6_tunnel_clone_6rd(struct net_device *dev, struct sit_net *sitn)
static struct ip_tunnel *ipip6_tunnel_locate(struct net *net,
struct ip_tunnel_parm *parms, int create)
#define for_each_prl_rcu(start)			\
for (prl = rcu_dereference(start);	\
prl;				\
prl = rcu_dereference(prl->next))
static struct ip_tunnel_prl_entry *
__ipip6_tunnel_locate_prl(struct ip_tunnel *t, __be32 addr)
static int ipip6_tunnel_get_prl(struct ip_tunnel *t,
struct ip_tunnel_prl __user *a)
static int
ipip6_tunnel_add_prl(struct ip_tunnel *t, struct ip_tunnel_prl *a, int chg)
static void prl_list_destroy_rcu(struct rcu_head *head)
static int
ipip6_tunnel_del_prl(struct ip_tunnel *t, struct ip_tunnel_prl *a)
static int
isatap_chksrc(struct sk_buff *skb, const struct iphdr *iph, struct ip_tunnel *t)
static void ipip6_tunnel_uninit(struct net_device *dev)
static int ipip6_err(struct sk_buff *skb, u32 info)
static inline void ipip6_ecn_decapsulate(const struct iphdr *iph, struct sk_buff *skb)
static int ipip6_rcv(struct sk_buff *skb)
static inline
__be32 try_6rd(const struct in6_addr *v6dst, struct ip_tunnel *tunnel)
static netdev_tx_t ipip6_tunnel_xmit(struct sk_buff *skb,
struct net_device *dev)
static void ipip6_tunnel_bind_dev(struct net_device *dev)
static int
ipip6_tunnel_ioctl (struct net_device *dev, struct ifreq *ifr, int cmd)
static int ipip6_tunnel_change_mtu(struct net_device *dev, int new_mtu)
static const struct net_device_ops ipip6_netdev_ops = ;
static void ipip6_dev_free(struct net_device *dev)
static void ipip6_tunnel_setup(struct net_device *dev)
static int ipip6_tunnel_init(struct net_device *dev)
static int __net_init ipip6_fb_tunnel_init(struct net_device *dev)
static struct xfrm_tunnel sit_handler __read_mostly = ;
static void __net_exit sit_destroy_tunnels(struct sit_net *sitn, struct list_head *head)
static int __net_init sit_init_net(struct net *net)
static void __net_exit sit_exit_net(struct net *net)
static struct pernet_operations sit_net_ops = ;
static void __exit sit_cleanup(void)
static int __init sit_init(void)
module_init(sit_init);
module_exit(sit_cleanup);
MODULE_LICENSE("GPL");
MODULE_ALIAS_NETDEV("sit0");
