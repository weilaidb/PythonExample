#if (BCM47XX_CHIPCO_GPIO_LINES > BCM47XX_EXTIF_GPIO_LINES)
static DECLARE_BITMAP(gpio_in_use, BCM47XX_CHIPCO_GPIO_LINES);
static DECLARE_BITMAP(gpio_in_use, BCM47XX_EXTIF_GPIO_LINES);
int gpio_request(unsigned gpio, const char *tag)
EXPORT_SYMBOL(gpio_request);
void gpio_free(unsigned gpio)
EXPORT_SYMBOL(gpio_free);
int gpio_to_irq(unsigned gpio)
EXPORT_SYMBOL_GPL(gpio_to_irq);
