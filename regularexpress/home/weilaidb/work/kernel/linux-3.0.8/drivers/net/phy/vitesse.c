#define MII_VSC8244_EXT_CON1           0x17
#define MII_VSC8244_EXTCON1_INIT       0x0000
#define MII_VSC8244_EXTCON1_TX_SKEW_MASK	0x0c00
#define MII_VSC8244_EXTCON1_RX_SKEW_MASK	0x0300
#define MII_VSC8244_EXTCON1_TX_SKEW	0x0800
#define MII_VSC8244_EXTCON1_RX_SKEW	0x0200
#define MII_VSC8244_IMASK		0x19
#define MII_VSC8244_IMASK_IEN		0x8000
#define MII_VSC8244_IMASK_SPEED		0x4000
#define MII_VSC8244_IMASK_LINK		0x2000
#define MII_VSC8244_IMASK_DUPLEX	0x1000
#define MII_VSC8244_IMASK_MASK		0xf000
#define MII_VSC8221_IMASK_MASK		0xa000
#define MII_VSC8244_ISTAT		0x1a
#define MII_VSC8244_ISTAT_STATUS	0x8000
#define MII_VSC8244_ISTAT_SPEED		0x4000
#define MII_VSC8244_ISTAT_LINK		0x2000
#define MII_VSC8244_ISTAT_DUPLEX	0x1000
#define MII_VSC8244_AUX_CONSTAT        	0x1c
#define MII_VSC8244_AUXCONSTAT_INIT    	0x0000
#define MII_VSC8244_AUXCONSTAT_DUPLEX  	0x0020
#define MII_VSC8244_AUXCONSTAT_SPEED   	0x0018
#define MII_VSC8244_AUXCONSTAT_GBIT    	0x0010
#define MII_VSC8244_AUXCONSTAT_100     	0x0008
#define MII_VSC8221_AUXCONSTAT_INIT	0x0004
#define MII_VSC8221_AUXCONSTAT_RESERVED	0x0004
#define PHY_ID_VSC8244			0x000fc6c0
#define PHY_ID_VSC8221			0x000fc550
MODULE_DESCRIPTION("Vitesse PHY driver");
MODULE_AUTHOR("Kriston Carson");
MODULE_LICENSE("GPL");
static int vsc824x_config_init(struct phy_device *phydev)
static int vsc824x_ack_interrupt(struct phy_device *phydev)
static int vsc82xx_config_intr(struct phy_device *phydev)
static struct phy_driver vsc8244_driver = ;
static int vsc8221_config_init(struct phy_device *phydev)
static struct phy_driver vsc8221_driver = ;
static int __init vsc82xx_init(void)
static void __exit vsc82xx_exit(void)
module_init(vsc82xx_init);
module_exit(vsc82xx_exit);
static struct mdio_device_id __maybe_unused vitesse_tbl[] = ;
MODULE_DEVICE_TABLE(mdio, vitesse_tbl);
