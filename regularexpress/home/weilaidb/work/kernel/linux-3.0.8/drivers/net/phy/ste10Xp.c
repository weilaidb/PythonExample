#define MII_XCIIS   	0x11
#define MII_XIE     	0x12
#define MII_XIE_DEFAULT_MASK 0x0070
#define STE101P_PHY_ID		0x00061c50
#define STE100P_PHY_ID       	0x1c040011
static int ste10Xp_config_init(struct phy_device *phydev)
static int ste10Xp_config_intr(struct phy_device *phydev)
static int ste10Xp_ack_interrupt(struct phy_device *phydev)
static struct phy_driver ste101p_pdriver = ;
static struct phy_driver ste100p_pdriver = ;
static int __init ste10Xp_init(void)
static void __exit ste10Xp_exit(void)
module_init(ste10Xp_init);
module_exit(ste10Xp_exit);
static struct mdio_device_id __maybe_unused ste10Xp_tbl[] = ;
MODULE_DEVICE_TABLE(mdio, ste10Xp_tbl);
MODULE_DESCRIPTION("STMicroelectronics STe10Xp PHY driver");
MODULE_AUTHOR("Giuseppe Cavallaro <peppe.cavallaro@st.com>");
MODULE_LICENSE("GPL");
