static void lbs_ethtool_get_drvinfo(struct net_device *dev,
struct ethtool_drvinfo *info)
#define LBS_EEPROM_LEN 16384
static int lbs_ethtool_get_eeprom_len(struct net_device *dev)
static int lbs_ethtool_get_eeprom(struct net_device *dev,
struct ethtool_eeprom *eeprom, u8 * bytes)
static void lbs_ethtool_get_wol(struct net_device *dev,
struct ethtool_wolinfo *wol)
static int lbs_ethtool_set_wol(struct net_device *dev,
struct ethtool_wolinfo *wol)
const struct ethtool_ops lbs_ethtool_ops = ;
