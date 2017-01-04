static void i2c_gpio_setsda_dir(void *data, int state)
static void i2c_gpio_setsda_val(void *data, int state)
static void i2c_gpio_setscl_dir(void *data, int state)
static void i2c_gpio_setscl_val(void *data, int state)
static int i2c_gpio_getsda(void *data)
static int i2c_gpio_getscl(void *data)
static int __devinit i2c_gpio_probe(struct platform_device *pdev)
static int __devexit i2c_gpio_remove(struct platform_device *pdev)
static struct platform_driver i2c_gpio_driver = ;
static int __init i2c_gpio_init(void)
subsys_initcall(i2c_gpio_init);
static void __exit i2c_gpio_exit(void)
module_exit(i2c_gpio_exit);
MODULE_AUTHOR("Haavard Skinnemoen (Atmel)");
MODULE_DESCRIPTION("Platform-independent bitbanging I2C driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:i2c-gpio");
