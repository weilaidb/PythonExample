#define MII_LAN83C185_ISF 29
#define MII_LAN83C185_IM  30
#define MII_LAN83C185_CTRL_STATUS 17
#define MII_LAN83C185_ISF_INT1 (1<<1)
#define MII_LAN83C185_ISF_INT2 (1<<2)
#define MII_LAN83C185_ISF_INT3 (1<<3)
#define MII_LAN83C185_ISF_INT4 (1<<4)
#define MII_LAN83C185_ISF_INT5 (1<<5)
#define MII_LAN83C185_ISF_INT6 (1<<6)
#define MII_LAN83C185_ISF_INT7 (1<<7)
#define MII_LAN83C185_ISF_INT_ALL (0x0e)
#define MII_LAN83C185_ISF_INT_PHYLIB_EVENTS \
(MII_LAN83C185_ISF_INT6 | MII_LAN83C185_ISF_INT4 | \
MII_LAN83C185_ISF_INT7)
#define MII_LAN83C185_EDPWRDOWN	(1 << 13)
static int smsc_phy_config_intr(struct phy_device *phydev)
static int smsc_phy_ack_interrupt(struct phy_device *phydev)
static int smsc_phy_config_init(struct phy_device *phydev)
static int lan911x_config_init(struct phy_device *phydev)
static struct phy_driver lan83c185_driver = ;
static struct phy_driver lan8187_driver = ;
static struct phy_driver lan8700_driver = ;
static struct phy_driver lan911x_int_driver = ;
static struct phy_driver lan8710_driver = ;
static int __init smsc_init(void)
static void __exit smsc_exit(void)
MODULE_DESCRIPTION("SMSC PHY driver");
MODULE_AUTHOR("Herbert Valerio Riedel");
MODULE_LICENSE("GPL");
module_init(smsc_init);
module_exit(smsc_exit);
static struct mdio_device_id __maybe_unused smsc_tbl[] = ;
MODULE_DEVICE_TABLE(mdio, smsc_tbl);
