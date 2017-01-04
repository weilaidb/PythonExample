ATOMIC_NOTIFIER_HEAD(sh_mobile_pre_sleep_notifier_list);
ATOMIC_NOTIFIER_HEAD(sh_mobile_post_sleep_notifier_list);
#define SUSP_MODE_SLEEP		(SUSP_SH_SLEEP)
#define SUSP_MODE_SLEEP_SF	(SUSP_SH_SLEEP | SUSP_SH_SF)
#define SUSP_MODE_STANDBY_SF	(SUSP_SH_STANDBY | SUSP_SH_SF)
#define SUSP_MODE_RSTANDBY_SF \
(SUSP_SH_RSTANDBY | SUSP_SH_MMU | SUSP_SH_REGS | SUSP_SH_SF)
#define RAM_BASE 0xfd800000
#define RAM_BASE 0xe5200000
void sh_mobile_call_standby(unsigned long mode)
extern char sh_mobile_sleep_enter_start;
extern char sh_mobile_sleep_enter_end;
extern char sh_mobile_sleep_resume_start;
extern char sh_mobile_sleep_resume_end;
unsigned long sh_mobile_sleep_supported = SUSP_SH_SLEEP;
void sh_mobile_register_self_refresh(unsigned long flags,
void *pre_start, void *pre_end,
void *post_start, void *post_end)
static int sh_pm_enter(suspend_state_t state)
static const struct platform_suspend_ops sh_pm_ops = ;
static int __init sh_pm_init(void)
late_initcall(sh_pm_init);
