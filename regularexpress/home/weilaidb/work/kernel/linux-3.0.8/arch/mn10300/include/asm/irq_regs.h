#define _ASM_IRQ_REGS_H
#define ARCH_HAS_OWN_IRQ_REGS
static inline __attribute__((const))
struct pt_regs *get_irq_regs(void)
