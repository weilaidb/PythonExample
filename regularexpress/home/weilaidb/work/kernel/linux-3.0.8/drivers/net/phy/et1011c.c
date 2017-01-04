#define ET1011C_STATUS_REG	(0x1A)
#define ET1011C_CONFIG_REG	(0x16)
#define ET1011C_SPEED_MASK		(0x0300)
#define ET1011C_GIGABIT_SPEED		(0x0200)
#define ET1011C_TX_FIFO_MASK		(0x3000)
#define ET1011C_TX_FIFO_DEPTH_8		(0x0000)
#define ET1011C_TX_FIFO_DEPTH_16	(0x1000)
#define ET1011C_INTERFACE_MASK		(0x0007)
#define ET1011C_GMII_INTERFACE		(0x0002)
#define ET1011C_SYS_CLK_EN		(0x01 << 4)
MODULE_DESCRIPTION("LSI ET1011C PHY driver");
MODULE_AUTHOR("Chaithrika U S");
MODULE_LICENSE("GPL");
static int et1011c_config_aneg(struct phy_device *phydev)
static int et1011c_read_status(struct phy_device *phydev)
static struct phy_driver et1011c_driver = ;
static int __init et1011c_init(void)
static void __exit et1011c_exit(void)
module_init(et1011c_init);
module_exit(et1011c_exit);
static struct mdio_device_id __maybe_unused et1011c_tbl[] = ;
MODULE_DEVICE_TABLE(mdio, et1011c_tbl);
