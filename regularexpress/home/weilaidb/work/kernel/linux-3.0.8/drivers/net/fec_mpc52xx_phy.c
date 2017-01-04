struct mpc52xx_fec_mdio_priv ;
static int mpc52xx_fec_mdio_transfer(struct mii_bus *bus, int phy_id,
int reg, u32 value)
static int mpc52xx_fec_mdio_read(struct mii_bus *bus, int phy_id, int reg)
static int mpc52xx_fec_mdio_write(struct mii_bus *bus, int phy_id, int reg,
u16 data)
static int mpc52xx_fec_mdio_probe(struct platform_device *of)
static int mpc52xx_fec_mdio_remove(struct platform_device *of)
static struct of_device_id mpc52xx_fec_mdio_match[] = ;
MODULE_DEVICE_TABLE(of, mpc52xx_fec_mdio_match);
struct platform_driver mpc52xx_fec_mdio_driver = ;
EXPORT_SYMBOL_GPL(mpc52xx_fec_mdio_driver);
MODULE_LICENSE("Dual BSD/GPL");
