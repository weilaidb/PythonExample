static void
mlx4_en_get_drvinfo(struct net_device *dev, struct ethtool_drvinfo *drvinfo)
static const char main_strings[][ETH_GSTRING_LEN] = ;
#define NUM_MAIN_STATS	21
#define NUM_ALL_STATS	(NUM_MAIN_STATS + NUM_PORT_STATS + NUM_PKT_STATS + NUM_PERF_STATS)
static const char mlx4_en_test_names[][ETH_GSTRING_LEN]= ;
static u32 mlx4_en_get_msglevel(struct net_device *dev)
static void mlx4_en_set_msglevel(struct net_device *dev, u32 val)
static void mlx4_en_get_wol(struct net_device *netdev,
struct ethtool_wolinfo *wol)
static int mlx4_en_set_wol(struct net_device *netdev,
struct ethtool_wolinfo *wol)
static int mlx4_en_get_sset_count(struct net_device *dev, int sset)
static void mlx4_en_get_ethtool_stats(struct net_device *dev,
struct ethtool_stats *stats, uint64_t *data)
static void mlx4_en_self_test(struct net_device *dev,
struct ethtool_test *etest, u64 *buf)
static void mlx4_en_get_strings(struct net_device *dev,
uint32_t stringset, uint8_t *data)
static int mlx4_en_get_settings(struct net_device *dev, struct ethtool_cmd *cmd)
static int mlx4_en_set_settings(struct net_device *dev, struct ethtool_cmd *cmd)
static int mlx4_en_get_coalesce(struct net_device *dev,
struct ethtool_coalesce *coal)
static int mlx4_en_set_coalesce(struct net_device *dev,
struct ethtool_coalesce *coal)
static int mlx4_en_set_pauseparam(struct net_device *dev,
struct ethtool_pauseparam *pause)
static void mlx4_en_get_pauseparam(struct net_device *dev,
struct ethtool_pauseparam *pause)
static int mlx4_en_set_ringparam(struct net_device *dev,
struct ethtool_ringparam *param)
static void mlx4_en_get_ringparam(struct net_device *dev,
struct ethtool_ringparam *param)
const struct ethtool_ops mlx4_en_ethtool_ops = ;
