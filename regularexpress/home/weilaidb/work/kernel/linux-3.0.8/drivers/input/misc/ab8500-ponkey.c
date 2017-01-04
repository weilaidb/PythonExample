struct ab8500_ponkey ;
static irqreturn_t ab8500_ponkey_handler(int irq, void *data)
static int __devinit ab8500_ponkey_probe(struct platform_device *pdev)
static int __devexit ab8500_ponkey_remove(struct platform_device *pdev)
static struct platform_driver ab8500_ponkey_driver = ;
static int __init ab8500_ponkey_init(void)
module_init(ab8500_ponkey_init);
static void __exit ab8500_ponkey_exit(void)
module_exit(ab8500_ponkey_exit);
MODULE_LICENSE("GPL v2");
MODULE_AUTHOR("Sundar Iyer <sundar.iyer@stericsson.com>");
MODULE_DESCRIPTION("ST-Ericsson AB8500 Power-ON(Pon) Key driver");
