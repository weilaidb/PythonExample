#define LTQ_GPIO_OUT		0x00
#define LTQ_GPIO_IN		0x04
#define LTQ_GPIO_DIR		0x08
#define LTQ_GPIO_ALTSEL0	0x0C
#define LTQ_GPIO_ALTSEL1	0x10
#define LTQ_GPIO_OD		0x14
#define PINS_PER_PORT		16
#define MAX_PORTS		3
#define ltq_gpio_getbit(m, r, p)	(!!(ltq_r32(m + r) & (1 << p)))
#define ltq_gpio_setbit(m, r, p)	ltq_w32_mask(0, (1 << p), m + r)
#define ltq_gpio_clearbit(m, r, p)	ltq_w32_mask((1 << p), 0, m + r)
struct ltq_gpio ;
static struct ltq_gpio ltq_gpio_port[MAX_PORTS];
int gpio_to_irq(unsigned int gpio)
EXPORT_SYMBOL(gpio_to_irq);
int irq_to_gpio(unsigned int gpio)
EXPORT_SYMBOL(irq_to_gpio);
int ltq_gpio_request(unsigned int pin, unsigned int alt0,
unsigned int alt1, unsigned int dir, const char *name)
EXPORT_SYMBOL(ltq_gpio_request);
static void ltq_gpio_set(struct gpio_chip *chip, unsigned int offset, int value)
static int ltq_gpio_get(struct gpio_chip *chip, unsigned int offset)
static int ltq_gpio_direction_input(struct gpio_chip *chip, unsigned int offset)
static int ltq_gpio_direction_output(struct gpio_chip *chip,
unsigned int offset, int value)
static int ltq_gpio_req(struct gpio_chip *chip, unsigned offset)
static int ltq_gpio_probe(struct platform_device *pdev)
static struct platform_driver
ltq_gpio_driver = ;
int __init ltq_gpio_init(void)
postcore_initcall(ltq_gpio_init);
