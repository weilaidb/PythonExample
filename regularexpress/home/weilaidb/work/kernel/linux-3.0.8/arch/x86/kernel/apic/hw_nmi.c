u64 hw_nmi_get_sample_period(int watchdog_thresh)
static DECLARE_BITMAP(backtrace_mask, NR_CPUS) __read_mostly;
static unsigned long backtrace_flag;
void arch_trigger_all_cpu_backtrace(void)
static int __kprobes
arch_trigger_all_cpu_backtrace_handler(struct notifier_block *self,
unsigned long cmd, void *__args)
static __read_mostly struct notifier_block backtrace_notifier = ;
static int __init register_trigger_all_cpu_backtrace(void)
early_initcall(register_trigger_all_cpu_backtrace);
