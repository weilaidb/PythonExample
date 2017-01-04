struct wm8350_gpio_data ;
static inline struct wm8350_gpio_data *to_wm8350_gpio(struct gpio_chip *chip)
static int wm8350_gpio_direction_in(struct gpio_chip *chip, unsigned offset)
static int wm8350_gpio_get(struct gpio_chip *chip, unsigned offset)
static void wm8350_gpio_set(struct gpio_chip *chip, unsigned offset, int value)
static int wm8350_gpio_direction_out(struct gpio_chip *chip,
unsigned offset, int value)
static int wm8350_gpio_to_irq(struct gpio_chip *chip, unsigned offset)
static struct gpio_chip template_chip = ;
static int __devinit wm8350_gpio_probe(struct platform_device *pdev)
static int __devexit wm8350_gpio_remove(struct platform_device *pdev)
static struct platform_driver wm8350_gpio_driver = ;
static int __init wm8350_gpio_init(void)
subsys_initcall(wm8350_gpio_init);
static void __exit wm8350_gpio_exit(void)
module_exit(wm8350_gpio_exit);
MODULE_AUTHOR("Mark Brown <broonie@opensource.wolfsonmicro.com>");
MODULE_DESCRIPTION("GPIO interface for WM8350 PMICs");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:wm8350-gpio");
