void bfin_pm_suspend_standby_enter(void)
int bf53x_suspend_l1_mem(unsigned char *memptr)
int bf53x_resume_l1_mem(unsigned char *memptr)
#if defined(CONFIG_BFIN_EXTMEM_WRITEBACK) || defined(CONFIG_BFIN_L2_WRITEBACK)
static void flushinv_all_dcache(void)
int bfin_pm_suspend_mem_enter(void)
static int bfin_pm_valid(suspend_state_t state)
static int bfin_pm_enter(suspend_state_t state)
static const struct platform_suspend_ops bfin_pm_ops = ;
static int __init bfin_pm_init(void)
__initcall(bfin_pm_init);
