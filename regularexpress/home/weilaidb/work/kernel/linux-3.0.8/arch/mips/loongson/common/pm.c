static unsigned int __maybe_unused cached_master_mask;
static unsigned int __maybe_unused cached_slave_mask;
static unsigned int __maybe_unused cached_bonito_irq_mask;
void arch_suspend_disable_irqs(void)
void arch_suspend_enable_irqs(void)
void __weak setup_wakeup_events(void)
int __weak wakeup_loongson(void)
static void wait_for_wakeup_events(void)
static inline void stop_perf_counters(void)
static void loongson_suspend_enter(void)
void __weak mach_suspend(void)
void __weak mach_resume(void)
static int loongson_pm_enter(suspend_state_t state)
static int loongson_pm_valid_state(suspend_state_t state)
static const struct platform_suspend_ops loongson_pm_ops = ;
static int __init loongson_pm_init(void)
arch_initcall(loongson_pm_init);
