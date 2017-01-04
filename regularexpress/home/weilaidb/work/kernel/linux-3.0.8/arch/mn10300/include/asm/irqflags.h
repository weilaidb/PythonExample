#define _ASM_IRQFLAGS_H
#define MN10300_CLI_LEVEL	(CONFIG_LINUX_CLI_LEVEL << EPSW_IM_SHIFT)
static inline unsigned long arch_local_save_flags(void)
static inline void arch_local_irq_disable(void)
static inline unsigned long arch_local_irq_save(void)
extern unsigned long __mn10300_irq_enabled_epsw[];
static inline void arch_local_irq_enable(void)
static inline void arch_local_irq_restore(unsigned long flags)
static inline bool arch_irqs_disabled_flags(unsigned long flags)
static inline bool arch_irqs_disabled(void)
static inline void arch_safe_halt(void)
#define __sleep_cpu()				\
do  while (0)
static inline void arch_local_cli(void)
static inline unsigned long arch_local_cli_save(void)
static inline void arch_local_sti(void)
static inline void arch_local_change_intr_mask_level(unsigned long level)
#define LOCAL_SAVE_FLAGS(reg)			\
mov	epsw,reg
#define LOCAL_IRQ_DISABLE				\
and	~EPSW_IM,epsw;				\
or	EPSW_IE|MN10300_CLI_LEVEL,epsw;		\
nop;						\
nop;						\
nop
#define LOCAL_IRQ_ENABLE		\
or	EPSW_IE|EPSW_IM_7,epsw
#define LOCAL_IRQ_RESTORE(reg)	\
mov	reg,epsw
#define LOCAL_CLI_SAVE(reg)	\
mov	epsw,reg;	\
and	~EPSW_IE,epsw;	\
nop;			\
nop;			\
nop
#define LOCAL_CLI		\
and	~EPSW_IE,epsw;	\
nop;			\
nop;			\
nop
#define LOCAL_STI		\
or	EPSW_IE,epsw
#define LOCAL_CHANGE_INTR_MASK_LEVEL(level)	\
and	~EPSW_IM,epsw;			\
or	EPSW_IE|(level),epsw
