#define _ASM_SH_SUSPEND_H
struct swsusp_arch_regs ;
void sh_mobile_call_standby(unsigned long mode);
void sh_mobile_setup_cpuidle(void);
static inline void sh_mobile_setup_cpuidle(void)
extern struct atomic_notifier_head sh_mobile_pre_sleep_notifier_list;
extern struct atomic_notifier_head sh_mobile_post_sleep_notifier_list;
#define SH_MOBILE_SLEEP_BOARD	0
#define SH_MOBILE_SLEEP_CPU	1
#define SH_MOBILE_PRE(x)	(x)
#define SH_MOBILE_POST(x)	(-(x))
void sh_mobile_register_self_refresh(unsigned long flags,
void *pre_start, void *pre_end,
void *post_start, void *post_end);
struct sh_sleep_regs ;
struct sh_sleep_data ;
extern unsigned long sh_mobile_sleep_supported;
#define SUSP_SH_SLEEP		(1 << 0)
#define SUSP_SH_STANDBY		(1 << 1)
#define SUSP_SH_RSTANDBY	(1 << 2)
#define SUSP_SH_USTANDBY	(1 << 3)
#define SUSP_SH_SF		(1 << 4)
#define SUSP_SH_MMU		(1 << 5)
#define SUSP_SH_REGS		(1 << 6)
