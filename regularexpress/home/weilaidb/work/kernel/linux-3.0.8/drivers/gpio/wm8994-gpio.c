struct wm8994_gpio ;
static inline struct wm8994_gpio *to_wm8994_gpio(struct gpio_chip *chip)
static int wm8994_gpio_request(struct gpio_chip *chip, unsigned offset)
static int wm8994_gpio_direction_in(struct gpio_chip *chip, unsigned offset)
static int wm8994_gpio_get(struct gpio_chip *chip, unsigned offset)
static int wm8994_gpio_direction_out(struct gpio_chip *chip,
unsigned offset, int value)
static void wm8994_gpio_set(struct gpio_chip *chip, unsigned offset, int value)
static int wm8994_gpio_to_irq(struct gpio_chip *chip, unsigned offset)
static void wm8994_gpio_dbg_show(struct seq_file *s, struct gpio_chip *chip)
#define wm8994_gpio_dbg_show NULL
static struct gpio_chip template_chip = ;
static int __devinit wm8994_gpio_probe(struct platform_device *pdev)
static int __devexit wm8994_gpio_remove(struct platform_device *pdev)
static struct platform_driver wm8994_gpio_driver = ;
static int __init wm8994_gpio_init(void)
subsys_initcall(wm8994_gpio_init);
static void __exit wm8994_gpio_exit(void)
module_exit(wm8994_gpio_exit);
MODULE_AUTHOR("Mark Brown <broonie@opensource.wolfsonmicro.com>");
MODULE_DESCRIPTION("GPIO interface for WM8994");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:wm8994-gpio");
