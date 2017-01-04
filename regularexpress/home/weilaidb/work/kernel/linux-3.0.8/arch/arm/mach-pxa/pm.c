struct pxa_cpu_pm_fns *pxa_cpu_pm_fns;
static unsigned long *sleep_save;
int pxa_pm_enter(suspend_state_t state)
EXPORT_SYMBOL_GPL(pxa_pm_enter);
static int pxa_pm_valid(suspend_state_t state)
int pxa_pm_prepare(void)
void pxa_pm_finish(void)
static const struct platform_suspend_ops pxa_pm_ops = ;
static int __init pxa_pm_init(void)
device_initcall(pxa_pm_init);
