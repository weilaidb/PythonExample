#define IXGB_ALL_RAR_ENTRIES 16
enum ;
struct ixgb_stats ;
#define IXGB_STAT(m)		IXGB_STATS, \
FIELD_SIZEOF(struct ixgb_adapter, m), \
offsetof(struct ixgb_adapter, m)
#define IXGB_NETDEV_STAT(m)	NETDEV_STATS, \
FIELD_SIZEOF(struct net_device, m), \
offsetof(struct net_device, m)
static struct ixgb_stats ixgb_gstrings_stats[] = ;
#define IXGB_STATS_LEN	ARRAY_SIZE(ixgb_gstrings_stats)
static int
ixgb_get_settings(struct net_device *netdev, struct ethtool_cmd *ecmd)
static void ixgb_set_speed_duplex(struct net_device *netdev)
static int
ixgb_set_settings(struct net_device *netdev, struct ethtool_cmd *ecmd)
static void
ixgb_get_pauseparam(struct net_device *netdev,
struct ethtool_pauseparam *pause)
static int
ixgb_set_pauseparam(struct net_device *netdev,
struct ethtool_pauseparam *pause)
static u32
ixgb_get_rx_csum(struct net_device *netdev)
static int
ixgb_set_rx_csum(struct net_device *netdev, u32 data)
static u32
ixgb_get_tx_csum(struct net_device *netdev)
static int
ixgb_set_tx_csum(struct net_device *netdev, u32 data)
static int
ixgb_set_tso(struct net_device *netdev, u32 data)
static u32
ixgb_get_msglevel(struct net_device *netdev)
static void
ixgb_set_msglevel(struct net_device *netdev, u32 data)
#define IXGB_GET_STAT(_A_, _R_) _A_->stats._R_
static int
ixgb_get_regs_len(struct net_device *netdev)
static void
ixgb_get_regs(struct net_device *netdev,
struct ethtool_regs *regs, void *p)
static int
ixgb_get_eeprom_len(struct net_device *netdev)
static int
ixgb_get_eeprom(struct net_device *netdev,
struct ethtool_eeprom *eeprom, u8 *bytes)
static int
ixgb_set_eeprom(struct net_device *netdev,
struct ethtool_eeprom *eeprom, u8 *bytes)
static void
ixgb_get_drvinfo(struct net_device *netdev,
struct ethtool_drvinfo *drvinfo)
static void
ixgb_get_ringparam(struct net_device *netdev,
struct ethtool_ringparam *ring)
static int
ixgb_set_ringparam(struct net_device *netdev,
struct ethtool_ringparam *ring)
static int
ixgb_set_phys_id(struct net_device *netdev, enum ethtool_phys_id_state state)
static int
ixgb_get_sset_count(struct net_device *netdev, int sset)
static void
ixgb_get_ethtool_stats(struct net_device *netdev,
struct ethtool_stats *stats, u64 *data)
static void
ixgb_get_strings(struct net_device *netdev, u32 stringset, u8 *data)
static int ixgb_set_flags(struct net_device *netdev, u32 data)
static const struct ethtool_ops ixgb_ethtool_ops = ;
void ixgb_set_ethtool_ops(struct net_device *netdev)
