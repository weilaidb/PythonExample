#define MDIO_TIMEOUT		100
#define PHY_REG_MASK		0x1f
#define PHY_ID_MASK		0x1f
#define DEF_OUT_FREQ		2200000
struct davinci_mdio_regs ;
struct mdio_platform_data default_pdata = ;
struct davinci_mdio_data ;
static void __davinci_mdio_reset(struct davinci_mdio_data *data)
static int davinci_mdio_reset(struct mii_bus *bus)
static inline int wait_for_user_access(struct davinci_mdio_data *data)
static inline int wait_for_idle(struct davinci_mdio_data *data)
static int davinci_mdio_read(struct mii_bus *bus, int phy_id, int phy_reg)
static int davinci_mdio_write(struct mii_bus *bus, int phy_id,
int phy_reg, u16 phy_data)
static int __devinit davinci_mdio_probe(struct platform_device *pdev)
static int __devexit davinci_mdio_remove(struct platform_device *pdev)
static int davinci_mdio_suspend(struct device *dev)
static int davinci_mdio_resume(struct device *dev)
static const struct dev_pm_ops davinci_mdio_pm_ops = ;
static struct platform_driver davinci_mdio_driver = ;
static int __init davinci_mdio_init(void)
device_initcall(davinci_mdio_init);
static void __exit davinci_mdio_exit(void)
module_exit(davinci_mdio_exit);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("DaVinci MDIO driver");
