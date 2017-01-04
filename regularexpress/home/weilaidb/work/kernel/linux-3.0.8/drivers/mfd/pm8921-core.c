#define pr_fmt(fmt) "%s: " fmt, __func__
#define REG_HWREV		0x002
#define REG_HWREV_2		0x0E8
struct pm8921 ;
static int pm8921_readb(const struct device *dev, u16 addr, u8 *val)
static int pm8921_writeb(const struct device *dev, u16 addr, u8 val)
static int pm8921_read_buf(const struct device *dev, u16 addr, u8 *buf,
int cnt)
static int pm8921_write_buf(const struct device *dev, u16 addr, u8 *buf,
int cnt)
static int pm8921_read_irq_stat(const struct device *dev, int irq)
static struct pm8xxx_drvdata pm8921_drvdata = ;
static int __devinit pm8921_add_subdevices(const struct pm8921_platform_data
*pdata,
struct pm8921 *pmic,
u32 rev)
static int __devinit pm8921_probe(struct platform_device *pdev)
static int __devexit pm8921_remove(struct platform_device *pdev)
static struct platform_driver pm8921_driver = ;
static int __init pm8921_init(void)
subsys_initcall(pm8921_init);
static void __exit pm8921_exit(void)
module_exit(pm8921_exit);
MODULE_LICENSE("GPL v2");
MODULE_DESCRIPTION("PMIC 8921 core driver");
MODULE_VERSION("1.0");
MODULE_ALIAS("platform:pm8921-core");
