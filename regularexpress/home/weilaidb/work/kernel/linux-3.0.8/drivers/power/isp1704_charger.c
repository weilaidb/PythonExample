#define ISP1704_PWR_CTRL		0x3d
#define ISP1704_PWR_CTRL_SWCTRL		(1 << 0)
#define ISP1704_PWR_CTRL_DET_COMP	(1 << 1)
#define ISP1704_PWR_CTRL_BVALID_RISE	(1 << 2)
#define ISP1704_PWR_CTRL_BVALID_FALL	(1 << 3)
#define ISP1704_PWR_CTRL_DP_WKPU_EN	(1 << 4)
#define ISP1704_PWR_CTRL_VDAT_DET	(1 << 5)
#define ISP1704_PWR_CTRL_DPVSRC_EN	(1 << 6)
#define ISP1704_PWR_CTRL_HWDETECT	(1 << 7)
#define NXP_VENDOR_ID			0x04cc
static u16 isp170x_id[] = ;
struct isp1704_charger ;
static void isp1704_charger_set_power(struct isp1704_charger *isp, bool on)
static inline int isp1704_charger_type(struct isp1704_charger *isp)
static inline int isp1704_charger_verify(struct isp1704_charger *isp)
static inline int isp1704_charger_detect(struct isp1704_charger *isp)
static void isp1704_charger_work(struct work_struct *data)
static int isp1704_notifier_call(struct notifier_block *nb,
unsigned long event, void *power)
static int isp1704_charger_get_property(struct power_supply *psy,
enum power_supply_property psp,
union power_supply_propval *val)
static enum power_supply_property power_props[] = ;
static inline int isp1704_test_ulpi(struct isp1704_charger *isp)
static int __devinit isp1704_charger_probe(struct platform_device *pdev)
static int __devexit isp1704_charger_remove(struct platform_device *pdev)
static struct platform_driver isp1704_charger_driver = ;
static int __init isp1704_charger_init(void)
module_init(isp1704_charger_init);
static void __exit isp1704_charger_exit(void)
module_exit(isp1704_charger_exit);
MODULE_ALIAS("platform:isp1704_charger");
MODULE_AUTHOR("Nokia Corporation");
MODULE_DESCRIPTION("ISP170x USB Charger driver");
MODULE_LICENSE("GPL");
