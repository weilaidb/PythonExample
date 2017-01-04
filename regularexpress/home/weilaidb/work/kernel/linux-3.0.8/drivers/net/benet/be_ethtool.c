struct be_ethtool_stat ;
enum ;
#define FIELDINFO(_struct, field) FIELD_SIZEOF(_struct, field), \
offsetof(_struct, field)
#define NETSTAT_INFO(field) 	#field, NETSTAT,\
FIELDINFO(struct net_device_stats,\
field)
#define DRVSTAT_TX_INFO(field)	#field, DRVSTAT_TX,\
FIELDINFO(struct be_tx_stats, field)
#define DRVSTAT_RX_INFO(field)	#field, DRVSTAT_RX,\
FIELDINFO(struct be_rx_stats, field)
#define ERXSTAT_INFO(field)	#field, ERXSTAT,\
FIELDINFO(struct be_erx_stats_v1, field)
#define	DRVSTAT_INFO(field)	#field, DRVSTAT,\
FIELDINFO(struct be_drv_stats, \
field)
static const struct be_ethtool_stat et_stats[] = ;
#define ETHTOOL_STATS_NUM ARRAY_SIZE(et_stats)
static const struct be_ethtool_stat et_rx_stats[] = ;
#define ETHTOOL_RXSTATS_NUM (ARRAY_SIZE(et_rx_stats))
static const char et_self_tests[][ETH_GSTRING_LEN] = ;
#define ETHTOOL_TESTS_NUM ARRAY_SIZE(et_self_tests)
#define BE_MAC_LOOPBACK 0x0
#define BE_PHY_LOOPBACK 0x1
#define BE_ONE_PORT_EXT_LOOPBACK 0x2
#define BE_NO_LOOPBACK 0xff
static void
be_get_drvinfo(struct net_device *netdev, struct ethtool_drvinfo *drvinfo)
static int
be_get_reg_len(struct net_device *netdev)
static void
be_get_regs(struct net_device *netdev, struct ethtool_regs *regs, void *buf)
static int
be_get_coalesce(struct net_device *netdev, struct ethtool_coalesce *coalesce)
static int
be_set_coalesce(struct net_device *netdev, struct ethtool_coalesce *coalesce)
static void
be_get_ethtool_stats(struct net_device *netdev,
struct ethtool_stats *stats, uint64_t *data)
static void
be_get_stat_strings(struct net_device *netdev, uint32_t stringset,
uint8_t *data)
static int be_get_sset_count(struct net_device *netdev, int stringset)
static int be_get_settings(struct net_device *netdev, struct ethtool_cmd *ecmd)
static void
be_get_ringparam(struct net_device *netdev, struct ethtool_ringparam *ring)
static void
be_get_pauseparam(struct net_device *netdev, struct ethtool_pauseparam *ecmd)
static int
be_set_pauseparam(struct net_device *netdev, struct ethtool_pauseparam *ecmd)
static int
be_set_phys_id(struct net_device *netdev,
enum ethtool_phys_id_state state)
static bool
be_is_wol_supported(struct be_adapter *adapter)
static void
be_get_wol(struct net_device *netdev, struct ethtool_wolinfo *wol)
static int
be_set_wol(struct net_device *netdev, struct ethtool_wolinfo *wol)
static int
be_test_ddr_dma(struct be_adapter *adapter)
static u64 be_loopback_test(struct be_adapter *adapter, u8 loopback_type,
u64 *status)
static void
be_self_test(struct net_device *netdev, struct ethtool_test *test, u64 *data)
static int
be_do_flash(struct net_device *netdev, struct ethtool_flash *efl)
static int
be_get_eeprom_len(struct net_device *netdev)
static int
be_read_eeprom(struct net_device *netdev, struct ethtool_eeprom *eeprom,
uint8_t *data)
const struct ethtool_ops be_ethtool_ops = ;
