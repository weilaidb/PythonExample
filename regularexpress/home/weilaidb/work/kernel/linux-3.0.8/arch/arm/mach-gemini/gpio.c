#define GPIO_BASE(x)		IO_ADDRESS(GEMINI_GPIO_BASE(x))
#define GPIO_DATA_OUT		0x0
#define GPIO_DATA_IN		0x4
#define GPIO_DIR		0x8
#define GPIO_DATA_SET		0x10
#define GPIO_DATA_CLR		0x14
#define GPIO_PULL_EN		0x18
#define GPIO_PULL_TYPE		0x1C
#define GPIO_INT_EN		0x20
#define GPIO_INT_STAT		0x24
#define GPIO_INT_MASK		0x2C
#define GPIO_INT_CLR		0x30
#define GPIO_INT_TYPE		0x34
#define GPIO_INT_BOTH_EDGE	0x38
#define GPIO_INT_LEVEL		0x3C
#define GPIO_DEBOUNCE_EN	0x40
#define GPIO_DEBOUNCE_PRESCALE	0x44
#define GPIO_PORT_NUM		3
static void _set_gpio_irqenable(unsigned int base, unsigned int index,
int enable)
static void gpio_ack_irq(struct irq_data *d)
static void gpio_mask_irq(struct irq_data *d)
static void gpio_unmask_irq(struct irq_data *d)
static int gpio_set_irq_type(struct irq_data *d, unsigned int type)
static void gpio_irq_handler(unsigned int irq, struct irq_desc *desc)
static struct irq_chip gpio_irq_chip = ;
static void _set_gpio_direction(struct gpio_chip *chip, unsigned offset,
int dir)
static void gemini_gpio_set(struct gpio_chip *chip, unsigned offset, int value)
static int gemini_gpio_get(struct gpio_chip *chip, unsigned offset)
static int gemini_gpio_direction_input(struct gpio_chip *chip, unsigned offset)
static int gemini_gpio_direction_output(struct gpio_chip *chip, unsigned offset,
int value)
static struct gpio_chip gemini_gpio_chip = ;
void __init gemini_gpio_init(void)
