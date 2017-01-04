#define STLS2F_N_GPIO		4
#define STLS2F_GPIO_IN_OFFSET	16
static DEFINE_SPINLOCK(gpio_lock);
int gpio_get_value(unsigned gpio)
EXPORT_SYMBOL(gpio_get_value);
void gpio_set_value(unsigned gpio, int state)
EXPORT_SYMBOL(gpio_set_value);
int gpio_cansleep(unsigned gpio)
EXPORT_SYMBOL(gpio_cansleep);
static int ls2f_gpio_direction_input(struct gpio_chip *chip, unsigned gpio)
static int ls2f_gpio_direction_output(struct gpio_chip *chip,
unsigned gpio, int level)
static int ls2f_gpio_get_value(struct gpio_chip *chip, unsigned gpio)
static void ls2f_gpio_set_value(struct gpio_chip *chip,
unsigned gpio, int value)
static struct gpio_chip ls2f_chip = ;
static int __init ls2f_gpio_setup(void)
arch_initcall(ls2f_gpio_setup);
