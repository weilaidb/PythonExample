static int atl1e_get_settings(struct net_device *netdev,
struct ethtool_cmd *ecmd)
static int atl1e_set_settings(struct net_device *netdev,
struct ethtool_cmd *ecmd)
static u32 atl1e_get_msglevel(struct net_device *netdev)
static int atl1e_get_regs_len(struct net_device *netdev)
static void atl1e_get_regs(struct net_device *netdev,
struct ethtool_regs *regs, void *p)
static int atl1e_get_eeprom_len(struct net_device *netdev)
static int atl1e_get_eeprom(struct net_device *netdev,
struct ethtool_eeprom *eeprom, u8 *bytes)
static int atl1e_set_eeprom(struct net_device *netdev,
struct ethtool_eeprom *eeprom, u8 *bytes)
static void atl1e_get_drvinfo(struct net_device *netdev,
struct ethtool_drvinfo *drvinfo)
static void atl1e_get_wol(struct net_device *netdev,
struct ethtool_wolinfo *wol)
static int atl1e_set_wol(struct net_device *netdev, struct ethtool_wolinfo *wol)
static int atl1e_nway_reset(struct net_device *netdev)
static const struct ethtool_ops atl1e_ethtool_ops = ;
void atl1e_set_ethtool_ops(struct net_device *netdev)
