#if defined(CONFIG_IPV6) || defined(CONFIG_IPV6_MODULE)
static struct rtnl_link_ops ipgre_link_ops __read_mostly;
static int ipgre_tunnel_init(struct net_device *dev);
static void ipgre_tunnel_setup(struct net_device *dev);
static int ipgre_tunnel_bind_dev(struct net_device *dev);
#define HASH_SIZE  16
static int ipgre_net_id __read_mostly;
struct ipgre_net ;
#define HASH(addr) (((__force u32)addr^((__force u32)addr>>4))&0xF)
#define tunnels_r_l	tunnels[3]
#define tunnels_r	tunnels[2]
#define tunnels_l	tunnels[1]
#define tunnels_wc	tunnels[0]
#define for_each_ip_tunnel_rcu(start) \
for (t = rcu_dereference(start); t; t = rcu_dereference(t->next))
struct pcpu_tstats ;
static struct net_device_stats *ipgre_get_stats(struct net_device *dev)
static struct ip_tunnel * ipgre_tunnel_lookup(struct net_device *dev,
__be32 remote, __be32 local,
__be32 key, __be16 gre_proto)
static struct ip_tunnel __rcu **__ipgre_bucket(struct ipgre_net *ign,
struct ip_tunnel_parm *parms)
static inline struct ip_tunnel __rcu **ipgre_bucket(struct ipgre_net *ign,
struct ip_tunnel *t)
static void ipgre_tunnel_link(struct ipgre_net *ign, struct ip_tunnel *t)
static void ipgre_tunnel_unlink(struct ipgre_net *ign, struct ip_tunnel *t)
static struct ip_tunnel *ipgre_tunnel_find(struct net *net,
struct ip_tunnel_parm *parms,
int type)
static struct ip_tunnel *ipgre_tunnel_locate(struct net *net,
struct ip_tunnel_parm *parms, int create)
static void ipgre_tunnel_uninit(struct net_device *dev)
static void ipgre_err(struct sk_buff *skb, u32 info)
static inline void ipgre_ecn_decapsulate(const struct iphdr *iph, struct sk_buff *skb)
static inline u8
ipgre_ecn_encapsulate(u8 tos, const struct iphdr *old_iph, struct sk_buff *skb)
static int ipgre_rcv(struct sk_buff *skb)
static netdev_tx_t ipgre_tunnel_xmit(struct sk_buff *skb, struct net_device *dev)
static int ipgre_tunnel_bind_dev(struct net_device *dev)
static int
ipgre_tunnel_ioctl (struct net_device *dev, struct ifreq *ifr, int cmd)
static int ipgre_tunnel_change_mtu(struct net_device *dev, int new_mtu)
static int ipgre_header(struct sk_buff *skb, struct net_device *dev,
unsigned short type,
const void *daddr, const void *saddr, unsigned int len)
static int ipgre_header_parse(const struct sk_buff *skb, unsigned char *haddr)
static const struct header_ops ipgre_header_ops = ;
static int ipgre_open(struct net_device *dev)
static int ipgre_close(struct net_device *dev)
static const struct net_device_ops ipgre_netdev_ops = ;
static void ipgre_dev_free(struct net_device *dev)
static void ipgre_tunnel_setup(struct net_device *dev)
static int ipgre_tunnel_init(struct net_device *dev)
static void ipgre_fb_tunnel_init(struct net_device *dev)
static const struct gre_protocol ipgre_protocol = ;
static void ipgre_destroy_tunnels(struct ipgre_net *ign, struct list_head *head)
static int __net_init ipgre_init_net(struct net *net)
static void __net_exit ipgre_exit_net(struct net *net)
static struct pernet_operations ipgre_net_ops = ;
static int ipgre_tunnel_validate(struct nlattr *tb[], struct nlattr *data[])
static int ipgre_tap_validate(struct nlattr *tb[], struct nlattr *data[])
static void ipgre_netlink_parms(struct nlattr *data[],
struct ip_tunnel_parm *parms)
static int ipgre_tap_init(struct net_device *dev)
static const struct net_device_ops ipgre_tap_netdev_ops = ;
static void ipgre_tap_setup(struct net_device *dev)
static int ipgre_newlink(struct net *src_net, struct net_device *dev, struct nlattr *tb[],
struct nlattr *data[])
static int ipgre_changelink(struct net_device *dev, struct nlattr *tb[],
struct nlattr *data[])
static size_t ipgre_get_size(const struct net_device *dev)
static int ipgre_fill_info(struct sk_buff *skb, const struct net_device *dev)
static const struct nla_policy ipgre_policy[IFLA_GRE_MAX + 1] = ;
static struct rtnl_link_ops ipgre_link_ops __read_mostly = ;
static struct rtnl_link_ops ipgre_tap_ops __read_mostly = ;
static int __init ipgre_init(void)
static void __exit ipgre_fini(void)
module_init(ipgre_init);
module_exit(ipgre_fini);
MODULE_LICENSE("GPL");
MODULE_ALIAS_RTNL_LINK("gre");
MODULE_ALIAS_RTNL_LINK("gretap");
MODULE_ALIAS_NETDEV("gre0");
