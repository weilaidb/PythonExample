#define __ASM_BLACKFIN_IPIPE_H
#define IPIPE_ARCH_STRING     "1.16-01"
#define IPIPE_MAJOR_NUMBER    1
#define IPIPE_MINOR_NUMBER    16
#define IPIPE_PATCH_NUMBER    1
#error "I-pipe/blackfin: SMP not implemented"
#define ipipe_processor_id()	0
#define prepare_arch_switch(next)		\
do  while (0)
#define task_hijacked(p)						\
()
struct ipipe_domain;
struct ipipe_sysinfo ;
#define ipipe_read_tsc(t)					\
()
#define ipipe_cpu_freq()	__ipipe_core_clock
#define ipipe_tsc2ns(_t)	(((unsigned long)(_t)) * __ipipe_freq_scale)
#define ipipe_tsc2us(_t)	(ipipe_tsc2ns(_t) / 1000 + 1)
#define __ipipe_check_platform()	do  while (0)
#define __ipipe_init_platform()		do  while (0)
extern atomic_t __ipipe_irq_lvdepth[IVG15 + 1];
extern unsigned long __ipipe_irq_lvmask;
extern struct ipipe_domain ipipe_root;
void __ipipe_enable_irqdesc(struct ipipe_domain *ipd,
unsigned irq);
void __ipipe_disable_irqdesc(struct ipipe_domain *ipd,
unsigned irq);
#define __ipipe_enable_irq(irq)						\
do  while (0)
#define __ipipe_disable_irq(irq)					\
do  while (0)
static inline int __ipipe_check_tickdev(const char *devname)
void __ipipe_enable_pipeline(void);
#define __ipipe_hook_critical_ipi(ipd) do  while (0)
void ___ipipe_sync_pipeline(void);
void __ipipe_handle_irq(unsigned irq, struct pt_regs *regs);
int __ipipe_get_irq_priority(unsigned int irq);
void __ipipe_serial_debug(const char *fmt, ...);
asmlinkage void __ipipe_call_irqtail(unsigned long addr);
DECLARE_PER_CPU(struct pt_regs, __ipipe_tick_regs);
extern unsigned long __ipipe_core_clock;
extern unsigned long __ipipe_freq_scale;
extern unsigned long __ipipe_irq_tail_hook;
static inline unsigned long __ipipe_ffnz(unsigned long ul)
#define __ipipe_do_root_xirq(ipd, irq)					\
((ipd)->irqs[irq].handler(irq, &__raw_get_cpu_var(__ipipe_tick_regs)))
#define __ipipe_run_irqtail(irq)			\
do  while (0)
#define __ipipe_syscall_watched_p(p, sc)	\
(ipipe_notifier_enabled_p(p) || (unsigned long)sc >= NR_syscalls)
#define bfin_write_TIMER_DISABLE(val)	bfin_write_TMRS8_DISABLE(val)
#define bfin_write_TIMER_ENABLE(val)	bfin_write_TMRS8_ENABLE(val)
#define bfin_write_TIMER_STATUS(val)	bfin_write_TMRS8_STATUS(val)
#define bfin_read_TIMER_STATUS()	bfin_read_TMRS8_STATUS()
#elif defined(CONFIG_BF54x)
#define bfin_write_TIMER_DISABLE(val)	bfin_write_TIMER_DISABLE0(val)
#define bfin_write_TIMER_ENABLE(val)	bfin_write_TIMER_ENABLE0(val)
#define bfin_write_TIMER_STATUS(val)	bfin_write_TIMER_STATUS0(val)
#define bfin_read_TIMER_STATUS(val)	bfin_read_TIMER_STATUS0(val)
#define __ipipe_root_tick_p(regs)	((regs->ipend & 0x10) != 0)
#define task_hijacked(p)		0
#define ipipe_trap_notify(t, r)  	0
#define __ipipe_root_tick_p(regs)	1
#define IRQ_SYSTMR		IRQ_CORETMR
#define IRQ_PRIOTMR		IRQ_CORETMR
#define IRQ_SYSTMR		IRQ_TIMER0
#define IRQ_PRIOTMR		CONFIG_IRQ_TIMER0
#define ipipe_update_tick_evtdev(evtdev)	do  while (0)
