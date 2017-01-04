#define MII_BCM63XX_IR		0x1a
#define MII_BCM63XX_IR_EN	0x4000
#define MII_BCM63XX_IR_DUPLEX	0x0800
#define MII_BCM63XX_IR_SPEED	0x0400
#define MII_BCM63XX_IR_LINK	0x0200
#define MII_BCM63XX_IR_GMASK	0x0100
MODULE_DESCRIPTION("Broadcom 63xx internal PHY driver");
MODULE_AUTHOR("Maxime Bizon <mbizon@freebox.fr>");
MODULE_LICENSE("GPL");
static int bcm63xx_config_init(struct phy_device *phydev)
static int bcm63xx_ack_interrupt(struct phy_device *phydev)
static int bcm63xx_config_intr(struct phy_device *phydev)
static struct phy_driver bcm63xx_1_driver = ;
static struct phy_driver bcm63xx_2_driver = ;
static int __init bcm63xx_phy_init(void)
static void __exit bcm63xx_phy_exit(void)
module_init(bcm63xx_phy_init);
module_exit(bcm63xx_phy_exit);
static struct mdio_device_id __maybe_unused bcm63xx_tbl[] = ;
MODULE_DEVICE_TABLE(mdio, bcm63xx_tbl);
