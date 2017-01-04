int of_get_gpio_flags(struct device_node *np, int index,
enum of_gpio_flags *flags)
EXPORT_SYMBOL(of_get_gpio_flags);
unsigned int of_gpio_count(struct device_node *np)
EXPORT_SYMBOL(of_gpio_count);
static int of_gpio_simple_xlate(struct gpio_chip *gc, struct device_node *np,
const void *gpio_spec, u32 *flags)
int of_mm_gpiochip_add(struct device_node *np,
struct of_mm_gpio_chip *mm_gc)
EXPORT_SYMBOL(of_mm_gpiochip_add);
void of_gpiochip_add(struct gpio_chip *chip)
void of_gpiochip_remove(struct gpio_chip *chip)
static int of_gpiochip_is_match(struct gpio_chip *chip, void *data)
struct gpio_chip *of_node_to_gpiochip(struct device_node *np)
