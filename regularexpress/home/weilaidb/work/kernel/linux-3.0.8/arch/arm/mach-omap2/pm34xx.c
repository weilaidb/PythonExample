static suspend_state_t suspend_state = PM_SUSPEND_ON;
static inline bool is_suspending(void)
static inline bool is_suspending(void)
#define OMAP343X_TABLE_ADDRESS_OFFSET	   0xc4
#define OMAP343X_TABLE_VALUE_OFFSET	   0xc0
#define OMAP343X_CONTROL_REG_VALUE_OFFSET  0xc8
u16 pm34xx_errata;
struct power_state ;
static LIST_HEAD(pwrst_list);
static void (*_omap_sram_idle)(u32 *addr, int save_state);
static int (*_omap_save_secure_sram)(u32 *addr);
static struct powerdomain *mpu_pwrdm, *neon_pwrdm;
static struct powerdomain *core_pwrdm, *per_pwrdm;
static struct powerdomain *cam_pwrdm;
static inline void omap3_per_save_context(void)
static inline void omap3_per_restore_context(void)
static void omap3_enable_io_chain(void)
static void omap3_disable_io_chain(void)
static void omap3_core_save_context(void)
static void omap3_core_restore_context(void)
static void omap3_save_secure_ram_context(void)
static int prcm_clear_mod_irqs(s16 module, u8 regs)
static int _prcm_int_handle_wakeup(void)
static irqreturn_t prcm_interrupt_handler (int irq, void *dev_id)
static void restore_table_entry(void)
void omap_sram_idle(void)
int omap3_can_sleep(void)
static void omap3_pm_idle(void)
static int omap3_pm_suspend(void)
static int omap3_pm_enter(suspend_state_t unused)
static int omap3_pm_begin(suspend_state_t state)
static void omap3_pm_end(void)
static const struct platform_suspend_ops omap_pm_ops = ;
static void __init omap3_iva_idle(void)
static void __init omap3_d2d_idle(void)
static void __init prcm_setup_regs(void)
void omap3_pm_off_mode_enable(int enable)
int omap3_pm_get_suspend_state(struct powerdomain *pwrdm)
int omap3_pm_set_suspend_state(struct powerdomain *pwrdm, int state)
static int __init pwrdms_setup(struct powerdomain *pwrdm, void *unused)
static int __init clkdms_setup(struct clockdomain *clkdm, void *unused)
void omap_push_sram_idle(void)
static void __init pm_errata_configure(void)
static int __init omap3_pm_init(void)
late_initcall(omap3_pm_init);
