#define _ASM_GENERIC_IRQ_REGS_H
DECLARE_PER_CPU(struct pt_regs *, __irq_regs);
static inline struct pt_regs *get_irq_regs(void)
static inline struct pt_regs *set_irq_regs(struct pt_regs *new_regs)
