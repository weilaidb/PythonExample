#define DRV_NAME "cs5535-gpio"
#define GPIO_DEFAULT_MASK 0x0F7FFFFF
static ulong mask = GPIO_DEFAULT_MASK;
module_param_named(mask, mask, ulong, 0444);
MODULE_PARM_DESC(mask, "GPIO channel mask.");
static struct cs5535_gpio_chip  cs5535_gpio_chip;
static void errata_outl(struct cs5535_gpio_chip *chip, u32 val,
unsigned int reg)
static void __cs5535_gpio_set(struct cs5535_gpio_chip *chip, unsigned offset,
unsigned int reg)
void cs5535_gpio_set(unsigned offset, unsigned int reg)
EXPORT_SYMBOL_GPL(cs5535_gpio_set);
static void __cs5535_gpio_clear(struct cs5535_gpio_chip *chip, unsigned offset,
unsigned int reg)
void cs5535_gpio_clear(unsigned offset, unsigned int reg)
EXPORT_SYMBOL_GPL(cs5535_gpio_clear);
int cs5535_gpio_isset(unsigned offset, unsigned int reg)
EXPORT_SYMBOL_GPL(cs5535_gpio_isset);
int cs5535_gpio_set_irq(unsigned group, unsigned irq)
EXPORT_SYMBOL_GPL(cs5535_gpio_set_irq);
void cs5535_gpio_setup_event(unsigned offset, int pair, int pme)
EXPORT_SYMBOL_GPL(cs5535_gpio_setup_event);
static int chip_gpio_request(struct gpio_chip *c, unsigned offset)
static int chip_gpio_get(struct gpio_chip *chip, unsigned offset)
static void chip_gpio_set(struct gpio_chip *chip, unsigned offset, int val)
static int chip_direction_input(struct gpio_chip *c, unsigned offset)
static int chip_direction_output(struct gpio_chip *c, unsigned offset, int val)
static const char * const cs5535_gpio_names[] = ;
static struct cs5535_gpio_chip cs5535_gpio_chip = ;
static int __devinit cs5535_gpio_probe(struct platform_device *pdev)
static int __devexit cs5535_gpio_remove(struct platform_device *pdev)
static struct platform_driver cs5535_gpio_driver = ;
static int __init cs5535_gpio_init(void)
static void __exit cs5535_gpio_exit(void)
module_init(cs5535_gpio_init);
module_exit(cs5535_gpio_exit);
MODULE_AUTHOR("Andres Salomon <dilinger@queued.net>");
MODULE_DESCRIPTION("AMD CS5535/CS5536 GPIO driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:" DRV_NAME);
