struct igb_stats ;
#define IGB_STAT(_name, _stat)
static const struct igb_stats igb_gstrings_stats[] = ;
#define IGB_NETDEV_STAT(_net_stat)
static const struct igb_stats igb_gstrings_net_stats[] = ;
#define IGB_GLOBAL_STATS_LEN	\
(sizeof(igb_gstrings_stats) / sizeof(struct igb_stats))
#define IGB_NETDEV_STATS_LEN	\
(sizeof(igb_gstrings_net_stats) / sizeof(struct igb_stats))
#define IGB_RX_QUEUE_STATS_LEN \
(sizeof(struct igb_rx_queue_stats) / sizeof(u64))
#define IGB_TX_QUEUE_STATS_LEN 3
#define IGB_QUEUE_STATS_LEN \
((((struct igb_adapter *)netdev_priv(netdev))->num_rx_queues * \
IGB_RX_QUEUE_STATS_LEN) + \
(((struct igb_adapter *)netdev_priv(netdev))->num_tx_queues * \
IGB_TX_QUEUE_STATS_LEN))
#define IGB_STATS_LEN \
(IGB_GLOBAL_STATS_LEN + IGB_NETDEV_STATS_LEN + IGB_QUEUE_STATS_LEN)
static const char igb_gstrings_test[][ETH_GSTRING_LEN] = ;
#define IGB_TEST_LEN (sizeof(igb_gstrings_test) / ETH_GSTRING_LEN)
static int igb_get_settings(struct net_device *netdev, struct ethtool_cmd *ecmd)
static int igb_set_settings(struct net_device *netdev, struct ethtool_cmd *ecmd)
static u32 igb_get_link(struct net_device *netdev)
static void igb_get_pauseparam(struct net_device *netdev,
struct ethtool_pauseparam *pause)
static int igb_set_pauseparam(struct net_device *netdev,
struct ethtool_pauseparam *pause)
static u32 igb_get_rx_csum(struct net_device *netdev)
static int igb_set_rx_csum(struct net_device *netdev, u32 data)
static u32 igb_get_tx_csum(struct net_device *netdev)
static int igb_set_tx_csum(struct net_device *netdev, u32 data)
static int igb_set_tso(struct net_device *netdev, u32 data)
static u32 igb_get_msglevel(struct net_device *netdev)
static void igb_set_msglevel(struct net_device *netdev, u32 data)
static int igb_get_regs_len(struct net_device *netdev)
static void igb_get_regs(struct net_device *netdev,
struct ethtool_regs *regs, void *p)
static int igb_get_eeprom_len(struct net_device *netdev)
static int igb_get_eeprom(struct net_device *netdev,
struct ethtool_eeprom *eeprom, u8 *bytes)
static int igb_set_eeprom(struct net_device *netdev,
struct ethtool_eeprom *eeprom, u8 *bytes)
static void igb_get_drvinfo(struct net_device *netdev,
struct ethtool_drvinfo *drvinfo)
static void igb_get_ringparam(struct net_device *netdev,
struct ethtool_ringparam *ring)
static int igb_set_ringparam(struct net_device *netdev,
struct ethtool_ringparam *ring)
struct igb_reg_test ;
#define PATTERN_TEST	1
#define SET_READ_TEST	2
#define WRITE_NO_TEST	3
#define TABLE32_TEST	4
#define TABLE64_TEST_LO	5
#define TABLE64_TEST_HI	6
static struct igb_reg_test reg_test_i350[] = ;
static struct igb_reg_test reg_test_82580[] = ;
static struct igb_reg_test reg_test_82576[] = ;
static struct igb_reg_test reg_test_82575[] = ;
static bool reg_pattern_test(struct igb_adapter *adapter, u64 *data,
int reg, u32 mask, u32 write)
static bool reg_set_and_check(struct igb_adapter *adapter, u64 *data,
int reg, u32 mask, u32 write)
#define REG_PATTERN_TEST(reg, mask, write) \
do  while (0)
#define REG_SET_AND_CHECK(reg, mask, write) \
do  while (0)
static int igb_reg_test(struct igb_adapter *adapter, u64 *data)
static int igb_eeprom_test(struct igb_adapter *adapter, u64 *data)
static irqreturn_t igb_test_intr(int irq, void *data)
static int igb_intr_test(struct igb_adapter *adapter, u64 *data)
static void igb_free_desc_rings(struct igb_adapter *adapter)
static int igb_setup_desc_rings(struct igb_adapter *adapter)
static void igb_phy_disable_receiver(struct igb_adapter *adapter)
static int igb_integrated_phy_loopback(struct igb_adapter *adapter)
static int igb_set_phy_loopback(struct igb_adapter *adapter)
static int igb_setup_loopback_test(struct igb_adapter *adapter)
static void igb_loopback_cleanup(struct igb_adapter *adapter)
static void igb_create_lbtest_frame(struct sk_buff *skb,
unsigned int frame_size)
static int igb_check_lbtest_frame(struct sk_buff *skb, unsigned int frame_size)
static int igb_clean_test_rings(struct igb_ring *rx_ring,
struct igb_ring *tx_ring,
unsigned int size)
static int igb_run_loopback_test(struct igb_adapter *adapter)
static int igb_loopback_test(struct igb_adapter *adapter, u64 *data)
static int igb_link_test(struct igb_adapter *adapter, u64 *data)
static void igb_diag_test(struct net_device *netdev,
struct ethtool_test *eth_test, u64 *data)
static int igb_wol_exclusion(struct igb_adapter *adapter,
struct ethtool_wolinfo *wol)
static void igb_get_wol(struct net_device *netdev, struct ethtool_wolinfo *wol)
static int igb_set_wol(struct net_device *netdev, struct ethtool_wolinfo *wol)
#define IGB_LED_ON		0
static int igb_set_phys_id(struct net_device *netdev,
enum ethtool_phys_id_state state)
static int igb_set_coalesce(struct net_device *netdev,
struct ethtool_coalesce *ec)
static int igb_get_coalesce(struct net_device *netdev,
struct ethtool_coalesce *ec)
static int igb_nway_reset(struct net_device *netdev)
static int igb_get_sset_count(struct net_device *netdev, int sset)
static void igb_get_ethtool_stats(struct net_device *netdev,
struct ethtool_stats *stats, u64 *data)
static void igb_get_strings(struct net_device *netdev, u32 stringset, u8 *data)
static const struct ethtool_ops igb_ethtool_ops = ;
void igb_set_ethtool_ops(struct net_device *netdev)
