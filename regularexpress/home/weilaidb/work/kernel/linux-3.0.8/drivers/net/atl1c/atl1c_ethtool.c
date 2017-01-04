static int atl1c_get_settings(struct net_device *netdev,
struct ethtool_cmd *ecmd)
static int atl1c_set_settings(struct net_device *netdev,
struct ethtool_cmd *ecmd)
static u32 atl1c_get_msglevel(struct net_device *netdev)
static void atl1c_set_msglevel(struct net_device *netdev, u32 data)
static int atl1c_get_regs_len(struct net_device *netdev)
static void atl1c_get_regs(struct net_device *netdev,
struct ethtool_regs *regs, void *p)
static int atl1c_get_eeprom_len(struct net_device *netdev)
static int atl1c_get_eeprom(struct net_device *netdev,
struct ethtool_eeprom *eeprom, u8 *bytes)
static void atl1c_get_drvinfo(struct net_device *netdev,
struct ethtool_drvinfo *drvinfo)
static void atl1c_get_wol(struct net_device *netdev,
struct ethtool_wolinfo *wol)
static int atl1c_set_wol(struct net_device *netdev, struct ethtool_wolinfo *wol)
static int atl1c_nway_reset(struct net_device *netdev)
static const struct ethtool_ops atl1c_ethtool_ops = ;
void atl1c_set_ethtool_ops(struct net_device *netdev)
