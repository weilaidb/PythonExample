#define RTL821x_PHYSR		0x11
#define RTL821x_PHYSR_DUPLEX	0x2000
#define RTL821x_PHYSR_SPEED	0xc000
#define RTL821x_INER		0x12
#define RTL821x_INER_INIT	0x6400
#define RTL821x_INSR		0x13
MODULE_DESCRIPTION("Realtek PHY driver");
MODULE_AUTHOR("Johnson Leung");
MODULE_LICENSE("GPL");
static int rtl821x_ack_interrupt(struct phy_device *phydev)
static int rtl821x_config_intr(struct phy_device *phydev)
static struct phy_driver rtl821x_driver = ;
static int __init realtek_init(void)
static void __exit realtek_exit(void)
module_init(realtek_init);
module_exit(realtek_exit);
static struct mdio_device_id __maybe_unused realtek_tbl[] = ;
MODULE_DEVICE_TABLE(mdio, realtek_tbl);
