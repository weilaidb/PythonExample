struct qlcnic_stats ;
#define QLC_SIZEOF(m) FIELD_SIZEOF(struct qlcnic_adapter, m)
#define QLC_OFF(m) offsetof(struct qlcnic_adapter, m)
static const struct qlcnic_stats qlcnic_gstrings_stats[] = ;
static const char qlcnic_device_gstrings_stats[][ETH_GSTRING_LEN] = ;
#define QLCNIC_STATS_LEN	ARRAY_SIZE(qlcnic_gstrings_stats)
#define QLCNIC_DEVICE_STATS_LEN	ARRAY_SIZE(qlcnic_device_gstrings_stats)
static const char qlcnic_gstrings_test[][ETH_GSTRING_LEN] = ;
#define QLCNIC_TEST_LEN	ARRAY_SIZE(qlcnic_gstrings_test)
#define QLCNIC_RING_REGS_COUNT	20
#define QLCNIC_RING_REGS_LEN	(QLCNIC_RING_REGS_COUNT * sizeof(u32))
#define QLCNIC_MAX_EEPROM_LEN   1024
static const u32 diag_registers[] = ;
#define QLCNIC_MGMT_API_VERSION	2
#define QLCNIC_DEV_INFO_SIZE	1
#define QLCNIC_ETHTOOL_REGS_VER	2
static int qlcnic_get_regs_len(struct net_device *dev)
static int qlcnic_get_eeprom_len(struct net_device *dev)
static void
qlcnic_get_drvinfo(struct net_device *dev, struct ethtool_drvinfo *drvinfo)
static int
qlcnic_get_settings(struct net_device *dev, struct ethtool_cmd *ecmd)
static int
qlcnic_set_settings(struct net_device *dev, struct ethtool_cmd *ecmd)
static void
qlcnic_get_regs(struct net_device *dev, struct ethtool_regs *regs, void *p)
static u32 qlcnic_test_link(struct net_device *dev)
static int
qlcnic_get_eeprom(struct net_device *dev, struct ethtool_eeprom *eeprom,
u8 *bytes)
static void
qlcnic_get_ringparam(struct net_device *dev,
struct ethtool_ringparam *ring)
static u32
qlcnic_validate_ringparam(u32 val, u32 min, u32 max, char *r_name)
static int
qlcnic_set_ringparam(struct net_device *dev,
struct ethtool_ringparam *ring)
static void qlcnic_get_channels(struct net_device *dev,
struct ethtool_channels *channel)
static int qlcnic_set_channels(struct net_device *dev,
struct ethtool_channels *channel)
static void
qlcnic_get_pauseparam(struct net_device *netdev,
struct ethtool_pauseparam *pause)
static int
qlcnic_set_pauseparam(struct net_device *netdev,
struct ethtool_pauseparam *pause)
static int qlcnic_reg_test(struct net_device *dev)
static int qlcnic_get_sset_count(struct net_device *dev, int sset)
static int qlcnic_irq_test(struct net_device *netdev)
static void
qlcnic_diag_test(struct net_device *dev, struct ethtool_test *eth_test,
u64 *data)
static void
qlcnic_get_strings(struct net_device *dev, u32 stringset, u8 * data)
#define QLCNIC_FILL_ESWITCH_STATS(VAL1) \
(((VAL1) == QLCNIC_ESW_STATS_NOT_AVAIL) ? 0 : VAL1)
static void
qlcnic_fill_device_stats(int *index, u64 *data,
struct __qlcnic_esw_statistics *stats)
static void
qlcnic_get_ethtool_stats(struct net_device *dev,
struct ethtool_stats *stats, u64 * data)
static int qlcnic_set_led(struct net_device *dev,
enum ethtool_phys_id_state state)
static void
qlcnic_get_wol(struct net_device *dev, struct ethtool_wolinfo *wol)
static int
qlcnic_set_wol(struct net_device *dev, struct ethtool_wolinfo *wol)
static int qlcnic_set_intr_coalesce(struct net_device *netdev,
struct ethtool_coalesce *ethcoal)
static int qlcnic_get_intr_coalesce(struct net_device *netdev,
struct ethtool_coalesce *ethcoal)
static u32 qlcnic_get_msglevel(struct net_device *netdev)
static void qlcnic_set_msglevel(struct net_device *netdev, u32 msglvl)
static int
qlcnic_get_dump_flag(struct net_device *netdev, struct ethtool_dump *dump)
static int
qlcnic_get_dump_data(struct net_device *netdev, struct ethtool_dump *dump,
void *buffer)
static int
qlcnic_set_dump(struct net_device *netdev, struct ethtool_dump *val)
const struct ethtool_ops qlcnic_ethtool_ops = ;
