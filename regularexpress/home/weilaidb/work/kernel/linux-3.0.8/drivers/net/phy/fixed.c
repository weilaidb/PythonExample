#define MII_REGS_NUM 29
struct fixed_mdio_bus ;
struct fixed_phy ;
static struct platform_device *pdev;
static struct fixed_mdio_bus platform_fmb = ;
static int fixed_phy_update_regs(struct fixed_phy *fp)
static int fixed_mdio_read(struct mii_bus *bus, int phy_id, int reg_num)
static int fixed_mdio_write(struct mii_bus *bus, int phy_id, int reg_num,
u16 val)
int fixed_phy_set_link_update(struct phy_device *phydev,
int (*link_update)(struct net_device *,
struct fixed_phy_status *))
EXPORT_SYMBOL_GPL(fixed_phy_set_link_update);
int fixed_phy_add(unsigned int irq, int phy_id,
struct fixed_phy_status *status)
EXPORT_SYMBOL_GPL(fixed_phy_add);
static int __init fixed_mdio_bus_init(void)
module_init(fixed_mdio_bus_init);
static void __exit fixed_mdio_bus_exit(void)
module_exit(fixed_mdio_bus_exit);
MODULE_DESCRIPTION("Fixed MDIO bus (MDIO bus emulation with fixed PHYs)");
MODULE_AUTHOR("Vitaly Bordug");
MODULE_LICENSE("GPL");
