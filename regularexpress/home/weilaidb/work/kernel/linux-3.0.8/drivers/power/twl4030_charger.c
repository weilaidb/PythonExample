#define TWL4030_BCIMSTATEC	0x02
#define TWL4030_BCIICHG		0x08
#define TWL4030_BCIVAC		0x0a
#define TWL4030_BCIVBUS		0x0c
#define TWL4030_BCIMFSTS4	0x10
#define TWL4030_BCICTL1		0x23
#define TWL4030_BCIAUTOWEN	BIT(5)
#define TWL4030_CONFIG_DONE	BIT(4)
#define TWL4030_BCIAUTOUSB	BIT(1)
#define TWL4030_BCIAUTOAC	BIT(0)
#define TWL4030_CGAIN		BIT(5)
#define TWL4030_USBFASTMCHG	BIT(2)
#define TWL4030_STS_VBUS	BIT(7)
#define TWL4030_STS_USB_ID	BIT(2)
#define TWL4030_WOVF		BIT(0)
#define TWL4030_TMOVF		BIT(1)
#define TWL4030_ICHGHIGH	BIT(2)
#define TWL4030_ICHGLOW		BIT(3)
#define TWL4030_ICHGEOC		BIT(4)
#define TWL4030_TBATOR2		BIT(5)
#define TWL4030_TBATOR1		BIT(6)
#define TWL4030_BATSTS		BIT(7)
#define TWL4030_VBATLVL		BIT(0)
#define TWL4030_VBATOV		BIT(1)
#define TWL4030_VBUSOV		BIT(2)
#define TWL4030_ACCHGOV		BIT(3)
#define TWL4030_MSTATEC_USB		BIT(4)
#define TWL4030_MSTATEC_AC		BIT(5)
#define TWL4030_MSTATEC_MASK		0x0f
#define TWL4030_MSTATEC_QUICK1		0x02
#define TWL4030_MSTATEC_QUICK7		0x07
#define TWL4030_MSTATEC_COMPLETE1	0x0b
#define TWL4030_MSTATEC_COMPLETE4	0x0e
static bool allow_usb;
module_param(allow_usb, bool, 1);
MODULE_PARM_DESC(allow_usb, "Allow USB charge drawing default current");
struct twl4030_bci ;
static int twl4030_clear_set(u8 mod_no, u8 clear, u8 set, u8 reg)
static int twl4030_bci_read(u8 reg, u8 *val)
static int twl4030_clear_set_boot_bci(u8 clear, u8 set)
static int twl4030bci_read_adc_val(u8 reg)
static int twl4030_bci_have_vbus(struct twl4030_bci *bci)
static int twl4030_charger_enable_usb(struct twl4030_bci *bci, bool enable)
static int twl4030_charger_enable_ac(bool enable)
static irqreturn_t twl4030_charger_interrupt(int irq, void *arg)
static irqreturn_t twl4030_bci_interrupt(int irq, void *arg)
static void twl4030_bci_usb_work(struct work_struct *data)
static int twl4030_bci_usb_ncb(struct notifier_block *nb, unsigned long val,
void *priv)
static int twl4030_charger_get_current(void)
static int twl4030bci_state(struct twl4030_bci *bci)
static int twl4030_bci_state_to_status(int state)
static int twl4030_bci_get_property(struct power_supply *psy,
enum power_supply_property psp,
union power_supply_propval *val)
static enum power_supply_property twl4030_charger_props[] = ;
static int __init twl4030_bci_probe(struct platform_device *pdev)
static int __exit twl4030_bci_remove(struct platform_device *pdev)
static struct platform_driver twl4030_bci_driver = ;
static int __init twl4030_bci_init(void)
module_init(twl4030_bci_init);
static void __exit twl4030_bci_exit(void)
module_exit(twl4030_bci_exit);
MODULE_AUTHOR("Gražydas Ignotas");
MODULE_DESCRIPTION("TWL4030 Battery Charger Interface driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:twl4030_bci");
