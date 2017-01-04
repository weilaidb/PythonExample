struct ciabase  ciaa_base = , ciab_base = ;
unsigned char cia_set_irq(struct ciabase *base, unsigned char mask)
unsigned char cia_able_irq(struct ciabase *base, unsigned char mask)
static irqreturn_t cia_handler(int irq, void *dev_id)
static void cia_enable_irq(unsigned int irq)
static void cia_disable_irq(unsigned int irq)
static struct irq_controller cia_irq_controller = ;
static void auto_enable_irq(unsigned int irq)
static void auto_disable_irq(unsigned int irq)
static struct irq_controller auto_irq_controller = ;
void __init cia_init_IRQ(struct ciabase *base)
