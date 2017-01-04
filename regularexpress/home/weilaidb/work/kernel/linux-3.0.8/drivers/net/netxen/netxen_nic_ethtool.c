struct netxen_nic_stats ;
#define NETXEN_NIC_STAT(m) sizeof(((struct netxen_adapter *)0)->m), \
offsetof(struct netxen_adapter, m)
#define NETXEN_NIC_PORT_WINDOW 0x10000
#define NETXEN_NIC_INVALID_DATA 0xDEADBEEF
static const struct netxen_nic_stats netxen_nic_gstrings_stats[] = ;
#define NETXEN_NIC_STATS_LEN	ARRAY_SIZE(netxen_nic_gstrings_stats)
static const char netxen_nic_gstrings_test[][ETH_GSTRING_LEN] = ;
#define NETXEN_NIC_TEST_LEN	ARRAY_SIZE(netxen_nic_gstrings_test)
#define NETXEN_NIC_REGS_COUNT 30
#define NETXEN_NIC_REGS_LEN (NETXEN_NIC_REGS_COUNT * sizeof(__le32))
#define NETXEN_MAX_EEPROM_LEN   1024
static int netxen_nic_get_eeprom_len(struct net_device *dev)
static void
netxen_nic_get_drvinfo(struct net_device *dev, struct ethtool_drvinfo *drvinfo)
static int
netxen_nic_get_settings(struct net_device *dev, struct ethtool_cmd *ecmd)
static int
netxen_nic_set_settings(struct net_device *dev, struct ethtool_cmd *ecmd)
static int netxen_nic_get_regs_len(struct net_device *dev)
static void
netxen_nic_get_regs(struct net_device *dev, struct ethtool_regs *regs, void *p)
static u32 netxen_nic_test_link(struct net_device *dev)
static int
netxen_nic_get_eeprom(struct net_device *dev, struct ethtool_eeprom *eeprom,
u8 * bytes)
static void
netxen_nic_get_ringparam(struct net_device *dev,
struct ethtool_ringparam *ring)
static u32
netxen_validate_ringparam(u32 val, u32 min, u32 max, char *r_name)
static int
netxen_nic_set_ringparam(struct net_device *dev,
struct ethtool_ringparam *ring)
static void
netxen_nic_get_pauseparam(struct net_device *dev,
struct ethtool_pauseparam *pause)
static int
netxen_nic_set_pauseparam(struct net_device *dev,
struct ethtool_pauseparam *pause)
static int netxen_nic_reg_test(struct net_device *dev)
static int netxen_get_sset_count(struct net_device *dev, int sset)
static void
netxen_nic_diag_test(struct net_device *dev, struct ethtool_test *eth_test,
u64 * data)
static void
netxen_nic_get_strings(struct net_device *dev, u32 stringset, u8 * data)
static void
netxen_nic_get_ethtool_stats(struct net_device *dev,
struct ethtool_stats *stats, u64 * data)
static void
netxen_nic_get_wol(struct net_device *dev, struct ethtool_wolinfo *wol)
static int
netxen_nic_set_wol(struct net_device *dev, struct ethtool_wolinfo *wol)
static int netxen_set_intr_coalesce(struct net_device *netdev,
struct ethtool_coalesce *ethcoal)
static int netxen_get_intr_coalesce(struct net_device *netdev,
struct ethtool_coalesce *ethcoal)
const struct ethtool_ops netxen_nic_ethtool_ops = ;
