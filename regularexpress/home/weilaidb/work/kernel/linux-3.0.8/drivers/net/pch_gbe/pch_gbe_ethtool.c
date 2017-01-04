struct pch_gbe_stats ;
#define PCH_GBE_STAT(m)						\
static const struct pch_gbe_stats pch_gbe_gstrings_stats[] = ;
#define PCH_GBE_QUEUE_STATS_LEN 0
#define PCH_GBE_GLOBAL_STATS_LEN	ARRAY_SIZE(pch_gbe_gstrings_stats)
#define PCH_GBE_STATS_LEN (PCH_GBE_GLOBAL_STATS_LEN + PCH_GBE_QUEUE_STATS_LEN)
#define PCH_GBE_MAC_REGS_LEN    (sizeof(struct pch_gbe_regs) / 4)
#define PCH_GBE_REGS_LEN        (PCH_GBE_MAC_REGS_LEN + PCH_GBE_PHY_REGS_LEN)
static int pch_gbe_get_settings(struct net_device *netdev,
struct ethtool_cmd *ecmd)
static int pch_gbe_set_settings(struct net_device *netdev,
struct ethtool_cmd *ecmd)
static int pch_gbe_get_regs_len(struct net_device *netdev)
static void pch_gbe_get_drvinfo(struct net_device *netdev,
struct ethtool_drvinfo *drvinfo)
static void pch_gbe_get_regs(struct net_device *netdev,
struct ethtool_regs *regs, void *p)
static void pch_gbe_get_wol(struct net_device *netdev,
struct ethtool_wolinfo *wol)
static int pch_gbe_set_wol(struct net_device *netdev,
struct ethtool_wolinfo *wol)
static int pch_gbe_nway_reset(struct net_device *netdev)
static void pch_gbe_get_ringparam(struct net_device *netdev,
struct ethtool_ringparam *ring)
static int pch_gbe_set_ringparam(struct net_device *netdev,
struct ethtool_ringparam *ring)
static void pch_gbe_get_pauseparam(struct net_device *netdev,
struct ethtool_pauseparam *pause)
static int pch_gbe_set_pauseparam(struct net_device *netdev,
struct ethtool_pauseparam *pause)
static void pch_gbe_get_strings(struct net_device *netdev, u32 stringset,
u8 *data)
static void pch_gbe_get_ethtool_stats(struct net_device *netdev,
struct ethtool_stats *stats, u64 *data)
static int pch_gbe_get_sset_count(struct net_device *netdev, int sset)
static const struct ethtool_ops pch_gbe_ethtool_ops = ;
void pch_gbe_set_ethtool_ops(struct net_device *netdev)
