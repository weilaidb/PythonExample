static const char ql_gstrings_test[][ETH_GSTRING_LEN] = ;
#define QLGE_TEST_LEN (sizeof(ql_gstrings_test) / ETH_GSTRING_LEN)
static int ql_update_ring_coalescing(struct ql_adapter *qdev)
static void ql_update_stats(struct ql_adapter *qdev)
static char ql_stats_str_arr[][ETH_GSTRING_LEN] = ;
static void ql_get_strings(struct net_device *dev, u32 stringset, u8 *buf)
static int ql_get_sset_count(struct net_device *dev, int sset)
static void
ql_get_ethtool_stats(struct net_device *ndev,
struct ethtool_stats *stats, u64 *data)
static int ql_get_settings(struct net_device *ndev,
struct ethtool_cmd *ecmd)
static void ql_get_drvinfo(struct net_device *ndev,
struct ethtool_drvinfo *drvinfo)
static void ql_get_wol(struct net_device *ndev, struct ethtool_wolinfo *wol)
static int ql_set_wol(struct net_device *ndev, struct ethtool_wolinfo *wol)
static int ql_set_phys_id(struct net_device *ndev,
enum ethtool_phys_id_state state)
static int ql_start_loopback(struct ql_adapter *qdev)
static void ql_stop_loopback(struct ql_adapter *qdev)
static void ql_create_lb_frame(struct sk_buff *skb,
unsigned int frame_size)
void ql_check_lb_frame(struct ql_adapter *qdev,
struct sk_buff *skb)
static int ql_run_loopback_test(struct ql_adapter *qdev)
static int ql_loopback_test(struct ql_adapter *qdev, u64 *data)
static void ql_self_test(struct net_device *ndev,
struct ethtool_test *eth_test, u64 *data)
static int ql_get_regs_len(struct net_device *ndev)
static void ql_get_regs(struct net_device *ndev,
struct ethtool_regs *regs, void *p)
static int ql_get_coalesce(struct net_device *dev, struct ethtool_coalesce *c)
static int ql_set_coalesce(struct net_device *ndev, struct ethtool_coalesce *c)
static void ql_get_pauseparam(struct net_device *netdev,
struct ethtool_pauseparam *pause)
static int ql_set_pauseparam(struct net_device *netdev,
struct ethtool_pauseparam *pause)
static u32 ql_get_msglevel(struct net_device *ndev)
static void ql_set_msglevel(struct net_device *ndev, u32 value)
const struct ethtool_ops qlge_ethtool_ops = ;
