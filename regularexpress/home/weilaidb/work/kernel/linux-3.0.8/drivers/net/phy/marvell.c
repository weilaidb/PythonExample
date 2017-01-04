#define MII_MARVELL_PHY_PAGE		22
#define MII_M1011_IEVENT		0x13
#define MII_M1011_IEVENT_CLEAR		0x0000
#define MII_M1011_IMASK			0x12
#define MII_M1011_IMASK_INIT		0x6400
#define MII_M1011_IMASK_CLEAR		0x0000
#define MII_M1011_PHY_SCR		0x10
#define MII_M1011_PHY_SCR_AUTO_CROSS	0x0060
#define MII_M1145_PHY_EXT_CR		0x14
#define MII_M1145_RGMII_RX_DELAY	0x0080
#define MII_M1145_RGMII_TX_DELAY	0x0002
#define MII_M1111_PHY_LED_CONTROL	0x18
#define MII_M1111_PHY_LED_DIRECT	0x4100
#define MII_M1111_PHY_LED_COMBINE	0x411c
#define MII_M1111_PHY_EXT_CR		0x14
#define MII_M1111_RX_DELAY		0x80
#define MII_M1111_TX_DELAY		0x2
#define MII_M1111_PHY_EXT_SR		0x1b
#define MII_M1111_HWCFG_MODE_MASK		0xf
#define MII_M1111_HWCFG_MODE_COPPER_RGMII	0xb
#define MII_M1111_HWCFG_MODE_FIBER_RGMII	0x3
#define MII_M1111_HWCFG_MODE_SGMII_NO_CLK	0x4
#define MII_M1111_HWCFG_MODE_COPPER_RTBI	0x9
#define MII_M1111_HWCFG_FIBER_COPPER_AUTO	0x8000
#define MII_M1111_HWCFG_FIBER_COPPER_RES	0x2000
#define MII_M1111_COPPER		0
#define MII_M1111_FIBER			1
#define MII_88E1121_PHY_MSCR_PAGE	2
#define MII_88E1121_PHY_MSCR_REG	21
#define MII_88E1121_PHY_MSCR_RX_DELAY	BIT(5)
#define MII_88E1121_PHY_MSCR_TX_DELAY	BIT(4)
#define MII_88E1121_PHY_MSCR_DELAY_MASK	(~(0x3 << 4))
#define MII_88E1318S_PHY_MSCR1_REG	16
#define MII_88E1318S_PHY_MSCR1_PAD_ODD	BIT(6)
#define MII_88E1121_PHY_LED_CTRL	16
#define MII_88E1121_PHY_LED_PAGE	3
#define MII_88E1121_PHY_LED_DEF		0x0030
#define MII_M1011_PHY_STATUS		0x11
#define MII_M1011_PHY_STATUS_1000	0x8000
#define MII_M1011_PHY_STATUS_100	0x4000
#define MII_M1011_PHY_STATUS_SPD_MASK	0xc000
#define MII_M1011_PHY_STATUS_FULLDUPLEX	0x2000
#define MII_M1011_PHY_STATUS_RESOLVED	0x0800
#define MII_M1011_PHY_STATUS_LINK	0x0400
MODULE_DESCRIPTION("Marvell PHY driver");
MODULE_AUTHOR("Andy Fleming");
MODULE_LICENSE("GPL");
static int marvell_ack_interrupt(struct phy_device *phydev)
static int marvell_config_intr(struct phy_device *phydev)
static int marvell_config_aneg(struct phy_device *phydev)
static int marvell_of_reg_init(struct phy_device *phydev)
static int marvell_of_reg_init(struct phy_device *phydev)
static int m88e1121_config_aneg(struct phy_device *phydev)
static int m88e1318_config_aneg(struct phy_device *phydev)
static int m88e1111_config_init(struct phy_device *phydev)
static int m88e1118_config_aneg(struct phy_device *phydev)
static int m88e1118_config_init(struct phy_device *phydev)
static int m88e1149_config_init(struct phy_device *phydev)
static int m88e1145_config_init(struct phy_device *phydev)
static int marvell_read_status(struct phy_device *phydev)
static int m88e1121_did_interrupt(struct phy_device *phydev)
static struct phy_driver marvell_drivers[] = ;
static int __init marvell_init(void)
static void __exit marvell_exit(void)
module_init(marvell_init);
module_exit(marvell_exit);
static struct mdio_device_id __maybe_unused marvell_tbl[] = ;
MODULE_DEVICE_TABLE(mdio, marvell_tbl);
