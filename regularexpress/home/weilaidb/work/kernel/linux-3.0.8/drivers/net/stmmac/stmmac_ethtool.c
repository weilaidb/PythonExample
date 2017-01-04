#define REG_SPACE_SIZE	0x1054
#define MAC100_ETHTOOL_NAME	"st_mac100"
#define GMAC_ETHTOOL_NAME	"st_gmac"
struct stmmac_stats ;
#define STMMAC_STAT(m)	\
static const struct  stmmac_stats stmmac_gstrings_stats[] = ;
#define STMMAC_STATS_LEN ARRAY_SIZE(stmmac_gstrings_stats)
static void stmmac_ethtool_getdrvinfo(struct net_device *dev,
struct ethtool_drvinfo *info)
static int stmmac_ethtool_getsettings(struct net_device *dev,
struct ethtool_cmd *cmd)
static int stmmac_ethtool_setsettings(struct net_device *dev,
struct ethtool_cmd *cmd)
static u32 stmmac_ethtool_getmsglevel(struct net_device *dev)
static void stmmac_ethtool_setmsglevel(struct net_device *dev, u32 level)
static int stmmac_check_if_running(struct net_device *dev)
static int stmmac_ethtool_get_regs_len(struct net_device *dev)
static void stmmac_ethtool_gregs(struct net_device *dev,
struct ethtool_regs *regs, void *space)
static void
stmmac_get_pauseparam(struct net_device *netdev,
struct ethtool_pauseparam *pause)
static int
stmmac_set_pauseparam(struct net_device *netdev,
struct ethtool_pauseparam *pause)
static void stmmac_get_ethtool_stats(struct net_device *dev,
struct ethtool_stats *dummy, u64 *data)
static int stmmac_get_sset_count(struct net_device *netdev, int sset)
static void stmmac_get_strings(struct net_device *dev, u32 stringset, u8 *data)
static void stmmac_get_wol(struct net_device *dev, struct ethtool_wolinfo *wol)
static int stmmac_set_wol(struct net_device *dev, struct ethtool_wolinfo *wol)
static struct ethtool_ops stmmac_ethtool_ops = ;
void stmmac_set_ethtool_ops(struct net_device *netdev)
