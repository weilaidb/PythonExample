#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
static int ehea_get_settings(struct net_device *dev, struct ethtool_cmd *cmd)
static int ehea_set_settings(struct net_device *dev, struct ethtool_cmd *cmd)
static int ehea_nway_reset(struct net_device *dev)
static void ehea_get_drvinfo(struct net_device *dev,
struct ethtool_drvinfo *info)
static u32 ehea_get_msglevel(struct net_device *dev)
static void ehea_set_msglevel(struct net_device *dev, u32 value)
static char ehea_ethtool_stats_keys[][ETH_GSTRING_LEN] = ;
static void ehea_get_strings(struct net_device *dev, u32 stringset, u8 *data)
static int ehea_get_sset_count(struct net_device *dev, int sset)
static void ehea_get_ethtool_stats(struct net_device *dev,
struct ethtool_stats *stats, u64 *data)
const struct ethtool_ops ehea_ethtool_ops = ;
void ehea_set_ethtool_ops(struct net_device *netdev)
