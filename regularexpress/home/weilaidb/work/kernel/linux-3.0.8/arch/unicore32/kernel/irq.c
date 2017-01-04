static int GPIO_IRQ_rising_edge;
static int GPIO_IRQ_falling_edge;
static int GPIO_IRQ_mask = 0;
#define GPIO_MASK(irq)		(1 << (irq - IRQ_GPIO0))
static int puv3_gpio_type(struct irq_data *d, unsigned int type)
static void puv3_low_gpio_ack(struct irq_data *d)
static void puv3_low_gpio_mask(struct irq_data *d)
static void puv3_low_gpio_unmask(struct irq_data *d)
static int puv3_low_gpio_wake(struct irq_data *d, unsigned int on)
static struct irq_chip puv3_low_gpio_chip = ;
static void
puv3_gpio_handler(unsigned int irq, struct irq_desc *desc)
static void puv3_high_gpio_ack(struct irq_data *d)
static void puv3_high_gpio_mask(struct irq_data *d)
static void puv3_high_gpio_unmask(struct irq_data *d)
static int puv3_high_gpio_wake(struct irq_data *d, unsigned int on)
static struct irq_chip puv3_high_gpio_chip = ;
static void puv3_mask_irq(struct irq_data *d)
static void puv3_unmask_irq(struct irq_data *d)
static int puv3_set_wake(struct irq_data *d, unsigned int on)
static struct irq_chip puv3_normal_chip = ;
static struct resource irq_resource = ;
static struct puv3_irq_state  puv3_irq_state;
static int puv3_irq_suspend(void)
static void puv3_irq_resume(void)
static struct syscore_ops puv3_irq_syscore_ops = ;
static int __init puv3_irq_init_syscore(void)
device_initcall(puv3_irq_init_syscore);
void __init init_IRQ(void)
asmlinkage void asm_do_IRQ(unsigned int irq, struct pt_regs *regs)
