struct igbvf_stats ;
#define IGBVF_STAT(current, base) \
sizeof(((struct igbvf_adapter *)0)->current), \
offsetof(struct igbvf_adapter, current), \
offsetof(struct igbvf_adapter, base)
static const struct igbvf_stats igbvf_gstrings_stats[] = ;
#define IGBVF_GLOBAL_STATS_LEN ARRAY_SIZE(igbvf_gstrings_stats)
static const char igbvf_gstrings_test[][ETH_GSTRING_LEN] = ;
#define IGBVF_TEST_LEN ARRAY_SIZE(igbvf_gstrings_test)
static int igbvf_get_settings(struct net_device *netdev,
struct ethtool_cmd *ecmd)
static int igbvf_set_settings(struct net_device *netdev,
struct ethtool_cmd *ecmd)
static void igbvf_get_pauseparam(struct net_device *netdev,
struct ethtool_pauseparam *pause)
static int igbvf_set_pauseparam(struct net_device *netdev,
struct ethtool_pauseparam *pause)
static u32 igbvf_get_rx_csum(struct net_device *netdev)
static int igbvf_set_rx_csum(struct net_device *netdev, u32 data)
static u32 igbvf_get_tx_csum(struct net_device *netdev)
static int igbvf_set_tx_csum(struct net_device *netdev, u32 data)
static int igbvf_set_tso(struct net_device *netdev, u32 data)
static u32 igbvf_get_msglevel(struct net_device *netdev)
static void igbvf_set_msglevel(struct net_device *netdev, u32 data)
static int igbvf_get_regs_len(struct net_device *netdev)
static void igbvf_get_regs(struct net_device *netdev,
struct ethtool_regs *regs, void *p)
static int igbvf_get_eeprom_len(struct net_device *netdev)
static int igbvf_get_eeprom(struct net_device *netdev,
struct ethtool_eeprom *eeprom, u8 *bytes)
static int igbvf_set_eeprom(struct net_device *netdev,
struct ethtool_eeprom *eeprom, u8 *bytes)
static void igbvf_get_drvinfo(struct net_device *netdev,
struct ethtool_drvinfo *drvinfo)
static void igbvf_get_ringparam(struct net_device *netdev,
struct ethtool_ringparam *ring)
static int igbvf_set_ringparam(struct net_device *netdev,
struct ethtool_ringparam *ring)
static int igbvf_link_test(struct igbvf_adapter *adapter, u64 *data)
static void igbvf_diag_test(struct net_device *netdev,
struct ethtool_test *eth_test, u64 *data)
static void igbvf_get_wol(struct net_device *netdev,
struct ethtool_wolinfo *wol)
static int igbvf_set_wol(struct net_device *netdev,
struct ethtool_wolinfo *wol)
static int igbvf_get_coalesce(struct net_device *netdev,
struct ethtool_coalesce *ec)
static int igbvf_set_coalesce(struct net_device *netdev,
struct ethtool_coalesce *ec)
static int igbvf_nway_reset(struct net_device *netdev)
static void igbvf_get_ethtool_stats(struct net_device *netdev,
struct ethtool_stats *stats,
u64 *data)
static int igbvf_get_sset_count(struct net_device *dev, int stringset)
static void igbvf_get_strings(struct net_device *netdev, u32 stringset,
u8 *data)
static const struct ethtool_ops igbvf_ethtool_ops = ;
void igbvf_set_ethtool_ops(struct net_device *netdev)
