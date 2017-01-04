#define PON_CNTL_1 0x1C
#define PON_CNTL_PULL_UP BIT(7)
#define PON_CNTL_TRIG_DELAY_MASK (0x7)
struct pmic8xxx_pwrkey ;
static irqreturn_t pwrkey_press_irq(int irq, void *_pwrkey)
static irqreturn_t pwrkey_release_irq(int irq, void *_pwrkey)
static int pmic8xxx_pwrkey_suspend(struct device *dev)
static int pmic8xxx_pwrkey_resume(struct device *dev)
static SIMPLE_DEV_PM_OPS(pm8xxx_pwr_key_pm_ops,
pmic8xxx_pwrkey_suspend, pmic8xxx_pwrkey_resume);
static int __devinit pmic8xxx_pwrkey_probe(struct platform_device *pdev)
static int __devexit pmic8xxx_pwrkey_remove(struct platform_device *pdev)
static struct platform_driver pmic8xxx_pwrkey_driver = ;
static int __init pmic8xxx_pwrkey_init(void)
module_init(pmic8xxx_pwrkey_init);
static void __exit pmic8xxx_pwrkey_exit(void)
module_exit(pmic8xxx_pwrkey_exit);
MODULE_ALIAS("platform:pmic8xxx_pwrkey");
MODULE_DESCRIPTION("PMIC8XXX Power Key driver");
MODULE_LICENSE("GPL v2");
MODULE_AUTHOR("Trilok Soni <tsoni@codeaurora.org>");
