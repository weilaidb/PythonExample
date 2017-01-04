#define __ASM_ARM_MACH_IRQ_H
struct seq_file;
extern void init_FIQ(void);
extern int show_fiq_list(struct seq_file *, int);
extern void (*handle_arch_irq)(struct pt_regs *);
#define do_bad_IRQ(irq,desc)				\
do  while(0)
static inline void chained_irq_enter(struct irq_chip *chip,
struct irq_desc *desc)
static inline void chained_irq_exit(struct irq_chip *chip,
struct irq_desc *desc)
