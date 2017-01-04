struct adp5520_gpio ;
static int adp5520_gpio_get_value(struct gpio_chip *chip, unsigned off)
static void adp5520_gpio_set_value(struct gpio_chip *chip,
unsigned off, int val)
static int adp5520_gpio_direction_input(struct gpio_chip *chip, unsigned off)
static int adp5520_gpio_direction_output(struct gpio_chip *chip,
unsigned off, int val)
static int __devinit adp5520_gpio_probe(struct platform_device *pdev)
static int __devexit adp5520_gpio_remove(struct platform_device *pdev)
static struct platform_driver adp5520_gpio_driver = ;
static int __init adp5520_gpio_init(void)
module_init(adp5520_gpio_init);
static void __exit adp5520_gpio_exit(void)
module_exit(adp5520_gpio_exit);
MODULE_AUTHOR("Michael Hennerich <hennerich@blackfin.uclinux.org>");
MODULE_DESCRIPTION("GPIO ADP5520 Driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:adp5520-gpio");
