static int tps65910_gpio_get(struct gpio_chip *gc, unsigned offset)
static void tps65910_gpio_set(struct gpio_chip *gc, unsigned offset,
int value)
static int tps65910_gpio_output(struct gpio_chip *gc, unsigned offset,
int value)
static int tps65910_gpio_input(struct gpio_chip *gc, unsigned offset)
void tps65910_gpio_init(struct tps65910 *tps65910, int gpio_base)
