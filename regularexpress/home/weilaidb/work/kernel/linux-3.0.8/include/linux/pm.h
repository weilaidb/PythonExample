#define _LINUX_PM_H
extern void (*pm_idle)(void);
extern void (*pm_power_off)(void);
extern void (*pm_power_off_prepare)(void);
struct device;
extern const char power_group_name[];
#define power_group_name	NULL
typedef struct pm_message  pm_message_t;
struct dev_pm_ops ;
#define SET_SYSTEM_SLEEP_PM_OPS(suspend_fn, resume_fn) \
.suspend = suspend_fn, \
.resume = resume_fn, \
.freeze = suspend_fn, \
.thaw = resume_fn, \
.poweroff = suspend_fn, \
.restore = resume_fn,
#define SET_SYSTEM_SLEEP_PM_OPS(suspend_fn, resume_fn)
#define SET_RUNTIME_PM_OPS(suspend_fn, resume_fn, idle_fn) \
.runtime_suspend = suspend_fn, \
.runtime_resume = resume_fn, \
.runtime_idle = idle_fn,
#define SET_RUNTIME_PM_OPS(suspend_fn, resume_fn, idle_fn)
#define SIMPLE_DEV_PM_OPS(name, suspend_fn, resume_fn) \
const struct dev_pm_ops name =
#define UNIVERSAL_DEV_PM_OPS(name, suspend_fn, resume_fn, idle_fn) \
const struct dev_pm_ops name =
extern struct dev_pm_ops generic_subsys_pm_ops;
#define GENERIC_SUBSYS_PM_OPS	(&generic_subsys_pm_ops)
#define GENERIC_SUBSYS_PM_OPS	NULL
#define PM_EVENT_ON		0x0000
#define PM_EVENT_FREEZE 	0x0001
#define PM_EVENT_SUSPEND	0x0002
#define PM_EVENT_HIBERNATE	0x0004
#define PM_EVENT_QUIESCE	0x0008
#define PM_EVENT_RESUME		0x0010
#define PM_EVENT_THAW		0x0020
#define PM_EVENT_RESTORE	0x0040
#define PM_EVENT_RECOVER	0x0080
#define PM_EVENT_USER		0x0100
#define PM_EVENT_REMOTE		0x0200
#define PM_EVENT_AUTO		0x0400
#define PM_EVENT_SLEEP		(PM_EVENT_SUSPEND | PM_EVENT_HIBERNATE)
#define PM_EVENT_USER_SUSPEND	(PM_EVENT_USER | PM_EVENT_SUSPEND)
#define PM_EVENT_USER_RESUME	(PM_EVENT_USER | PM_EVENT_RESUME)
#define PM_EVENT_REMOTE_RESUME	(PM_EVENT_REMOTE | PM_EVENT_RESUME)
#define PM_EVENT_AUTO_SUSPEND	(PM_EVENT_AUTO | PM_EVENT_SUSPEND)
#define PM_EVENT_AUTO_RESUME	(PM_EVENT_AUTO | PM_EVENT_RESUME)
#define PMSG_ON		((struct pm_message))
#define PMSG_FREEZE	((struct pm_message))
#define PMSG_QUIESCE	((struct pm_message))
#define PMSG_SUSPEND	((struct pm_message))
#define PMSG_HIBERNATE	((struct pm_message))
#define PMSG_RESUME	((struct pm_message))
#define PMSG_THAW	((struct pm_message))
#define PMSG_RESTORE	((struct pm_message))
#define PMSG_RECOVER	((struct pm_message))
#define PMSG_USER_SUSPEND	((struct pm_message) \
)
#define PMSG_USER_RESUME	((struct pm_message) \
)
#define PMSG_REMOTE_RESUME	((struct pm_message) \
)
#define PMSG_AUTO_SUSPEND	((struct pm_message) \
)
#define PMSG_AUTO_RESUME	((struct pm_message) \
)
enum rpm_status ;
enum rpm_request ;
struct wakeup_source;
struct dev_pm_info ;
extern void update_pm_runtime_accounting(struct device *dev);
struct dev_power_domain ;
#define PM_EVENT_PRETHAW PM_EVENT_QUIESCE
extern void device_pm_lock(void);
extern void dpm_resume_noirq(pm_message_t state);
extern void dpm_resume_end(pm_message_t state);
extern void dpm_resume(pm_message_t state);
extern void dpm_complete(pm_message_t state);
extern void device_pm_unlock(void);
extern int dpm_suspend_noirq(pm_message_t state);
extern int dpm_suspend_start(pm_message_t state);
extern int dpm_suspend(pm_message_t state);
extern int dpm_prepare(pm_message_t state);
extern void __suspend_report_result(const char *function, void *fn, int ret);
#define suspend_report_result(fn, ret)					\
do  while (0)
extern int device_pm_wait_for_dev(struct device *sub, struct device *dev);
extern int pm_generic_prepare(struct device *dev);
extern int pm_generic_suspend(struct device *dev);
extern int pm_generic_resume(struct device *dev);
extern int pm_generic_freeze(struct device *dev);
extern int pm_generic_thaw(struct device *dev);
extern int pm_generic_restore(struct device *dev);
extern int pm_generic_poweroff(struct device *dev);
extern void pm_generic_complete(struct device *dev);
#define device_pm_lock() do  while (0)
#define device_pm_unlock() do  while (0)
static inline int dpm_suspend_start(pm_message_t state)
#define suspend_report_result(fn, ret)		do  while (0)
static inline int device_pm_wait_for_dev(struct device *a, struct device *b)
#define pm_generic_prepare	NULL
#define pm_generic_suspend	NULL
#define pm_generic_resume	NULL
#define pm_generic_freeze	NULL
#define pm_generic_thaw		NULL
#define pm_generic_restore	NULL
#define pm_generic_poweroff	NULL
#define pm_generic_complete	NULL
enum dpm_order ;
