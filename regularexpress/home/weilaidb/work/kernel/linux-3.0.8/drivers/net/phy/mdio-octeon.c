#define DRV_VERSION "1.0"
#define DRV_DESCRIPTION "Cavium Networks Octeon SMI/MDIO driver"
struct octeon_mdiobus ;
static int octeon_mdiobus_read(struct mii_bus *bus, int phy_id, int regnum)
static int octeon_mdiobus_write(struct mii_bus *bus, int phy_id,
int regnum, u16 val)
static int __devinit octeon_mdiobus_probe(struct platform_device *pdev)
static int __devexit octeon_mdiobus_remove(struct platform_device *pdev)
static struct platform_driver octeon_mdiobus_driver = ;
void octeon_mdiobus_force_mod_depencency(void)
EXPORT_SYMBOL(octeon_mdiobus_force_mod_depencency);
static int __init octeon_mdiobus_mod_init(void)
static void __exit octeon_mdiobus_mod_exit(void)
module_init(octeon_mdiobus_mod_init);
module_exit(octeon_mdiobus_mod_exit);
MODULE_DESCRIPTION(DRV_DESCRIPTION);
MODULE_VERSION(DRV_VERSION);
MODULE_AUTHOR("David Daney");
MODULE_LICENSE("GPL");
