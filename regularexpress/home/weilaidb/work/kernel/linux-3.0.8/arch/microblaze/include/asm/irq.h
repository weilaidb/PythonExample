#define _ASM_MICROBLAZE_IRQ_H
#define NR_IRQS 32
typedef unsigned long irq_hw_number_t;
extern unsigned int nr_irq;
#define NO_IRQ (-1)
struct pt_regs;
extern void do_IRQ(struct pt_regs *regs);
static inline void irq_dispose_mapping(unsigned int virq)
struct irq_host;
extern unsigned int irq_create_mapping(struct irq_host *host,
irq_hw_number_t hwirq);
