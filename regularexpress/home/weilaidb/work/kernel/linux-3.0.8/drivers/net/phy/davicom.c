#define MII_DM9161_SCR		0x10
#define MII_DM9161_SCR_INIT	0x0610
#define MII_DM9161_SCR_RMII	0x0100
#define MII_DM9161_INTR	0x15
#define MII_DM9161_INTR_PEND		0x8000
#define MII_DM9161_INTR_DPLX_MASK	0x0800
#define MII_DM9161_INTR_SPD_MASK	0x0400
#define MII_DM9161_INTR_LINK_MASK	0x0200
#define MII_DM9161_INTR_MASK		0x0100
#define MII_DM9161_INTR_DPLX_CHANGE	0x0010
#define MII_DM9161_INTR_SPD_CHANGE	0x0008
#define MII_DM9161_INTR_LINK_CHANGE	0x0004
#define MII_DM9161_INTR_INIT 		0x0000
#define MII_DM9161_INTR_STOP	\
(MII_DM9161_INTR_DPLX_MASK | MII_DM9161_INTR_SPD_MASK \
| MII_DM9161_INTR_LINK_MASK | MII_DM9161_INTR_MASK)
#define MII_DM9161_10BTCSR	0x12
#define MII_DM9161_10BTCSR_INIT	0x7800
MODULE_DESCRIPTION("Davicom PHY driver");
MODULE_AUTHOR("Andy Fleming");
MODULE_LICENSE("GPL");
#define DM9161_DELAY 1
static int dm9161_config_intr(struct phy_device *phydev)
static int dm9161_config_aneg(struct phy_device *phydev)
static int dm9161_config_init(struct phy_device *phydev)
static int dm9161_ack_interrupt(struct phy_device *phydev)
static struct phy_driver dm9161e_driver = ;
static struct phy_driver dm9161a_driver = ;
static struct phy_driver dm9131_driver = ;
static int __init davicom_init(void)
static void __exit davicom_exit(void)
module_init(davicom_init);
module_exit(davicom_exit);
static struct mdio_device_id __maybe_unused davicom_tbl[] = ;
MODULE_DEVICE_TABLE(mdio, davicom_tbl);
