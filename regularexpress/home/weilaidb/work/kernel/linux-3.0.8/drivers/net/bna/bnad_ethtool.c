#define BNAD_NUM_TXF_COUNTERS 12
#define BNAD_NUM_RXF_COUNTERS 10
#define BNAD_NUM_CQ_COUNTERS 3
#define BNAD_NUM_RXQ_COUNTERS 6
#define BNAD_NUM_TXQ_COUNTERS 5
#define BNAD_ETHTOOL_STATS_NUM						\
(sizeof(struct rtnl_link_stats64) / sizeof(u64) +	\
sizeof(struct bnad_drv_stats) / sizeof(u64) +		\
offsetof(struct bfi_ll_stats, rxf_stats[0]) / sizeof(u64))
static char *bnad_net_stats_strings[BNAD_ETHTOOL_STATS_NUM] = ;
static int
bnad_get_settings(struct net_device *netdev, struct ethtool_cmd *cmd)
static int
bnad_set_settings(struct net_device *netdev, struct ethtool_cmd *cmd)
static void
bnad_get_drvinfo(struct net_device *netdev, struct ethtool_drvinfo *drvinfo)
static int
get_regs(struct bnad *bnad, u32 * regs)
static int
bnad_get_regs_len(struct net_device *netdev)
static void
bnad_get_regs(struct net_device *netdev, struct ethtool_regs *regs, void *buf)
static void
bnad_get_wol(struct net_device *netdev, struct ethtool_wolinfo *wolinfo)
static int
bnad_get_coalesce(struct net_device *netdev, struct ethtool_coalesce *coalesce)
static int
bnad_set_coalesce(struct net_device *netdev, struct ethtool_coalesce *coalesce)
static void
bnad_get_ringparam(struct net_device *netdev,
struct ethtool_ringparam *ringparam)
static int
bnad_set_ringparam(struct net_device *netdev,
struct ethtool_ringparam *ringparam)
static void
bnad_get_pauseparam(struct net_device *netdev,
struct ethtool_pauseparam *pauseparam)
static int
bnad_set_pauseparam(struct net_device *netdev,
struct ethtool_pauseparam *pauseparam)
static void
bnad_get_strings(struct net_device *netdev, u32 stringset, u8 * string)
static int
bnad_get_stats_count_locked(struct net_device *netdev)
static int
bnad_per_q_stats_fill(struct bnad *bnad, u64 *buf, int bi)
static void
bnad_get_ethtool_stats(struct net_device *netdev, struct ethtool_stats *stats,
u64 *buf)
static int
bnad_get_sset_count(struct net_device *netdev, int sset)
static struct ethtool_ops bnad_ethtool_ops = ;
void
bnad_set_ethtool_ops(struct net_device *netdev)
