struct net_device *gblpnetdev;
static INT bcm_open(struct net_device *dev)
static INT bcm_close(struct net_device *dev)
static u16 bcm_select_queue(struct net_device *dev, struct sk_buff *skb)
static netdev_tx_t bcm_transmit(struct sk_buff *skb, struct net_device *dev)
static const struct net_device_ops bcmNetDevOps = ;
static struct device_type wimax_type = ;
static int bcm_get_settings(struct net_device *dev, struct ethtool_cmd *cmd)
static void bcm_get_drvinfo(struct net_device *dev,
struct ethtool_drvinfo *info)
static u32 bcm_get_link(struct net_device *dev)
static u32 bcm_get_msglevel(struct net_device *dev)
static void bcm_set_msglevel(struct net_device *dev, u32 level)
static const struct ethtool_ops bcm_ethtool_ops = ;
int register_networkdev(PMINI_ADAPTER Adapter)
void unregister_networkdev(PMINI_ADAPTER Adapter)
