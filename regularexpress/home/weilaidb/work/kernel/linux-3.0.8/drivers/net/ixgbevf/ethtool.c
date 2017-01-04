#define IXGBE_ALL_RAR_ENTRIES 16
struct ixgbe_stats ;
#define IXGBEVF_STAT(m, b, r)  sizeof(((struct ixgbevf_adapter *)0)->m), \
offsetof(struct ixgbevf_adapter, m),         \
offsetof(struct ixgbevf_adapter, b),         \
offsetof(struct ixgbevf_adapter, r)
static struct ixgbe_stats ixgbe_gstrings_stats[] = ;
#define IXGBE_QUEUE_STATS_LEN 0
#define IXGBE_GLOBAL_STATS_LEN	ARRAY_SIZE(ixgbe_gstrings_stats)
#define IXGBEVF_STATS_LEN (IXGBE_GLOBAL_STATS_LEN + IXGBE_QUEUE_STATS_LEN)
static const char ixgbe_gstrings_test[][ETH_GSTRING_LEN] = ;
#define IXGBE_TEST_LEN (sizeof(ixgbe_gstrings_test) / ETH_GSTRING_LEN)
static int ixgbevf_get_settings(struct net_device *netdev,
struct ethtool_cmd *ecmd)
static u32 ixgbevf_get_rx_csum(struct net_device *netdev)
static int ixgbevf_set_rx_csum(struct net_device *netdev, u32 data)
static int ixgbevf_set_tso(struct net_device *netdev, u32 data)
static u32 ixgbevf_get_msglevel(struct net_device *netdev)
static void ixgbevf_set_msglevel(struct net_device *netdev, u32 data)
#define IXGBE_GET_STAT(_A_, _R_) (_A_->stats._R_)
static char *ixgbevf_reg_names[] = ;
static int ixgbevf_get_regs_len(struct net_device *netdev)
static void ixgbevf_get_regs(struct net_device *netdev,
struct ethtool_regs *regs,
void *p)
static void ixgbevf_get_drvinfo(struct net_device *netdev,
struct ethtool_drvinfo *drvinfo)
static void ixgbevf_get_ringparam(struct net_device *netdev,
struct ethtool_ringparam *ring)
static int ixgbevf_set_ringparam(struct net_device *netdev,
struct ethtool_ringparam *ring)
static int ixgbevf_get_sset_count(struct net_device *dev, int stringset)
static void ixgbevf_get_ethtool_stats(struct net_device *netdev,
struct ethtool_stats *stats, u64 *data)
static void ixgbevf_get_strings(struct net_device *netdev, u32 stringset,
u8 *data)
static int ixgbevf_link_test(struct ixgbevf_adapter *adapter, u64 *data)
struct ixgbevf_reg_test ;
#define PATTERN_TEST	1
#define SET_READ_TEST	2
#define WRITE_NO_TEST	3
#define TABLE32_TEST	4
#define TABLE64_TEST_LO	5
#define TABLE64_TEST_HI	6
static const struct ixgbevf_reg_test reg_test_vf[] = ;
static const u32 register_test_patterns[] = ;
#define REG_PATTERN_TEST(R, M, W)                                             \
#define REG_SET_AND_CHECK(R, M, W)                                            \
static int ixgbevf_reg_test(struct ixgbevf_adapter *adapter, u64 *data)
static void ixgbevf_diag_test(struct net_device *netdev,
struct ethtool_test *eth_test, u64 *data)
static int ixgbevf_nway_reset(struct net_device *netdev)
static struct ethtool_ops ixgbevf_ethtool_ops = ;
void ixgbevf_set_ethtool_ops(struct net_device *netdev)
