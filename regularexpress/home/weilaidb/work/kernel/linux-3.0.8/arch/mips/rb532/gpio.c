struct rb532_gpio_chip ;
static struct resource rb532_gpio_reg0_res[] = ;
static inline void rb532_set_bit(unsigned bitval,
unsigned offset, void __iomem *ioaddr)
static inline int rb532_get_bit(unsigned offset, void __iomem *ioaddr)
static int rb532_gpio_get(struct gpio_chip *chip, unsigned offset)
static void rb532_gpio_set(struct gpio_chip *chip,
unsigned offset, int value)
static int rb532_gpio_direction_input(struct gpio_chip *chip, unsigned offset)
static int rb532_gpio_direction_output(struct gpio_chip *chip,
unsigned offset, int value)
static struct rb532_gpio_chip rb532_gpio_chip[] = ;
void rb532_gpio_set_ilevel(int bit, unsigned gpio)
EXPORT_SYMBOL(rb532_gpio_set_ilevel);
void rb532_gpio_set_istat(int bit, unsigned gpio)
EXPORT_SYMBOL(rb532_gpio_set_istat);
void rb532_gpio_set_func(unsigned gpio)
EXPORT_SYMBOL(rb532_gpio_set_func);
int __init rb532_gpio_init(void)
arch_initcall(rb532_gpio_init);
