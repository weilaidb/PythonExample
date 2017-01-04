#define MII_LXT970_IER       17
#define MII_LXT970_IER_IEN	0x0002
#define MII_LXT970_ISR       18
#define MII_LXT970_CONFIG    19
#define MII_LXT971_IER		18
#define MII_LXT971_IER_IEN	0x00f2
#define MII_LXT971_ISR		19
#define MII_LXT973_PCR 16
#define PCR_FIBER_SELECT 1
MODULE_DESCRIPTION("Intel LXT PHY driver");
MODULE_AUTHOR("Andy Fleming");
MODULE_LICENSE("GPL");
static int lxt970_ack_interrupt(struct phy_device *phydev)
static int lxt970_config_intr(struct phy_device *phydev)
static int lxt970_config_init(struct phy_device *phydev)
static int lxt971_ack_interrupt(struct phy_device *phydev)
static int lxt971_config_intr(struct phy_device *phydev)
static int lxt973_probe(struct phy_device *phydev)
static int lxt973_config_aneg(struct phy_device *phydev)
static struct phy_driver lxt970_driver = ;
static struct phy_driver lxt971_driver = ;
static struct phy_driver lxt973_driver = ;
static int __init lxt_init(void)
static void __exit lxt_exit(void)
module_init(lxt_init);
module_exit(lxt_exit);
static struct mdio_device_id __maybe_unused lxt_tbl[] = ;
MODULE_DEVICE_TABLE(mdio, lxt_tbl);
