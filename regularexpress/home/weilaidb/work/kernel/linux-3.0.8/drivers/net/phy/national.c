#define DP83865_PHY_ID	0x20005c7a
#define DP83865_INT_MASK_REG 0x15
#define DP83865_INT_MASK_STATUS 0x14
#define DP83865_INT_REMOTE_FAULT 0x0008
#define DP83865_INT_ANE_COMPLETED 0x0010
#define DP83865_INT_LINK_CHANGE	0xe000
#define DP83865_INT_MASK_DEFAULT (DP83865_INT_REMOTE_FAULT | \
DP83865_INT_ANE_COMPLETED | \
DP83865_INT_LINK_CHANGE)
#define NS_EXP_MEM_CTL	0x16
#define NS_EXP_MEM_DATA	0x1d
#define NS_EXP_MEM_ADD	0x1e
#define LED_CTRL_REG 0x13
#define AN_FALLBACK_AN 0x0001
#define AN_FALLBACK_CRC 0x0002
#define AN_FALLBACK_IE 0x0004
#define ALL_FALLBACK_ON (AN_FALLBACK_AN |  AN_FALLBACK_CRC | AN_FALLBACK_IE)
enum hdx_loopback ;
static u8 ns_exp_read(struct phy_device *phydev, u16 reg)
static void ns_exp_write(struct phy_device *phydev, u16 reg, u8 data)
static int ns_config_intr(struct phy_device *phydev)
static int ns_ack_interrupt(struct phy_device *phydev)
static void ns_giga_speed_fallback(struct phy_device *phydev, int mode)
static void ns_10_base_t_hdx_loopack(struct phy_device *phydev, int disable)
static int ns_config_init(struct phy_device *phydev)
static struct phy_driver dp83865_driver = ;
static int __init ns_init(void)
static void __exit ns_exit(void)
MODULE_DESCRIPTION("NatSemi PHY driver");
MODULE_AUTHOR("Stuart Menefy");
MODULE_LICENSE("GPL");
module_init(ns_init);
module_exit(ns_exit);
static struct mdio_device_id __maybe_unused ns_tbl[] = ;
MODULE_DEVICE_TABLE(mdio, ns_tbl);
