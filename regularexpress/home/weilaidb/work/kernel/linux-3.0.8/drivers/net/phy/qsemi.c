#define MII_QS6612_MCR		17
#define MII_QS6612_FTR		27
#define MII_QS6612_MCO		28
#define MII_QS6612_ISR		29
#define MII_QS6612_IMR		30
#define MII_QS6612_IMR_INIT	0x003a
#define MII_QS6612_PCR		31
#define QS6612_PCR_AN_COMPLETE	0x1000
#define QS6612_PCR_RLBEN	0x0200
#define QS6612_PCR_DCREN	0x0100
#define QS6612_PCR_4B5BEN	0x0040
#define QS6612_PCR_TX_ISOLATE	0x0020
#define QS6612_PCR_MLT3_DIS	0x0002
#define QS6612_PCR_SCRM_DESCRM	0x0001
MODULE_DESCRIPTION("Quality Semiconductor PHY driver");
MODULE_AUTHOR("Andy Fleming");
MODULE_LICENSE("GPL");
static int qs6612_config_init(struct phy_device *phydev)
static int qs6612_ack_interrupt(struct phy_device *phydev)
static int qs6612_config_intr(struct phy_device *phydev)
static struct phy_driver qs6612_driver = ;
static int __init qs6612_init(void)
static void __exit qs6612_exit(void)
module_init(qs6612_init);
module_exit(qs6612_exit);
static struct mdio_device_id __maybe_unused qs6612_tbl[] = ;
MODULE_DEVICE_TABLE(mdio, qs6612_tbl);
