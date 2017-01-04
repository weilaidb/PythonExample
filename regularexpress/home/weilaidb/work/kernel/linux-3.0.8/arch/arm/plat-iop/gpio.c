void gpio_line_config(int line, int direction)
EXPORT_SYMBOL(gpio_line_config);
int gpio_line_get(int line)
EXPORT_SYMBOL(gpio_line_get);
void gpio_line_set(int line, int value)
EXPORT_SYMBOL(gpio_line_set);
static int iop3xx_gpio_direction_input(struct gpio_chip *chip, unsigned gpio)
static int iop3xx_gpio_direction_output(struct gpio_chip *chip, unsigned gpio, int level)
static int iop3xx_gpio_get_value(struct gpio_chip *chip, unsigned gpio)
static void iop3xx_gpio_set_value(struct gpio_chip *chip, unsigned gpio, int value)
static struct gpio_chip iop3xx_chip = ;
static int __init iop3xx_gpio_setup(void)
arch_initcall(iop3xx_gpio_setup);
