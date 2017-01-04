struct power_state ;
static LIST_HEAD(pwrst_list);
static int omap4_pm_suspend(void)
static int omap4_pm_enter(suspend_state_t suspend_state)
static int omap4_pm_begin(suspend_state_t state)
static void omap4_pm_end(void)
static const struct platform_suspend_ops omap_pm_ops = ;
static int __init pwrdms_setup(struct powerdomain *pwrdm, void *unused)
static int __init omap4_pm_init(void)
late_initcall(omap4_pm_init);
