enum ;
#define CACHE_NR_REGS	3
#define CACHE_NR_BANKS	(STMPE_NR_GPIOS / 8)
struct stmpe_gpio ;
static inline struct stmpe_gpio *to_stmpe_gpio(struct gpio_chip *chip)
static int stmpe_gpio_get(struct gpio_chip *chip, unsigned offset)
static void stmpe_gpio_set(struct gpio_chip *chip, unsigned offset, int val)
static int stmpe_gpio_direction_output(struct gpio_chip *chip,
unsigned offset, int val)
static int stmpe_gpio_direction_input(struct gpio_chip *chip,
unsigned offset)
static int stmpe_gpio_to_irq(struct gpio_chip *chip, unsigned offset)
static int stmpe_gpio_request(struct gpio_chip *chip, unsigned offset)
static struct gpio_chip template_chip = ;
static int stmpe_gpio_irq_set_type(struct irq_data *d, unsigned int type)
static void stmpe_gpio_irq_lock(struct irq_data *d)
static void stmpe_gpio_irq_sync_unlock(struct irq_data *d)
static void stmpe_gpio_irq_mask(struct irq_data *d)
static void stmpe_gpio_irq_unmask(struct irq_data *d)
static struct irq_chip stmpe_gpio_irq_chip = ;
static irqreturn_t stmpe_gpio_irq(int irq, void *dev)
static int __devinit stmpe_gpio_irq_init(struct stmpe_gpio *stmpe_gpio)
static void stmpe_gpio_irq_remove(struct stmpe_gpio *stmpe_gpio)
static int __devinit stmpe_gpio_probe(struct platform_device *pdev)
static int __devexit stmpe_gpio_remove(struct platform_device *pdev)
static struct platform_driver stmpe_gpio_driver = ;
static int __init stmpe_gpio_init(void)
subsys_initcall(stmpe_gpio_init);
static void __exit stmpe_gpio_exit(void)
module_exit(stmpe_gpio_exit);
MODULE_LICENSE("GPL v2");
MODULE_DESCRIPTION("STMPExxxx GPIO driver");
MODULE_AUTHOR("Rabin Vincent <rabin.vincent@stericsson.com>");
