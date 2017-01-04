static void gpio_mouse_scan(struct input_polled_dev *dev)
static int __devinit gpio_mouse_probe(struct platform_device *pdev)
static int __devexit gpio_mouse_remove(struct platform_device *pdev)
static struct platform_driver gpio_mouse_device_driver = ;
static int __init gpio_mouse_init(void)
module_init(gpio_mouse_init);
static void __exit gpio_mouse_exit(void)
module_exit(gpio_mouse_exit);
MODULE_AUTHOR("Hans-Christian Egtvedt <hcegtvedt@atmel.com>");
MODULE_DESCRIPTION("GPIO mouse driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:gpio_mouse");
