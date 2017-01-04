static int sa1100_gpio_get(struct gpio_chip *chip, unsigned offset)
static void sa1100_gpio_set(struct gpio_chip *chip, unsigned offset, int value)
static int sa1100_direction_input(struct gpio_chip *chip, unsigned offset)
static int sa1100_direction_output(struct gpio_chip *chip, unsigned offset, int value)
static struct gpio_chip sa1100_gpio_chip = ;
void __init sa1100_init_gpio(void)
