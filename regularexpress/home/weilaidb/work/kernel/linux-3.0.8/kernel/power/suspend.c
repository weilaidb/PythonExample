const char *const pm_states[PM_SUSPEND_MAX] = ;
static const struct platform_suspend_ops *suspend_ops;
void suspend_set_ops(const struct platform_suspend_ops *ops)
bool valid_state(suspend_state_t state)
int suspend_valid_only_mem(suspend_state_t state)
static int suspend_test(int level)
static int suspend_prepare(void)
void __attribute__ ((weak)) arch_suspend_disable_irqs(void)
void __attribute__ ((weak)) arch_suspend_enable_irqs(void)
static int suspend_enter(suspend_state_t state)
int suspend_devices_and_enter(suspend_state_t state)
static void suspend_finish(void)
int enter_state(suspend_state_t state)
int pm_suspend(suspend_state_t state)
EXPORT_SYMBOL(pm_suspend);
