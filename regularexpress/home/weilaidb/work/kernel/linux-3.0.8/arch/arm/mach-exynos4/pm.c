static struct sleep_save exynos4_sleep[] = ;
static struct sleep_save exynos4_set_clksrc[] = ;
static struct sleep_save exynos4_core_save[] = ;
static struct sleep_save exynos4_l2cc_save[] = ;
void exynos4_cpu_suspend(void)
static void exynos4_pm_prepare(void)
static int exynos4_pm_add(struct sys_device *sysdev)
void exynos4_scu_enable(void __iomem *scu_base)
static struct sysdev_driver exynos4_pm_driver = ;
static __init int exynos4_pm_drvinit(void)
arch_initcall(exynos4_pm_drvinit);
static void exynos4_pm_resume(void)
static struct syscore_ops exynos4_pm_syscore_ops = ;
static __init int exynos4_pm_syscore_init(void)
arch_initcall(exynos4_pm_syscore_init);
