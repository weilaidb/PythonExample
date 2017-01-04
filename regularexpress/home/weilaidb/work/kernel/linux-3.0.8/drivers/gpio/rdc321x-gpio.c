struct rdc321x_gpio ;
static int rdc_gpio_get_value(struct gpio_chip *chip, unsigned gpio)
static void rdc_gpio_set_value_impl(struct gpio_chip *chip,
unsigned gpio, int value)
static void rdc_gpio_set_value(struct gpio_chip *chip,
unsigned gpio, int value)
static int rdc_gpio_config(struct gpio_chip *chip,
unsigned gpio, int value)
static int rdc_gpio_direction_input(struct gpio_chip *chip, unsigned gpio)
static int __devinit rdc321x_gpio_probe(struct platform_device *pdev)
static int __devexit rdc321x_gpio_remove(struct platform_device *pdev)
static struct platform_driver rdc321x_gpio_driver = ;
static int __init rdc321x_gpio_init(void)
static void __exit rdc321x_gpio_exit(void)
module_init(rdc321x_gpio_init);
module_exit(rdc321x_gpio_exit);
MODULE_AUTHOR("Florian Fainelli <florian@openwrt.org>");
MODULE_DESCRIPTION("RDC321x GPIO driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:rdc321x-gpio");
