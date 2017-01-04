#define BRCM_PHY_MODEL(phydev) \
((phydev)->drv->phy_id & (phydev)->drv->phy_id_mask)
#define BRCM_PHY_REV(phydev) \
((phydev)->drv->phy_id & ~((phydev)->drv->phy_id_mask))
#define MII_BCM54XX_ECR		0x10
#define MII_BCM54XX_ECR_IM	0x1000
#define MII_BCM54XX_ECR_IF	0x0800
#define MII_BCM54XX_ESR		0x11
#define MII_BCM54XX_ESR_IS	0x1000
#define MII_BCM54XX_EXP_DATA	0x15
#define MII_BCM54XX_EXP_SEL	0x17
#define MII_BCM54XX_EXP_SEL_SSD	0x0e00
#define MII_BCM54XX_EXP_SEL_ER	0x0f00
#define MII_BCM54XX_AUX_CTL	0x18
#define MII_BCM54XX_ISR		0x1a
#define MII_BCM54XX_IMR		0x1b
#define MII_BCM54XX_INT_CRCERR	0x0001
#define MII_BCM54XX_INT_LINK	0x0002
#define MII_BCM54XX_INT_SPEED	0x0004
#define MII_BCM54XX_INT_DUPLEX	0x0008
#define MII_BCM54XX_INT_LRS	0x0010
#define MII_BCM54XX_INT_RRS	0x0020
#define MII_BCM54XX_INT_SSERR	0x0040
#define MII_BCM54XX_INT_UHCD	0x0080
#define MII_BCM54XX_INT_NHCD	0x0100
#define MII_BCM54XX_INT_NHCDL	0x0200
#define MII_BCM54XX_INT_ANPR	0x0400
#define MII_BCM54XX_INT_LC	0x0800
#define MII_BCM54XX_INT_HC	0x1000
#define MII_BCM54XX_INT_MDIX	0x2000
#define MII_BCM54XX_INT_PSERR	0x4000
#define MII_BCM54XX_SHD		0x1c
#define MII_BCM54XX_SHD_WRITE	0x8000
#define MII_BCM54XX_SHD_VAL(x)	((x & 0x1f) << 10)
#define MII_BCM54XX_SHD_DATA(x)	((x & 0x3ff) << 0)
#define MII_BCM54XX_AUXCTL_SHDWSEL_AUXCTL	0x0000
#define MII_BCM54XX_AUXCTL_ACTL_TX_6DB		0x0400
#define MII_BCM54XX_AUXCTL_ACTL_SMDSP_ENA	0x0800
#define MII_BCM54XX_AUXCTL_MISC_WREN	0x8000
#define MII_BCM54XX_AUXCTL_MISC_FORCE_AMDIX	0x0200
#define MII_BCM54XX_AUXCTL_MISC_RDSEL_MISC	0x7000
#define MII_BCM54XX_AUXCTL_SHDWSEL_MISC	0x0007
#define MII_BCM54XX_AUXCTL_SHDWSEL_AUXCTL	0x0000
#define BCM_LED_SRC_LINKSPD1	0x0
#define BCM_LED_SRC_LINKSPD2	0x1
#define BCM_LED_SRC_XMITLED	0x2
#define BCM_LED_SRC_ACTIVITYLED	0x3
#define BCM_LED_SRC_FDXLED	0x4
#define BCM_LED_SRC_SLAVE	0x5
#define BCM_LED_SRC_INTR	0x6
#define BCM_LED_SRC_QUALITY	0x7
#define BCM_LED_SRC_RCVLED	0x8
#define BCM_LED_SRC_MULTICOLOR1	0xa
#define BCM_LED_SRC_OPENSHORT	0xb
#define BCM_LED_SRC_OFF		0xe
#define BCM_LED_SRC_ON		0xf
#define BCM54XX_SHD_SCR3		0x05
#define  BCM54XX_SHD_SCR3_DEF_CLK125	0x0001
#define  BCM54XX_SHD_SCR3_DLLAPD_DIS	0x0002
#define  BCM54XX_SHD_SCR3_TRDDAPD	0x0004
#define BCM54XX_SHD_APD			0x0a
#define  BCM54XX_SHD_APD_EN		0x0020
#define BCM5482_SHD_LEDS1	0x0d
#define BCM5482_SHD_LEDS1_LED3(src)	((src & 0xf) << 4)
#define BCM5482_SHD_LEDS1_LED1(src)	((src & 0xf) << 0)
#define BCM54XX_SHD_RGMII_MODE	0x0b
#define BCM5482_SHD_SSD		0x14
#define BCM5482_SHD_SSD_LEDM	0x0008
#define BCM5482_SHD_SSD_EN	0x0001
#define BCM5482_SHD_MODE	0x1f
#define BCM5482_SHD_MODE_1000BX	0x0001
#define MII_BCM54XX_EXP_AADJ1CH0		0x001f
#define  MII_BCM54XX_EXP_AADJ1CH0_SWP_ABCD_OEN	0x0200
#define  MII_BCM54XX_EXP_AADJ1CH0_SWSEL_THPF	0x0100
#define MII_BCM54XX_EXP_AADJ1CH3		0x601f
#define  MII_BCM54XX_EXP_AADJ1CH3_ADCCKADJ	0x0002
#define MII_BCM54XX_EXP_EXP08			0x0F08
#define  MII_BCM54XX_EXP_EXP08_RJCT_2MHZ	0x0001
#define  MII_BCM54XX_EXP_EXP08_EARLY_DAC_WAKE	0x0200
#define MII_BCM54XX_EXP_EXP75			0x0f75
#define  MII_BCM54XX_EXP_EXP75_VDACCTRL		0x003c
#define  MII_BCM54XX_EXP_EXP75_CM_OSC		0x0001
#define MII_BCM54XX_EXP_EXP96			0x0f96
#define  MII_BCM54XX_EXP_EXP96_MYST		0x0010
#define MII_BCM54XX_EXP_EXP97			0x0f97
#define  MII_BCM54XX_EXP_EXP97_MYST		0x0c0c
#define BCM5482_SSD_1000BX_CTL		0x00
#define BCM5482_SSD_1000BX_CTL_PWRDOWN	0x0800
#define BCM5482_SSD_SGMII_SLAVE		0x15
#define BCM5482_SSD_SGMII_SLAVE_EN	0x0002
#define BCM5482_SSD_SGMII_SLAVE_AD	0x0001
#define MII_BRCM_FET_INTREG		0x1a
#define MII_BRCM_FET_IR_MASK		0x0100
#define MII_BRCM_FET_IR_LINK_EN		0x0200
#define MII_BRCM_FET_IR_SPEED_EN	0x0400
#define MII_BRCM_FET_IR_DUPLEX_EN	0x0800
#define MII_BRCM_FET_IR_ENABLE		0x4000
#define MII_BRCM_FET_BRCMTEST		0x1f
#define MII_BRCM_FET_BT_SRE		0x0080
#define MII_BRCM_FET_SHDW_MISCCTRL	0x10
#define MII_BRCM_FET_SHDW_MC_FAME	0x4000
#define MII_BRCM_FET_SHDW_AUXMODE4	0x1a
#define MII_BRCM_FET_SHDW_AM4_LED_MASK	0x0003
#define MII_BRCM_FET_SHDW_AM4_LED_MODE1 0x0001
#define MII_BRCM_FET_SHDW_AUXSTAT2	0x1b
#define MII_BRCM_FET_SHDW_AS2_APDE	0x0020
MODULE_DESCRIPTION("Broadcom PHY driver");
MODULE_AUTHOR("Maciej W. Rozycki");
MODULE_LICENSE("GPL");
static int bcm54xx_shadow_read(struct phy_device *phydev, u16 shadow)
static int bcm54xx_shadow_write(struct phy_device *phydev, u16 shadow, u16 val)
static int bcm54xx_exp_read(struct phy_device *phydev, u16 regnum)
static int bcm54xx_exp_write(struct phy_device *phydev, u16 regnum, u16 val)
static int bcm54xx_auxctl_write(struct phy_device *phydev, u16 regnum, u16 val)
static int bcm50610_a0_workaround(struct phy_device *phydev)
static int bcm54xx_phydsp_config(struct phy_device *phydev)
static void bcm54xx_adjust_rxrefclk(struct phy_device *phydev)
static int bcm54xx_config_init(struct phy_device *phydev)
static int bcm5482_config_init(struct phy_device *phydev)
static int bcm5482_read_status(struct phy_device *phydev)
static int bcm54xx_ack_interrupt(struct phy_device *phydev)
static int bcm54xx_config_intr(struct phy_device *phydev)
static int bcm5481_config_aneg(struct phy_device *phydev)
static int brcm_phy_setbits(struct phy_device *phydev, int reg, int set)
static int brcm_fet_config_init(struct phy_device *phydev)
static int brcm_fet_ack_interrupt(struct phy_device *phydev)
static int brcm_fet_config_intr(struct phy_device *phydev)
static struct phy_driver bcm5411_driver = ;
static struct phy_driver bcm5421_driver = ;
static struct phy_driver bcm5461_driver = ;
static struct phy_driver bcm5464_driver = ;
static struct phy_driver bcm5481_driver = ;
static struct phy_driver bcm5482_driver = ;
static struct phy_driver bcm50610_driver = ;
static struct phy_driver bcm50610m_driver = ;
static struct phy_driver bcm57780_driver = ;
static struct phy_driver bcmac131_driver = ;
static struct phy_driver bcm5241_driver = ;
static int __init broadcom_init(void)
static void __exit broadcom_exit(void)
module_init(broadcom_init);
module_exit(broadcom_exit);
static struct mdio_device_id __maybe_unused broadcom_tbl[] = ;
MODULE_DEVICE_TABLE(mdio, broadcom_tbl);
