#define DEBUG_PSC
int psc_present;
volatile __u8 *psc;
irqreturn_t psc_irq(int, void *);
static void psc_debug_dump(void)
static void psc_dma_die_die_die(void)
void __init psc_init(void)
void __init psc_register_interrupts(void)
irqreturn_t psc_irq(int irq, void *dev_id)
void psc_irq_enable(int irq)
void psc_irq_disable(int irq)
void psc_irq_clear(int irq)
int psc_irq_pending(int irq)
