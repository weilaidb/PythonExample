MODULE_AUTHOR("Ville Nuorvala");
MODULE_DESCRIPTION("IPv6 tunneling device");
MODULE_LICENSE("GPL");
MODULE_ALIAS_NETDEV("ip6tnl0");
#define IP6_TNL_TRACE(x...) printk(KERN_DEBUG "%s:" x "\n", __func__)
#define IP6_TNL_TRACE(x...) do  while(0)
#define IPV6_TCLASS_MASK (IPV6_FLOWINFO_MASK & ~IPV6_FLOWLABEL_MASK)
#define IPV6_TCLASS_SHIFT 20
#define HASH_SIZE  32
#define HASH(addr) ((__force u32)((addr)->s6_addr32[0] ^ (addr)->s6_addr32[1] ^ \
(addr)->s6_addr32[2] ^ (addr)->s6_addr32[3]) & \
(HASH_SIZE - 1))
static int ip6_tnl_dev_init(struct net_device *dev);
static void ip6_tnl_dev_setup(struct net_device *dev);
static int ip6_tnl_net_id __read_mostly;
struct ip6_tnl_net ;
struct pcpu_tstats ;
static struct net_device_stats *ip6_get_stats(struct net_device *dev)
static inline struct dst_entry *ip6_tnl_dst_check(struct ip6_tnl *t)
static inline void ip6_tnl_dst_reset(struct ip6_tnl *t)
static inline void ip6_tnl_dst_store(struct ip6_tnl *t, struct dst_entry *dst)
#define for_each_ip6_tunnel_rcu(start) \
for (t = rcu_dereference(start); t; t = rcu_dereference(t->next))
static struct ip6_tnl *
ip6_tnl_lookup(struct net *net, const struct in6_addr *remote, const struct in6_addr *local)
static struct ip6_tnl __rcu **
ip6_tnl_bucket(struct ip6_tnl_net *ip6n, const struct ip6_tnl_parm *p)
static void
ip6_tnl_link(struct ip6_tnl_net *ip6n, struct ip6_tnl *t)
static void
ip6_tnl_unlink(struct ip6_tnl_net *ip6n, struct ip6_tnl *t)
static void ip6_dev_free(struct net_device *dev)
static struct ip6_tnl *ip6_tnl_create(struct net *net, struct ip6_tnl_parm *p)
static struct ip6_tnl *ip6_tnl_locate(struct net *net,
struct ip6_tnl_parm *p, int create)
static void
ip6_tnl_dev_uninit(struct net_device *dev)
static __u16
parse_tlv_tnl_enc_lim(struct sk_buff *skb, __u8 * raw)
static int
ip6_tnl_err(struct sk_buff *skb, __u8 ipproto, struct inet6_skb_parm *opt,
u8 *type, u8 *code, int *msg, __u32 *info, int offset)
static int
ip4ip6_err(struct sk_buff *skb, struct inet6_skb_parm *opt,
u8 type, u8 code, int offset, __be32 info)
static int
ip6ip6_err(struct sk_buff *skb, struct inet6_skb_parm *opt,
u8 type, u8 code, int offset, __be32 info)
static void ip4ip6_dscp_ecn_decapsulate(const struct ip6_tnl *t,
const struct ipv6hdr *ipv6h,
struct sk_buff *skb)
static void ip6ip6_dscp_ecn_decapsulate(const struct ip6_tnl *t,
const struct ipv6hdr *ipv6h,
struct sk_buff *skb)
static inline int ip6_tnl_rcv_ctl(struct ip6_tnl *t)
static int ip6_tnl_rcv(struct sk_buff *skb, __u16 protocol,
__u8 ipproto,
void (*dscp_ecn_decapsulate)(const struct ip6_tnl *t,
const struct ipv6hdr *ipv6h,
struct sk_buff *skb))
static int ip4ip6_rcv(struct sk_buff *skb)
static int ip6ip6_rcv(struct sk_buff *skb)
struct ipv6_tel_txoption ;
static void init_tel_txopt(struct ipv6_tel_txoption *opt, __u8 encap_limit)
static inline int
ip6_tnl_addr_conflict(const struct ip6_tnl *t, const struct ipv6hdr *hdr)
static inline int ip6_tnl_xmit_ctl(struct ip6_tnl *t)
static int ip6_tnl_xmit2(struct sk_buff *skb,
struct net_device *dev,
__u8 dsfield,
struct flowi6 *fl6,
int encap_limit,
__u32 *pmtu)
static inline int
ip4ip6_tnl_xmit(struct sk_buff *skb, struct net_device *dev)
static inline int
ip6ip6_tnl_xmit(struct sk_buff *skb, struct net_device *dev)
static netdev_tx_t
ip6_tnl_xmit(struct sk_buff *skb, struct net_device *dev)
static void ip6_tnl_set_cap(struct ip6_tnl *t)
static void ip6_tnl_link_config(struct ip6_tnl *t)
static int
ip6_tnl_change(struct ip6_tnl *t, struct ip6_tnl_parm *p)
static int
ip6_tnl_ioctl(struct net_device *dev, struct ifreq *ifr, int cmd)
static int
ip6_tnl_change_mtu(struct net_device *dev, int new_mtu)
static const struct net_device_ops ip6_tnl_netdev_ops = ;
static void ip6_tnl_dev_setup(struct net_device *dev)
static inline int
ip6_tnl_dev_init_gen(struct net_device *dev)
static int ip6_tnl_dev_init(struct net_device *dev)
static int __net_init ip6_fb_tnl_dev_init(struct net_device *dev)
static struct xfrm6_tunnel ip4ip6_handler __read_mostly = ;
static struct xfrm6_tunnel ip6ip6_handler __read_mostly = ;
static void __net_exit ip6_tnl_destroy_tunnels(struct ip6_tnl_net *ip6n)
static int __net_init ip6_tnl_init_net(struct net *net)
static void __net_exit ip6_tnl_exit_net(struct net *net)
static struct pernet_operations ip6_tnl_net_ops = ;
static int __init ip6_tunnel_init(void)
static void __exit ip6_tunnel_cleanup(void)
module_init(ip6_tunnel_init);
module_exit(ip6_tunnel_cleanup);
