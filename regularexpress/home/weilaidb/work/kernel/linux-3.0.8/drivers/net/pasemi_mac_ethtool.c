static struct  ethtool_stats_keys[] = ;
static int
pasemi_mac_ethtool_get_settings(struct net_device *netdev,
struct ethtool_cmd *cmd)
static int
pasemi_mac_ethtool_set_settings(struct net_device *netdev,
struct ethtool_cmd *cmd)
static u32
pasemi_mac_ethtool_get_msglevel(struct net_device *netdev)
static void
pasemi_mac_ethtool_set_msglevel(struct net_device *netdev,
u32 level)
static void
pasemi_mac_ethtool_get_ringparam(struct net_device *netdev,
struct ethtool_ringparam *ering)
static int pasemi_mac_get_sset_count(struct net_device *netdev, int sset)
static void pasemi_mac_get_ethtool_stats(struct net_device *netdev,
struct ethtool_stats *stats, u64 *data)
static void pasemi_mac_get_strings(struct net_device *netdev, u32 stringset,
u8 *data)
const struct ethtool_ops pasemi_mac_ethtool_ops = ;
