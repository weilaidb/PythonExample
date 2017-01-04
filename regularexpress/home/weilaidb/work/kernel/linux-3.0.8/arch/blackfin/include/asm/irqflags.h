#define __ASM_BFIN_IRQFLAGS_H__
# include <asm/pda.h>
# include <asm/processor.h>
# define bfin_irq_flags cpu_pda[blackfin_core_id()].imask
extern unsigned long bfin_irq_flags;
static inline void bfin_sti(unsigned long flags)
static inline unsigned long bfin_cli(void)
# define bfin_no_irqs 0x3f
# define bfin_no_irqs 0x1f
static inline void __hard_local_irq_disable(void)
static inline void __hard_local_irq_enable(void)
static inline unsigned long hard_local_save_flags(void)
static inline unsigned long __hard_local_irq_save(void)
static inline int hard_irqs_disabled_flags(unsigned long flags)
static inline int hard_irqs_disabled(void)
static inline void __hard_local_irq_restore(unsigned long flags)
void __ipipe_stall_root(void);
void __ipipe_unstall_root(void);
unsigned long __ipipe_test_root(void);
unsigned long __ipipe_test_and_stall_root(void);
void __ipipe_restore_root(unsigned long flags);
struct ipipe_domain;
extern struct ipipe_domain ipipe_root;
void ipipe_check_context(struct ipipe_domain *ipd);
#define __check_irqop_context(ipd)  ipipe_check_context(&ipipe_root)
#define __check_irqop_context(ipd)  do  while (0)
static inline void arch_local_irq_disable(void)
static inline void arch_local_irq_enable(void)
static inline unsigned long arch_local_save_flags(void)
static inline int arch_irqs_disabled_flags(unsigned long flags)
static inline unsigned long arch_local_irq_save(void)
static inline void arch_local_irq_restore(unsigned long flags)
static inline unsigned long arch_mangle_irq_bits(int virt, unsigned long real)
static inline int arch_demangle_irq_bits(unsigned long *x)
static inline void hard_local_irq_disable(void)
static inline void hard_local_irq_enable(void)
static inline unsigned long hard_local_irq_save(void)
static inline void hard_local_irq_restore(unsigned long flags)
# define hard_local_irq_disable()	__hard_local_irq_disable()
# define hard_local_irq_enable()	__hard_local_irq_enable()
# define hard_local_irq_save()		__hard_local_irq_save()
# define hard_local_irq_restore(flags)	__hard_local_irq_restore(flags)
#define hard_local_irq_save_cond()		hard_local_irq_save()
#define hard_local_irq_restore_cond(flags)	hard_local_irq_restore(flags)
#define arch_local_save_flags()		hard_local_save_flags()
#define arch_local_irq_save(flags)	__hard_local_irq_save()
#define arch_local_irq_restore(flags)	__hard_local_irq_restore(flags)
#define arch_local_irq_enable()		__hard_local_irq_enable()
#define arch_local_irq_disable()	__hard_local_irq_disable()
#define arch_irqs_disabled_flags(flags)	hard_irqs_disabled_flags(flags)
#define arch_irqs_disabled()		hard_irqs_disabled()
#define hard_local_irq_save()		__hard_local_irq_save()
#define hard_local_irq_restore(flags)	__hard_local_irq_restore(flags)
#define hard_local_irq_enable()		__hard_local_irq_enable()
#define hard_local_irq_disable()	__hard_local_irq_disable()
#define hard_local_irq_save_cond()		hard_local_save_flags()
#define hard_local_irq_restore_cond(flags)	do  while (0)
#define hard_local_irq_save_smp()		hard_local_irq_save()
#define hard_local_irq_restore_smp(flags)	hard_local_irq_restore(flags)
#define hard_local_irq_save_smp()		hard_local_save_flags()
#define hard_local_irq_restore_smp(flags)	do  while (0)
#define local_irq_save_hw(flags)			\
do  while (0)
#define local_irq_restore_hw(flags)		\
do  while (0)
#define local_irq_disable_hw()			\
do  while (0)
#define local_irq_enable_hw()			\
do  while (0)
#define local_irq_save_hw_notrace(flags)		\
do  while (0)
#define local_irq_restore_hw_notrace(flags)		\
do  while (0)
#define irqs_disabled_hw()	hard_irqs_disabled()
