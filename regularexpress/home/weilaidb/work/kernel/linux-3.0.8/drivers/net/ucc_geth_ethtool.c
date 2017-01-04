static char hw_stat_gstrings[][ETH_GSTRING_LEN] = ;
static char tx_fw_stat_gstrings[][ETH_GSTRING_LEN] = ;
static char rx_fw_stat_gstrings[][ETH_GSTRING_LEN] = ;
#define UEC_HW_STATS_LEN ARRAY_SIZE(hw_stat_gstrings)
#define UEC_TX_FW_STATS_LEN ARRAY_SIZE(tx_fw_stat_gstrings)
#define UEC_RX_FW_STATS_LEN ARRAY_SIZE(rx_fw_stat_gstrings)
static int
uec_get_settings(struct net_device *netdev, struct ethtool_cmd *ecmd)
static int
uec_set_settings(struct net_device *netdev, struct ethtool_cmd *ecmd)
static void
uec_get_pauseparam(struct net_device *netdev,
struct ethtool_pauseparam *pause)
static int
uec_set_pauseparam(struct net_device *netdev,
struct ethtool_pauseparam *pause)
static uint32_t
uec_get_msglevel(struct net_device *netdev)
static void
uec_set_msglevel(struct net_device *netdev, uint32_t data)
static int
uec_get_regs_len(struct net_device *netdev)
static void
uec_get_regs(struct net_device *netdev,
struct ethtool_regs *regs, void *p)
static void
uec_get_ringparam(struct net_device *netdev,
struct ethtool_ringparam *ring)
static int
uec_set_ringparam(struct net_device *netdev,
struct ethtool_ringparam *ring)
static int uec_get_sset_count(struct net_device *netdev, int sset)
static void uec_get_strings(struct net_device *netdev, u32 stringset, u8 *buf)
static void uec_get_ethtool_stats(struct net_device *netdev,
struct ethtool_stats *stats, uint64_t *data)
static int uec_nway_reset(struct net_device *netdev)
static void
uec_get_drvinfo(struct net_device *netdev,
struct ethtool_drvinfo *drvinfo)
static void uec_get_wol(struct net_device *netdev, struct ethtool_wolinfo *wol)
static int uec_set_wol(struct net_device *netdev, struct ethtool_wolinfo *wol)
#define uec_get_wol NULL
#define uec_set_wol NULL
static const struct ethtool_ops uec_ethtool_ops = ;
void uec_set_ethtool_ops(struct net_device *netdev)
