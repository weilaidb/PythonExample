#define IRQ_ACK_BITS            0x00000000
#define HYPERTRANSPORT_INTA     0x78
#define HYPERTRANSPORT_INTB     0x79
#define HYPERTRANSPORT_INTC     0x7a
#define HYPERTRANSPORT_INTD     0x7b
extern void titan_mailbox_irq(void);
static void ll_ht_smp_irq_handler(int irq)
asmlinkage void plat_irq_dispatch(void)
void __init arch_init_irq(void)
