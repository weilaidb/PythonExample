#define MII_CIS8201_EXT_CON1           0x17
#define MII_CIS8201_EXTCON1_INIT       0x0000
#define MII_CIS8201_IMASK		0x19
#define MII_CIS8201_IMASK_IEN		0x8000
#define MII_CIS8201_IMASK_SPEED	0x4000
#define MII_CIS8201_IMASK_LINK		0x2000
#define MII_CIS8201_IMASK_DUPLEX	0x1000
#define MII_CIS8201_IMASK_MASK		0xf000
#define MII_CIS8201_ISTAT		0x1a
#define MII_CIS8201_ISTAT_STATUS	0x8000
#define MII_CIS8201_ISTAT_SPEED	0x4000
#define MII_CIS8201_ISTAT_LINK		0x2000
#define MII_CIS8201_ISTAT_DUPLEX	0x1000
#define MII_CIS8201_AUX_CONSTAT        0x1c
#define MII_CIS8201_AUXCONSTAT_INIT    0x0004
#define MII_CIS8201_AUXCONSTAT_DUPLEX  0x0020
#define MII_CIS8201_AUXCONSTAT_SPEED   0x0018
#define MII_CIS8201_AUXCONSTAT_GBIT    0x0010
#define MII_CIS8201_AUXCONSTAT_100     0x0008
MODULE_DESCRIPTION("Cicadia PHY driver");
MODULE_AUTHOR("Andy Fleming");
MODULE_LICENSE("GPL");
static int cis820x_config_init(struct phy_device *phydev)
static int cis820x_ack_interrupt(struct phy_device *phydev)
static int cis820x_config_intr(struct phy_device *phydev)
static struct phy_driver cis8201_driver = ;
static struct phy_driver cis8204_driver = ;
static int __init cicada_init(void)
static void __exit cicada_exit(void)
module_init(cicada_init);
module_exit(cicada_exit);
static struct mdio_device_id __maybe_unused cicada_tbl[] = ;
MODULE_DEVICE_TABLE(mdio, cicada_tbl);
