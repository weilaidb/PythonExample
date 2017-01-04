static DEFINE_SPINLOCK(bcm63xx_gpio_lock);
static u32 gpio_out_low, gpio_out_high;
static void bcm63xx_gpio_set(struct gpio_chip *chip,
unsigned gpio, int val)
static int bcm63xx_gpio_get(struct gpio_chip *chip, unsigned gpio)
static int bcm63xx_gpio_set_direction(struct gpio_chip *chip,
unsigned gpio, int dir)
static int bcm63xx_gpio_direction_input(struct gpio_chip *chip, unsigned gpio)
static int bcm63xx_gpio_direction_output(struct gpio_chip *chip,
unsigned gpio, int value)
static struct gpio_chip bcm63xx_gpio_chip = ;
int __init bcm63xx_gpio_init(void)
