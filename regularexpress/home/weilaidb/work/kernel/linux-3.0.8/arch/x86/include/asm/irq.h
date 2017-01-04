#define _ASM_X86_IRQ_H
static inline int irq_canonicalize(int irq)
extern void irq_ctx_init(int cpu);
# define irq_ctx_init(cpu) do  while (0)
#define __ARCH_HAS_DO_SOFTIRQ
extern void fixup_irqs(void);
extern void irq_force_complete_move(int);
extern void (*x86_platform_ipi_callback)(void);
extern void native_init_IRQ(void);
extern bool handle_irq(unsigned irq, struct pt_regs *regs);
extern unsigned int do_IRQ(struct pt_regs *regs);
extern DECLARE_BITMAP(used_vectors, NR_VECTORS);
extern int vector_used_by_percpu_irq(unsigned int vector);
extern void init_ISA_irqs(void);
