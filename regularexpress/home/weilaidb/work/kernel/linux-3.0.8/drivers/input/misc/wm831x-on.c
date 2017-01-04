struct wm831x_on ;
static void wm831x_poll_on(struct work_struct *work)
static irqreturn_t wm831x_on_irq(int irq, void *data)
static int __devinit wm831x_on_probe(struct platform_device *pdev)
static int __devexit wm831x_on_remove(struct platform_device *pdev)
static struct platform_driver wm831x_on_driver = ;
static int __init wm831x_on_init(void)
module_init(wm831x_on_init);
static void __exit wm831x_on_exit(void)
module_exit(wm831x_on_exit);
MODULE_ALIAS("platform:wm831x-on");
MODULE_DESCRIPTION("WM831x ON pin");
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Mark Brown <broonie@opensource.wolfsonmicro.com>");
