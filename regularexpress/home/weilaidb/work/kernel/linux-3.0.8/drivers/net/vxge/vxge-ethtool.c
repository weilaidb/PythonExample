static int vxge_ethtool_sset(struct net_device *dev, struct ethtool_cmd *info)
static int vxge_ethtool_gset(struct net_device *dev, struct ethtool_cmd *info)
static void vxge_ethtool_gdrvinfo(struct net_device *dev,
struct ethtool_drvinfo *info)
static void vxge_ethtool_gregs(struct net_device *dev,
struct ethtool_regs *regs, void *space)
static int vxge_ethtool_idnic(struct net_device *dev,
enum ethtool_phys_id_state state)
static void vxge_ethtool_getpause_data(struct net_device *dev,
struct ethtool_pauseparam *ep)
static int vxge_ethtool_setpause_data(struct net_device *dev,
struct ethtool_pauseparam *ep)
static void vxge_get_ethtool_stats(struct net_device *dev,
struct ethtool_stats *estats, u64 *tmp_stats)
static void vxge_ethtool_get_strings(struct net_device *dev, u32 stringset,
u8 *data)
static int vxge_ethtool_get_regs_len(struct net_device *dev)
static int vxge_ethtool_get_sset_count(struct net_device *dev, int sset)
static int vxge_fw_flash(struct net_device *dev, struct ethtool_flash *parms)
static const struct ethtool_ops vxge_ethtool_ops = ;
void vxge_initialize_ethtool_ops(struct net_device *ndev)
