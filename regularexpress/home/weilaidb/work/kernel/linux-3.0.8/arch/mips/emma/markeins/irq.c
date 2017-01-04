static void emma2rh_irq_enable(struct irq_data *d)
static void emma2rh_irq_disable(struct irq_data *d)
struct irq_chip emma2rh_irq_controller = ;
void emma2rh_irq_init(void)
static void emma2rh_sw_irq_enable(struct irq_data *d)
static void emma2rh_sw_irq_disable(struct irq_data *d)
struct irq_chip emma2rh_sw_irq_controller = ;
void emma2rh_sw_irq_init(void)
static void emma2rh_gpio_irq_enable(struct irq_data *d)
static void emma2rh_gpio_irq_disable(struct irq_data *d)
static void emma2rh_gpio_irq_ack(struct irq_data *d)
static void emma2rh_gpio_irq_mask_ack(struct irq_data *d)
struct irq_chip emma2rh_gpio_irq_controller = ;
void emma2rh_gpio_irq_init(void)
static struct irqaction irq_cascade = ;
void emma2rh_irq_dispatch(void)
void __init arch_init_irq(void)
asmlinkage void plat_irq_dispatch(void)
