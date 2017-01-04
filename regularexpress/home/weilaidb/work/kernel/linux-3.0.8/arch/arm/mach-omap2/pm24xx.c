static suspend_state_t suspend_state = PM_SUSPEND_ON;
static inline bool is_suspending(void)
static inline bool is_suspending(void)
static void (*omap2_sram_idle)(void);
static void (*omap2_sram_suspend)(u32 dllctrl, void __iomem *sdrc_dlla_ctrl,
void __iomem *sdrc_power);
static struct powerdomain *mpu_pwrdm, *core_pwrdm;
static struct clockdomain *dsp_clkdm, *mpu_clkdm, *wkup_clkdm, *gfx_clkdm;
static struct clk *osc_ck, *emul_ck;
static int omap2_fclks_active(void)
static void omap2_enter_full_retention(void)
static int omap2_i2c_active(void)
static int sti_console_enabled;
static int omap2_allow_mpu_retention(void)
static void omap2_enter_mpu_retention(void)
static int omap2_can_sleep(void)
static void omap2_pm_idle(void)
static int omap2_pm_begin(suspend_state_t state)
static int omap2_pm_suspend(void)
static int omap2_pm_enter(suspend_state_t state)
static void omap2_pm_end(void)
static const struct platform_suspend_ops omap_pm_ops = ;
static const struct platform_suspend_ops __initdata omap_pm_ops;
static int __init clkdms_setup(struct clockdomain *clkdm, void *unused)
static void __init prcm_setup_regs(void)
static int __init omap2_pm_init(void)
late_initcall(omap2_pm_init);
