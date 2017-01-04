#define MII_KSZPHY_INTCS			0x1B
#define	KSZPHY_INTCS_JABBER			(1 << 15)
#define	KSZPHY_INTCS_RECEIVE_ERR		(1 << 14)
#define	KSZPHY_INTCS_PAGE_RECEIVE		(1 << 13)
#define	KSZPHY_INTCS_PARELLEL			(1 << 12)
#define	KSZPHY_INTCS_LINK_PARTNER_ACK		(1 << 11)
#define	KSZPHY_INTCS_LINK_DOWN			(1 << 10)
#define	KSZPHY_INTCS_REMOTE_FAULT		(1 << 9)
#define	KSZPHY_INTCS_LINK_UP			(1 << 8)
#define	KSZPHY_INTCS_ALL			(KSZPHY_INTCS_LINK_UP |\
KSZPHY_INTCS_LINK_DOWN)
#define	MII_KSZPHY_CTRL			0x1F
#define KSZPHY_CTRL_INT_ACTIVE_HIGH		(1 << 9)
#define KSZ9021_CTRL_INT_ACTIVE_HIGH		(1 << 14)
#define KS8737_CTRL_INT_ACTIVE_HIGH		(1 << 14)
#define KSZ8051_RMII_50MHZ_CLK			(1 << 7)
static int kszphy_ack_interrupt(struct phy_device *phydev)
static int kszphy_set_interrupt(struct phy_device *phydev)
static int kszphy_config_intr(struct phy_device *phydev)
static int ksz9021_config_intr(struct phy_device *phydev)
static int ks8737_config_intr(struct phy_device *phydev)
static int kszphy_config_init(struct phy_device *phydev)
static int ks8051_config_init(struct phy_device *phydev)
static struct phy_driver ks8737_driver = ;
static struct phy_driver ks8041_driver = ;
static struct phy_driver ks8051_driver = ;
static struct phy_driver ks8001_driver = ;
static struct phy_driver ksz9021_driver = ;
static int __init ksphy_init(void)
static void __exit ksphy_exit(void)
module_init(ksphy_init);
module_exit(ksphy_exit);
MODULE_DESCRIPTION("Micrel PHY driver");
MODULE_AUTHOR("David J. Choi");
MODULE_LICENSE("GPL");
static struct mdio_device_id __maybe_unused micrel_tbl[] = ;
MODULE_DEVICE_TABLE(mdio, micrel_tbl);
