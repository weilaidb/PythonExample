struct vmxnet3_stat_desc ;
static const struct vmxnet3_stat_desc
vmxnet3_tq_dev_stats[] = ;
static const struct vmxnet3_stat_desc
vmxnet3_tq_driver_stats[] = ;
static const struct vmxnet3_stat_desc
vmxnet3_rq_dev_stats[] = ;
static const struct vmxnet3_stat_desc
vmxnet3_rq_driver_stats[] = ;
static const struct vmxnet3_stat_desc
vmxnet3_global_stats[] = ;
struct net_device_stats *
vmxnet3_get_stats(struct net_device *netdev)
static int
vmxnet3_get_sset_count(struct net_device *netdev, int sset)
#define NUM_TX_REGS	8
#define NUM_RX_REGS	12
static int
vmxnet3_get_regs_len(struct net_device *netdev)
static void
vmxnet3_get_drvinfo(struct net_device *netdev, struct ethtool_drvinfo *drvinfo)
static void
vmxnet3_get_strings(struct net_device *netdev, u32 stringset, u8 *buf)
int vmxnet3_set_features(struct net_device *netdev, u32 features)
static void
vmxnet3_get_ethtool_stats(struct net_device *netdev,
struct ethtool_stats *stats, u64  *buf)
static void
vmxnet3_get_regs(struct net_device *netdev, struct ethtool_regs *regs, void *p)
static void
vmxnet3_get_wol(struct net_device *netdev, struct ethtool_wolinfo *wol)
static int
vmxnet3_set_wol(struct net_device *netdev, struct ethtool_wolinfo *wol)
static int
vmxnet3_get_settings(struct net_device *netdev, struct ethtool_cmd *ecmd)
static void
vmxnet3_get_ringparam(struct net_device *netdev,
struct ethtool_ringparam *param)
static int
vmxnet3_set_ringparam(struct net_device *netdev,
struct ethtool_ringparam *param)
static int
vmxnet3_get_rxnfc(struct net_device *netdev, struct ethtool_rxnfc *info,
void *rules)
static int
vmxnet3_get_rss_indir(struct net_device *netdev,
struct ethtool_rxfh_indir *p)
static int
vmxnet3_set_rss_indir(struct net_device *netdev,
const struct ethtool_rxfh_indir *p)
static struct ethtool_ops vmxnet3_ethtool_ops = ;
void vmxnet3_set_ethtool_ops(struct net_device *netdev)
