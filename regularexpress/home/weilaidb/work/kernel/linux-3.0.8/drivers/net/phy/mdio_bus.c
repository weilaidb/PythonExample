struct mii_bus *mdiobus_alloc(void)
EXPORT_SYMBOL(mdiobus_alloc);
static void mdiobus_release(struct device *d)
static struct class mdio_bus_class = ;
int mdiobus_register(struct mii_bus *bus)
EXPORT_SYMBOL(mdiobus_register);
void mdiobus_unregister(struct mii_bus *bus)
EXPORT_SYMBOL(mdiobus_unregister);
void mdiobus_free(struct mii_bus *bus)
EXPORT_SYMBOL(mdiobus_free);
struct phy_device *mdiobus_scan(struct mii_bus *bus, int addr)
EXPORT_SYMBOL(mdiobus_scan);
int mdiobus_read(struct mii_bus *bus, int addr, u32 regnum)
EXPORT_SYMBOL(mdiobus_read);
int mdiobus_write(struct mii_bus *bus, int addr, u32 regnum, u16 val)
EXPORT_SYMBOL(mdiobus_write);
static int mdio_bus_match(struct device *dev, struct device_driver *drv)
static bool mdio_bus_phy_may_suspend(struct phy_device *phydev)
static int mdio_bus_suspend(struct device *dev)
static int mdio_bus_resume(struct device *dev)
static int mdio_bus_restore(struct device *dev)
static struct dev_pm_ops mdio_bus_pm_ops = ;
#define MDIO_BUS_PM_OPS (&mdio_bus_pm_ops)
#define MDIO_BUS_PM_OPS NULL
struct bus_type mdio_bus_type = ;
EXPORT_SYMBOL(mdio_bus_type);
int __init mdio_bus_init(void)
void mdio_bus_exit(void)
