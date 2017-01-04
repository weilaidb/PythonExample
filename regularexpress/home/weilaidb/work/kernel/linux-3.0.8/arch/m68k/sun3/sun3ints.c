extern void sun3_leds (unsigned char);
void sun3_disable_interrupts(void)
void sun3_enable_interrupts(void)
static int led_pattern[8] = ;
volatile unsigned char* sun3_intreg;
void sun3_enable_irq(unsigned int irq)
void sun3_disable_irq(unsigned int irq)
static irqreturn_t sun3_int7(int irq, void *dev_id)
static irqreturn_t sun3_int5(int irq, void *dev_id)
static irqreturn_t sun3_vec255(int irq, void *dev_id)
static void sun3_inthandle(unsigned int irq, struct pt_regs *fp)
static struct irq_controller sun3_irq_controller = ;
void __init sun3_init_IRQ(void)
