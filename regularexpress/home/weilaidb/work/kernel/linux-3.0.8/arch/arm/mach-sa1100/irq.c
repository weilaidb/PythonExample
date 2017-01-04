static int GPIO_IRQ_rising_edge;
static int GPIO_IRQ_falling_edge;
static int GPIO_IRQ_mask = (1 << 11) - 1;
#define GPIO_11_27_IRQ(i)	((i) - 21)
#define GPIO11_27_MASK(irq)	(1 << GPIO_11_27_IRQ(irq))
static int sa1100_gpio_type(struct irq_data *d, unsigned int type)
static void sa1100_low_gpio_ack(struct irq_data *d)
static void sa1100_low_gpio_mask(struct irq_data *d)
static void sa1100_low_gpio_unmask(struct irq_data *d)
static int sa1100_low_gpio_wake(struct irq_data *d, unsigned int on)
static struct irq_chip sa1100_low_gpio_chip = ;
static void
sa1100_high_gpio_handler(unsigned int irq, struct irq_desc *desc)
static void sa1100_high_gpio_ack(struct irq_data *d)
static void sa1100_high_gpio_mask(struct irq_data *d)
static void sa1100_high_gpio_unmask(struct irq_data *d)
static int sa1100_high_gpio_wake(struct irq_data *d, unsigned int on)
static struct irq_chip sa1100_high_gpio_chip = ;
static void sa1100_mask_irq(struct irq_data *d)
static void sa1100_unmask_irq(struct irq_data *d)
static int sa1100_set_wake(struct irq_data *d, unsigned int on)
static struct irq_chip sa1100_normal_chip = ;
static struct resource irq_resource = ;
static struct sa1100irq_state  sa1100irq_state;
static int sa1100irq_suspend(void)
static void sa1100irq_resume(void)
static struct syscore_ops sa1100irq_syscore_ops = ;
static int __init sa1100irq_init_devicefs(void)
device_initcall(sa1100irq_init_devicefs);
void __init sa1100_init_irq(void)
