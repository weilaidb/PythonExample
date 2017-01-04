extern void gfar_start(struct net_device *dev);
extern int gfar_clean_rx_ring(struct gfar_priv_rx_q *rx_queue, int rx_work_limit);
#define GFAR_MAX_COAL_USECS 0xffff
#define GFAR_MAX_COAL_FRAMES 0xff
static void gfar_fill_stats(struct net_device *dev, struct ethtool_stats *dummy,
u64 * buf);
static void gfar_gstrings(struct net_device *dev, u32 stringset, u8 * buf);
static int gfar_gcoalesce(struct net_device *dev, struct ethtool_coalesce *cvals);
static int gfar_scoalesce(struct net_device *dev, struct ethtool_coalesce *cvals);
static void gfar_gringparam(struct net_device *dev, struct ethtool_ringparam *rvals);
static int gfar_sringparam(struct net_device *dev, struct ethtool_ringparam *rvals);
static void gfar_gdrvinfo(struct net_device *dev, struct ethtool_drvinfo *drvinfo);
static char stat_gstrings[][ETH_GSTRING_LEN] = ;
static void gfar_gstrings(struct net_device *dev, u32 stringset, u8 * buf)
static void gfar_fill_stats(struct net_device *dev, struct ethtool_stats *dummy, u64 * buf)
static int gfar_sset_count(struct net_device *dev, int sset)
static void gfar_gdrvinfo(struct net_device *dev, struct
ethtool_drvinfo *drvinfo)
static int gfar_ssettings(struct net_device *dev, struct ethtool_cmd *cmd)
static int gfar_gsettings(struct net_device *dev, struct ethtool_cmd *cmd)
static int gfar_reglen(struct net_device *dev)
static void gfar_get_regs(struct net_device *dev, struct ethtool_regs *regs, void *regbuf)
static unsigned int gfar_usecs2ticks(struct gfar_private *priv, unsigned int usecs)
static unsigned int gfar_ticks2usecs(struct gfar_private *priv, unsigned int ticks)
static int gfar_gcoalesce(struct net_device *dev, struct ethtool_coalesce *cvals)
static int gfar_scoalesce(struct net_device *dev, struct ethtool_coalesce *cvals)
static void gfar_gringparam(struct net_device *dev, struct ethtool_ringparam *rvals)
static int gfar_sringparam(struct net_device *dev, struct ethtool_ringparam *rvals)
int gfar_set_features(struct net_device *dev, u32 features)
static uint32_t gfar_get_msglevel(struct net_device *dev)
static void gfar_set_msglevel(struct net_device *dev, uint32_t data)
static void gfar_get_wol(struct net_device *dev, struct ethtool_wolinfo *wol)
static int gfar_set_wol(struct net_device *dev, struct ethtool_wolinfo *wol)
static void ethflow_to_filer_rules (struct gfar_private *priv, u64 ethflow)
static int gfar_ethflow_to_filer_table(struct gfar_private *priv, u64 ethflow, u64 class)
static int gfar_set_hash_opts(struct gfar_private *priv, struct ethtool_rxnfc *cmd)
static int gfar_set_nfc(struct net_device *dev, struct ethtool_rxnfc *cmd)
const struct ethtool_ops gfar_ethtool_ops = ;
