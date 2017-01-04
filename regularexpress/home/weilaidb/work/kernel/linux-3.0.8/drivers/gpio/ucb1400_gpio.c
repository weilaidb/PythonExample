struct ucb1400_gpio_data *ucbdata;
static int ucb1400_gpio_dir_in(struct gpio_chip *gc, unsigned off)
static int ucb1400_gpio_dir_out(struct gpio_chip *gc, unsigned off, int val)
static int ucb1400_gpio_get(struct gpio_chip *gc, unsigned off)
static void ucb1400_gpio_set(struct gpio_chip *gc, unsigned off, int val)
static int ucb1400_gpio_probe(struct platform_device *dev)
static int ucb1400_gpio_remove(struct platform_device *dev)
static struct platform_driver ucb1400_gpio_driver = ;
static int __init ucb1400_gpio_init(void)
static void __exit ucb1400_gpio_exit(void)
void __init ucb1400_gpio_set_data(struct ucb1400_gpio_data *data)
module_init(ucb1400_gpio_init);
module_exit(ucb1400_gpio_exit);
MODULE_DESCRIPTION("Philips UCB1400 GPIO driver");
MODULE_LICENSE("GPL");
