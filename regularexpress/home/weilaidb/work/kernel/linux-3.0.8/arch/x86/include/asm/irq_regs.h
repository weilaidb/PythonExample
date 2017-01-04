#define _ASM_X86_IRQ_REGS_H
#define ARCH_HAS_OWN_IRQ_REGS
DECLARE_PER_CPU(struct pt_regs *, irq_regs);
static inline struct pt_regs *get_irq_regs(void)
static inline struct pt_regs *set_irq_regs(struct pt_regs *new_regs)
