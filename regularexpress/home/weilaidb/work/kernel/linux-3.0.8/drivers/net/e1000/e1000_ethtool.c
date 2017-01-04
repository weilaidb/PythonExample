enum ;
struct e1000_stats ;
#define E1000_STAT(m)		E1000_STATS, \
sizeof(((struct e1000_adapter *)0)->m), \
offsetof(struct e1000_adapter, m)
#define E1000_NETDEV_STAT(m)	NETDEV_STATS, \
sizeof(((struct net_device *)0)->m), \
offsetof(struct net_device, m)
static const struct e1000_stats e1000_gstrings_stats[] = ;
#define E1000_QUEUE_STATS_LEN 0
#define E1000_GLOBAL_STATS_LEN ARRAY_SIZE(e1000_gstrings_stats)
#define E1000_STATS_LEN (E1000_GLOBAL_STATS_LEN + E1000_QUEUE_STATS_LEN)
static const char e1000_gstrings_test[][ETH_GSTRING_LEN] = ;
#define E1000_TEST_LEN	ARRAY_SIZE(e1000_gstrings_test)
static int e1000_get_settings(struct net_device *netdev,
struct ethtool_cmd *ecmd)
static int e1000_set_settings(struct net_device *netdev,
struct ethtool_cmd *ecmd)
static u32 e1000_get_link(struct net_device *netdev)
static void e1000_get_pauseparam(struct net_device *netdev,
struct ethtool_pauseparam *pause)
static int e1000_set_pauseparam(struct net_device *netdev,
struct ethtool_pauseparam *pause)
static u32 e1000_get_rx_csum(struct net_device *netdev)
static int e1000_set_rx_csum(struct net_device *netdev, u32 data)
static u32 e1000_get_tx_csum(struct net_device *netdev)
static int e1000_set_tx_csum(struct net_device *netdev, u32 data)
static int e1000_set_tso(struct net_device *netdev, u32 data)
static u32 e1000_get_msglevel(struct net_device *netdev)
static void e1000_set_msglevel(struct net_device *netdev, u32 data)
static int e1000_get_regs_len(struct net_device *netdev)
static void e1000_get_regs(struct net_device *netdev, struct ethtool_regs *regs,
void *p)
static int e1000_get_eeprom_len(struct net_device *netdev)
static int e1000_get_eeprom(struct net_device *netdev,
struct ethtool_eeprom *eeprom, u8 *bytes)
static int e1000_set_eeprom(struct net_device *netdev,
struct ethtool_eeprom *eeprom, u8 *bytes)
static void e1000_get_drvinfo(struct net_device *netdev,
struct ethtool_drvinfo *drvinfo)
static void e1000_get_ringparam(struct net_device *netdev,
struct ethtool_ringparam *ring)
static int e1000_set_ringparam(struct net_device *netdev,
struct ethtool_ringparam *ring)
static bool reg_pattern_test(struct e1000_adapter *adapter, u64 *data, int reg,
u32 mask, u32 write)
static bool reg_set_and_check(struct e1000_adapter *adapter, u64 *data, int reg,
u32 mask, u32 write)
#define REG_PATTERN_TEST(reg, mask, write)			     \
do  while (0)
#define REG_SET_AND_CHECK(reg, mask, write)			     \
do  while (0)
static int e1000_reg_test(struct e1000_adapter *adapter, u64 *data)
static int e1000_eeprom_test(struct e1000_adapter *adapter, u64 *data)
static irqreturn_t e1000_test_intr(int irq, void *data)
static int e1000_intr_test(struct e1000_adapter *adapter, u64 *data)
static void e1000_free_desc_rings(struct e1000_adapter *adapter)
static int e1000_setup_desc_rings(struct e1000_adapter *adapter)
static void e1000_phy_disable_receiver(struct e1000_adapter *adapter)
static void e1000_phy_reset_clk_and_crs(struct e1000_adapter *adapter)
static int e1000_nonintegrated_phy_loopback(struct e1000_adapter *adapter)
static int e1000_integrated_phy_loopback(struct e1000_adapter *adapter)
static int e1000_set_phy_loopback(struct e1000_adapter *adapter)
static int e1000_setup_loopback_test(struct e1000_adapter *adapter)
static void e1000_loopback_cleanup(struct e1000_adapter *adapter)
static void e1000_create_lbtest_frame(struct sk_buff *skb,
unsigned int frame_size)
static int e1000_check_lbtest_frame(struct sk_buff *skb,
unsigned int frame_size)
static int e1000_run_loopback_test(struct e1000_adapter *adapter)
static int e1000_loopback_test(struct e1000_adapter *adapter, u64 *data)
static int e1000_link_test(struct e1000_adapter *adapter, u64 *data)
static int e1000_get_sset_count(struct net_device *netdev, int sset)
static void e1000_diag_test(struct net_device *netdev,
struct ethtool_test *eth_test, u64 *data)
static int e1000_wol_exclusion(struct e1000_adapter *adapter,
struct ethtool_wolinfo *wol)
static void e1000_get_wol(struct net_device *netdev,
struct ethtool_wolinfo *wol)
static int e1000_set_wol(struct net_device *netdev, struct ethtool_wolinfo *wol)
static int e1000_set_phys_id(struct net_device *netdev,
enum ethtool_phys_id_state state)
static int e1000_get_coalesce(struct net_device *netdev,
struct ethtool_coalesce *ec)
static int e1000_set_coalesce(struct net_device *netdev,
struct ethtool_coalesce *ec)
static int e1000_nway_reset(struct net_device *netdev)
static void e1000_get_ethtool_stats(struct net_device *netdev,
struct ethtool_stats *stats, u64 *data)
static void e1000_get_strings(struct net_device *netdev, u32 stringset,
u8 *data)
static const struct ethtool_ops e1000_ethtool_ops = ;
void e1000_set_ethtool_ops(struct net_device *netdev)
