MODULE_AUTHOR("Grant Likely <grant.likely@secretlab.ca>");
MODULE_LICENSE("GPL");
int of_mdiobus_register(struct mii_bus *mdio, struct device_node *np)
EXPORT_SYMBOL(of_mdiobus_register);
static int of_phy_match(struct device *dev, void *phy_np)
struct phy_device *of_phy_find_device(struct device_node *phy_np)
EXPORT_SYMBOL(of_phy_find_device);
struct phy_device *of_phy_connect(struct net_device *dev,
struct device_node *phy_np,
void (*hndlr)(struct net_device *), u32 flags,
phy_interface_t iface)
EXPORT_SYMBOL(of_phy_connect);
struct phy_device *of_phy_connect_fixed_link(struct net_device *dev,
void (*hndlr)(struct net_device *),
phy_interface_t iface)
EXPORT_SYMBOL(of_phy_connect_fixed_link);
