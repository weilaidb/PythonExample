static void ipoib_get_drvinfo(struct net_device *netdev,
struct ethtool_drvinfo *drvinfo)
static int ipoib_get_coalesce(struct net_device *dev,
struct ethtool_coalesce *coal)
static int ipoib_set_coalesce(struct net_device *dev,
struct ethtool_coalesce *coal)
static const struct ethtool_ops ipoib_ethtool_ops = ;
void ipoib_set_ethtool_ops(struct net_device *dev)
