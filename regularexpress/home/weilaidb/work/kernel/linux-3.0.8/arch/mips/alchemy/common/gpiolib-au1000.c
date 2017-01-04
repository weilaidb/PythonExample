static int gpio2_get(struct gpio_chip *chip, unsigned offset)
static void gpio2_set(struct gpio_chip *chip, unsigned offset, int value)
static int gpio2_direction_input(struct gpio_chip *chip, unsigned offset)
static int gpio2_direction_output(struct gpio_chip *chip, unsigned offset,
int value)
static int gpio2_to_irq(struct gpio_chip *chip, unsigned offset)
static int gpio1_get(struct gpio_chip *chip, unsigned offset)
static void gpio1_set(struct gpio_chip *chip,
unsigned offset, int value)
static int gpio1_direction_input(struct gpio_chip *chip, unsigned offset)
static int gpio1_direction_output(struct gpio_chip *chip,
unsigned offset, int value)
static int gpio1_to_irq(struct gpio_chip *chip, unsigned offset)
struct gpio_chip alchemy_gpio_chip[] = ;
static int __init alchemy_gpiolib_init(void)
arch_initcall(alchemy_gpiolib_init);
