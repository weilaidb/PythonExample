DEFINE_PER_CPU(struct pt_regs, __ipipe_tick_regs);
asmlinkage void asm_do_IRQ(unsigned int irq, struct pt_regs *regs);
static void __ipipe_no_irqtail(void);
unsigned long __ipipe_irq_tail_hook = (unsigned long)&__ipipe_no_irqtail;
EXPORT_SYMBOL(__ipipe_irq_tail_hook);
unsigned long __ipipe_core_clock;
EXPORT_SYMBOL(__ipipe_core_clock);
unsigned long __ipipe_freq_scale;
EXPORT_SYMBOL(__ipipe_freq_scale);
atomic_t __ipipe_irq_lvdepth[IVG15 + 1];
unsigned long __ipipe_irq_lvmask = bfin_no_irqs;
EXPORT_SYMBOL(__ipipe_irq_lvmask);
static void __ipipe_ack_irq(unsigned irq, struct irq_desc *desc)
void __ipipe_enable_pipeline(void)
void __ipipe_handle_irq(unsigned irq, struct pt_regs *regs)
void __ipipe_enable_irqdesc(struct ipipe_domain *ipd, unsigned irq)
EXPORT_SYMBOL(__ipipe_enable_irqdesc);
void __ipipe_disable_irqdesc(struct ipipe_domain *ipd, unsigned irq)
EXPORT_SYMBOL(__ipipe_disable_irqdesc);
asmlinkage int __ipipe_syscall_root(struct pt_regs *regs)
static void __ipipe_no_irqtail(void)
int ipipe_get_sysinfo(struct ipipe_sysinfo *info)
int ipipe_trigger_irq(unsigned irq)
asmlinkage void __ipipe_sync_root(void)
void ___ipipe_sync_pipeline(void)
void __ipipe_disable_root_irqs_hw(void)
void __ipipe_enable_root_irqs_hw(void)
void __ipipe_stall_root(void)
EXPORT_SYMBOL(__ipipe_stall_root);
unsigned long __ipipe_test_and_stall_root(void)
EXPORT_SYMBOL(__ipipe_test_and_stall_root);
unsigned long __ipipe_test_root(void)
EXPORT_SYMBOL(__ipipe_test_root);
void __ipipe_lock_root(void)
EXPORT_SYMBOL(__ipipe_lock_root);
void __ipipe_unlock_root(void)
EXPORT_SYMBOL(__ipipe_unlock_root);
