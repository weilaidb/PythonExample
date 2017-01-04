#define GPIODIR 0x400
#define GPIOIS  0x404
#define GPIOIBE 0x408
#define GPIOIEV 0x40C
#define GPIOIE  0x410
#define GPIORIS 0x414
#define GPIOMIS 0x418
#define GPIOIC  0x41C
#define PL061_GPIO_NR	8
struct pl061_gpio ;
static int pl061_direction_input(struct gpio_chip *gc, unsigned offset)
static int pl061_direction_output(struct gpio_chip *gc, unsigned offset,
int value)
static int pl061_get_value(struct gpio_chip *gc, unsigned offset)
static void pl061_set_value(struct gpio_chip *gc, unsigned offset, int value)
static int pl061_to_irq(struct gpio_chip *gc, unsigned offset)
static void pl061_irq_disable(struct irq_data *d)
static void pl061_irq_enable(struct irq_data *d)
static int pl061_irq_type(struct irq_data *d, unsigned trigger)
static struct irq_chip pl061_irqchip = ;
static void pl061_irq_handler(unsigned irq, struct irq_desc *desc)
static int pl061_probe(struct amba_device *dev, const struct amba_id *id)
static struct amba_id pl061_ids[] = ;
static struct amba_driver pl061_gpio_driver = ;
static int __init pl061_gpio_init(void)
subsys_initcall(pl061_gpio_init);
MODULE_AUTHOR("Baruch Siach <baruch@tkos.co.il>");
MODULE_DESCRIPTION("PL061 GPIO driver");
MODULE_LICENSE("GPL");
