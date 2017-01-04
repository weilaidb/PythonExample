extern QUICC *pquicc;
extern void cpm_interrupt_init(void);
#define INTERNAL_IRQS (96)
asmlinkage void system_call(void);
asmlinkage void buserr(void);
asmlinkage void trap(void);
asmlinkage void bad_interrupt(void);
asmlinkage void inthandler(void);
extern void *_ramvec[];
volatile unsigned int num_spurious;
static void intc_irq_unmask(struct irq_data *d)
static void intc_irq_mask(struct irq_data *d)
static void intc_irq_ack(struct irq_data *d)
static struct irq_chip intc_irq_chip = ;
void init_IRQ(void)
