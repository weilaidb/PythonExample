void s3c_pm_debug_smdkled(u32 set, u32 clear)
static struct sleep_save core_save[] = ;
static struct sleep_save misc_save[] = ;
void s3c_pm_configure_extint(void)
void s3c_pm_restore_core(void)
void s3c_pm_save_core(void)
static void s3c64xx_cpu_suspend(void)
static struct samsung_wakeup_mask wake_irqs[] = ;
static void s3c64xx_pm_prepare(void)
static int s3c64xx_pm_init(void)
arch_initcall(s3c64xx_pm_init);
