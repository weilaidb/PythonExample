#define PWR_PWRON_IRQ (1 << 0)
#define STS_HW_CONDITIONS 0xf
static irqreturn_t powerbutton_irq(int irq, void *_pwr)
static int __init twl4030_pwrbutton_probe(struct platform_device *pdev)
static int __exit twl4030_pwrbutton_remove(struct platform_device *pdev)
static struct platform_driver twl4030_pwrbutton_driver = ;
static int __init twl4030_pwrbutton_init(void)
module_init(twl4030_pwrbutton_init);
static void __exit twl4030_pwrbutton_exit(void)
module_exit(twl4030_pwrbutton_exit);
MODULE_ALIAS("platform:twl4030_pwrbutton");
MODULE_DESCRIPTION("Triton2 Power Button");
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Peter De Schrijver <peter.de-schrijver@nokia.com>");
MODULE_AUTHOR("Felipe Balbi <felipe.balbi@nokia.com>");
