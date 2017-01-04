struct intr_group ;
#define RC32434_NR_IRQS  (GROUP4_IRQ_BASE + 32)
#if (NR_IRQS < RC32434_NR_IRQS)
#error Too little irqs defined. Did you override <asm/irq.h> ?
static const struct intr_group intr_group[NUM_INTR_GROUPS] = ;
#define READ_PEND(base) (*(base))
#define READ_MASK(base) (*(base + 2))
#define WRITE_MASK(base, val) (*(base + 2) = (val))
static inline int irq_to_group(unsigned int irq_nr)
static inline int group_to_ip(unsigned int group)
static inline void enable_local_irq(unsigned int ip)
static inline void disable_local_irq(unsigned int ip)
static inline void ack_local_irq(unsigned int ip)
static void rb532_enable_irq(struct irq_data *d)
static void rb532_disable_irq(struct irq_data *d)
static void rb532_mask_and_ack_irq(struct irq_data *d)
static int rb532_set_type(struct irq_data *d,  unsigned type)
static struct irq_chip rc32434_irq_type = ;
void __init arch_init_irq(void)
asmlinkage void plat_irq_dispatch(void)
