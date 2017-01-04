static const struct gpio_led puv3_gpio_leds[] = ;
static const struct gpio_led_platform_data puv3_gpio_led_data = ;
static struct platform_device puv3_gpio_gpio_leds = ;
static int __init puv3_gpio_leds_init(void)
device_initcall(puv3_gpio_leds_init);
static int puv3_gpio_get(struct gpio_chip *chip, unsigned offset)
static void puv3_gpio_set(struct gpio_chip *chip, unsigned offset, int value)
static int puv3_direction_input(struct gpio_chip *chip, unsigned offset)
static int puv3_direction_output(struct gpio_chip *chip, unsigned offset,
int value)
static struct gpio_chip puv3_gpio_chip = ;
void __init puv3_init_gpio(void)
