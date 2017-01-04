#define __ARCH_ARM_MACH_OMAP2_PM_H
extern void *omap3_secure_ram_storage;
extern void omap3_pm_off_mode_enable(int);
extern void omap_sram_idle(void);
extern int omap3_can_sleep(void);
extern int omap_set_pwrdm_state(struct powerdomain *pwrdm, u32 state);
extern int omap3_idle_init(void);
#if defined(CONFIG_PM_OPP)
extern int omap3_opp_init(void);
extern int omap4_opp_init(void);
static inline int omap3_opp_init(void)
static inline int omap4_opp_init(void)
struct cpuidle_params ;
#if defined(CONFIG_PM) && defined(CONFIG_CPU_IDLE)
extern void omap3_pm_init_cpuidle(struct cpuidle_params *cpuidle_board_params);
static
inline void omap3_pm_init_cpuidle(struct cpuidle_params *cpuidle_board_params)
extern int omap3_pm_get_suspend_state(struct powerdomain *pwrdm);
extern int omap3_pm_set_suspend_state(struct powerdomain *pwrdm, int state);
extern u32 wakeup_timer_seconds;
extern u32 wakeup_timer_milliseconds;
extern struct omap_dm_timer *gptimer_wakeup;
extern void omap2_pm_dump(int mode, int resume, unsigned int us);
extern void omap2_pm_wakeup_on_timer(u32 seconds, u32 milliseconds);
extern int omap2_pm_debug;
extern u32 enable_off_mode;
extern u32 sleep_while_idle;
#define omap2_pm_dump(mode, resume, us)		do  while (0);
#define omap2_pm_wakeup_on_timer(seconds, milliseconds)	do  while (0);
#define omap2_pm_debug				0
#define enable_off_mode 0
#define sleep_while_idle 0
#if defined(CONFIG_PM_DEBUG) && defined(CONFIG_DEBUG_FS)
extern void pm_dbg_update_time(struct powerdomain *pwrdm, int prev);
extern int pm_dbg_regset_save(int reg_set);
extern int pm_dbg_regset_init(int reg_set);
#define pm_dbg_update_time(pwrdm, prev) do  while (0);
#define pm_dbg_regset_save(reg_set) do  while (0);
#define pm_dbg_regset_init(reg_set) do  while (0);
extern void omap24xx_idle_loop_suspend(void);
extern void omap24xx_cpu_suspend(u32 dll_ctrl, void __iomem *sdrc_dlla_ctrl,
void __iomem *sdrc_power);
extern void omap34xx_cpu_suspend(u32 *addr, int save_state);
extern int save_secure_ram_context(u32 *addr);
extern void omap3_save_scratchpad_contents(void);
extern unsigned int omap24xx_idle_loop_suspend_sz;
extern unsigned int save_secure_ram_context_sz;
extern unsigned int omap24xx_cpu_suspend_sz;
extern unsigned int omap34xx_cpu_suspend_sz;
#define PM_RTA_ERRATUM_i608		(1 << 0)
#define PM_SDRC_WAKEUP_ERRATUM_i583	(1 << 1)
#if defined(CONFIG_PM) && defined(CONFIG_ARCH_OMAP3)
extern u16 pm34xx_errata;
#define IS_PM34XX_ERRATUM(id)		(pm34xx_errata & (id))
extern void enable_omap3630_toggle_l2_on_restore(void);
#define IS_PM34XX_ERRATUM(id)		0
static inline void enable_omap3630_toggle_l2_on_restore(void)
extern int omap_devinit_smartreflex(void);
extern void omap_enable_smartreflex_on_init(void);
static inline int omap_devinit_smartreflex(void)
static inline void omap_enable_smartreflex_on_init(void)
extern int omap3_twl_init(void);
extern int omap4_twl_init(void);
extern int omap3_twl_set_sr_bit(bool enable);
static inline int omap3_twl_init(void)
static inline int omap4_twl_init(void)
