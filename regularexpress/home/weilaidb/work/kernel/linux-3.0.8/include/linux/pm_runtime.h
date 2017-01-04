#define _LINUX_PM_RUNTIME_H
#define RPM_ASYNC		0x01
#define RPM_NOWAIT		0x02
#define RPM_GET_PUT		0x04
#define RPM_AUTO		0x08
extern struct workqueue_struct *pm_wq;
extern int __pm_runtime_idle(struct device *dev, int rpmflags);
extern int __pm_runtime_suspend(struct device *dev, int rpmflags);
extern int __pm_runtime_resume(struct device *dev, int rpmflags);
extern int pm_schedule_suspend(struct device *dev, unsigned int delay);
extern int __pm_runtime_set_status(struct device *dev, unsigned int status);
extern int pm_runtime_barrier(struct device *dev);
extern void pm_runtime_enable(struct device *dev);
extern void __pm_runtime_disable(struct device *dev, bool check_resume);
extern void pm_runtime_allow(struct device *dev);
extern void pm_runtime_forbid(struct device *dev);
extern int pm_generic_runtime_idle(struct device *dev);
extern int pm_generic_runtime_suspend(struct device *dev);
extern int pm_generic_runtime_resume(struct device *dev);
extern void pm_runtime_no_callbacks(struct device *dev);
extern void pm_runtime_irq_safe(struct device *dev);
extern void __pm_runtime_use_autosuspend(struct device *dev, bool use);
extern void pm_runtime_set_autosuspend_delay(struct device *dev, int delay);
extern unsigned long pm_runtime_autosuspend_expiration(struct device *dev);
static inline bool pm_children_suspended(struct device *dev)
static inline void pm_suspend_ignore_children(struct device *dev, bool enable)
static inline void pm_runtime_get_noresume(struct device *dev)
static inline void pm_runtime_put_noidle(struct device *dev)
static inline bool device_run_wake(struct device *dev)
static inline void device_set_run_wake(struct device *dev, bool enable)
static inline bool pm_runtime_suspended(struct device *dev)
static inline bool pm_runtime_enabled(struct device *dev)
static inline bool pm_runtime_callbacks_present(struct device *dev)
static inline void pm_runtime_mark_last_busy(struct device *dev)
static inline int __pm_runtime_idle(struct device *dev, int rpmflags)
static inline int __pm_runtime_suspend(struct device *dev, int rpmflags)
static inline int __pm_runtime_resume(struct device *dev, int rpmflags)
static inline int pm_schedule_suspend(struct device *dev, unsigned int delay)
static inline int __pm_runtime_set_status(struct device *dev,
unsigned int status)
static inline int pm_runtime_barrier(struct device *dev)
static inline void pm_runtime_enable(struct device *dev)
static inline void __pm_runtime_disable(struct device *dev, bool c)
static inline void pm_runtime_allow(struct device *dev)
static inline void pm_runtime_forbid(struct device *dev)
static inline bool pm_children_suspended(struct device *dev)
static inline void pm_suspend_ignore_children(struct device *dev, bool en)
static inline void pm_runtime_get_noresume(struct device *dev)
static inline void pm_runtime_put_noidle(struct device *dev)
static inline bool device_run_wake(struct device *dev)
static inline void device_set_run_wake(struct device *dev, bool enable)
static inline bool pm_runtime_suspended(struct device *dev)
static inline bool pm_runtime_enabled(struct device *dev)
static inline int pm_generic_runtime_idle(struct device *dev)
static inline int pm_generic_runtime_suspend(struct device *dev)
static inline int pm_generic_runtime_resume(struct device *dev)
static inline void pm_runtime_no_callbacks(struct device *dev)
static inline void pm_runtime_irq_safe(struct device *dev)
static inline bool pm_runtime_callbacks_present(struct device *dev)
static inline void pm_runtime_mark_last_busy(struct device *dev)
static inline void __pm_runtime_use_autosuspend(struct device *dev,
bool use)
static inline void pm_runtime_set_autosuspend_delay(struct device *dev,
int delay)
static inline unsigned long pm_runtime_autosuspend_expiration(
struct device *dev)
static inline int pm_runtime_idle(struct device *dev)
static inline int pm_runtime_suspend(struct device *dev)
static inline int pm_runtime_autosuspend(struct device *dev)
static inline int pm_runtime_resume(struct device *dev)
static inline int pm_request_idle(struct device *dev)
static inline int pm_request_resume(struct device *dev)
static inline int pm_request_autosuspend(struct device *dev)
static inline int pm_runtime_get(struct device *dev)
static inline int pm_runtime_get_sync(struct device *dev)
static inline int pm_runtime_put(struct device *dev)
static inline int pm_runtime_put_autosuspend(struct device *dev)
static inline int pm_runtime_put_sync(struct device *dev)
static inline int pm_runtime_put_sync_suspend(struct device *dev)
static inline int pm_runtime_put_sync_autosuspend(struct device *dev)
static inline int pm_runtime_set_active(struct device *dev)
static inline void pm_runtime_set_suspended(struct device *dev)
static inline void pm_runtime_disable(struct device *dev)
static inline void pm_runtime_use_autosuspend(struct device *dev)
static inline void pm_runtime_dont_use_autosuspend(struct device *dev)
struct pm_clk_notifier_block ;
extern int pm_runtime_clk_init(struct device *dev);
extern void pm_runtime_clk_destroy(struct device *dev);
extern int pm_runtime_clk_add(struct device *dev, const char *con_id);
extern void pm_runtime_clk_remove(struct device *dev, const char *con_id);
extern int pm_runtime_clk_suspend(struct device *dev);
extern int pm_runtime_clk_resume(struct device *dev);
static inline int pm_runtime_clk_init(struct device *dev)
static inline void pm_runtime_clk_destroy(struct device *dev)
static inline int pm_runtime_clk_add(struct device *dev, const char *con_id)
static inline void pm_runtime_clk_remove(struct device *dev, const char *con_id)
#define pm_runtime_clock_suspend	NULL
#define pm_runtime_clock_resume		NULL
extern void pm_runtime_clk_add_notifier(struct bus_type *bus,
struct pm_clk_notifier_block *clknb);
static inline void pm_runtime_clk_add_notifier(struct bus_type *bus,
struct pm_clk_notifier_block *clknb)
