#define IRQ_BASE XTENSA_NR_IRQS
#define S6_GPIO_DATA		0x000
#define S6_GPIO_IS		0x404
#define S6_GPIO_IBE		0x408
#define S6_GPIO_IEV		0x40C
#define S6_GPIO_IE		0x410
#define S6_GPIO_RIS		0x414
#define S6_GPIO_MIS		0x418
#define S6_GPIO_IC		0x41C
#define S6_GPIO_AFSEL		0x420
#define S6_GPIO_DIR		0x800
#define S6_GPIO_BANK(nr)	((nr) * 0x1000)
#define S6_GPIO_MASK(nr)	(4 << (nr))
#define S6_GPIO_OFFSET(nr) \
(S6_GPIO_BANK((nr) >> 3) + S6_GPIO_MASK((nr) & 7))
static int direction_input(struct gpio_chip *chip, unsigned int off)
static int get(struct gpio_chip *chip, unsigned int off)
static int direction_output(struct gpio_chip *chip, unsigned int off, int val)
static void set(struct gpio_chip *chip, unsigned int off, int val)
static int to_irq(struct gpio_chip *chip, unsigned offset)
static struct gpio_chip gpiochip = ;
int s6_gpio_init(u32 afsel)
static void ack(struct irq_data *d)
static void mask(struct irq_data *d)
static void unmask(struct irq_data *d)
static int set_type(struct irq_data *d, unsigned int type)
static struct irq_chip gpioirqs = ;
static u8 demux_masks[4];
static void demux_irqs(unsigned int irq, struct irq_desc *desc)
extern const signed char *platform_irq_mappings[XTENSA_NR_IRQS];
void __init variant_init_irq(void)
