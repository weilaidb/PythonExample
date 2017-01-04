struct pcpu_lstats ;
static netdev_tx_t loopback_xmit(struct sk_buff *skb,
struct net_device *dev)
static struct rtnl_link_stats64 *loopback_get_stats64(struct net_device *dev,
struct rtnl_link_stats64 *stats)
static u32 always_on(struct net_device *dev)
static const struct ethtool_ops loopback_ethtool_ops = ;
static int loopback_dev_init(struct net_device *dev)
static void loopback_dev_free(struct net_device *dev)
static const struct net_device_ops loopback_ops = ;
static void loopback_setup(struct net_device *dev)
static __net_init int loopback_net_init(struct net *net)
struct pernet_operations __net_initdata loopback_net_ops = ;
