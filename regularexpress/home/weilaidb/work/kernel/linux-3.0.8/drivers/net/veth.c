#define DRV_NAME	"veth"
#define DRV_VERSION	"1.0"
#define MIN_MTU 68
#define MAX_MTU 65535
struct veth_net_stats ;
struct veth_priv ;
static struct  ethtool_stats_keys[] = ;
static int veth_get_settings(struct net_device *dev, struct ethtool_cmd *cmd)
static void veth_get_drvinfo(struct net_device *dev, struct ethtool_drvinfo *info)
static void veth_get_strings(struct net_device *dev, u32 stringset, u8 *buf)
static int veth_get_sset_count(struct net_device *dev, int sset)
static void veth_get_ethtool_stats(struct net_device *dev,
struct ethtool_stats *stats, u64 *data)
static const struct ethtool_ops veth_ethtool_ops = ;
static netdev_tx_t veth_xmit(struct sk_buff *skb, struct net_device *dev)
static struct net_device_stats *veth_get_stats(struct net_device *dev)
static int veth_open(struct net_device *dev)
static int veth_close(struct net_device *dev)
static int is_valid_veth_mtu(int new_mtu)
static int veth_change_mtu(struct net_device *dev, int new_mtu)
static int veth_dev_init(struct net_device *dev)
static void veth_dev_free(struct net_device *dev)
static const struct net_device_ops veth_netdev_ops = ;
static void veth_setup(struct net_device *dev)
static int veth_validate(struct nlattr *tb[], struct nlattr *data[])
static struct rtnl_link_ops veth_link_ops;
static int veth_newlink(struct net *src_net, struct net_device *dev,
struct nlattr *tb[], struct nlattr *data[])
static void veth_dellink(struct net_device *dev, struct list_head *head)
static const struct nla_policy veth_policy[VETH_INFO_MAX + 1];
static struct rtnl_link_ops veth_link_ops = ;
static __init int veth_init(void)
static __exit void veth_exit(void)
module_init(veth_init);
module_exit(veth_exit);
MODULE_DESCRIPTION("Virtual Ethernet Tunnel");
MODULE_LICENSE("GPL v2");
MODULE_ALIAS_RTNL_LINK(DRV_NAME);
