static void cvm_oct_get_drvinfo(struct net_device *dev,
struct ethtool_drvinfo *info)
static int cvm_oct_get_settings(struct net_device *dev, struct ethtool_cmd *cmd)
static int cvm_oct_set_settings(struct net_device *dev, struct ethtool_cmd *cmd)
static int cvm_oct_nway_reset(struct net_device *dev)
const struct ethtool_ops cvm_oct_ethtool_ops = ;
int cvm_oct_ioctl(struct net_device *dev, struct ifreq *rq, int cmd)
static void cvm_oct_adjust_link(struct net_device *dev)
int cvm_oct_phy_setup_device(struct net_device *dev)
