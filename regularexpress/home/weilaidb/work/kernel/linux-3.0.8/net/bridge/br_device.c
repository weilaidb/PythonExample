netdev_tx_t br_dev_xmit(struct sk_buff *skb, struct net_device *dev)
static int br_dev_init(struct net_device *dev)
static int br_dev_open(struct net_device *dev)
static void br_dev_set_multicast_list(struct net_device *dev)
static int br_dev_stop(struct net_device *dev)
static struct rtnl_link_stats64 *br_get_stats64(struct net_device *dev,
struct rtnl_link_stats64 *stats)
static int br_change_mtu(struct net_device *dev, int new_mtu)
static int br_set_mac_address(struct net_device *dev, void *p)
static void br_getinfo(struct net_device *dev, struct ethtool_drvinfo *info)
static u32 br_fix_features(struct net_device *dev, u32 features)
static void br_poll_controller(struct net_device *br_dev)
static void br_netpoll_cleanup(struct net_device *dev)
static int br_netpoll_setup(struct net_device *dev, struct netpoll_info *ni)
int br_netpoll_enable(struct net_bridge_port *p)
void br_netpoll_disable(struct net_bridge_port *p)
static int br_add_slave(struct net_device *dev, struct net_device *slave_dev)
static int br_del_slave(struct net_device *dev, struct net_device *slave_dev)
static const struct ethtool_ops br_ethtool_ops = ;
static const struct net_device_ops br_netdev_ops = ;
static void br_dev_free(struct net_device *dev)
static struct device_type br_type = ;
void br_dev_setup(struct net_device *dev)
