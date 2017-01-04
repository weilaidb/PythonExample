static int dsa_slave_phy_read(struct mii_bus *bus, int addr, int reg)
static int dsa_slave_phy_write(struct mii_bus *bus, int addr, int reg, u16 val)
void dsa_slave_mii_bus_init(struct dsa_switch *ds)
static int dsa_slave_init(struct net_device *dev)
static int dsa_slave_open(struct net_device *dev)
static int dsa_slave_close(struct net_device *dev)
static void dsa_slave_change_rx_flags(struct net_device *dev, int change)
static void dsa_slave_set_rx_mode(struct net_device *dev)
static int dsa_slave_set_mac_address(struct net_device *dev, void *a)
static int dsa_slave_ioctl(struct net_device *dev, struct ifreq *ifr, int cmd)
static int
dsa_slave_get_settings(struct net_device *dev, struct ethtool_cmd *cmd)
static int
dsa_slave_set_settings(struct net_device *dev, struct ethtool_cmd *cmd)
static void dsa_slave_get_drvinfo(struct net_device *dev,
struct ethtool_drvinfo *drvinfo)
static int dsa_slave_nway_reset(struct net_device *dev)
static u32 dsa_slave_get_link(struct net_device *dev)
static void dsa_slave_get_strings(struct net_device *dev,
uint32_t stringset, uint8_t *data)
static void dsa_slave_get_ethtool_stats(struct net_device *dev,
struct ethtool_stats *stats,
uint64_t *data)
static int dsa_slave_get_sset_count(struct net_device *dev, int sset)
static const struct ethtool_ops dsa_slave_ethtool_ops = ;
static const struct net_device_ops dsa_netdev_ops = ;
static const struct net_device_ops edsa_netdev_ops = ;
static const struct net_device_ops trailer_netdev_ops = ;
struct net_device *
dsa_slave_create(struct dsa_switch *ds, struct device *parent,
int port, char *name)
