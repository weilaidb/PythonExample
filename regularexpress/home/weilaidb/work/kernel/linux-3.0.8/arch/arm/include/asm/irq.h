#define __ASM_ARM_IRQ_H
#define irq_canonicalize(i)	(i)
#define NR_IRQS_LEGACY	16
#define NO_IRQ	((unsigned int)(-1))
struct irqaction;
struct pt_regs;
extern void migrate_irqs(void);
extern void asm_do_IRQ(unsigned int, struct pt_regs *);
void init_IRQ(void);
