#define _LINUX_SUSPEND_H
#if defined(CONFIG_PM_SLEEP) && defined(CONFIG_VT) && defined(CONFIG_VT_CONSOLE)
extern void pm_set_vt_switch(int);
extern int pm_prepare_console(void);
extern void pm_restore_console(void);
static inline void pm_set_vt_switch(int do_switch)
static inline int pm_prepare_console(void)
static inline void pm_restore_console(void)
typedef int __bitwise suspend_state_t;
#define PM_SUSPEND_ON		((__force suspend_state_t) 0)
#define PM_SUSPEND_STANDBY	((__force suspend_state_t) 1)
#define PM_SUSPEND_MEM		((__force suspend_state_t) 3)
#define PM_SUSPEND_MAX		((__force suspend_state_t) 4)
struct platform_suspend_ops ;
extern void suspend_set_ops(const struct platform_suspend_ops *ops);
extern int suspend_valid_only_mem(suspend_state_t state);
extern void arch_suspend_disable_irqs(void);
extern void arch_suspend_enable_irqs(void);
extern int pm_suspend(suspend_state_t state);
#define suspend_valid_only_mem	NULL
static inline void suspend_set_ops(const struct platform_suspend_ops *ops)
static inline int pm_suspend(suspend_state_t state)
struct pbe ;
extern void mark_free_pages(struct zone *zone);
struct platform_hibernation_ops ;
extern void __register_nosave_region(unsigned long b, unsigned long e, int km);
static inline void __init register_nosave_region(unsigned long b, unsigned long e)
static inline void __init register_nosave_region_late(unsigned long b, unsigned long e)
extern int swsusp_page_is_forbidden(struct page *);
extern void swsusp_set_page_free(struct page *);
extern void swsusp_unset_page_free(struct page *);
extern unsigned long get_safe_page(gfp_t gfp_mask);
extern void hibernation_set_ops(const struct platform_hibernation_ops *ops);
extern int hibernate(void);
extern bool system_entering_hibernation(void);
static inline void register_nosave_region(unsigned long b, unsigned long e)
static inline void register_nosave_region_late(unsigned long b, unsigned long e)
static inline int swsusp_page_is_forbidden(struct page *p)
static inline void swsusp_set_page_free(struct page *p)
static inline void swsusp_unset_page_free(struct page *p)
static inline void hibernation_set_ops(const struct platform_hibernation_ops *ops)
static inline int hibernate(void)
static inline bool system_entering_hibernation(void)
void save_processor_state(void);
void restore_processor_state(void);
extern int register_pm_notifier(struct notifier_block *nb);
extern int unregister_pm_notifier(struct notifier_block *nb);
#define pm_notifier(fn, pri)
extern bool events_check_enabled;
extern bool pm_wakeup_pending(void);
extern bool pm_get_wakeup_count(unsigned int *count);
extern bool pm_save_wakeup_count(unsigned int count);
static inline int register_pm_notifier(struct notifier_block *nb)
static inline int unregister_pm_notifier(struct notifier_block *nb)
#define pm_notifier(fn, pri)	do  while (0)
static inline bool pm_wakeup_pending(void)
extern struct mutex pm_mutex;
static inline void lock_system_sleep(void)
static inline void unlock_system_sleep(void)
static inline void lock_system_sleep(void)
static inline void unlock_system_sleep(void)
