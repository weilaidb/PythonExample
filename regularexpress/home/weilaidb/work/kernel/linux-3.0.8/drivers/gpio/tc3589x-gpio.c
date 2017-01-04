enum ;
#define CACHE_NR_REGS	4
#define CACHE_NR_BANKS	3
struct tc3589x_gpio ;
static inline struct tc3589x_gpio *to_tc3589x_gpio(struct gpio_chip *chip)
static int tc3589x_gpio_get(struct gpio_chip *chip, unsigned offset)
static void tc3589x_gpio_set(struct gpio_chip *chip, unsigned offset, int val)
static int tc3589x_gpio_direction_output(struct gpio_chip *chip,
unsigned offset, int val)
static int tc3589x_gpio_direction_input(struct gpio_chip *chip,
unsigned offset)
static int tc3589x_gpio_to_irq(struct gpio_chip *chip, unsigned offset)
static struct gpio_chip template_chip = ;
static int tc3589x_gpio_irq_set_type(struct irq_data *d, unsigned int type)
static void tc3589x_gpio_irq_lock(struct irq_data *d)
static void tc3589x_gpio_irq_sync_unlock(struct irq_data *d)
static void tc3589x_gpio_irq_mask(struct irq_data *d)
static void tc3589x_gpio_irq_unmask(struct irq_data *d)
static struct irq_chip tc3589x_gpio_irq_chip = ;
static irqreturn_t tc3589x_gpio_irq(int irq, void *dev)
static int tc3589x_gpio_irq_init(struct tc3589x_gpio *tc3589x_gpio)
static void tc3589x_gpio_irq_remove(struct tc3589x_gpio *tc3589x_gpio)
static int __devinit tc3589x_gpio_probe(struct platform_device *pdev)
static int __devexit tc3589x_gpio_remove(struct platform_device *pdev)
static struct platform_driver tc3589x_gpio_driver = ;
static int __init tc3589x_gpio_init(void)
subsys_initcall(tc3589x_gpio_init);
static void __exit tc3589x_gpio_exit(void)
module_exit(tc3589x_gpio_exit);
MODULE_LICENSE("GPL v2");
MODULE_DESCRIPTION("TC3589x GPIO driver");
MODULE_AUTHOR("Hanumath Prasad, Rabin Vincent");
