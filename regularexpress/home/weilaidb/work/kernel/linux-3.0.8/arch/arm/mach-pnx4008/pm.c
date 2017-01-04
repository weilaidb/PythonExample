#define SRAM_VA IO_ADDRESS(PNX4008_IRAM_BASE)
static void *saved_sram;
static struct clk *pll4_clk;
static inline void pnx4008_standby(void)
static inline void pnx4008_suspend(void)
static int pnx4008_pm_enter(suspend_state_t state)
static int pnx4008_pm_valid(suspend_state_t state)
static const struct platform_suspend_ops pnx4008_pm_ops = ;
static int __init pnx4008_pm_init(void)
late_initcall(pnx4008_pm_init);
