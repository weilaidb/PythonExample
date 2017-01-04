#define __ASM_SH_IRQ_H
#define NR_IRQS			512
#define NR_IRQS_LEGACY		8
#define NO_IRQ_IGNORE		((unsigned int)-1)
#define evt2irq(evt)		(((evt) >> 5) - 16)
#define irq2evt(irq)		(((irq) + 16) << 5)
#define evt2irq(evt)		(evt)
#define irq2evt(irq)		(irq)
extern void make_maskreg_irq(unsigned int irq);
extern unsigned short *irq_mask_register;
void init_IRQ_pint(void);
void make_imask_irq(unsigned int irq);
static inline int generic_irq_demux(int irq)
#define irq_demux(irq)		sh_mv.mv_irq_demux(irq)
void init_IRQ(void);
void migrate_irqs(void);
asmlinkage int do_IRQ(unsigned int irq, struct pt_regs *regs);
extern void irq_ctx_init(int cpu);
extern void irq_ctx_exit(int cpu);
# define __ARCH_HAS_DO_SOFTIRQ
# define irq_ctx_init(cpu) do  while (0)
# define irq_ctx_exit(cpu) do  while (0)
extern unsigned int irq_lookup(unsigned int irq);
extern void irq_finish(unsigned int irq);
#define irq_lookup(irq)		(irq)
#define irq_finish(irq)		do  while (0)
