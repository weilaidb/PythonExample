static struct  ethtool_stats_keys[] = ;
static int
spider_net_ethtool_get_settings(struct net_device *netdev,
struct ethtool_cmd *cmd)
static void
spider_net_ethtool_get_drvinfo(struct net_device *netdev,
struct ethtool_drvinfo *drvinfo)
static void
spider_net_ethtool_get_wol(struct net_device *netdev,
struct ethtool_wolinfo *wolinfo)
static u32
spider_net_ethtool_get_msglevel(struct net_device *netdev)
static void
spider_net_ethtool_set_msglevel(struct net_device *netdev,
u32 level)
static int
spider_net_ethtool_nway_reset(struct net_device *netdev)
static void
spider_net_ethtool_get_ringparam(struct net_device *netdev,
struct ethtool_ringparam *ering)
static int spider_net_get_sset_count(struct net_device *netdev, int sset)
static void spider_net_get_ethtool_stats(struct net_device *netdev,
struct ethtool_stats *stats, u64 *data)
static void spider_net_get_strings(struct net_device *netdev, u32 stringset,
u8 *data)
const struct ethtool_ops spider_net_ethtool_ops = ;
