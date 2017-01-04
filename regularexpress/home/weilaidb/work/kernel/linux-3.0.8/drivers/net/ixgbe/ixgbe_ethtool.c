#define IXGBE_ALL_RAR_ENTRIES 16
enum ;
struct ixgbe_stats ;
#define IXGBE_STAT(m)		IXGBE_STATS, \
sizeof(((struct ixgbe_adapter *)0)->m), \
offsetof(struct ixgbe_adapter, m)
#define IXGBE_NETDEV_STAT(m)	NETDEV_STATS, \
sizeof(((struct rtnl_link_stats64 *)0)->m), \
offsetof(struct rtnl_link_stats64, m)
static struct ixgbe_stats ixgbe_gstrings_stats[] = ;
#define IXGBE_QUEUE_STATS_LEN \
((((struct ixgbe_adapter *)netdev_priv(netdev))->num_tx_queues + \
((struct ixgbe_adapter *)netdev_priv(netdev))->num_rx_queues) * \
(sizeof(struct ixgbe_queue_stats) / sizeof(u64)))
#define IXGBE_GLOBAL_STATS_LEN ARRAY_SIZE(ixgbe_gstrings_stats)
#define IXGBE_PB_STATS_LEN ( \
(((struct ixgbe_adapter *)netdev_priv(netdev))->flags & \
IXGBE_FLAG_DCB_ENABLED) ? \
(sizeof(((struct ixgbe_adapter *)0)->stats.pxonrxc) + \
sizeof(((struct ixgbe_adapter *)0)->stats.pxontxc) + \
sizeof(((struct ixgbe_adapter *)0)->stats.pxoffrxc) + \
sizeof(((struct ixgbe_adapter *)0)->stats.pxofftxc)) \
/ sizeof(u64) : 0)
#define IXGBE_STATS_LEN (IXGBE_GLOBAL_STATS_LEN + \
IXGBE_PB_STATS_LEN + \
IXGBE_QUEUE_STATS_LEN)
static const char ixgbe_gstrings_test[][ETH_GSTRING_LEN] = ;
#define IXGBE_TEST_LEN sizeof(ixgbe_gstrings_test) / ETH_GSTRING_LEN
static int ixgbe_get_settings(struct net_device *netdev,
struct ethtool_cmd *ecmd)
static int ixgbe_set_settings(struct net_device *netdev,
struct ethtool_cmd *ecmd)
static void ixgbe_get_pauseparam(struct net_device *netdev,
struct ethtool_pauseparam *pause)
static int ixgbe_set_pauseparam(struct net_device *netdev,
struct ethtool_pauseparam *pause)
static u32 ixgbe_get_rx_csum(struct net_device *netdev)
static int ixgbe_set_rx_csum(struct net_device *netdev, u32 data)
static u32 ixgbe_get_tx_csum(struct net_device *netdev)
static int ixgbe_set_tx_csum(struct net_device *netdev, u32 data)
static int ixgbe_set_tso(struct net_device *netdev, u32 data)
static u32 ixgbe_get_msglevel(struct net_device *netdev)
static void ixgbe_set_msglevel(struct net_device *netdev, u32 data)
static int ixgbe_get_regs_len(struct net_device *netdev)
#define IXGBE_GET_STAT(_A_, _R_) _A_->stats._R_
static void ixgbe_get_regs(struct net_device *netdev,
struct ethtool_regs *regs, void *p)
static int ixgbe_get_eeprom_len(struct net_device *netdev)
static int ixgbe_get_eeprom(struct net_device *netdev,
struct ethtool_eeprom *eeprom, u8 *bytes)
static void ixgbe_get_drvinfo(struct net_device *netdev,
struct ethtool_drvinfo *drvinfo)
static void ixgbe_get_ringparam(struct net_device *netdev,
struct ethtool_ringparam *ring)
static int ixgbe_set_ringparam(struct net_device *netdev,
struct ethtool_ringparam *ring)
static int ixgbe_get_sset_count(struct net_device *netdev, int sset)
static void ixgbe_get_ethtool_stats(struct net_device *netdev,
struct ethtool_stats *stats, u64 *data)
static void ixgbe_get_strings(struct net_device *netdev, u32 stringset,
u8 *data)
static int ixgbe_link_test(struct ixgbe_adapter *adapter, u64 *data)
struct ixgbe_reg_test ;
#define PATTERN_TEST	1
#define SET_READ_TEST	2
#define WRITE_NO_TEST	3
#define TABLE32_TEST	4
#define TABLE64_TEST_LO	5
#define TABLE64_TEST_HI	6
static const struct ixgbe_reg_test reg_test_82599[] = ;
static const struct ixgbe_reg_test reg_test_82598[] = ;
static bool reg_pattern_test(struct ixgbe_adapter *adapter, u64 *data, int reg,
u32 mask, u32 write)
static bool reg_set_and_check(struct ixgbe_adapter *adapter, u64 *data, int reg,
u32 mask, u32 write)
#define REG_PATTERN_TEST(reg, mask, write)				      \
do  while (0)							      \
#define REG_SET_AND_CHECK(reg, mask, write)				      \
do  while (0)							      \
static int ixgbe_reg_test(struct ixgbe_adapter *adapter, u64 *data)
static int ixgbe_eeprom_test(struct ixgbe_adapter *adapter, u64 *data)
static irqreturn_t ixgbe_test_intr(int irq, void *data)
static int ixgbe_intr_test(struct ixgbe_adapter *adapter, u64 *data)
static void ixgbe_free_desc_rings(struct ixgbe_adapter *adapter)
static int ixgbe_setup_desc_rings(struct ixgbe_adapter *adapter)
static int ixgbe_setup_loopback_test(struct ixgbe_adapter *adapter)
static void ixgbe_loopback_cleanup(struct ixgbe_adapter *adapter)
static void ixgbe_create_lbtest_frame(struct sk_buff *skb,
unsigned int frame_size)
static int ixgbe_check_lbtest_frame(struct sk_buff *skb,
unsigned int frame_size)
static u16 ixgbe_clean_test_rings(struct ixgbe_ring *rx_ring,
struct ixgbe_ring *tx_ring,
unsigned int size)
static int ixgbe_run_loopback_test(struct ixgbe_adapter *adapter)
static int ixgbe_loopback_test(struct ixgbe_adapter *adapter, u64 *data)
static void ixgbe_diag_test(struct net_device *netdev,
struct ethtool_test *eth_test, u64 *data)
static int ixgbe_wol_exclusion(struct ixgbe_adapter *adapter,
struct ethtool_wolinfo *wol)
static void ixgbe_get_wol(struct net_device *netdev,
struct ethtool_wolinfo *wol)
static int ixgbe_set_wol(struct net_device *netdev, struct ethtool_wolinfo *wol)
static int ixgbe_nway_reset(struct net_device *netdev)
static int ixgbe_set_phys_id(struct net_device *netdev,
enum ethtool_phys_id_state state)
static int ixgbe_get_coalesce(struct net_device *netdev,
struct ethtool_coalesce *ec)
static bool ixgbe_update_rsc(struct ixgbe_adapter *adapter,
struct ethtool_coalesce *ec)
static int ixgbe_set_coalesce(struct net_device *netdev,
struct ethtool_coalesce *ec)
static int ixgbe_set_flags(struct net_device *netdev, u32 data)
static int ixgbe_set_rx_ntuple(struct net_device *dev,
struct ethtool_rx_ntuple *cmd)
static const struct ethtool_ops ixgbe_ethtool_ops = ;
void ixgbe_set_ethtool_ops(struct net_device *netdev)
