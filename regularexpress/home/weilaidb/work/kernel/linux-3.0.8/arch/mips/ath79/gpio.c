static void __iomem *ath79_gpio_base;
static unsigned long ath79_gpio_count;
static DEFINE_SPINLOCK(ath79_gpio_lock);
static void __ath79_gpio_set_value(unsigned gpio, int value)
static int __ath79_gpio_get_value(unsigned gpio)
static int ath79_gpio_get_value(struct gpio_chip *chip, unsigned offset)
static void ath79_gpio_set_value(struct gpio_chip *chip,
unsigned offset, int value)
static int ath79_gpio_direction_input(struct gpio_chip *chip,
unsigned offset)
static int ath79_gpio_direction_output(struct gpio_chip *chip,
unsigned offset, int value)
static struct gpio_chip ath79_gpio_chip = ;
void ath79_gpio_function_enable(u32 mask)
void ath79_gpio_function_disable(u32 mask)
void ath79_gpio_function_setup(u32 set, u32 clear)
void __init ath79_gpio_init(void)
int gpio_get_value(unsigned gpio)
EXPORT_SYMBOL(gpio_get_value);
void gpio_set_value(unsigned gpio, int value)
EXPORT_SYMBOL(gpio_set_value);
int gpio_to_irq(unsigned gpio)
EXPORT_SYMBOL(gpio_to_irq);
int irq_to_gpio(unsigned irq)
EXPORT_SYMBOL(irq_to_gpio);
